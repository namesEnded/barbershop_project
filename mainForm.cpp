#include "mainForm.h"
#include <Windows.h> 
#include <math.h>

using namespace bshop; // Название проекта 
using namespace System;
using namespace System::Windows::Forms;
static std::map<int, int> indexOfEmployees;
static std::map<int, int> indexOfClients;
//MockDatabase db3;
int curID;
MockDatabase* db3 = MockDatabase::getInstance();

[STAThreadAttribute]
void main(array<String^>^ args) {
	std::setlocale(LC_ALL, "Russian_Russia.1251");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	bshop::mainForm form;
	Application::Run(% form);
}

System::Void bshop::mainForm::mainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	addUserPanel->Visible = false;
	addUserPanel->Enabled = false;
	lgnPanel->Visible = true;
	lgnPanel->Enabled = true;
	db3->readDatabaseFromFile();
	db3->readServicesFromFile();
	db3->readServicesOrdersFromFile();
	/*users.push_back(user1);
	users.push_back(user2);*/
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
		adminForm^ adminNewForm;
		clientForm^ clientNewForm;
		employeeForm^ employeeNewForm;
		int userStatus = db3->getUser(userID)->getStatus();

		switch (userStatus) {
		case ADMIN:
			adminNewForm = gcnew adminForm(userID, ADMIN);
			adminNewForm->Show();
			this->Hide();
			/*curID = userID;
			adminPanel->Visible = true;*/
			break;
		case CLIENT:
			clientNewForm = gcnew clientForm(userID, CLIENT);
			clientNewForm->Show();
			this->Hide();
			/*curID = userID;
			clientPanel->Visible = true;*/
			break;
		case EMPLOYEE:
			employeeNewForm = gcnew employeeForm(userID, EMPLOYEE);
			employeeNewForm->Show();
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


System::Void bshop::mainForm::ragBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	lgnPanel->Visible = false;
	lgnPanel->Enabled = false;
	addUserPanel->Visible = true;
	addUserPanel->Enabled = true;
}

System::Void bshop::mainForm::addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e)
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
	//std::string statusString = msclr::interop::marshal_as<std::string>(addUserTypeCB->Text);

	if (name == "" || email == "" || password == "")
	{
		MessageBox::Show("Есть пустые поля!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	userType status = CLIENT;
	if (db3->emailIsUnique(email))
	{
		db3->addUser(name, sex, date, phonenumber, email, password, status);
		db3->writeDatabaseToFile();
	}
	else System::Windows::Forms::MessageBox::Show("Пользователь с таким e-mail уже существует");

	lgnPanel->Visible = true;
	lgnPanel->Enabled = true;
	addUserPanel->Visible = false;
	addUserPanel->Enabled = false;
}

System::Void bshop::mainForm::mainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Application::Exit();
}
