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

#pragma region Aphonin
System::Void bshop::mainForm::mainForm_Load(System::Object^ sender, System::EventArgs^ e)
{

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


}

System::Void bshop::mainForm::regBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
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

}
#pragma endregion
