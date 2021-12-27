#include "ServiceOrder.h"

ServiceOrder::ServiceOrder(int ID, int serviceID, int employeeID, int clientID, std::string date, float serviceCostWithDiscount, bool status)
{
	this->ID = ID;
	this->serviceID = serviceID;
	this->employeeID = employeeID;
	this->clientID = clientID;
	this->date = date;
	this->serviceCostWithDiscount = serviceCostWithDiscount;
}

int ServiceOrder::getID()
{
	return this->ID;
}

void ServiceOrder::setStatus(bool status)
{
	this->status = status;
}

bool ServiceOrder::getStatus()
{
	return this->status;
}

float ServiceOrder::getServiceCostWithDiscount()
{
	return this->serviceCostWithDiscount;
}

int ServiceOrder::getClientID()
{
	return this->clientID;
}

int ServiceOrder::getEmployeeID()
{
	return this->employeeID;
}

std::string ServiceOrder::getInfo()
{
	std::string info = ":";
	/*std::string info = "{" + std::to_string(getID()) + ";" + getName() + ";" + getSex() + ";" + getDate() + ";" + getPhonenumber() + ";" +
		getEmail() + ";" + std::to_string(getPassword()) + ";" + getStatusString() + ";" + getSpeciality() + ";" +
		std::to_string(getExperience()) + ";" + getPersonalAchievements() + ";" + std::to_string(getSalary()) + ";" +
		std::to_string(getWorkingHours()) + "}" + "\n";*/
	return info;
}

std::string ServiceOrder::getName()
{
	return std::string();
}
