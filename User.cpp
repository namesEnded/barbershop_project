#include "User.h"
using namespace std;

User::User(int id, std::string name, bool sex, std::string date, std::string phonenumber, std::string email, size_t password, userType status)
{
	this->id= id;
	this->name = name;
	this->date = date;
	this->sex = sex;
	this->email = email;
	this->phonenumber = phonenumber;
	this->password = password;
	this->status = status;
}

int User::getID()
{
	return this->id;
}

std::string User::getDate()
{
	return this->date;
}

size_t User::getPassword()
{
	return this->password;
}

std::string User::getInfo()
{
	std::string info = "{" + std::to_string(getID()) + ";" + getName() + ";" + getSex() + ";" + getDate() + ";" + getPhonenumber() + ";" + getEmail() + ";" + std::to_string(getPassword()) + ";" + getStatusString() + "}" + "\n";
	return info;
}

std::string User::getName()
{
	return this->name;
}

std::string User::getSex()
{
	std::string sex = "";
	sex = this->sex ? "male" : "female";
	return sex;
}

std::string User::getPhonenumber()
{
	return this->phonenumber;
}

std::string User::getEmail()
{
	return this->email;
}

userType User::getStatus()
{
	return this->status;
}

std::string User::getStatusString()
{
	switch (this->status) {
	case EMPLOYEE:
			return "employee";
		break;
	case ADMIN:
			return "admin";
		break;
	case CLIENT:
			return "client";
		break;
	default:
			return "none";
		break;
	}
}

//bool operator==(User& left, const std::string& right)
//{
//	if (left.email == right)
//		return true;
//	return false;
//}
//
//bool operator!=(User& left, const std::string& right)
//{
//	if (left.email != right)
//		return true;
//	return false;
//}
//
//bool operator==(User& left, const std::string right)
//{
//	if (left.email == right)
//		return true;
//	return false;
//}
//
//bool operator!=(User& left, const std::string right)
//{
//	if (left.email != right)
//		return true;
//	return false;
//}
