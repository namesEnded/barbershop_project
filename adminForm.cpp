#include "adminForm.h"
#include <Windows.h> 
#include "checkFunctions.h"
#include "status.h"
#include <time.h>
#include <ctime>
#include <sstream>
#include <vector>
#include <fstream>
#include <iomanip>

MockDatabase* DBAdminForm = MockDatabase::getInstance();
#pragma region Работа с пользователями из панели админа 

System::Void bshop::adminForm::clearAllGrids()
{
	usersDataGrid->Rows->Clear();
	servicesDataGrid->Rows->Clear();
	ordersDataGrid->Rows->Clear();
}

std::vector<std::string> splitToElems(const std::string& s, char delim) {
	std::stringstream ss(s);
	std::string item;
	std::vector<std::string> elems;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}


System::Void bshop::adminForm::addUserBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	mainTabSekector->SelectTab(addUserTab);
	/*if (!addUserPanel->Visible)
	{
		addUserPanel->Visible = true;
		addUserPanel->Enabled = true;
	}
	else
	{
		addUserPanel->Visible = false;
		addUserPanel->Enabled = false;
	}*/
}

System::Void bshop::adminForm::addUserTypeCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
}

System::Void bshop::adminForm::addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = msclr::interop::marshal_as<std::string>(addUserNameTB->Text);
	bool sex;
	if (addUserMaleRB->Checked)
	{
		sex = true;
	}
	else
	{
		sex = false;
	}

	double experience = NULL;
	std::string personalAchievements = "";
	std::string date = msclr::interop::marshal_as<std::string>(addUserDateTB->Text);
	std::string phonenumber = msclr::interop::marshal_as<std::string>(addUserPhonenumberTB->Text);
	std::string email = msclr::interop::marshal_as<std::string>(addUserMailTB->Text);
	std::string password = msclr::interop::marshal_as<std::string>(addUserPasswordTB->Text);
	std::string statusString = msclr::interop::marshal_as<std::string>(addUserTypeCB->Text);

	if (name == "" || email == "" || statusString == "" || password == "")
	{
		MessageBox::Show("Есть пустые поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	std::string selectedSpeciality;
	if (addUserTypeCB->Text == "EMPLOYEE")
	{
		std::string selectedSpeciality = msclr::interop::marshal_as<std::string>(addUserSpecialityCB->Text);
	}
	else
	{
		specialityPanel->Visible = false;
	}
	userType status = checkSelectedStatus(statusString);
	userSpeciality speciality = checkSelectedSpeciality(selectedSpeciality);
	if (DBAdminForm->emailIsUnique(email))
		switch (status) {
		case EMPLOYEE:
			if (experience.Equals(NULL)) experience = DEF_WORK_EXPERIENCE;
			if (personalAchievements.empty()) personalAchievements = DEF_PERSONAL_ACHIEVEMENTS;
			DBAdminForm->addUser(name, sex, date, phonenumber, email, password, status, experience,
				speciality, personalAchievements);
			DBAdminForm->writeDatabaseToFile();
			break;
		case ADMIN:
			DBAdminForm->addUser(name, sex, date, phonenumber, email, password, status);
			DBAdminForm->writeDatabaseToFile();
			break;
		case CLIENT:
			DBAdminForm->addUser(name, sex, date, phonenumber, email, password, status);
			DBAdminForm->writeDatabaseToFile();
			break;
		default:
			System::Windows::Forms::MessageBox::Show("There is no such status");
			break;
		}
	else System::Windows::Forms::MessageBox::Show("Пользователь с таким e-mail уже существует");
}

System::Void bshop::adminForm::addUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (addUserTypeCB->Text == "EMPLOYEE")
	{
		specialityPanel->Visible = true;
		specialityPanel->Enabled = true;
	}
	else
	{
		specialityPanel->Visible = false;
		specialityPanel->Enabled = false;
	}
}

