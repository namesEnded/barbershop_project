#include "Service.h"

Service::Service(int ID, std::string name, int price)
{
	this->ID = ID;
	this->name = name;
	this->price = price;
}

int Service::getID()
{
	return this->ID;
}

void Service::setPrice(int price)
{
	this->name = price;
}

void Service::setName(std::string name)
{
	this->name = name;
}

int Service::getPrice()
{
	return this->price;
}

std::string Service::getInfo()
{
	std::string info = "{" + std::to_string(getID()) + ";" + getName() + ";" + std::to_string(getPrice()) + "}" + "\n";
	return info;
}

std::string Service::getName()
{
	return this->name;
}
