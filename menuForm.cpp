#include "menuForm.h"
#include <Windows.h> 
#include "checkFunctions.h"
#include "MockDatabase.h"
#include "status.h"
MockDatabase* db2 = MockDatabase::getInstance();
Employee* currentEmployee;
std::list<ServiceOrder*> curOrders;
static std::map<int, int> indexOfEmployeesMenu;
static std::map<int, int> indexOfClientsMenu;
System::Void bshop::menuForm::menuForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	switch (userStatus) {
	case ADMIN:
		//outputRTB->Text = "ADMIN";
		break;
	case CLIENT:
		//outputRTB->Text = "CLIENT";
		clientPanel->Visible = true;
		Calendar->SetDate(employeeCalendar->TodayDate);
		updateServiceOrderBtn_Click(sender, e);
		ClientNameLbl->Text = msclr::interop::marshal_as<System::String^>(db2->getUser(ID)->getName());
		break;
	case EMPLOYEE:
		//outputRTB->Text = "EMPLOYEE";
		employeePanel->Visible = true;
		employeeCalendar->SetDate(employeeCalendar->TodayDate);
		updateTimetable(employeeCalendar, selectedDateEmployeeTB);
		updateOrdersGrid(curOrders);
		break;
	default:
		//outputRTB->Text = "NONE";
		System::Windows::Forms::MessageBox::Show("Пользователь имеет неизвестный статус");
		break;
	}
}

System::Void bshop::menuForm::updateAvailableTimes()
{
	availableTimeLB->Items->Clear();
	std::string date = std::to_string((Calendar->SelectionStart).Year) + "-" +
		std::to_string((Calendar->SelectionStart).Month) + "-" +
		std::to_string((Calendar->SelectionStart).Day);
	std::list<std::string> times = db2->getOrdersTimes(date);
	if (times.size() == 0)
	{
		timeStatusLbl->Text = "Всё забронировано!";
	}
	for each (std::string time in times)
	{
		availableTimeLB->Items->Add(msclr::interop::marshal_as<System::String^>(time));
	}
}

System::Void bshop::menuForm::updateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db2->getServiceOrdersList();
	std::list<Service*> Services = db2->getServiceList();
	std::list<User*> Users = db2->getUsersList();
	for each (User * user in Users)
	{
		std::string ID = std::to_string(user->getID());
		std::string Name = user->getName();
		std::string status = statusToString(user->getStatus());

		std::vector<std::string> v = { ID, Name, status };
		usersDataGrid->Rows->Add();
		int i = usersDataGrid->Rows->Count;
		int k = usersDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			usersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}

	for each (Service * service in Services)
	{
		std::string ID = std::to_string(service->getID());
		std::string Name = service->getName();

		std::vector<std::string> v = { ID, Name };
		servicesDataGrid->Rows->Add();
		int i = servicesDataGrid->Rows->Count;
		int k = servicesDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			servicesDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}

	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string employeeName = db2->getUser(serviceOrder->getEmployeeID())->getName();
		std::string clientName = db2->getUser(serviceOrder->getClientID())->getName();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, employeeName, clientName, status };
		ordersDataGrid->Rows->Add();
		int i = ordersDataGrid->Rows->Count;
		int k = ordersDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			ordersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}
}

System::Int32 bshop::menuForm::findID(int Index, bool isEmployee)
{

	int res = 0;
	if (isEmployee) {
		for (const auto& kv : indexOfEmployeesMenu) {
			if (kv.first == Index)
				return res = kv.second;
		}
	}
	else
	{
		for (const auto& kv : indexOfClientsMenu) {
			if (kv.first == Index)
				return res = kv.second;
		}
	}
	return -1;
}


System::Void bshop::menuForm::addUserBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db2->getServiceOrdersList();
	std::list<Service*> Services = db2->getServiceList();
	std::list<User*> Users = db2->getUsersList();
	for each (User * user in Users)
	{
		std::string ID = std::to_string(user->getID());
		std::string Name = user->getName();
		std::string status = statusToString(user->getStatus());

		std::vector<std::string> v = { ID, Name, status };
		usersDataGrid->Rows->Add();
		int i = usersDataGrid->Rows->Count;
		int k = usersDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			usersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}

	for each (Service * service in Services)
	{
		std::string ID = std::to_string(service->getID());
		std::string Name = service->getName();

		std::vector<std::string> v = { ID, Name };
		usersDataGrid->Rows->Add();
		int i = usersDataGrid->Rows->Count;
		int k = usersDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			usersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}

	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string employeeName = db2->getUser(serviceOrder->getEmployeeID())->getName();
		std::string clientName = db2->getUser(serviceOrder->getClientID())->getName();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, employeeName, clientName, status };
		usersDataGrid->Rows->Add();
		int i = usersDataGrid->Rows->Count;
		int k = usersDataGrid->ColumnCount;
		for (int j = 1; j < k; j++)
		{
			usersDataGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j - 1]);
		}
	}
}