System::Void bshop::adminForm::changeUserIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	int selectID = std::stoi(msclr::interop::marshal_as<std::string>(changeUserIdCB->SelectedItem->ToString()));
	User* selectUser = DBAdminForm->getUser(selectID);
	changeUserNameTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getName());

	changeUserMaleRB->Checked = (selectUser->getSex()) == ("true") ? true : false;
	if (!changeUserMaleRB->Checked) changeUserFemaleRB->Checked = true;
	changeUserDateTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getDate());
	changeUserPhonenumberTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getPhonenumber());
	changeUserMailTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getEmail());
	changeUserPasswordTB->Text = "Введите новый пароль!";
	userType status = selectUser->getStatus();
	changeUserTypeCB->Text = msclr::interop::marshal_as<System::String^>(statusToString(status));
	if (status == EMPLOYEE)
	{
		changeUserSpecialityPanel->Visible = true;
		Employee* selectEmployee = (Employee*)selectUser;
		changeUserSpecialityCB->Text = msclr::interop::marshal_as<System::String^>(selectEmployee->getSpeciality());
		changeUserExperienceTB->Text = msclr::interop::marshal_as<System::String^>(std::to_string(selectEmployee->getExperience()));
		changePersonalAchievementsTB->Text = msclr::interop::marshal_as<System::String^>(selectEmployee->getPersonalAchievements());
	}
	else
	{
		changeUserSpecialityPanel->Visible = false;
		changeUserSpecialityPanel->Enabled = false;
	}

}

System::Void bshop::adminForm::changeUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (changeUserNameTB->Text == "" ||
		changeUserMailTB->Text == "" ||
		changeUserPasswordTB->Text == "" ||
		changeUserTypeCB->Text == "")
	{
		MessageBox::Show("Есть пустые поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	int selectID = std::stoi(msclr::interop::marshal_as<std::string>(changeUserIdCB->Text));
	User* selectUser = DBAdminForm->getUser(selectID);
	selectUser->setName(msclr::interop::marshal_as<std::string>(changeUserNameTB->Text));
	selectUser->setSex(changeUserMaleRB->Checked);
	selectUser->setDate(msclr::interop::marshal_as<std::string>(changeUserDateTB->Text));
	selectUser->setPhonenumber(msclr::interop::marshal_as<std::string>(changeUserPhonenumberTB->Text));
	selectUser->setEmail(msclr::interop::marshal_as<std::string>(changeUserMailTB->Text));
	//size_t passwordHash = NULL;
	#pragma warning(suppress : 4996)
	std::string pass = msclr::interop::marshal_as<std::string>(changeUserPasswordTB->Text);
	//sscanf(msclr::interop::marshal_as<std::string>(changeUserPasswordTB->Text).c_str(), "%zu", &passwordHash);

	std::hash<std::string> hasher;
	size_t passwordHash = hasher(pass);

	selectUser->setPassword(passwordHash);
	userType status = checkSelectedStatus(msclr::interop::marshal_as<std::string>(changeUserTypeCB->Text));
	selectUser->setStatus(status);
	if (status == EMPLOYEE)
	{
		Employee* selectEmployee = (Employee*)selectUser;
		selectEmployee->setSpeciality(checkSelectedSpeciality(msclr::interop::marshal_as<std::string>(changeUserSpecialityCB->Text)));
		selectEmployee->setExperience(std::stoi(msclr::interop::marshal_as<std::string>(changeUserExperienceTB->Text)));
		selectEmployee->setPersonalAchievements(msclr::interop::marshal_as<std::string>(changePersonalAchievementsTB->Text));
		DBAdminForm->writeDatabaseToFile();
	}


}

System::Void bshop::adminForm::changeUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (changeUserTypeCB->Text == "EMPLOYEE")
	{
		changeUserSpecialityPanel->Visible = true;
		changeUserSpecialityPanel->Enabled = true;
	}
	else
	{
		changeUserSpecialityPanel->Visible = false;
		changeUserSpecialityPanel->Enabled = false;
	}
}

