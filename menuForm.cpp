#include "menuForm.h"
#include <Windows.h> 
#include "checkFunctions.h"
#include "MockDatabase.h"
#include "status.h"
MockDatabase* db2 = MockDatabase::getInstance();
Employee* currentEmployee;
std::list<ServiceOrder*> curOrders;

System::Void bshop::menuForm::menuForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	switch (userStatus) {
	case ADMIN:
		//outputRTB->Text = "ADMIN";
		break;
	case CLIENT:
		//outputRTB->Text = "CLIENT";
		clientPanel->Visible = true;
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
		for (const auto& kv : indexOfEmployees) {
			if (kv.first == Index)
				return res = kv.second;
		}
	}
	else
	{
		for (const auto& kv : indexOfClients) {
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
	Calendar->MinDate = Calendar->TodayDate;
}

#pragma region Работа с панелью клиента

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
		if (availableTimeLB->SelectedItem == NULL ||
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
}

System::Void bshop::menuForm::exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
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
			indexOfEmployees[(employeeIDCB->Items->Count - 1)] = user->getID();
		}
		if (user->getStatus() == CLIENT)
		{
			indexOfClients[(employeeIDCB->Items->Count - 1)] = user->getID();
		}
	}

}

#pragma endregion
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


