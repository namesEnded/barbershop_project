#pragma once


#pragma region Aphonin


#include "User.h"
#include "Admin.h"
#include "Employee.h"
#include "Client.h"
#include "checkFunctions.h"
#include "checkFunctions.h"
#include "ServiceOrder.h"
#include "Service.h"

//using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class MockDatabase : public User
{
private:
	std::list<User*> listOfUsers;
	std::list<ServiceOrder*> listOfServiceOrders;
	std::list<Service*> listOfService;
public:
	//void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
	//	std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM, float experience = DEF_WORK_EXPERIENCE,
	//	userSpeciality speciality = DEF_USER_SPECIALITY, std::string personalAchievements = DEF_PERSONAL_ACHIEVEMENTS);

	void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM);

	void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, float experience,
		userSpeciality speciality, std::string personalAchievements = DEF_PERSONAL_ACHIEVEMENTS);

	void loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM);

	void loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, float experience,
		userSpeciality speciality, std::string personalAchievements);

	void loadService(int ID, std::string name, int price);
	void addService(std::string name, int price);

	std::string getUsers();
	int numberOfUsers();
	int numberOfServices();
	int findUser(std::string email, size_t password);
	bool emailIsUnique(std::string email);
	int getUserStatus(int ID);
	void writeDatabaseToFile();
	void readDatabaseFromFile();
	void writeServicesToFile();
	void readServicesFromFile();
	bool readDataAboutUser(userType status, std::vector <std::string> elems);
	bool readDataAboutService(std::vector <std::string> elems);
	void clearDatabase();
	bool deleteSpecificUser(int ID);
	int getMaxUserID();
	int getMaxServiceID();
	int getMaxServiceOrderID();
	std::string getServices();
};



#pragma endregion