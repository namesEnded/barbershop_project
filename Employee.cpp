#include "Employee.h"

std::string Employee::getInfo()
{
	std::string info = "{" + std::to_string(getID()) + ";" + getName() + ";" + getSex() + ";" + getDate() + ";" + getPhonenumber() + ";" +
						     getEmail() + ";" + std::to_string(getPassword()) + ";"  + getStatusString() + ";" + getSpeciality() + ";" +
						     std::to_string(getExperience()) + ";" + getPersonalAchievements() + ";" + std::to_string(getSalary()) + ";" + 
							 std::to_string(getWorkingHours()) + "}" + "\n";
	return info;
}
void Employee::setExperience(float experience)
{
	this->experience = experience;
}
void Employee::setSpeciality(userSpeciality speciality)
{
	this->speciality = speciality;
}
std::string Employee::getSpeciality()
{
	switch (this -> speciality) {
	case BARBER:
		return "barber";
		break;
	case ADMINISTRATOR:
		return "administrator";
		break;
	case CLEANER:
		return "cleaner";
		break;
	case DIRECTOR:
		return "director";
		break;
	default:
		return "none";
		break;
	}
}
void Employee::setPersonalAchievements(std::string personalAchievements)
{
}
float Employee::getExperience()
{
	return this->experience;
}

std::string Employee::getPersonalAchievements()
{
	return this->personalAchievements;
}

float Employee::getSalary()
{
	return this->salary;
}

float Employee::getWorkingHours()
{
	return this->workingHours;
}
