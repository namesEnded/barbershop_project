#pragma once
#include "User.h"

class Employee : public User {
private:
	float experience;
	userSpeciality speciality;
	std::string personalAchievements;
	float salary;
	float workingHours;
public:
	Employee() {};
	Employee(int id, std::string name, bool sex, std::string date, std::string phonenumber,
		std::string email, size_t password, userType status, float experience, userSpeciality speciality,
		std::string personalAchievements): User(id, name, sex, date, phonenumber, email, password, status) 
	{
		this->experience = experience;
		this->personalAchievements = personalAchievements;
		this->speciality = speciality;
		switch (speciality) {
		case BARBER:
			this->salary = 20250 + experience * 500;
			this->workingHours = 8;
			break;
		case ADMINISTRATOR:
			this->salary = 15000 + experience * 600;
			this->workingHours = 8;
			break;
		case CLEANER:
			this->salary = 13200 + experience * 200;
			this->workingHours = 8;
			break;
		case DIRECTOR:
			this->salary = 66666 + experience * 666;
			this->workingHours = 4;
			break;
		default:
			System::Windows::Forms::MessageBox::Show("There is no such status");
			break;
		}
	};

	void setExperience(float experience);
	void setSpeciality(userSpeciality speciality);
	std::string getSpeciality();
	void setPersonalAchievements(std::string personalAchievements);
	float getExperience();
	std::string getPersonalAchievements();
	float getSalary();
	float getWorkingHours();
	virtual std::string getInfo();

};