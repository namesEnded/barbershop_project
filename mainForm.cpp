#include "mainForm.h"
#include <Windows.h> 

using namespace bshop; // Название проекта 
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	bshop::mainForm form;
	Application::Run(% form);
}

System::Void bshop::mainForm::mainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	/*users.push_back(user1);
	users.push_back(user2);*/

	return System::Void();
}

System::Void bshop::mainForm::updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db.getServiceOrdersList();
	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());

		std::string employeeName = db.getUser(serviceOrder->getEmployeeID())->getName();
		std::string serviceName = db.getService(serviceOrder->getServiceID())->getName();
		std::string clientName = db.getUser(serviceOrder->getClientID())->getName();
		std::string cost = std::to_string(serviceOrder->getCost());
		std::string data = serviceOrder->getDate();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, serviceName, employeeName,clientName, cost,  status, data };
		orderInitGrid->Rows->Add();
		int i = orderInitGrid->Rows->Count;
		int k = orderInitGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			orderInitGrid->Rows[i - 1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
	}

	std::list<Service*> Services = db.getServiceList();
	std::list<User*> Users = db.getUsersList();

	for each (Service * service in Services)
	{
		serviceIDCB->Items->Add(service->getID());
	}

	for each (User * user in Users)
	{
		if (user->getStatus() == EMPLOYEE)
		{
			employeeIDCB->Items->Add(user->getID());
		}
		if (user->getStatus() == CLIENT)
		{
			clientIDCB->Items->Add(user->getID());
		}
	}

}

System::Void bshop::mainForm::acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool status;
	if (orderStatusCB->Checked)
	{
		status = true;
		femaleCB->Checked = false;
	}
	else
	{
		status = false;
		maleCB->Checked = false;
	}
	//int ID = std::stoi(msclr::interop::marshal_as<std::string>(oerderID->Text));
	int serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->Text));
	int employeeID = std::stoi(msclr::interop::marshal_as<std::string>(employeeIDCB->Text));
	int	clientID = std::stoi(msclr::interop::marshal_as<std::string>(clientIDCB->Text));
	float cost = std::stoi(msclr::interop::marshal_as<std::string>(costTB->Text));
	std::string date = std::to_string((Calendar->SelectionStart).Day) + "/" + 
					   std::to_string((Calendar->SelectionStart).Month) + "/" +
					   std::to_string((Calendar->SelectionStart).Year);
	db.addServiceOrder(date, serviceID, employeeID, clientID, cost, status);
}

System::Void bshop::mainForm::cancelBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void bshop::mainForm::updateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

	usersRTB->Clear();
	try
	{
				String^ numberOfUsers = msclr::interop::marshal_as<System::String^>("Number of users: " + std::to_string((db.numberOfUsers())));
				numberOfUsersLbl->Text = numberOfUsers;
				String^ info = msclr::interop::marshal_as<System::String^>(db.getUsers());
				usersRTB->AppendText(info);
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}


}

System::Void bshop::mainForm::regBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std:: string name = msclr::interop::marshal_as<std::string>(nameTB->Text);
	bool sex;
	if (maleCB->Checked)
	{
		sex = true;
		femaleCB->Checked = false;
	}
	else
	{
		sex = false;
		maleCB->Checked = false;
	}
	float experience = NULL;
	std::string personalAchievements = "";
	std::string date = msclr::interop::marshal_as<std::string>(dateTB->Text);
	std::string phonenumber = msclr::interop::marshal_as<std::string>(phinenumberTB->Text);
	std::string email = msclr::interop::marshal_as<std::string>(emailTB->Text);
	std::string password = msclr::interop::marshal_as<std::string>(passwordTB->Text);
	std::string statusString = msclr::interop::marshal_as<std::string>(statusCB->Text);
	std::string selectedSpeciality = msclr::interop::marshal_as<std::string>(userTypeCB->Text);
	//short status = std::stoi(statusString);
	userType status = checkSelectedStatus(statusString);
	userSpeciality speciality = checkSelectedSpeciality(selectedSpeciality);
	if (db.emailIsUnique(email))
		switch (status) {
				case EMPLOYEE:
					if (experience.Equals(NULL)) experience = DEF_WORK_EXPERIENCE;
					if (personalAchievements.empty()) personalAchievements = DEF_PERSONAL_ACHIEVEMENTS;
					db.addUser(name, sex, date, phonenumber, email, password, status, experience, 
								speciality, personalAchievements);
					break;
				case ADMIN:
					db.addUser(name, sex, date, phonenumber, email, password, status);
					break;
				case CLIENT:
					db.addUser(name, sex, date, phonenumber, email, password, status);
					break;
				default:
					System::Windows::Forms::MessageBox::Show("There is no such status");
					break;
				}
	else System::Windows::Forms::MessageBox::Show("Пользователь с таким e-mail уже существует");
}



