#pragma once
#include "User.h"

class Client : public User {
private:
	int numberOfVisits;
	clientStatusType clientStatus;
public:
	Client() {};
	Client(int id, std::string name, bool sex, std::string date, std::string phonenumber,
				std::string email, size_t password, userType status, int numberOfVisits, 
				clientStatusType clientStatus) : User(id, name, sex, date, phonenumber, email, password, status)
	{
		this->clientStatus = clientStatus;
		this->numberOfVisits = numberOfVisits;
	};
	std::string getClientStatus();
	int getClientDiscount();
	int getNumberOfVisits();
	void setClientStatus(clientStatusType clientStatus);
	void addVisit();
	void getService();
	virtual std::string getInfo();
};