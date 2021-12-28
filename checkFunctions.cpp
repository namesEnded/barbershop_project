#include "checkFunctions.h"

bool checkSex(std::string sex)
{
	if (sex == "male") return true;
	if (sex == "female") return false;
}

userType checkSelectedStatus(std::string statusString)
{
	if (statusString == "EMPLOYEE" || statusString == "employee") return EMPLOYEE;
	if (statusString == "ADMIN" || statusString == "admin") return ADMIN;
	if (statusString == "CLIENT" || statusString == "client") return CLIENT;

}

userSpeciality checkSelectedSpeciality(std::string selectedSpeciality)
{
	if (selectedSpeciality == "BARBER" || selectedSpeciality == "barber") return BARBER;
	if (selectedSpeciality == "ADMINISTRATOR" || selectedSpeciality == "administrator") return ADMINISTRATOR;
	if (selectedSpeciality == "CLEANER" || selectedSpeciality == "cleaner") return CLEANER;
	if (selectedSpeciality == "DIRECTOR" || selectedSpeciality == "director") return DIRECTOR;
	return DEF_USER_SPECIALITY;
}

clientStatusType checkClientStatus(int numberOfVisits)
{
	if (numberOfVisits == 0) return NEW;
	if ((numberOfVisits != 0) && (numberOfVisits <= 3)) return ONCE;
	if (numberOfVisits >= 4) return REGULAR;
	if (numberOfVisits > 10) return VIP;

}