System::Void bshop::adminForm::changeUserBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	mainTabSekector->SelectTab(changeUserTab);
	/*if (!changeUserPanel->Visible)
	{
		changeUserPanel->Visible = true;
		changeUserPanel->Enabled = true;
	}
	else
	{
		changeUserPanel->Visible = false;
		changeUserPanel->Enabled = false;
	}*/
}

System::Void bshop::adminForm::deleteSpecificUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mainTabSekector->SelectedTab != mainTab)
	{
		System::Windows::Forms::MessageBox::Show("Перейдите на главную панель!");
		return;
	}

	if (usersDataGrid->SelectedRows->Count == 0)
	{
		System::Windows::Forms::MessageBox::Show("Вы ничего не выбрали!");
		return;
	}

	bool isDel = false;
	for (int i = 0; i < usersDataGrid->Rows->Count; i++)
	{
		if (usersDataGrid->Rows[i]->Selected == true)
		{
			int userID = std::stoi(msclr::interop::marshal_as<std::string>(usersDataGrid->Rows[i]->Cells[0]->Value->ToString()));
			try
			{
				isDel = DBAdminForm->deleteSpecificUser(userID);
			}
			catch (std::exception ex)
			{
				String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
				System::Windows::Forms::MessageBox::Show(exception);
			}
		}
	}
	if (isDel)
	{
		System::Windows::Forms::MessageBox::Show("Удаление прошло успешно!");
		DBAdminForm->writeDatabaseToFile();
	}
}

#pragma endregion

#pragma region Работа с услугами из панели админа 
System::Void bshop::adminForm::addServiceBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = msclr::interop::marshal_as<std::string>(serviceNameTB->Text);
	int price = std::stoi(msclr::interop::marshal_as<std::string>(servicePriceTB->Text));
	try
	{
		DBAdminForm->addService(name, price);
		DBAdminForm->writeServicesToFile();
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}
}

System::Void bshop::adminForm::saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	DBAdminForm->writeServicesToFile();
}

System::Void bshop::adminForm::loadServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	DBAdminForm->clearListOfServices();
	DBAdminForm->readServicesFromFile();
}

System::Void bshop::adminForm::updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	servicesRTB->Clear();
	try
	{
		String^ info = msclr::interop::marshal_as<System::String^>(DBAdminForm->getServices());
		servicesRTB->AppendText(info);
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}
}

System::Void bshop::adminForm::changeServiceBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mainTabSekector->SelectedTab != mainTab)
	{
		System::Windows::Forms::MessageBox::Show("Перейдите на главную панель!");
		return;
	}

	if (servicesDataGrid->SelectedRows->Count == 0)
	{
		System::Windows::Forms::MessageBox::Show("Вы ничего не выбрали!");
		return;
	}
	mainTabSekector->SelectTab(changeServiceTab);


	/*if (!changeServicePanel->Visible)
	{
		changeServicePanel->Visible = true;
		changeServicePanel->Enabled = true;
	}
	else
	{
		changeServicePanel->Visible = false;
		changeServicePanel->Enabled = false;
	}*/
}

System::Void bshop::adminForm::changeServiceFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < servicesDataGrid->Rows->Count; i++)
	{
		if (servicesDataGrid->Rows[i]->Selected == true)
		{
			std::string name = msclr::interop::marshal_as<std::string>(changeServiceNameTB->Text);
			int price = std::stoi(msclr::interop::marshal_as<std::string>(changeServicePriceTB->Text));
			int serviseID = std::stoi(msclr::interop::marshal_as<std::string>(servicesDataGrid->Rows[i]->Cells[0]->Value->ToString()));
			try
			{
				Service* buffService = DBAdminForm->getService(serviseID);
				buffService->setName(name);
				buffService->setPrice(price);
				DBAdminForm->writeServicesToFile();
			}
			catch (std::exception ex)
			{
				String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
				System::Windows::Forms::MessageBox::Show(exception);
			}
		}
	}
	changeServicePanel->Visible = false;
	changeServicePanel->Enabled = false;
}

