#ifndef CHECKFUNCTIONS_H
#define CHECKFUNCTIONS_H
#include "User.h"
#include "speciality.h"
static std::map<int, int> indexOfEmployees;
static std::map<int, int> indexOfClients;
bool checkSex(std::string sex);
userType checkSelectedStatus(std::string statusString);
userSpeciality checkSelectedSpeciality(std::string selectedSpeciality);
clientStatusType checkClientStatus(int numberOfVisits);
std::string statusToString(userType statusString);
std::string specialityToString(userType statusString);
static std::string availableTime[8]{ "9:00", "10:00", "11:00", "12:00",
								 "13:00", "14:00", "15:00", "16:00" };
#endif CHECKFUNCTIONS_H