System::Void bshop::menuForm::menuForm_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
}

#pragma region Работа с панелью клиента

System::Void bshop::menuForm::clientPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (clientPanel->Visible == true) 
	{
		Calendar->MinDate = Calendar->TodayDate;
	}
}

System::Void bshop::menuForm::exitFromEmployeePanelBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db2->writeServicesOrdersToFile();
	this->Close();
}

System::Void bshop::menuForm::addUserBtn_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	addUserPanel->Visible = true;
}

System::Void bshop::menuForm::addUserTypeCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	if (addUserTypeCB->Text == "EMPLOYEE")
	{
		specialityPanel->Visible = true;
	}
}

System::Void bshop::menuForm::addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
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

	float experience = NULL;
	std::string personalAchievements = "";
	std::string date = msclr::interop::marshal_as<std::string>(addUserDateTB->Text);
	std::string phonenumber = msclr::interop::marshal_as<std::string>(addUserPhonenumberTB->Text);
	std::string email = msclr::interop::marshal_as<std::string>(addUserMailTB->Text);
	std::string password = msclr::interop::marshal_as<std::string>(addUserPasswordTB->Text);
	std::string statusString = msclr::interop::marshal_as<std::string>(addUserStatusCB->Text);
	std::string selectedSpeciality;
	if (addUserTypeCB->Text == "EMPLOYEE")
	{
		std::string selectedSpeciality = msclr::interop::marshal_as<std::string>(addUserTypeCB->Text);
	}
	userType status = checkSelectedStatus(statusString);
	userSpeciality speciality = checkSelectedSpeciality(selectedSpeciality);
	if (db2->emailIsUnique(email))
		switch (status) {
		case EMPLOYEE:
			if (experience.Equals(NULL)) experience = DEF_WORK_EXPERIENCE;
			if (personalAchievements.empty()) personalAchievements = DEF_PERSONAL_ACHIEVEMENTS;
			db2->addUser(name, sex, date, phonenumber, email, password, status, experience,
				speciality, personalAchievements);
			db2->writeDatabaseToFile();
			break;
		case ADMIN:
			db2->addUser(name, sex, date, phonenumber, email, password, status);
			db2->writeDatabaseToFile();
			break;
		case CLIENT:
			db2->addUser(name, sex, date, phonenumber, email, password, status);
			db2->writeDatabaseToFile();
			break;
		default:
			System::Windows::Forms::MessageBox::Show("There is no such status");
			break;
		}
	else System::Windows::Forms::MessageBox::Show("Пользователь с таким e-mail уже существует");
}

System::Void bshop::menuForm::changeUserPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (changeUserPanel->Visible == true)
	{
		for each (User* user in db2->getUsersList())
		{
			changeUserIdCB->Items->Add(user->getID());
		}
	}
}

System::Void bshop::menuForm::changeUserIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	int selectID =std::stoi(msclr::interop::marshal_as<std::string>(changeUserIdCB->Text));
	User* selectUser = db2->getUser(selectID);
	changeUserNameTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getName());

	changeUserMaleRB->Checked = (selectUser->getSex())==("true") ? true : false;
	if (!changeUserMaleRB->Checked) changeUserFemaleRB->Checked = true;
	changeUserDateTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getDate());
	changeUserPhonenumberTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getPhonenumber());
	changeUserMailTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getEmail());
	changeUserPasswordTB->Text = "Введите новый пароль!";
	userType status = selectUser->getStatus();
	changeUserStatusCB->Text = msclr::interop::marshal_as<System::String^>(statusToString(selectUser->getStatus()));
	if (status == EMPLOYEE)
	{
		changeUserSpecialityPanel->Visible = true;
		Employee* selectEmployee = (Employee*)selectUser;
		changeUserTypeCB->Text = msclr::interop::marshal_as<System::String^>(selectEmployee->getSpeciality());
		
		
	}

}

