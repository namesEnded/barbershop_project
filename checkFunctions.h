#pragma once
#include "User.h"
#include "MockDatabase.h"
#include "speciality.h"

bool checkSex(std::string sex);
userType checkSelectedStatus(std::string statusString);
userSpeciality checkSelectedSpeciality(std::string selectedSpeciality);
clientStatusType checkClientStatus(int numberOfVisits);