System::Void bshop::adminForm::delOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mainTabSekector->SelectedTab != mainTab)
	{
		System::Windows::Forms::MessageBox::Show("Перейдите на главную панель!");
		return;
	}

	if (servicesDataGrid->SelectedRows->Count == 0)
	{
		System::Windows::Forms::MessageBox::Show("Вы ничего не выбрали!");
		return;
	}
	bool isDel = false;
	for (int i = 0; i < servicesDataGrid->Rows->Count; i++)
	{
		if (servicesDataGrid->Rows[i]->Selected == true)
		{
			int serviseID = std::stoi(msclr::interop::marshal_as<std::string>(servicesDataGrid->Rows[i]->Cells[0]->Value->ToString()));
			try
			{
				isDel = DBAdminForm->deleteSpecificService(serviseID);
			}
			catch (std::exception ex)
			{
				String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
				System::Windows::Forms::MessageBox::Show(exception);
			}
		}
	}
	if (isDel)
	{
		System::Windows::Forms::MessageBox::Show("Удаление прошло успешно!");
		DBAdminForm->writeServicesToFile();
	}
}

System::Void bshop::adminForm::addServiceBtnFromAdminPanel_Click(System::Object^ sender, System::EventArgs^ e)
{
	mainTabSekector->SelectTab(addServiceTab);
	/*if (!addServicePanel->Visible)
	{
		addServicePanel->Visible = true;
		addServicePanel->Enabled = true;
	}
	else
	{
		addServicePanel->Visible = false;
		addServicePanel->Enabled = false;
	}*/
}

#pragma endregion


System::Void bshop::adminForm::updateGridsBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	clearAllGrids();
	std::list<ServiceOrder*> ServicesOrders = DBAdminForm->getServiceOrdersList();
	std::list<Service*> Services = DBAdminForm->getServiceList();
	std::list<User*> Users = DBAdminForm->getUsersList();
	for each (User * user in Users)
	{
		std::string ID = std::to_string(user->getID());
		std::string Name = user->getName();
		std::string status = statusToString(user->getStatus());

		std::vector<std::string> v = { ID, Name, status };
		usersDataGrid->Rows->Add();
		int i = usersDataGrid->Rows->Count;
		int k = usersDataGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			usersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
	}

	for each (Service * service in Services)
	{
		std::string ID = std::to_string(service->getID());
		std::string Name = service->getName();
		std::string cost = std::to_string(service->getPrice());

		std::vector<std::string> v = { ID, Name, cost };
		servicesDataGrid->Rows->Add();
		int i = servicesDataGrid->Rows->Count;
		int k = servicesDataGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			servicesDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
	}

	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		Employee* selectedEmployee = (Employee*)DBAdminForm->getUser(serviceOrder->getEmployeeID());
		std::string employeeName = selectedEmployee != nullptr ? selectedEmployee->getName() : 
					"ПОЛЬЗОВАТЕЛЬ УДАЛЁН, ID:" + std::to_string(serviceOrder->getEmployeeID());
		Client* selectedClient = (Client*)DBAdminForm->getUser(serviceOrder->getClientID());
		std::string clientName = selectedClient != nullptr ? selectedClient->getName() :
					"ПОЛЬЗОВАТЕЛЬ УДАЛЁН, ID:" + std::to_string(serviceOrder->getClientID());

		Service* selectedService = (Service*)DBAdminForm->getService(serviceOrder->getServiceID());
		std::string serviceName = selectedService != nullptr ? selectedService->getName() :
					"УСЛУГА УДАЛЕНА, ID:" + std::to_string(serviceOrder->getServiceID());


		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, employeeName, clientName, status, serviceName } ;
		ordersDataGrid->Rows->Add();
		int i = ordersDataGrid->Rows->Count;
		int k = ordersDataGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			ordersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
	}
}

System::Void bshop::adminForm::writeDataBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	DBAdminForm->writeDatabaseToFile();
	DBAdminForm->writeServicesOrdersToFile();
	DBAdminForm->writeServicesToFile();
}

