#include "mainForm.h"
#include <Windows.h> 
#include <math.h>

using namespace bshop; // Название проекта 
using namespace System;
using namespace System::Windows::Forms;
//MockDatabase db3;
int curID;
std::list<std::map<int, int>> addedEmployee;
std::list<std::map<int, int>> addedClient;
MockDatabase* db3 = MockDatabase::getInstance();
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
}

System::Void bshop::mainForm::updateAvailableTimes()
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

System::Void bshop::mainForm::clientPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	Calendar->MinDate = Calendar->TodayDate;
}

System::Void bshop::mainForm::Calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e)

{
	updateAvailableTimes();
}

System::Void bshop::mainForm::serviceIDCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e)
{
	int serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->SelectedItem->ToString()));
	float cost = db3->getService(serviceID)->getPrice();
	Client* curClient = (Client*)db3->getUser(curID);
	if (db3->getUser(curID)->getStatus() == CLIENT)
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

System::Void bshop::mainForm::updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::list<ServiceOrder*> ServicesOrders = db3->getServiceOrdersList();
	//clientIDCB->Items->Clear();
	employeeIDCB->Items->Clear();
	serviceIDCB->Items->Clear();
	orderInitGrid->Rows->Clear();
	int i = 0;
	for each (ServiceOrder * serviceOrder in ServicesOrders)
	{
		std::string ID = std::to_string(serviceOrder->getID());
		std::string employeeName = db3->getUser(serviceOrder->getEmployeeID())->getName();
		std::string serviceName = db3->getService(serviceOrder->getServiceID())->getName();
		std::string clientName = db3->getUser(serviceOrder->getClientID())->getName();
		std::string cost = std::to_string(serviceOrder->getCost());
		std::string data = serviceOrder->getDate();
		std::string status = serviceOrder->getStatus().Equals(true) ? "Проведён" : "Не проведён";
		std::vector<std::string> v = { ID, serviceName, employeeName,clientName, cost,  status, data };
		orderInitGrid->Rows->Add();
		//int i = orderInitGrid->Rows->Count;
		int k = orderInitGrid->ColumnCount;
		for (int j = 0; j < k; j++)
		{
			orderInitGrid->Rows[i]->Cells[j]->Value = msclr::interop::marshal_as<System::String^>(v[j]);
		}
		i++;
	}

	std::list<Service*> Services = db3->getServiceList();
 	std::list<User*> Users = db3->getUsersList();


	//std::list<std::map<int, std::string>> Users;

	/*std::map<int, std::string> employeeMap;
	std::map<int, std::string> clientMap;
	for each (User * user in Users)
	{
		if (user->getStatus() == EMPLOYEE)
		{
			employeeMap[user->getID()] = user->getName();
		}
		if (user->getStatus() == CLIENT)
		{
			clientMap[user->getID()] = user->getName();
		}
	}
	employeeIDCB->DataSource = employeeMap;*/

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
			buff[employeeIDCB->Items->Count-1] = user->getID();
			addedEmployee.push_back(buff);
		}
		if (user->getStatus() == CLIENT)
		{
			//clientIDCB->Items->Add(msclr::interop::marshal_as<System::String^>(user->getName()));
			std::map<int, int> buff;
			//buff[employeeIDCB->Items->IndexOf(employeeIDCB->Items->Count)] = user->getID();
			buff[employeeIDCB->Items->Count-1] = user->getID();
			addedClient.push_back(buff);
		}
	}

}

