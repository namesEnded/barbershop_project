//Ankudinov
#pragma once
#include "User.h"

class ServiceOrder{
private:
	std::string date;
	std::string time;
	int ID;
	int serviceID;
	int employeeID;
	int clientID;
	double serviceCostWithDiscount;
	bool status;
public:

	ServiceOrder() {};
	ServiceOrder(int ID, int serviceID, int employeeID, int clientID, std::string date, std::string time,
				double serviceCostWithDiscount, bool status);
	std::string getTime();
	int getID();
	std::string getDate();
	double getCost();
	void setStatus(bool status);
	bool getStatus();
	double getServiceCostWithDiscount();
	int getClientID();
	int getEmployeeID();
	int getServiceID();
	std::string getInfo();
	std::string getName();
};