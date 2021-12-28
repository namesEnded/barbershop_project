#include "menuForm.h"
#include <Windows.h> 
#include "checkFunctions.h"
#include "MockDatabase.h"
#include "status.h"
MockDatabase* db2 = MockDatabase::getInstance();
std::list<std::map<int, int>> addedEmployee;
std::list<std::map<int, int>> addedClient;

System::Void bshop::menuForm::menuForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	switch (userStatus) {
	case ADMIN:
		outputRTB->Text = "ADMIN";
		break;
	case CLIENT:
		outputRTB->Text = "CLIENT";
		break;
	case EMPLOYEE:
		outputRTB->Text = "EMPLOYEE";
		break;
	default:
		outputRTB->Text = "NONE";
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
	std::list<std::string> times = db3->getOrdersTimes(date);
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
		std::string employeeName = db3->getUser(serviceOrder->getEmployeeID())->getName();
		std::string clientName = db3->getUser(serviceOrder->getClientID())->getName();
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

System::Int32 bshop::menuForm::findID(int employeeIndex, bool isEmployee)
{
	int res = 0;
	if (isEmployee) {
		std::list<std::map<int, int>>::iterator list_it = addedEmployee.begin();
		std::map<int, int>::iterator map_it = (*list_it).begin();
		for (; map_it != (*list_it).end(); map_it++)
		{
			if (map_it->first == employeeIndex)
			{
				res = map_it->second;
			}
		}
	}
	else
	{
		std::list<std::map<int, int>>::iterator list_it = addedClient.begin();
		std::map<int, int>::iterator map_it = (*list_it).begin();
		for (; map_it != (*list_it).end(); map_it++)
		{
			if (map_it->first == employeeIndex)
			{
				res = map_it->second;
			}
		}
	}
	return res;
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
			std::map<int, int> buff;
			//buff[employeeIDCB->Items->IndexOf(userName)] =
			//buff[employeeIDCB->Items->IndexOf(employeeIDCB->Items->Count)] = user->getID();
			buff[employeeIDCB->Items->Count - 1] = user->getID();
			addedEmployee.push_back(buff);
		}
		if (user->getStatus() == CLIENT)
		{
			//clientIDCB->Items->Add(msclr::interop::marshal_as<System::String^>(user->getName()));
			std::map<int, int> buff;
			//buff[employeeIDCB->Items->IndexOf(employeeIDCB->Items->Count)] = user->getID();
			buff[employeeIDCB->Items->Count - 1] = user->getID();
			addedClient.push_back(buff);
		}
	}

}

#pragma endregion

