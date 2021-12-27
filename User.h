#pragma once
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <string>
#include <map> 
#include <fstream> 
#include "msclr\marshal_cppstd.h"
#include "status.h"
#include "speciality.h"
#include <unordered_map>
//using namespace std;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#pragma region Aphonin
class User
{
public:
	int id;
	bool sex;
	userType status;
	std::string name;
	std::string date;
	std::string phonenumber;
	std::string email;
	size_t password;

	User() {};
	User(int id, std::string name, bool sex, std::string  date, std::string phonenumber, 
				std::string email, size_t password, userType status);
	int getID();
	std::string getName();
	std::string getSex();
	std::string getPhonenumber();
	std::string getEmail();
	std::string getStatusString();
	userType getStatus();
	std::string getDate();
	size_t getPassword();


	virtual std::string getInfo();
	/*friend bool operator==(User& left,const std::string& right);
	friend bool operator!=(User& left, const std::string& right);
	friend bool operator==(const User& left, std::string right);
	friend bool operator!=(const User& left, std::string right);*/
};
#pragma endregion