System::Void bshop::menuForm::changeUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int selectID = std::stoi(msclr::interop::marshal_as<std::string>(changeUserIdCB->Text));
	User* selectUser = db2->getUser(selectID);
	selectUser.s
	changeUserNameTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getName());

	changeUserMaleRB->Checked = (selectUser->getSex()) == ("true") ? true : false;
	if (!changeUserMaleRB->Checked) changeUserFemaleRB->Checked = true;
	changeUserDateTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getDate());
	changeUserPhonenumberTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getPhonenumber());
	changeUserMailTB->Text = msclr::interop::marshal_as<System::String^>(selectUser->getEmail());
	changeUserPasswordTB->Text = "Введите новый пароль!";
	userType status = selectUser->getStatus();
	changeUserStatusCB->Text = msclr::interop::marshal_as<System::String^>(statusToString(selectUser->getStatus()));
	if (status == EMPLOYEE)
	{
		changeUserSpecialityPanel->Visible = true;
		Employee* selectEmployee = (Employee*)selectUser;
		changeUserTypeCB->Text = msclr::interop::marshal_as<System::String^>(selectEmployee->getSpeciality());

	}
}

System::Void bshop::menuForm::acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*std::string date = std::to_string((Calendar->SelectionStart).Day) + "/" +
		std::to_string((Calendar->SelectionStart).Month) + "/" +
		std::to_string((Calendar->SelectionStart).Year);*/
	float cost;
	int	clientID = this->ID;
	int employeeID;
	int serviceID;
	std::string time;
	std::string date;
	try
	{
		if (availableTimeLB->SelectedItem == nullptr ||
			serviceIDCB->Text == "" ||
			employeeIDCB->Text == "" ||
			//clientIDCB->Text == ""   ||
			availableTimeLB->Items->Count == 0 ||
			costTB->Text == "")
		{
			MessageBox::Show("Ошибка ввода!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		date = std::to_string((Calendar->SelectionStart).Year) + "-" +
			std::to_string((Calendar->SelectionStart).Month) + "-" +
			std::to_string((Calendar->SelectionStart).Day);
		time = msclr::interop::marshal_as<std::string>(availableTimeLB->SelectedItem->ToString());
		serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->Text));
		int employeeIndex = employeeIDCB->SelectedIndex;
		if (employeeIndex == -1) 
		{
			employeeIndex = employeeIDCB->Items->IndexOf(employeeIDCB->Text);
		}
		employeeID = findID(employeeIndex, true);
		cost = std::stoi(msclr::interop::marshal_as<std::string>(costTB->Text));
	}
	catch (std::exception ex)
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	DateTime dateDT((Calendar->SelectionStart).Year, (Calendar->SelectionStart).Month, (Calendar->SelectionStart).Day);
	if (db2->getOrdersCount(date) >= 8)
	{
		MessageBox::Show("На данный день все места забронированы!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else
	{
		db2->addServiceOrder(date, time, serviceID, employeeID, clientID, cost, false);
		updateAvailableTimes();
		if (db2->getOrdersCount(date) >= 8)
		{
			Calendar->AddBoldedDate(dateDT);
			Calendar->UpdateBoldedDates();
		}
	}
	db2->writeServicesOrdersToFile();
}

System::Void bshop::menuForm::exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e)
{
	db2->writeServicesOrdersToFile();
	this->Close();
}

System::Void bshop::menuForm::updateAvailableTimes(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void bshop::menuForm::Calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	updateAvailableTimes();
}

System::Void bshop::menuForm::serviceIDCB_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void bshop::menuForm::serviceIDCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	int serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->SelectedItem->ToString()));
	float cost = db2->getService(serviceID)->getPrice();
	Client* curClient = (Client*)db2->getUser(this->ID);
	if (this->userStatus == CLIENT)
	{
		cost = Math::Round((cost - ((cost / 100) * curClient->getClientDiscount())), 2);
		String^ costString = cost.ToString();
		//costTB->Text = msclr::interop::marshal_as<System::String^>(std::to_string(cost));
		costTB->Text = costString;
	}
	else
	{
		MessageBox::Show("Вы не клиент!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

System::Void bshop::menuForm::updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db2->getServiceOrdersList();
	employeeIDCB->Items->Clear();
	serviceIDCB->Items->Clear();
	orderInitGrid->Rows->Clear();
	int i = 0;

	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string employeeName = db2->getUser(serviceOrder->getEmployeeID())->getName();
		std::string serviceName = db2->getService(serviceOrder->getServiceID())->getName();
		std::string clientName = db2->getUser(serviceOrder->getClientID())->getName();
		std::string cost = std::to_string(serviceOrder->getCost());
		std::string data = serviceOrder->getDate();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, serviceName, employeeName,clientName, cost,  status, data };
		orderInitGrid->Rows->Add();
		int k = orderInitGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			orderInitGrid->Rows[i]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
		i++;
	}

	std::list<Service*> Services = db2->getServiceList();
	std::list<User*> Users = db2->getUsersList();

	for each (Service * service in Services)
	{
		serviceIDCB->Items->Add(service->getID());
	}

	for each (User * user in Users)
	{
		if (user->getStatus() == EMPLOYEE)
		{
			String^ userName = msclr::interop::marshal_as<System::String^>(user->getName());
			employeeIDCB->Items->Add(userName);
			indexOfEmployeesMenu[(employeeIDCB->Items->Count - 1)] = user->getID();
		}
		if (user->getStatus() == CLIENT)
		{
			indexOfClientsMenu[(employeeIDCB->Items->Count - 1)] = user->getID();
		}
	}

}

