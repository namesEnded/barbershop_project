#include "checkFunctions.h"
bool checkSex(std::string sex)
{
	if (sex == "male") return true;
	if (sex == "female") return false;
	return false;
}

std::string statusToString(userType statusString)
{
	if (statusString == EMPLOYEE) return "EMPLOYEE";
	if (statusString == ADMIN) return "ADMIN";
	if (statusString == CLIENT) return "CLIENT";
	return "NONE";
}

std::string specialityToString(userSpeciality speciality)
{
	if (speciality == BARBER) return "Барбер";
	if (speciality == ADMINISTRATOR) return "Администратор";
	if (speciality == CLEANER) return "Уборщик";
	if (speciality == DIRECTOR) return "Директор";
	return "NONE";
}


userType checkSelectedStatus(std::string statusString)
{
	if (statusString == "EMPLOYEE" || statusString == "employee") return EMPLOYEE;
	if (statusString == "ADMIN" || statusString == "admin") return ADMIN;
	if (statusString == "CLIENT" || statusString == "client") return CLIENT;
	return CLIENT;
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
	return NEW;
}