System::Void bshop::mainForm::acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	/*std::string date = std::to_string((Calendar->SelectionStart).Day) + "/" +
		std::to_string((Calendar->SelectionStart).Month) + "/" +
		std::to_string((Calendar->SelectionStart).Year);*/
	float cost;
	int	clientID = curID;
	int employeeID;
	int serviceID;
	std::string time;
	std::string date;
	try
	{
		if (availableTimeLB->SelectedItem == NULL ||
			serviceIDCB->Text == ""  ||
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

		//int clientIndex = clientIDCB->SelectedIndex;
		//clientID = findID(clientIndex, false);

		/*serviceID = std::stoi(msclr::interop::marshal_as<std::string>(serviceIDCB->Text));
		employeeID = std::stoi(msclr::interop::marshal_as<std::string>(employeeIDCB->Text));
		clientID = std::stoi(msclr::interop::marshal_as<std::string>(clientIDCB->Text));*/
		cost = std::stoi(msclr::interop::marshal_as<std::string>(costTB->Text));
	}
	catch (std::exception ex)
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	DateTime dateDT((Calendar->SelectionStart).Year, (Calendar->SelectionStart).Month, (Calendar->SelectionStart).Day);
	//TypeDescriptor::GetConverter(dateDT)->ConvertFrom(msclr::interop::marshal_as<System::String^>(date));
	if (db3->getOrdersCount(date) >= 8) 
	{
		MessageBox::Show("На данный день все места забронированы!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else 
	{
		bool status = false;
		if (orderStatusCB->Checked)
		{
			status = true;
		}

		//int ID = std::stoi(msclr::interop::marshal_as<std::string>(oerderID->Text));
		db3->addServiceOrder(date, time, serviceID, employeeID, clientID, cost, status);
		updateAvailableTimes();
		if (db3->getOrdersCount(date) >= 8) 
		{ 
			Calendar->AddBoldedDate(dateDT); 
			Calendar->UpdateBoldedDates();
		}
	}
}

System::Int32 bshop::mainForm::findID(int employeeIndex, bool isEmployee)
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

	/*std::list<std::map<int, int>>::iterator findIter = std::find_if(addedEmployee.begin(), addedEmployee.end(),
		[&employeeIndex](std::map<int, int>* buff)
		{
			return buff[employeeIndex];
		});
	return findIter;*/
}

//int findID(int employeeIndex, bool isEmployee)
//{
//	int res = 0;
//	if (isEmployee) {
//		std::list<std::map<int, int>>::iterator list_it = addedEmployee.begin();
//		std::map<int, int>::iterator map_it = (*list_it).begin();
//		for (; map_it != (*list_it).end(); map_it++)
//		{
//			if (map_it->first == employeeIndex)
//			{
//				res = map_it->second;
//			}
//		}
//	}
//	else
//	{
//		std::list<std::map<int, int>>::iterator list_it = addedClient.begin();
//		std::map<int, int>::iterator map_it = (*list_it).begin();
//		for (; map_it != (*list_it).end(); map_it++)
//		{
//			if (map_it->first == employeeIndex)
//			{
//				res = map_it->second;
//			}
//		}
//	}
//	return res;
//
//	/*std::list<std::map<int, int>>::iterator findIter = std::find_if(addedEmployee.begin(), addedEmployee.end(),
//		[&employeeIndex](std::map<int, int>* buff)
//		{
//			return buff[employeeIndex];
//		});
//	return findIter;*/
//}

System::Void bshop::mainForm::cancelBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void bshop::mainForm::updateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	usersRTB->Clear();
	try
	{
				String^ numberOfUsers = msclr::interop::marshal_as<System::String^>("Number of users: " + std::to_string((db3->numberOfUsers())));
				numberOfUsersLbl->Text = numberOfUsers;
				String^ info = msclr::interop::marshal_as<System::String^>(db3->getUsers());
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
	if (db3->emailIsUnique(email))
		switch (status) {
				case EMPLOYEE:
					if (experience.Equals(NULL)) experience = DEF_WORK_EXPERIENCE;
					if (personalAchievements.empty()) personalAchievements = DEF_PERSONAL_ACHIEVEMENTS;
					db3->addUser(name, sex, date, phonenumber, email, password, status, experience, 
								speciality, personalAchievements);
					break;
				case ADMIN:
					db3->addUser(name, sex, date, phonenumber, email, password, status);
					break;
				case CLIENT:
					db3->addUser(name, sex, date, phonenumber, email, password, status);
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
	int userID = db3->findUser(inputEmail, passwordHash);
	if (userID !=NOT_FOUND)
	{
		menuForm^ form;
		int userStatus = db3->getUserStatus(userID);
		switch (userStatus) {
		case ADMIN:
			form = gcnew menuForm(userID, ADMIN);
			form->Show();
			this->Hide();
			/*curID = userID;
			adminPanel->Visible = true;*/
			break;
		case CLIENT:
			form = gcnew menuForm(userID, CLIENT);
			form->Show();
			this->Hide();
			/*curID = userID;
			clientPanel->Visible = true;*/
			break;
		case EMPLOYEE:
			form = gcnew menuForm(userID, EMPLOYEE);
			form->Show();
			this->Hide(); 
			/*curID = userID;
			employeePanel->Visible = true;*/
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
	db3->writeDatabaseToFile();
}

System::Void bshop::mainForm::loadBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db3->clearListOfUsers();
	db3->readDatabaseFromFile();
}

System::Void bshop::mainForm::deleteSpecificBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ID = std::stoi(msclr::interop::marshal_as<std::string>(deleteByIDTB->Text));
	bool isDelete = db3->deleteSpecificUser(ID);
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
	db3->clearListOfServices();
	db3->readServicesFromFile();
}

System::Void bshop::mainForm::saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	db3->writeServicesToFile();
}

System::Void bshop::mainForm::updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	servicesRTB->Clear();
	try
	{
		String^ info = msclr::interop::marshal_as<System::String^>(db3->getServices());
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
		db3->addService(name, price);
	}
	catch (std::exception ex)
	{
		String^ exception = msclr::interop::marshal_as<System::String^>(ex.what());
		System::Windows::Forms::MessageBox::Show(exception);
	}
}

System::Void bshop::mainForm::updateGrid_Click(System::Object^ sender, System::EventArgs^ e)
{

	std::list<ServiceOrder*> ServicesOrders = db3->getServiceOrdersList();
	std::list<Service*> Services = db3->getServiceList();
	std::list<User*> Users = db3->getUsersList();
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

