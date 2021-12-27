#pragma once
#include "User.h"
#include "speciality.h"

bool checkSex(std::string sex);
userType checkSelectedStatus(std::string statusString);
userSpeciality checkSelectedSpeciality(std::string selectedSpeciality);
clientStatusType checkClientStatus(int numberOfVisits);
std::string statusToString(userType statusString);