#pragma endregion

#pragma region Работа с панелью рабочего

System::Void bshop::menuForm::updateTimetable(MonthCalendar^ employeeCalendar, TextBox^ selectedDateEmployeeTB)
{
	std::string time;
	std::string date;
	date = std::to_string((employeeCalendar->SelectionStart).Year) + "-" +
		std::to_string((employeeCalendar->SelectionStart).Month) + "-" +
		std::to_string((employeeCalendar->SelectionStart).Day);
	selectedDateEmployeeTB->Text = "";
	selectedDateEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(date);
	std::list<ServiceOrder*> employeeServicesOrders;
	std::list<int> employeeServicesOrdersID = db2->getOrdersID(currentEmployee);
	for each (int ID in employeeServicesOrdersID)
	{
		ServiceOrder* buffServiceOrder = db2->getServiceOrder(ID);
		if (buffServiceOrder->getDate() == date)
		{
			employeeServicesOrders.push_back(buffServiceOrder);
		}
	}
	curOrders = employeeServicesOrders;
}

System::Void bshop::menuForm::employeeCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	updateTimetable(employeeCalendar, selectedDateEmployeeTB);
}

System::Void bshop::menuForm::updateOrdersGrid(std::list<ServiceOrder*> orders)
{
	employeeDataGrid->Rows->Clear();
	int i = 0;
	for each (ServiceOrder * serviceOrder in orders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string data = serviceOrder->getDate();
		std::string serviceName = db2->getService(serviceOrder->getServiceID())->getName();
		std::string clientName = db2->getUser(serviceOrder->getClientID())->getName();
		std::string cost = std::to_string(serviceOrder->getCost());
		std::string time = serviceOrder->getTime();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Выпонен" : "Не выполнен";
		std::vector<std::string> v = { ID, data, serviceName, clientName, cost, time, status};
		employeeDataGrid->Rows->Add();
		int k = employeeDataGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			employeeDataGrid->Rows[i]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
		i++;
	}
}

System::Void bshop::menuForm::employeePanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (employeePanel->Visible == true)
	{
		orderEmployeeIdCB->Items->Clear();
		currentEmployee = (Employee*)db2->getUser(this->ID);
		nameEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployee->getName());
		specialityEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployee->getSpeciality());
		achievementsEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployee->getPersonalAchievements());
		for each (int ID in db2->getOrdersID(currentEmployee))
		{
			orderEmployeeIdCB->Items->Add(ID);
		}
	}
}

System::Void bshop::menuForm::orderEmployeeIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	ServiceOrder* buffOrder = db2->getServiceOrder((int)(orderEmployeeIdCB->SelectedItem));

	orderEmployeeCheckCB->Checked = buffOrder->getStatus();
}

System::Void bshop::menuForm::orderEmployeeCheckCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	ServiceOrder* buffOrder = db2->getServiceOrder((int)(orderEmployeeIdCB->SelectedItem));
	buffOrder->setStatus(orderEmployeeCheckCB->Checked);
}

System::Void bshop::menuForm::updateOrdersGridBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateOrdersGrid(curOrders);

}

System::Void bshop::menuForm::employeeCalendar_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	/*std::string time;
	std::string date;
	date = std::to_string((Calendar->SelectionStart).Year) + "-" +
			std::to_string((Calendar->SelectionStart).Month) + "-" +
			std::to_string((Calendar->SelectionStart).Day);
	selectedDateEmployeeTB->Text = "";
	selectedDateEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(date);
	std::list<ServiceOrder*> employeeServicesOrders;
	std::list<int> employeeServicesOrdersID = db2->getOrdersID(currentEmployee);
	for each (int ID in employeeServicesOrdersID)
	{
		ServiceOrder* buffServiceOrder = db2->getServiceOrder(ID);
		if (buffServiceOrder->getDate() == date)
		{
			employeeServicesOrders.push_back(buffServiceOrder);
		}
	}
	curOrders = employeeServicesOrders;*/
}
#pragma endregion
