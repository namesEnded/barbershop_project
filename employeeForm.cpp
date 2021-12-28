#include "employeeForm.h"

MockDatabase* DBEmployeeForm = MockDatabase::getInstance();
Employee* currentEmployeeEmployeeForm;
std::list<ServiceOrder*> currentOrdersEmployeeForm;

System::Void bshop::employeeForm::employeeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	employeeCalendar->SetDate(employeeCalendar->TodayDate);
	updateTimetable(employeeCalendar, selectedDateEmployeeTB);
	updateOrdersGrid(currentOrdersEmployeeForm);
	orderEmployeeIdCB->Items->Clear();
	orderEmployeeIdCB->Items->Clear();
	currentEmployeeEmployeeForm = (Employee*)DBEmployeeForm->getUser(this->ID);
	nameEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployeeEmployeeForm->getName());
	specialityEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployeeEmployeeForm->getSpeciality());
	achievementsEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(currentEmployeeEmployeeForm->getPersonalAchievements());
	for each (int ID in DBEmployeeForm->getOrdersID(currentEmployeeEmployeeForm))
	{
		orderEmployeeIdCB->Items->Add(ID);
	}
}

System::Void bshop::employeeForm::updateOrdersGrid(std::list<ServiceOrder*> orders)
{
	employeeDataGrid->Rows->Clear();
	int i = 0;
	for each (ServiceOrder * serviceOrder in orders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string data = serviceOrder->getDate();

		Service* selectedService = (Service*)DBEmployeeForm->getService(serviceOrder->getServiceID());
		std::string serviceName = selectedService != nullptr ? selectedService->getName() :
			"УСЛУГА УДАЛЕНА, ID:" + std::to_string(serviceOrder->getServiceID());

		Client* selectedClient = (Client*)DBEmployeeForm->getUser(serviceOrder->getClientID());
		std::string clientName = selectedClient != nullptr ? selectedClient->getName() :
			"ПОЛЬЗОВАТЕЛЬ УДАЛЁН, ID:" + std::to_string(serviceOrder->getClientID());

		std::string cost = std::to_string(serviceOrder->getCost());
		std::string time = serviceOrder->getTime();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Выпонен" : "Не выполнен";
		std::vector<std::string> v = { ID, data, serviceName, clientName, cost, time, status };
		employeeDataGrid->Rows->Add();
		int k = employeeDataGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			employeeDataGrid->Rows[i]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
		i++;
	}
}

#pragma region Работа с панелью рабочего
System::Void bshop::employeeForm::exitFromEmployeePanelBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	DBEmployeeForm->writeServicesOrdersToFile();
	this->Close();
}

System::Void bshop::employeeForm::updateTimetable(MonthCalendar^ employeeCalendar, TextBox^ selectedDateEmployeeTB)
{
	std::string time;
	std::string date;
	date = std::to_string((employeeCalendar->SelectionStart).Year) + "-" +
		std::to_string((employeeCalendar->SelectionStart).Month) + "-" +
		std::to_string((employeeCalendar->SelectionStart).Day);
	selectedDateEmployeeTB->Text = "";
	selectedDateEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(date);
	std::list<ServiceOrder*> employeeServicesOrders;
	std::list<int> employeeServicesOrdersID = DBEmployeeForm->getOrdersID(currentEmployeeEmployeeForm);
	for each (int ID in employeeServicesOrdersID)
	{
		ServiceOrder* buffServiceOrder = DBEmployeeForm->getServiceOrder(ID);
		if (buffServiceOrder->getDate() == date)
		{
			employeeServicesOrders.push_back(buffServiceOrder);
		}
	}
	currentOrdersEmployeeForm = employeeServicesOrders;
}

System::Void bshop::employeeForm::employeeCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	updateTimetable(employeeCalendar, selectedDateEmployeeTB);
}

System::Void bshop::employeeForm::orderEmployeeIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	ServiceOrder* buffOrder = DBEmployeeForm->getServiceOrder((int)(orderEmployeeIdCB->SelectedItem));

	orderEmployeeCheckCB->Checked = buffOrder->getStatus();
}

System::Void bshop::employeeForm::orderEmployeeCheckCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	ServiceOrder* buffOrder = DBEmployeeForm->getServiceOrder((int)(orderEmployeeIdCB->SelectedItem));
	buffOrder->setStatus(orderEmployeeCheckCB->Checked);
}

System::Void bshop::employeeForm::updateOrdersGridBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateOrdersGrid(currentOrdersEmployeeForm);

}

System::Void bshop::employeeForm::employeeCalendar_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)
{
	/*std::string time;
	std::string date;
	date = std::to_string((Calendar->SelectionStart).Year) + "-" +
			std::to_string((Calendar->SelectionStart).Month) + "-" +
			std::to_string((Calendar->SelectionStart).Day);
	selectedDateEmployeeTB->Text = "";
	selectedDateEmployeeTB->Text = msclr::interop::marshal_as<System::String^>(date);
	std::list<ServiceOrder*> employeeServicesOrders;
	std::list<int> employeeServicesOrdersID = DBEmployeeForm->getOrdersID(currentEmployeeEmployeeForm);
	for each (int ID in employeeServicesOrdersID)
	{
		ServiceOrder* buffServiceOrder = DBEmployeeForm->getServiceOrder(ID);
		if (buffServiceOrder->getDate() == date)
		{
			employeeServicesOrders.push_back(buffServiceOrder);
		}
	}
	currentOrdersEmployeeForm = employeeServicesOrders;*/
}
#pragma endregion

