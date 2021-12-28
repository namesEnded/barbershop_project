//Aphonin, Dmitriev, Ankudinov
#ifndef MOCKDATABASE_H
#define MOCKDATABASE_H

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
	static MockDatabase* db;

public:
	//void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
	//	std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM, double experience = DEF_WORK_EXPERIENCE,
	//	userSpeciality speciality = DEF_USER_SPECIALITY, std::string personalAchievements = DEF_PERSONAL_ACHIEVEMENTS);

	MockDatabase()
	{
	}

#pragma region Aphonin
	void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM);
	 
	void addUser(std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, double experience,
		userSpeciality speciality, std::string personalAchievements = DEF_PERSONAL_ACHIEVEMENTS);

	void loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, int numberOfVisits = DEF_VISIT_NUM);

	void loadUser(int ID, std::string name, bool sex, std::string date, std::string phonenumber, std::string email,
		std::string password, userType status, double experience,
		userSpeciality speciality, std::string personalAchievements);

	int numberOfUsers();
	int findUser(std::string email, size_t password);
	int getUserStatus(int ID);
	bool deleteSpecificUser(int ID);
	bool emailIsUnique(std::string email);
	User* getUser(int ID);
	std::string getUsers();
	std::list<User*> getUsersList();
	void clearListOfServices();
	void clearListOfServicesOrder();
	void clearListOfUsers();
	void addServiceOrder(std::string date, std::string time, int serviceID, int employeeID, int clientID, double cost, bool status);
	void loadServiceOrder(int id, std::string date, std::string time, int serviceID, int employeeID, int clientID, double cost, bool status);
	bool timeIsAvailable(std::string date, std::string time);
	int getMaxUserID();
	std::list<int> getOrdersID(Employee* employee);
	int getOrdersCount(std::string date);
	bool deleteSpecificServiceOrder(int ID);
	std::list<std::string> MockDatabase::getOrdersTimes(std::string date);
	static MockDatabase* getInstance();
	int numberOfServicesOrder();
	bool deleteSpecificServiceOrder(int ID);
#pragma endregion


#pragma region Dmitriev
	void loadService(int ID, std::string name, int price);
	void addService(std::string name, int price);
	Service* getService(int ID);
	ServiceOrder* getServiceOrder(int ID);
	std::list<ServiceOrder*> getServiceOrdersList();
	std::list<Service*> getServiceList();
	int numberOfServices();
	bool deleteSpecificService(int ID);
	int getMaxServiceOrderID();
	std::string getServices();
	void clearListOfServices();
	int getMaxServiceID();
#pragma endregion



#pragma region Ankudinov
	void writeDatabaseToFile();
	void readDatabaseFromFile();
	void writeServicesOrdersToFile();
	void readServicesOrdersFromFile();
	void writeServicesToFile();
	void readServicesFromFile();
	bool readDataAboutUser(userType status, std::vector <std::string> elems);
	bool readDataAboutServiceOrder(std::vector <std::string> elems);
	bool readDataAboutService(std::vector <std::string> elems);
#pragma endregion

	~MockDatabase() // деструктор
	{
		listOfService.clear();
		listOfServiceOrders.clear();
		listOfUsers.clear();
		//delete db;
	}
};
//static MockDatabase db;
#endif MOCKDATABASE_H