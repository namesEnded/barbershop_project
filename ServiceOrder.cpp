#include "ServiceOrder.h"

ServiceOrder::ServiceOrder(int ID, int serviceID, int employeeID, int clientID, std::string date, std::string time, double serviceCostWithDiscount, bool status)
{
	this->ID = ID;
	this->serviceID = serviceID;
	this->employeeID = employeeID;
	this->clientID = clientID;
	this->date = date;
	this->time = time;
	this->status = status;
	this->serviceCostWithDiscount = serviceCostWithDiscount;
}

std::string ServiceOrder::getTime()
{
	return this->time;
}

int ServiceOrder::getID()
{
	return this->ID;
}

std::string ServiceOrder::getDate()
{
	return this->date;
}

double ServiceOrder::getCost()
{
	return this->serviceCostWithDiscount;
}

void ServiceOrder::setStatus(bool status)
{
	this->status = status;
}

bool ServiceOrder::getStatus()
{
	return this->status;
}

double ServiceOrder::getServiceCostWithDiscount()
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

int ServiceOrder::getServiceID()
{
	return this->serviceID;
}

std::string ServiceOrder::getInfo()
{
	std::string status = getStatus().Equals(true) ? "true": "false";
	std::string info = "{" + std::to_string(getID()) + ";" + std::to_string(getServiceID()) + ";" + 
				std::to_string(getEmployeeID()) + ";" + std::to_string(getClientID()) + ";" + 
				std::to_string(getCost()) + ";" + status + ";" + getDate() + ";" + getTime() + "}" + "\n";
	return info;
}

std::string ServiceOrder::getName()
{
	return std::string();
}
