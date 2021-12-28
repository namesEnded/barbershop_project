#include "mainForm.h"
#include <Windows.h> 
#include "checkFunctions.h"

using namespace bshop; // Название проекта 
using namespace System;
using namespace System::Windows::Forms;
MockDatabase list;

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

System::Void bshop::mainForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void bshop::mainForm::acceptBtn_Click(System::Object^ sender, System::EventArgs^ e)
{

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
		String^ numberOfUsers = msclr::interop::marshal_as<System::String^>("Number of users: " + std::to_string((list.numberOfUsers())));
		numberOfUsersLbl->Text = numberOfUsers;
		String^ info = msclr::interop::marshal_as<System::String^>(list.getUsers());
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
	std::string name = msclr::interop::marshal_as<std::string>(nameTB->Text);
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
	if (list.emailIsUnique(email))
		switch (status) {
		case EMPLOYEE:
			if (experience.Equals(NULL)) experience = DEF_WORK_EXPERIENCE;
			if (personalAchievements.empty()) personalAchievements = DEF_PERSONAL_ACHIEVEMENTS;
			list.addUser(name, sex, date, phonenumber, email, password, status, experience,
				speciality, personalAchievements);
			break;
		case ADMIN:
			list.addUser(name, sex, date, phonenumber, email, password, status);
			break;
		case CLIENT:
			list.addUser(name, sex, date, phonenumber, email, password, status);
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
	std::string inputEmail = msclr::interop::marshal_as<std::string>(lgnEmailTB->Text);
	std::string inputPassword = msclr::interop::marshal_as<std::string>(lgnPasswordTB->Text);
	size_t passwordHash = hasher(inputPassword);
	int userID = list.findUser(inputEmail, passwordHash);
	if (userID != NOT_FOUND)
	{
		int userStatus = list.getUserStatus(userID);
		switch (userStatus) {
		case ADMIN:
			adminPanel->Visible = true;
			break;
		case CLIENT:
			clientPanel->Visible = true;
			break;
		case EMPLOYEE:
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
}

System::Void bshop::mainForm::loadBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void bshop::mainForm::deleteSpecificBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int ID = std::stoi(msclr::interop::marshal_as<std::string>(deleteByIDTB->Text));
	bool isDelete = list.deleteSpecificUser(ID);
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

