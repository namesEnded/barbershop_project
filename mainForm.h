//Timurziev
#ifndef MAINFORM_H
#define MAINFORM_H
#include "menuForm.h"
#include "adminForm.h"
#include "clientForm.h"
#include "employeeForm.h"
#include "MockDatabase.h"
#include "checkFunctions.h"

namespace bshop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


























	private: System::Windows::Forms::Panel^ lgnPanel;







	private: System::Windows::Forms::Label^ enterLbl;
	private: System::Windows::Forms::Button^ lgnAcceptBtn;
	private: System::Windows::Forms::TextBox^ lgnPasswordTB;


	private: System::Windows::Forms::TextBox^ lgnEmailTB;
	private: System::Windows::Forms::Label^ lgnPasswordLbl;
	private: System::Windows::Forms::Label^ lgnEmailLbl;
	private: System::Windows::Forms::Button^ ragBtn;
	private: System::Windows::Forms::Panel^ userRegistrationPanel;
	private: System::Windows::Forms::MaskedTextBox^ addUserPhonenumberTB;
	private: System::Windows::Forms::MaskedTextBox^ addUserDateTB;
	private: System::Windows::Forms::GroupBox^ addUserSexGP;
	private: System::Windows::Forms::RadioButton^ addUserFemaleRB;
	private: System::Windows::Forms::RadioButton^ addUserMaleRB;
	private: System::Windows::Forms::Button^ addUserFormBtn;
	private: System::Windows::Forms::Label^ addPassLbl;
	private: System::Windows::Forms::Label^ addEmailLbl;
	private: System::Windows::Forms::Label^ addPhonenumberLbl;
	private: System::Windows::Forms::Label^ addDateLbl;
	private: System::Windows::Forms::TextBox^ addUserPasswordTB;
	private: System::Windows::Forms::TextBox^ addUserMailTB;
	private: System::Windows::Forms::TextBox^ addUserNameTB;
	private: System::Windows::Forms::Label^ addUser;































































































































































	private:

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		//MockDatabase* db = MockDatabase::getInstance();
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ addNameLbl;
			this->lgnPanel = (gcnew System::Windows::Forms::Panel());
			this->ragBtn = (gcnew System::Windows::Forms::Button());
			this->lgnPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->lgnEmailLbl = (gcnew System::Windows::Forms::Label());
			this->enterLbl = (gcnew System::Windows::Forms::Label());
			this->lgnAcceptBtn = (gcnew System::Windows::Forms::Button());
			this->lgnPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->lgnEmailTB = (gcnew System::Windows::Forms::TextBox());
			this->userRegistrationPanel = (gcnew System::Windows::Forms::Panel());
			this->addUserPhonenumberTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addUserDateTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addUserSexGP = (gcnew System::Windows::Forms::GroupBox());
			this->addUserFemaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->addUserMaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->addUserFormBtn = (gcnew System::Windows::Forms::Button());
			this->addPassLbl = (gcnew System::Windows::Forms::Label());
			this->addEmailLbl = (gcnew System::Windows::Forms::Label());
			this->addPhonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->addDateLbl = (gcnew System::Windows::Forms::Label());
			this->addUserPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserMailTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserNameTB = (gcnew System::Windows::Forms::TextBox());
			this->addUser = (gcnew System::Windows::Forms::Label());
			addNameLbl = (gcnew System::Windows::Forms::Label());
			this->lgnPanel->SuspendLayout();
			this->userRegistrationPanel->SuspendLayout();
			this->addUserSexGP->SuspendLayout();
			this->SuspendLayout();
			// 
			// addNameLbl
			// 
			addNameLbl->AutoSize = true;
			addNameLbl->Location = System::Drawing::Point(98, 51);
			addNameLbl->Name = L"addNameLbl";
			addNameLbl->Size = System::Drawing::Size(35, 17);
			addNameLbl->TabIndex = 27;
			addNameLbl->Text = L"Имя";
			// 
			// lgnPanel
			// 
			this->lgnPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lgnPanel->Controls->Add(this->ragBtn);
			this->lgnPanel->Controls->Add(this->lgnPasswordLbl);
			this->lgnPanel->Controls->Add(this->lgnEmailLbl);
			this->lgnPanel->Controls->Add(this->enterLbl);
			this->lgnPanel->Controls->Add(this->lgnAcceptBtn);
			this->lgnPanel->Controls->Add(this->lgnPasswordTB);
			this->lgnPanel->Controls->Add(this->lgnEmailTB);
			this->lgnPanel->Location = System::Drawing::Point(5, 4);
			this->lgnPanel->Name = L"lgnPanel";
			this->lgnPanel->Size = System::Drawing::Size(396, 436);
			this->lgnPanel->TabIndex = 14;
			this->lgnPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::panel3_Paint);
			// 
			// ragBtn
			// 
			this->ragBtn->Location = System::Drawing::Point(80, 234);
			this->ragBtn->Name = L"ragBtn";
			this->ragBtn->Size = System::Drawing::Size(94, 23);
			this->ragBtn->TabIndex = 6;
			this->ragBtn->Text = L"Регистрация";
			this->ragBtn->UseVisualStyleBackColor = true;
			this->ragBtn->Click += gcnew System::EventHandler(this, &mainForm::ragBtn_Click);
			// 
			// lgnPasswordLbl
			// 
			this->lgnPasswordLbl->AutoSize = true;
			this->lgnPasswordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->lgnPasswordLbl->Location = System::Drawing::Point(77, 204);
			this->lgnPasswordLbl->Name = L"lgnPasswordLbl";
			this->lgnPasswordLbl->Size = System::Drawing::Size(58, 17);
			this->lgnPasswordLbl->TabIndex = 5;
			this->lgnPasswordLbl->Text = L"Password";
			this->lgnPasswordLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lgnEmailLbl
			// 
			this->lgnEmailLbl->AutoSize = true;
			this->lgnEmailLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->lgnEmailLbl->Location = System::Drawing::Point(95, 180);
			this->lgnEmailLbl->Name = L"lgnEmailLbl";
			this->lgnEmailLbl->Size = System::Drawing::Size(40, 17);
			this->lgnEmailLbl->TabIndex = 4;
			this->lgnEmailLbl->Text = L"E-mail";
			// 
			// enterLbl
			// 
			this->enterLbl->AutoSize = true;
			this->enterLbl->Font = (gcnew System::Drawing::Font(L"Agency FB", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterLbl->Location = System::Drawing::Point(119, 99);
			this->enterLbl->Name = L"enterLbl";
			this->enterLbl->Size = System::Drawing::Size(147, 77);
			this->enterLbl->TabIndex = 3;
			this->enterLbl->Text = L"LOGIN";
			this->enterLbl->Click += gcnew System::EventHandler(this, &mainForm::enterLbl_Click);
			// 
			// lgnAcceptBtn
			// 
			this->lgnAcceptBtn->Location = System::Drawing::Point(191, 234);
			this->lgnAcceptBtn->Name = L"lgnAcceptBtn";
			this->lgnAcceptBtn->Size = System::Drawing::Size(94, 23);
			this->lgnAcceptBtn->TabIndex = 2;
			this->lgnAcceptBtn->Text = L"Войти";
			this->lgnAcceptBtn->UseVisualStyleBackColor = true;
			this->lgnAcceptBtn->Click += gcnew System::EventHandler(this, &mainForm::lgnAcceptBtn_Click);
			// 
			// lgnPasswordTB
			// 
			this->lgnPasswordTB->Location = System::Drawing::Point(141, 204);
			this->lgnPasswordTB->Name = L"lgnPasswordTB";
			this->lgnPasswordTB->Size = System::Drawing::Size(100, 20);
			this->lgnPasswordTB->TabIndex = 1;
			// 
			// lgnEmailTB
			// 
			this->lgnEmailTB->Location = System::Drawing::Point(141, 177);
			this->lgnEmailTB->Name = L"lgnEmailTB";
			this->lgnEmailTB->Size = System::Drawing::Size(100, 20);
			this->lgnEmailTB->TabIndex = 0;
			// 
			// userRegistrationPanel
			// 
			this->userRegistrationPanel->Controls->Add(this->addUserPhonenumberTB);
			this->userRegistrationPanel->Controls->Add(this->addUserDateTB);
			this->userRegistrationPanel->Controls->Add(this->addUserSexGP);
			this->userRegistrationPanel->Controls->Add(this->addUserFormBtn);
			this->userRegistrationPanel->Controls->Add(this->addPassLbl);
			this->userRegistrationPanel->Controls->Add(this->addEmailLbl);
			this->userRegistrationPanel->Controls->Add(this->addPhonenumberLbl);
			this->userRegistrationPanel->Controls->Add(this->addDateLbl);
			this->userRegistrationPanel->Controls->Add(addNameLbl);
			this->userRegistrationPanel->Controls->Add(this->addUserPasswordTB);
			this->userRegistrationPanel->Controls->Add(this->addUserMailTB);
			this->userRegistrationPanel->Controls->Add(this->addUserNameTB);
			this->userRegistrationPanel->Controls->Add(this->addUser);
			this->userRegistrationPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->userRegistrationPanel->Location = System::Drawing::Point(12, 12);
			this->userRegistrationPanel->Name = L"userRegistrationPanel";
			this->userRegistrationPanel->Size = System::Drawing::Size(374, 399);
			this->userRegistrationPanel->TabIndex = 27;
			// 
			// addUserPhonenumberTB
			// 
			this->addUserPhonenumberTB->Location = System::Drawing::Point(141, 176);
			this->addUserPhonenumberTB->Mask = L"(999) 000-0000";
			this->addUserPhonenumberTB->Name = L"addUserPhonenumberTB";
			this->addUserPhonenumberTB->Size = System::Drawing::Size(124, 24);
			this->addUserPhonenumberTB->TabIndex = 28;
			// 
			// addUserDateTB
			// 
			this->addUserDateTB->Location = System::Drawing::Point(141, 146);
			this->addUserDateTB->Mask = L"00/00/0000";
			this->addUserDateTB->Name = L"addUserDateTB";
			this->addUserDateTB->Size = System::Drawing::Size(124, 24);
			this->addUserDateTB->TabIndex = 28;
			this->addUserDateTB->ValidatingType = System::DateTime::typeid;
			// 
			// addUserSexGP
			// 
			this->addUserSexGP->Controls->Add(this->addUserFemaleRB);
			this->addUserSexGP->Controls->Add(this->addUserMaleRB);
			this->addUserSexGP->Location = System::Drawing::Point(88, 78);
			this->addUserSexGP->Name = L"addUserSexGP";
			this->addUserSexGP->Size = System::Drawing::Size(175, 58);
			this->addUserSexGP->TabIndex = 41;
			this->addUserSexGP->TabStop = false;
			this->addUserSexGP->Text = L"Пол";
			// 
			// addUserFemaleRB
			// 
			this->addUserFemaleRB->AutoSize = true;
			this->addUserFemaleRB->Location = System::Drawing::Point(69, 33);
			this->addUserFemaleRB->Name = L"addUserFemaleRB";
			this->addUserFemaleRB->Size = System::Drawing::Size(82, 21);
			this->addUserFemaleRB->TabIndex = 40;
			this->addUserFemaleRB->TabStop = true;
			this->addUserFemaleRB->Text = L"Женский";
			this->addUserFemaleRB->UseVisualStyleBackColor = true;
			// 
			// addUserMaleRB
			// 
			this->addUserMaleRB->AutoSize = true;
			this->addUserMaleRB->Location = System::Drawing::Point(69, 13);
			this->addUserMaleRB->Name = L"addUserMaleRB";
			this->addUserMaleRB->Size = System::Drawing::Size(84, 21);
			this->addUserMaleRB->TabIndex = 39;
			this->addUserMaleRB->TabStop = true;
			this->addUserMaleRB->Text = L"Мужской";
			this->addUserMaleRB->UseVisualStyleBackColor = true;
			// 
			// addUserFormBtn
			// 
			this->addUserFormBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addUserFormBtn->Location = System::Drawing::Point(141, 266);
			this->addUserFormBtn->Name = L"addUserFormBtn";
			this->addUserFormBtn->Size = System::Drawing::Size(124, 23);
			this->addUserFormBtn->TabIndex = 34;
			this->addUserFormBtn->Text = L"Регистрация";
			this->addUserFormBtn->UseVisualStyleBackColor = true;
			this->addUserFormBtn->Click += gcnew System::EventHandler(this, &mainForm::addUserFormBtn_Click);
			// 
			// addPassLbl
			// 
			this->addPassLbl->AutoSize = true;
			this->addPassLbl->Location = System::Drawing::Point(80, 239);
			this->addPassLbl->Name = L"addPassLbl";
			this->addPassLbl->Size = System::Drawing::Size(55, 17);
			this->addPassLbl->TabIndex = 32;
			this->addPassLbl->Text = L"Пароль";
			// 
			// addEmailLbl
			// 
			this->addEmailLbl->AutoSize = true;
			this->addEmailLbl->Location = System::Drawing::Point(88, 209);
			this->addEmailLbl->Name = L"addEmailLbl";
			this->addEmailLbl->Size = System::Drawing::Size(45, 17);
			this->addEmailLbl->TabIndex = 31;
			this->addEmailLbl->Text = L"e-mail";
			// 
			// addPhonenumberLbl
			// 
			this->addPhonenumberLbl->AutoSize = true;
			this->addPhonenumberLbl->Location = System::Drawing::Point(21, 179);
			this->addPhonenumberLbl->Name = L"addPhonenumberLbl";
			this->addPhonenumberLbl->Size = System::Drawing::Size(114, 17);
			this->addPhonenumberLbl->TabIndex = 30;
			this->addPhonenumberLbl->Text = L"Номер телефона";
			// 
			// addDateLbl
			// 
			this->addDateLbl->AutoSize = true;
			this->addDateLbl->Location = System::Drawing::Point(30, 149);
			this->addDateLbl->Name = L"addDateLbl";
			this->addDateLbl->Size = System::Drawing::Size(105, 17);
			this->addDateLbl->TabIndex = 29;
			this->addDateLbl->Text = L"Дата рождения";
			// 
			// addUserPasswordTB
			// 
			this->addUserPasswordTB->Location = System::Drawing::Point(141, 236);
			this->addUserPasswordTB->Name = L"addUserPasswordTB";
			this->addUserPasswordTB->Size = System::Drawing::Size(124, 24);
			this->addUserPasswordTB->TabIndex = 25;
			// 
			// addUserMailTB
			// 
			this->addUserMailTB->Location = System::Drawing::Point(141, 206);
			this->addUserMailTB->Name = L"addUserMailTB";
			this->addUserMailTB->Size = System::Drawing::Size(124, 24);
			this->addUserMailTB->TabIndex = 24;
			// 
			// addUserNameTB
			// 
			this->addUserNameTB->Location = System::Drawing::Point(141, 48);
			this->addUserNameTB->Name = L"addUserNameTB";
			this->addUserNameTB->Size = System::Drawing::Size(124, 24);
			this->addUserNameTB->TabIndex = 19;
			// 
			// addUser
			// 
			this->addUser->AutoSize = true;
			this->addUser->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUser->Location = System::Drawing::Point(125, 11);
			this->addUser->Name = L"addUser";
			this->addUser->Size = System::Drawing::Size(138, 25);
			this->addUser->TabIndex = 37;
			this->addUser->Text = L"Регистрация";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 420);
			this->Controls->Add(this->lgnPanel);
			this->Controls->Add(this->userRegistrationPanel);
			this->MaximizeBox = false;
			this->Name = L"mainForm";
			this->ShowIcon = false;
			this->Text = L"Вход";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &mainForm::mainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->lgnPanel->ResumeLayout(false);
			this->lgnPanel->PerformLayout();
			this->userRegistrationPanel->ResumeLayout(false);
			this->userRegistrationPanel->PerformLayout();
			this->addUserSexGP->ResumeLayout(false);
			this->addUserSexGP->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void enterLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lgnAcceptBtn_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void availableTime_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clientPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void clientIDFromOrderLbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void clientIDCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ragBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void mainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
#endif MAINFORM_H