System::Void bshop::mainForm::maleCB_CheckStateChanged(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void bshop::mainForm::femaleCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (maleCB->Checked)
	{
		femaleCB->Checked = false;
	}
}

System::Void bshop::mainForm::maleCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (femaleCB->Checked)
	{
		maleCB->Checked = false;
	}
}

System::Void bshop::mainForm::lgnAcceptBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::hash<std::string> hasher;
	std::string inputEmail= msclr::interop::marshal_as<std::string>(lgnEmailTB->Text);
	std::string inputPassword = msclr::interop::marshal_as<std::string>(lgnPasswordTB->Text);
	size_t passwordHash = hasher(inputPassword);
	int userID = db.findUser(inputEmail, passwordHash);
	if (userID !=NOT_FOUND)
	{
		menuForm^ form;
		int userStatus = db.getUserStatus(userID);
		switch (userStatus) {
		case ADMIN:
			/*form = gcnew menuForm(userID, ADMIN);
			form->Show();
			this->Hide();*/
			adminPanel->Visible = true;
			break;
		case CLIENT:
			/*form = gcnew menuForm(userID, CLIENT);
			form->Show();
			this->Hide();*/
			clientPanel->Visible = true;
			break;
		case EMPLOYEE:
			/*form = gcnew menuForm(userID, EMPLOYEE);
			form->Show();
			this->Hide(); */
			employeePanel->Visible = true;
			break;
		default:
			System::Windows::Forms::MessageBox::Show("Пользователь имеет неизвестный статус");
			break;
		}
	}



}

void checkCalendarDays() 
{

}

System::Void bshop::mainForm::writeDataBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db.writeDatabaseToFile();
}

System::Void bshop::mainForm::loadBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db.clearListOfUsers();
	db.readDatabaseFromFile();
}

System::Void bshop::mainForm::deleteSpecificBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ID = std::stoi(msclr::interop::marshal_as<std::string>(deleteByIDTB->Text));
	bool isDelete = db.deleteSpecificUser(ID);
	updateBtn_Click(sender, e);
	if (isDelete)
	{
		MessageBox::Show("Пользователь удалён!", "Успех!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		MessageBox::Show("Ошибка удаления файла", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

System::Void bshop::mainForm::loadServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db.clearListOfServices();
	db.readServicesFromFile();
}

System::Void bshop::mainForm::saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db.writeServicesToFile();
}

System::Void bshop::mainForm::updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	servicesRTB->Clear();
	try
	{
		String^ info = msclr::interop::marshal_as<System::String^>(db.getServices());
		servicesRTB->AppendText(info);
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}
}

System::Void bshop::mainForm::addServiceBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = msclr::interop::marshal_as<std::string>(serviceNameTB->Text);
	int price =std::stoi(msclr::interop::marshal_as<std::string>(servicePriceTB->Text));
	try
	{
		db.addService(name, price);
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}
}

System::Void bshop::mainForm::updateGrid_Click(System::Object^ sender, System::EventArgs^ e)
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
			usersDataGrid->Rows[i-1]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j-1]);
		}
	}

	for each (Service * service in Services)
	{
		std::string ID = std::to_string(service->getID());
		std::string Name = service->getName();

		std::vector<std::string> v = { ID, Name};
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
		std::string employeeName = db.getUser(serviceOrder->getEmployeeID())->getName();
		std::string clientName = db.getUser(serviceOrder->getClientID())->getName();
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

