#include "MockDatabase.h"
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>

#define ARGUMENTS_NUM_EMPLOYEE 11
#define ARGUMENTS_NUM_ADMIN 8
#define ARGUMENTS_NUM_CLIENT 9

std::string pathsArray[3] = { "employeeData.txt", "adminData.txt", "clientData.txt" };



std::vector<std::string> split(const std::string& s, char delim) {
	std::stringstream ss(s);
	std::string item;
	std::vector<std::string> elems;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

//Arseniy
#pragma region Work with user

void MockDatabase::addUser(std::string name, bool sex, std::string date, std::string phonenumber,
	std::string email, std::string password, userType status, int numberOfVisits)
{
	std::hash<std::string> hasher;
	size_t passwordHash = hasher(password);
	//int id = this->listOfUsers.size() + 1;
	int id = getMaxUserID() + 1;
	switch (status) {
	case ADMIN:
		this->listOfUsers.push_back(new Admin(id, name, sex, date, phonenumber, email, passwordHash, ADMIN));
		break;
	case CLIENT:
		this->listOfUsers.push_back(new Client(id, name, sex, date, phonenumber, email, passwordHash,
			CLIENT, numberOfVisits, checkClientStatus(numberOfVisits)));
		break;
	default:
		System::Windows::Forms::MessageBox::Show("There is no such status");
		break;
	}
}

void MockDatabase::addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
	std::string password, userType status, float experience, userSpeciality speciality, std::string personalAchievements)
{
	std::hash<std::string> hasher;
	size_t passwordHash = hasher(password);
	//int id = this->listOfUsers.size() + 1;
	int id = getMaxUserID() + 1;
	this->listOfUsers.push_back(new Employee(id, name, sex, date, phonenumber, email, passwordHash,
		EMPLOYEE, experience, speciality, personalAchievements));
}

void MockDatabase::loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber,
	std::string email, std::string password, userType status, int numberOfVisits)
{
	size_t passwordHash = NULL;
	sscanf(password.c_str(), "%zu", &passwordHash);
	switch (status) {
	case ADMIN:
		this->listOfUsers.push_back(new Admin(ID, name, sex, date, phonenumber, email, passwordHash, ADMIN));
		break;
	case CLIENT:
		this->listOfUsers.push_back(new Client(ID, name, sex, date, phonenumber, email, passwordHash,
			CLIENT, numberOfVisits, checkClientStatus(numberOfVisits)));
		break;
	default:
		System::Windows::Forms::MessageBox::Show("There is no such status");
		break;
	}
}

void MockDatabase::loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber,
	std::string email, std::string password, userType status, float experience,
	userSpeciality speciality, std::string personalAchievements)
{
	size_t passwordHash = NULL;
	sscanf(password.c_str(), "%zu", &passwordHash);
	this->listOfUsers.push_back(new Employee(ID, name, sex, date, phonenumber, email, passwordHash,
		EMPLOYEE, experience, speciality, personalAchievements));
}

std::string MockDatabase::getUsers()
{
	std::string info = "";
	for each (User * user in this->listOfUsers)
	{
		info += user->getInfo();
	}
	return info;
}

void MockDatabase::clearListOfUsers()
{
	listOfUsers.clear();
}

int MockDatabase::numberOfUsers()
{
	return this->listOfUsers.size();
}

int MockDatabase::findUser(std::string email, size_t password)
{
	bool isExist = false;
	for each (User * user in this->listOfUsers)
	{
		bool isCorrect = false;
		isExist = user->getEmail() == email;
		isCorrect = password.Equals(user->getPassword());
		if (isExist)
		{
			if (isCorrect)
			{
				System::Windows::Forms::MessageBox::Show("Добро пожаловать!");
				return user->getID();
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Неверный пароль!");
				return NOT_FOUND;
			}
		}
	}
	if (!isExist)
	{
		System::Windows::Forms::MessageBox::Show("Такого пользователя нет!");
		return NOT_FOUND;
	}
}

bool MockDatabase::emailIsUnique(std::string email)
{
	std::string emailS = email;
	std::list<User*>::iterator findIter = std::find_if(listOfUsers.begin(), listOfUsers.end(),
		[&email](User* user) { return user->email == email;});
	bool res = (listOfUsers.end() == findIter) || (listOfUsers.size() == 0) ? true : false;
	return res;
}