System::Void bshop::adminForm::loadBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

	DBAdminForm->clearListOfServices();
	DBAdminForm->clearListOfServicesOrder();
	DBAdminForm->clearListOfUsers();
	DBAdminForm->readDatabaseFromFile();
	DBAdminForm->readServicesFromFile();
	DBAdminForm->readServicesOrdersFromFile();
}

System::Void bshop::adminForm::deleteSpecidicServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mainTabSekector->SelectedTab != mainTab)
	{
		System::Windows::Forms::MessageBox::Show("Перейдите на главную панель!");
		return;
	}

	if (ordersDataGrid->SelectedRows->Count == 0)
	{
		System::Windows::Forms::MessageBox::Show("Вы ничего не выбрали!");
		return;
	}

	bool isDel = false;
	for (int i = 0; i < ordersDataGrid->Rows->Count; i++)
	{
		if (ordersDataGrid->Rows[i]->Selected == true)
		{
			int serviseOrderID = std::stoi(msclr::interop::marshal_as<std::string>(ordersDataGrid->Rows[i]->Cells[0]->Value->ToString()));
			try
			{
				isDel = DBAdminForm->deleteSpecificServiceOrder(serviseOrderID);
			}
			catch (std::exception ex)
			{
				String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
				System::Windows::Forms::MessageBox::Show(exception);
			}
		}
	}
	if (isDel)
	{
		System::Windows::Forms::MessageBox::Show("Удаление прошло успешно!");
		DBAdminForm->writeServicesOrdersToFile();
	}
}

System::Void bshop::adminForm::showReportBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	mainTabSekector->SelectTab(showReportTab);
	/*if (!reportPanel->Visible)
	{
		reportPanel->Visible = true;
		reportPanel->Enabled = true;
	}
	else
	{
		reportPanel->Visible = false;
		reportPanel->Enabled = false;
	}*/
}

