#include "menuForm.h"
#include <Windows.h> 
#include "checkFunctions.h"
#include "MockDatabase.h"
#include "status.h"

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

System::Void bshop::menuForm::updateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void bshop::menuForm::updateAvailableTimes(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void bshop::menuForm::addUserBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db.getServiceOrdersList();
	std::list<Service*> Services = db.getServiceList();
	std::list<User*> Users = db.getUsersList();
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
		std::string employeeName = db.getUser(serviceOrder->getEmployeeID())->getName();
		std::string clientName = db.getUser(serviceOrder->getClientID())->getName();
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