int MockDatabase::getUserStatus(int ID)
{
	std::string emailS = email;
	std::list<User*>::iterator findIter = std::find_if(listOfUsers.begin(), listOfUsers.end(), [&ID](User* user)
		{
			if (user->id == ID)
			{
				return true;
			}
		});
	if (findIter != listOfUsers.end())
	{
		return (*findIter)->getStatus();
	}
	else
	{
		return NOT_FOUND;
	}
}

bool writeDataAboutUser(std::string path, User* user)
{
	std::ofstream fout;

	fout.open(path, std::ios::app);
	if (!fout.is_open())
	{
		MessageBox::Show("Ошибка открытия файла: " + msclr::interop::marshal_as<System::String^>(path), "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	else
	{
		fout << user->getInfo();
		return true;
	}
	fout.close();
}

bool MockDatabase::deleteSpecificUser(int ID)
{
	bool isDelete = false;
	for each (User * user in this->listOfUsers)
	{
		if (user->getID() == ID)
		{
			listOfUsers.remove(user);
			isDelete = true;
			return isDelete;
		}
	}
	return isDelete;
}

int MockDatabase::getMaxUserID()
{
	if (listOfUsers.empty()) return 0;
	int maxID = -1;
	for each (User * user in this->listOfUsers)
	{
		int userID = user->getID();
		if (user->getID() > maxID) maxID = userID;
	}
	return maxID;
}

bool MockDatabase::readDataAboutUser(userType status, std::vector<std::string> elems)
{

	int ID = std::stoi(elems[0]);
	std::string name = elems[1];
	bool sex = checkSex(elems[2]);
	std::string date = elems[3];
	std::string phonenumber = elems[4];
	std::string email = elems[5];
	std::string password = elems[6];
	userSpeciality speciality;
	float experience = NULL;
	int numberOfVisits = NULL;
	std::string personalAchievements = "";

	switch (status) {
	case EMPLOYEE:
		speciality = checkSelectedSpeciality(elems[8]);
		experience = std::stoi(elems[9]);
		personalAchievements = (elems[10]);
		loadUser(ID, name, sex, date, phonenumber,
			email, password, status, experience, speciality, personalAchievements);
		return true;
		break;
	case ADMIN:
		loadUser(ID, name, sex, date, phonenumber,
			email, password, status);
		return true;
		break;
	case CLIENT:
		numberOfVisits = std::stoi(elems[9]);
		loadUser(ID, name, sex, date, phonenumber,
			email, password, status, numberOfVisits);
		return true;
		break;
	default:
		MessageBox::Show("Ошибка при считывании файла!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
		break;
	}
}

#pragma endregion

//Oleg
#pragma region Work with service

void MockDatabase::loadService(int ID, std::string name, int price)
{
	this->listOfService.push_back(new Service(ID, name, price));
}

void MockDatabase::addService(std::string name, int price)
{
	int id = getMaxServiceID() + 1;
	this->listOfService.push_back(new Service(id, name, price));
}

int MockDatabase::numberOfServices()
{
	return this->listOfService.size();
}

bool writeDataAboutServices(std::string path, Service* service)
{
	std::ofstream fout;

	fout.open(path, std::ios::app);
	if (!fout.is_open())
	{
		MessageBox::Show("Ошибка открытия файла: " + msclr::interop::marshal_as<System::String^>(path), "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	else
	{
		fout << service->getInfo();
		return true;
	}
	fout.close();
}

void MockDatabase::clearListOfServices()
{
	listOfService.clear();
}

int MockDatabase::getMaxServiceID()
{
	if (listOfService.empty()) return 0;
	int maxID = -1;
	for each (Service * service in this->listOfService)
	{
		int userID = service->getID();
		if (service->getID() > maxID) maxID = userID;
	}
	return maxID;
}

int MockDatabase::getMaxServiceOrderID()
{
	if (listOfServiceOrders.empty()) return 0;
	int maxID = -1;
	for each (ServiceOrder * serviceOrder in this->listOfServiceOrders)
	{
		int serviceOrderID = serviceOrder->getID();
		if (serviceOrder->getID() > maxID) maxID = serviceOrderID;
	}
	return maxID;
}

std::string MockDatabase::getServices()
{
	std::string info = "";
	for each (Service * service in this->listOfService)
	{
		info += service->getInfo();
	}
	return info;
}

#pragma endregion