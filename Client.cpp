#include "Client.h"

std::string Client::getClientStatus()
{
	switch (this->clientStatus) {
	case REGULAR:
		return "regular";
		break;
	case ONCE:
		return "once";
		break;
	case NEW:
		return "new";
		break;
	case VIP:
		return "VIP";
		break;
	default:
		return "none";
		break;
	}
}

int Client::getClientDiscount()
{
	return (int)this->clientStatus;
}

int Client::getNumberOfVisits()
{
	return this->numberOfVisits;
}

void Client::setClientStatus(clientStatusType clientStatus)
{

	this->clientStatus = clientStatus;
}


void Client::addVisit()
{
}

void Client::getService()
{
}

std::string Client::getInfo()
{
	std::string info = "{" + std::to_string(getID()) + ";" + getName() + ";" + getSex() + ";" + getDate() + ";" + getPhonenumber() + ";" +
		getEmail() + ";" + std::to_string(getPassword()) + ";" + getStatusString() + ";" +
		getClientStatus() + ";" + std::to_string(getNumberOfVisits()) + "}" + "\n";
	return info;
}
