#pragma once
#include "User.h"

class ServiceOrder{
private:
	std::string date;
	int ID;
	int serviceID;
	int employeeID;
	int clientID;
	float serviceCostWithDiscount;
	bool status;
public:

	ServiceOrder() {};
	ServiceOrder(int ID, int serviceID, int employeeID, int clientID, std::string date,
				float serviceCostWithDiscount, bool status);
	int getID();
	std::string getDate();
	float getCost();
	void setStatus(bool status);
	bool getStatus();
	float getServiceCostWithDiscount();
	int getClientID();
	int getEmployeeID();
	int getServiceID();
	std::string getInfo();
	std::string getName();
};