//Aphonin
#pragma once
#include "User.h"

class Service {
private:
	int ID;
	std::string name;
	int price;
public:

	Service() {};
	Service(int ID, std::string name, int price);
	int getID();
	void setPrice(int price);
	void setName(std::string name);
	int getPrice();
	std::string getInfo();
	std::string getName();
};