System::Void bshop::adminForm::makeReportBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	tm Tm;
	time_t t = std::time(nullptr);
	errno_t err = localtime_s(&Tm, &t);
	int curYear = Tm.tm_year + 1900;
	int curMonth = Tm.tm_mon + 1;
	int curDay = Tm.tm_mday;
	int clientsNumber = 0;
	double salary = 0;
	double proceeds = 0;
	double Profit = 0;
	double averageСheck = 0;
	if (reportPeriodCB->Text == "Год")
	{
		for each (ServiceOrder * serviceOrder in DBAdminForm->getServiceOrdersList())
		{
			std::string date = serviceOrder->getDate();
			std::vector <std::string> elems = splitToElems(date, '-');
			int buffYear = std::stoi(elems[0]);
			int buffMonth = std::stoi(elems[1]);
			int buffDay = std::stoi(elems[2]);

			if ((buffYear == curYear && buffMonth <= curMonth && buffDay <= curDay) ||
				(buffYear == curYear - 1 && buffMonth >= curMonth && buffDay >= buffDay))
			{
				clientsNumber++;
				proceeds += serviceOrder->getCost();

			}
		}
		for each (User * user in DBAdminForm->getUsersList())
		{
			if (user->getStatus() == EMPLOYEE)
			{
				Employee* buffEmployee = (Employee*)user;
				salary += buffEmployee->getSalary() * 12;
			}
		}
		Profit = proceeds - salary;
		averageСheck = proceeds / clientsNumber;
		String^ yearInfo = "";
		if (ExpensesCB->Checked == true)
		{
			yearInfo += "Затраты за год составили: " + salary.ToString() + "\n";

		};
		if (proceedsCB->Checked == true)
		{
			yearInfo += "Выручка за год составила: " + proceeds.ToString() + "\n";
		};
		if (profitCB->Checked == true)
		{
			yearInfo += "Прибыль за год составила: " + Profit.ToString() + "\n";
		};
		if (clientsNumberCB->Checked == true)
		{
			yearInfo += "Количество клиентов за год составило: " + clientsNumber.ToString() + "\n";
		};
		if (averageСheckCB->Checked == true)
		{
			yearInfo += "Средний чек за год составил: " + averageСheck.ToString() + "\n";
		};
		makeReportRTB->Text = yearInfo;
	}
	if (reportPeriodCB->Text == "Месяц")
	{
		String^ monthInfo = "";
		for each (ServiceOrder * serviceOrder in DBAdminForm->getServiceOrdersList())
		{
			std::string date = serviceOrder->getDate();
			std::vector <std::string> elems = splitToElems(date, '-');
			int buffYear = std::stoi(elems[0]);
			int buffMonth = std::stoi(elems[1]);
			int buffDay = std::stoi(elems[2]);

			if ((buffYear == curYear && buffMonth == curMonth - 1 && buffDay >= curDay) ||
				(buffYear == curYear && buffMonth == curMonth && buffDay <= curDay))

			{
				clientsNumber++;
				proceeds += serviceOrder->getCost();

			}
		}
		for each (User * user in DBAdminForm->getUsersList())
		{
			if (user->getStatus() == EMPLOYEE)
			{
				Employee* buffEmployee = (Employee*)user;
				salary += buffEmployee->getSalary() * 1;
			}
		}
		Profit = proceeds - salary;
		averageСheck = proceeds / clientsNumber;


		if (ExpensesCB->Checked == true)
		{

			monthInfo += "Затраты за месяц составили: " + salary.ToString() + "\n";

		};
		if (proceedsCB->Checked == true)
		{
			monthInfo += "Выручка за месяц составила: " + proceeds.ToString() + "\n";
		};
		if (profitCB->Checked == true)
		{
			monthInfo += "Прибыль за месяц составила: " + Profit.ToString() + "\n";
		};
		if (clientsNumberCB->Checked == true)
		{
			monthInfo += "Количество клиентов за месяц составило: " + clientsNumber.ToString() + "\n";
		};
		if (averageСheckCB->Checked == true)
		{
			monthInfo += "Средний чек за месяц составил: " + averageСheck.ToString() + "\n";
		};
		makeReportRTB->Text = monthInfo;
	}
	if (reportPeriodCB->Text == "День")
	{
		String^ dayInfo = "";
		for each (ServiceOrder * serviceOrder in DBAdminForm->getServiceOrdersList())
		{
			std::string date = serviceOrder->getDate();
			std::vector <std::string> elems = splitToElems(date, '-');
			int buffYear = std::stoi(elems[0]);
			int buffMonth = std::stoi(elems[1]);
			int buffDay = std::stoi(elems[2]);

			if (buffDay == curDay)
			{
				clientsNumber++;
				proceeds += serviceOrder->getCost();

			}
		}
		for each (User * user in DBAdminForm->getUsersList())
		{
			if (user->getStatus() == EMPLOYEE)
			{
				Employee* buffEmployee = (Employee*)user;
				salary += buffEmployee->getSalary() / 12;
			}
		}
		Profit = proceeds - salary;
		averageСheck = proceeds / clientsNumber;

		if (ExpensesCB->Checked == true)
		{

			dayInfo += "Затраты за текущий день составили: неизвестно""\n";

		};
		if (proceedsCB->Checked == true)
		{
			dayInfo += "Выручка за текущий день составила: " + proceeds.ToString() + "\n";
		};
		if (profitCB->Checked == true)
		{
			dayInfo += "Прибыль за текущий день составила: неизвестно" + "\n";
		};
		if (clientsNumberCB->Checked == true)
		{
			dayInfo += "Количество клиентов за текущий день составило: " + clientsNumber.ToString() + "\n";
		};
		if (averageСheckCB->Checked == true)
		{
			dayInfo += "Средний чек за текущий день составил: " + averageСheck.ToString() + "\n";
		};
		makeReportRTB->Text = dayInfo;
	}
}

System::Void bshop::adminForm::mainTabSekector_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e)
{

	changeUserIdCB->Items->Clear();
	for each (User * user in DBAdminForm->getUsersList())
	{
		changeUserIdCB->Items->Add(user->getID());
	}
}

System::Void bshop::adminForm::adminForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
}
