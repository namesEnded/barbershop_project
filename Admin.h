#pragma once
#include "User.h"
#include "MockDatabase.h"

class Admin : public User {
public:
	Admin() {};
	Admin(int id, std::string name, bool sex, std::string date, std::string phonenumber,
		std::string email, size_t password, userType status) : User(id, name, sex, date, phonenumber, email, password, status) {};
	void deleteSpecificUser(int id);
	void deleteService(int id);
	void deleteOrder(int id);
	void changeService(int id);
	void changeSpecificUser(int id);
};