#include "clientForm.h"


MockDatabase* DBClientForm = MockDatabase::getInstance();
static std::map<int, int> indexOfEmployeesMenu;
static std::map<int, int> indexOfClientsMenu;

System::Int32 bshop::clientForm::findID(int Index, bool isEmployee)
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



System::Void bshop::clientForm::clientForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	Calendar->SetDate(Calendar->TodayDate);
	Calendar->MinDate = Calendar->TodayDate;
	updateServiceOrderBtn_Click(sender, e);
	ClientNameLbl->Text = msclr::interop::marshal_as<System::String^>(DBClientForm->getUser(ID)->getName());
}


#pragma region Работа с панелью клиента

System::Void bshop::clientForm::updateAvailableTimes()
{
	availableTimeLB->Items->Clear();
	std::string date = std::to_string((Calendar->SelectionStart).Year) + "-" +
		std::to_string((Calendar->SelectionStart).Month) + "-" +
		std::to_string((Calendar->SelectionStart).Day);
	std::list<std::string> times = DBClientForm->getOrdersTimes(date);
	if (times.size() == 0)
	{
		timeStatusLbl->Text = "Всё забронировано!";
	}
	for each (std::string time in times)
	{
		availableTimeLB->Items->Add(msclr::interop::marshal_as<System::String^>(time));
	}
}


System::Void bshop::clientForm::acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*std::string date = std::to_string((Calendar->SelectionStart).Day) + "/" +
		std::to_string((Calendar->SelectionStart).Month) + "/" +
		std::to_string((Calendar->SelectionStart).Year);*/
	double cost;
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
		cost = std::stod(msclr::interop::marshal_as<std::string>(costTB->Text));
	}
	catch (std::exception ex)
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	DateTime dateDT((Calendar->SelectionStart).Year, (Calendar->SelectionStart).Month, (Calendar->SelectionStart).Day);
	if (DBClientForm->getOrdersCount(date) >= 8)
	{
		MessageBox::Show("На данный день все места забронированы!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else
	{
		DBClientForm->addServiceOrder(date, time, serviceID, employeeID, clientID, cost, false);
		updateAvailableTimes();
		if (DBClientForm->getOrdersCount(date) >= 8)
		{
			Calendar->AddBoldedDate(dateDT);
			Calendar->UpdateBoldedDates();
		}
	}
	DBClientForm->writeServicesOrdersToFile();
}

System::Void bshop::clientForm::exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e)
{
	DBClientForm->writeServicesOrdersToFile();
	this->Close();
}


System::Void bshop::clientForm::Calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	updateAvailableTimes();
}

System::Void bshop::clientForm::serviceIDCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	int serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->SelectedItem->ToString()));
	double cost = DBClientForm->getService(serviceID)->getPrice();
	Client* curClient = (Client*)DBClientForm->getUser(this->ID);
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

System::Void bshop::clientForm::updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = DBClientForm->getServiceOrdersList();
	employeeIDCB->Items->Clear();
	serviceIDCB->Items->Clear();
	orderInitGrid->Rows->Clear();
	int i = 0;

	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{

		std::string ID = std::to_string(serviceOrder->getID());
		Employee* selectedEmployee = (Employee*)DBClientForm->getUser(serviceOrder->getEmployeeID());
		std::string employeeName = selectedEmployee != nullptr ? selectedEmployee->getName() :
			"ПОЛЬЗОВАТЕЛЬ УДАЛЁН, ID:" + std::to_string(serviceOrder->getEmployeeID());
		Client* selectedClient = (Client*)DBClientForm->getUser(serviceOrder->getClientID());
		std::string clientName = selectedClient != nullptr ? selectedClient->getName() :
			"ПОЛЬЗОВАТЕЛЬ УДАЛЁН, ID:" + std::to_string(serviceOrder->getClientID());

		Service* selectedService = (Service*)DBClientForm->getService(serviceOrder->getServiceID());
		std::string serviceName = selectedService != nullptr ? selectedService->getName() :
			"УСЛУГА УДАЛЕНА, ID:" + std::to_string(serviceOrder->getServiceID());

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

	std::list<Service*> Services = DBClientForm->getServiceList();
	std::list<User*> Users = DBClientForm->getUsersList();

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
