#pragma once

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
			//
			//TODO: добавьте код конструктора
			//
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












	private: System::Windows::Forms::Button^ updateBtn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ statusLbl;
	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::Label^ phnumberLbl;
	private: System::Windows::Forms::Label^ dateLbl;
	private: System::Windows::Forms::Label^ sexLbl;
	private: System::Windows::Forms::ComboBox^ statusCB;

	private: System::Windows::Forms::TextBox^ passwordTB;
	private: System::Windows::Forms::TextBox^ emailTB;
	private: System::Windows::Forms::TextBox^ phinenumberTB;
	private: System::Windows::Forms::TextBox^ dateTB;
	private: System::Windows::Forms::CheckBox^ femaleCB;
	private: System::Windows::Forms::CheckBox^ maleCB;
	private: System::Windows::Forms::TextBox^ nameTB;
	private: System::Windows::Forms::Button^ regBtn;
	private: System::Windows::Forms::ComboBox^ userTypeCB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ regLbl;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ devOutputLbl;
	private: System::Windows::Forms::RichTextBox^ usersRTB;
	private: System::Windows::Forms::Label^ numberOfUsersLbl;
	private: System::Windows::Forms::Panel^ lgnPanel;
	private: System::Windows::Forms::Panel^ adminPanel;
	private: System::Windows::Forms::Panel^ clientPanel;
	private: System::Windows::Forms::Panel^ employeePanel;




	private: System::Windows::Forms::Label^ enterLbl;
	private: System::Windows::Forms::Button^ lgnAcceptBtn;
	private: System::Windows::Forms::TextBox^ lgnPasswordTB;


	private: System::Windows::Forms::TextBox^ lgnEmailTB;
	private: System::Windows::Forms::Label^ lgnPasswordLbl;
	private: System::Windows::Forms::Label^ lgnEmailLbl;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ writeDataBtn;
	private: System::Windows::Forms::Button^ loadBtn;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ deleteByIDTB;
	private: System::Windows::Forms::Button^ deleteSpecificBtn;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ nameLbl;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->regLbl = (gcnew System::Windows::Forms::Label());
			this->userTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->regBtn = (gcnew System::Windows::Forms::Button());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->phnumberLbl = (gcnew System::Windows::Forms::Label());
			this->dateLbl = (gcnew System::Windows::Forms::Label());
			this->sexLbl = (gcnew System::Windows::Forms::Label());
			this->statusCB = (gcnew System::Windows::Forms::ComboBox());
			this->passwordTB = (gcnew System::Windows::Forms::TextBox());
			this->emailTB = (gcnew System::Windows::Forms::TextBox());
			this->phinenumberTB = (gcnew System::Windows::Forms::TextBox());
			this->dateTB = (gcnew System::Windows::Forms::TextBox());
			this->femaleCB = (gcnew System::Windows::Forms::CheckBox());
			this->maleCB = (gcnew System::Windows::Forms::CheckBox());
			this->nameTB = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->loadBtn = (gcnew System::Windows::Forms::Button());
			this->writeDataBtn = (gcnew System::Windows::Forms::Button());
			this->numberOfUsersLbl = (gcnew System::Windows::Forms::Label());
			this->devOutputLbl = (gcnew System::Windows::Forms::Label());
			this->usersRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->lgnPanel = (gcnew System::Windows::Forms::Panel());
			this->lgnPasswordLbl = (gcnew System::Windows::Forms::Label());
			this->lgnEmailLbl = (gcnew System::Windows::Forms::Label());
			this->enterLbl = (gcnew System::Windows::Forms::Label());
			this->lgnAcceptBtn = (gcnew System::Windows::Forms::Button());
			this->lgnPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->lgnEmailTB = (gcnew System::Windows::Forms::TextBox());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->clientPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->employeePanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->deleteByIDTB = (gcnew System::Windows::Forms::TextBox());
			this->deleteSpecificBtn = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			nameLbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->lgnPanel->SuspendLayout();
			this->adminPanel->SuspendLayout();
			this->clientPanel->SuspendLayout();
			this->employeePanel->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameLbl
			// 
			nameLbl->AutoSize = true;
			nameLbl->Location = System::Drawing::Point(101, 104);
			nameLbl->Name = L"nameLbl";
			nameLbl->Size = System::Drawing::Size(29, 13);
			nameLbl->TabIndex = 8;
			nameLbl->Text = L"Имя";
			// 
			// updateBtn
			// 
			this->updateBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateBtn.BackgroundImage")));
			this->updateBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateBtn->Location = System::Drawing::Point(322, 11);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(40, 40);
			this->updateBtn->TabIndex = 11;
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &mainForm::updateBtn_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->regLbl);
			this->panel1->Controls->Add(this->userTypeCB);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->regBtn);
			this->panel1->Controls->Add(this->statusLbl);
			this->panel1->Controls->Add(this->passLbl);
			this->panel1->Controls->Add(this->emailLbl);
			this->panel1->Controls->Add(this->phnumberLbl);
			this->panel1->Controls->Add(this->dateLbl);
			this->panel1->Controls->Add(this->sexLbl);
			this->panel1->Controls->Add(nameLbl);
			this->panel1->Controls->Add(this->statusCB);
			this->panel1->Controls->Add(this->passwordTB);
			this->panel1->Controls->Add(this->emailTB);
			this->panel1->Controls->Add(this->phinenumberTB);
			this->panel1->Controls->Add(this->dateTB);
			this->panel1->Controls->Add(this->femaleCB);
			this->panel1->Controls->Add(this->maleCB);
			this->panel1->Controls->Add(this->nameTB);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 470);
			this->panel1->TabIndex = 12;
			// 
			// regLbl
			// 
			this->regLbl->AutoSize = true;
			this->regLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->regLbl->Location = System::Drawing::Point(124, 21);
			this->regLbl->Name = L"regLbl";
			this->regLbl->Size = System::Drawing::Size(117, 20);
			this->regLbl->TabIndex = 19;
			this->regLbl->Text = L"Регистрация";
			// 
			// userTypeCB
			// 
			this->userTypeCB->FormattingEnabled = true;
			this->userTypeCB->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BARBER", L"ADMINISTRATOR", L"CLEANER", L"DIRECTOR" });
			this->userTypeCB->Location = System::Drawing::Point(153, 306);
			this->userTypeCB->Name = L"userTypeCB";
			this->userTypeCB->Size = System::Drawing::Size(121, 21);
			this->userTypeCB->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 306);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Тип пользователя";
			// 
			// regBtn
			// 
			this->regBtn->Location = System::Drawing::Point(154, 342);
			this->regBtn->Name = L"regBtn";
			this->regBtn->Size = System::Drawing::Size(121, 23);
			this->regBtn->TabIndex = 15;
			this->regBtn->Text = L"Регистариция";
			this->regBtn->UseVisualStyleBackColor = true;
			this->regBtn->Click += gcnew System::EventHandler(this, &mainForm::regBtn_Click);
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Location = System::Drawing::Point(65, 279);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(65, 13);
			this->statusLbl->TabIndex = 14;
			this->statusLbl->Text = L"Должность";
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Location = System::Drawing::Point(85, 256);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(45, 13);
			this->passLbl->TabIndex = 13;
			this->passLbl->Text = L"Пароль";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Location = System::Drawing::Point(95, 228);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(34, 13);
			this->emailLbl->TabIndex = 12;
			this->emailLbl->Text = L"e-mail";
			// 
			// phnumberLbl
			// 
			this->phnumberLbl->AutoSize = true;
			this->phnumberLbl->Location = System::Drawing::Point(37, 202);
			this->phnumberLbl->Name = L"phnumberLbl";
			this->phnumberLbl->Size = System::Drawing::Size(93, 13);
			this->phnumberLbl->TabIndex = 11;
			this->phnumberLbl->Text = L"Номер телефона";
			// 
			// dateLbl
			// 
			this->dateLbl->AutoSize = true;
			this->dateLbl->Location = System::Drawing::Point(44, 171);
			this->dateLbl->Name = L"dateLbl";
			this->dateLbl->Size = System::Drawing::Size(86, 13);
			this->dateLbl->TabIndex = 10;
			this->dateLbl->Text = L"Дата рождения";
			// 
			// sexLbl
			// 
			this->sexLbl->AutoSize = true;
			this->sexLbl->Location = System::Drawing::Point(103, 133);
			this->sexLbl->Name = L"sexLbl";
			this->sexLbl->Size = System::Drawing::Size(27, 13);
			this->sexLbl->TabIndex = 9;
			this->sexLbl->Text = L"Пол";
			// 
			// statusCB
			// 
			this->statusCB->FormattingEnabled = true;
			this->statusCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->statusCB->Location = System::Drawing::Point(153, 276);
			this->statusCB->Name = L"statusCB";
			this->statusCB->Size = System::Drawing::Size(121, 21);
			this->statusCB->TabIndex = 7;
			// 
			// passwordTB
			// 
			this->passwordTB->Location = System::Drawing::Point(154, 249);
			this->passwordTB->Name = L"passwordTB";
			this->passwordTB->Size = System::Drawing::Size(120, 20);
			this->passwordTB->TabIndex = 6;
			// 
			// emailTB
			// 
			this->emailTB->Location = System::Drawing::Point(153, 222);
			this->emailTB->Name = L"emailTB";
			this->emailTB->Size = System::Drawing::Size(121, 20);
			this->emailTB->TabIndex = 5;
			// 
			// phinenumberTB
			// 
			this->phinenumberTB->Location = System::Drawing::Point(153, 195);
			this->phinenumberTB->Name = L"phinenumberTB";
			this->phinenumberTB->Size = System::Drawing::Size(121, 20);
			this->phinenumberTB->TabIndex = 4;
			// 
			// dateTB
			// 
			this->dateTB->Location = System::Drawing::Point(153, 168);
			this->dateTB->Name = L"dateTB";
			this->dateTB->Size = System::Drawing::Size(121, 20);
			this->dateTB->TabIndex = 3;
			// 
			// femaleCB
			// 
			this->femaleCB->AutoSize = true;
			this->femaleCB->Location = System::Drawing::Point(240, 133);
			this->femaleCB->Name = L"femaleCB";
			this->femaleCB->Size = System::Drawing::Size(73, 17);
			this->femaleCB->TabIndex = 2;
			this->femaleCB->Text = L"Женский";
			this->femaleCB->UseVisualStyleBackColor = true;
			this->femaleCB->CheckedChanged += gcnew System::EventHandler(this, &mainForm::femaleCB_CheckedChanged);
			// 
			// maleCB
			// 
			this->maleCB->AutoSize = true;
			this->maleCB->Location = System::Drawing::Point(153, 133);
			this->maleCB->Name = L"maleCB";
			this->maleCB->Size = System::Drawing::Size(72, 17);
			this->maleCB->TabIndex = 1;
			this->maleCB->Text = L"Мужской";
			this->maleCB->UseVisualStyleBackColor = true;
			this->maleCB->CheckedChanged += gcnew System::EventHandler(this, &mainForm::maleCB_CheckedChanged);
			this->maleCB->CheckStateChanged += gcnew System::EventHandler(this, &mainForm::maleCB_CheckStateChanged);
			// 
			// nameTB
			// 
			this->nameTB->Location = System::Drawing::Point(153, 97);
			this->nameTB->Name = L"nameTB";
			this->nameTB->Size = System::Drawing::Size(121, 20);
			this->nameTB->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->loadBtn);
			this->panel2->Controls->Add(this->writeDataBtn);
			this->panel2->Controls->Add(this->numberOfUsersLbl);
			this->panel2->Controls->Add(this->devOutputLbl);
			this->panel2->Controls->Add(this->usersRTB);
			this->panel2->Controls->Add(this->updateBtn);
			this->panel2->Location = System::Drawing::Point(386, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(382, 469);
			this->panel2->TabIndex = 13;
			// 
			// loadBtn
			// 
			this->loadBtn->Location = System::Drawing::Point(230, 11);
			this->loadBtn->Name = L"loadBtn";
			this->loadBtn->Size = System::Drawing::Size(40, 40);
			this->loadBtn->TabIndex = 15;
			this->loadBtn->Text = L"button1";
			this->loadBtn->UseVisualStyleBackColor = true;
			this->loadBtn->Click += gcnew System::EventHandler(this, &mainForm::loadBtn_Click);
			// 
			// writeDataBtn
			// 
			this->writeDataBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"writeDataBtn.BackgroundImage")));
			this->writeDataBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->writeDataBtn->Location = System::Drawing::Point(276, 11);
			this->writeDataBtn->Name = L"writeDataBtn";
			this->writeDataBtn->Size = System::Drawing::Size(40, 40);
			this->writeDataBtn->TabIndex = 14;
			this->writeDataBtn->UseVisualStyleBackColor = true;
			this->writeDataBtn->Click += gcnew System::EventHandler(this, &mainForm::writeDataBtn_Click);
			// 
			// numberOfUsersLbl
			// 
			this->numberOfUsersLbl->AutoSize = true;
			this->numberOfUsersLbl->Location = System::Drawing::Point(30, 7);
			this->numberOfUsersLbl->Name = L"numberOfUsersLbl";
			this->numberOfUsersLbl->Size = System::Drawing::Size(0, 13);
			this->numberOfUsersLbl->TabIndex = 13;
			// 
			// devOutputLbl
			// 
			this->devOutputLbl->AutoSize = true;
			this->devOutputLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->devOutputLbl->Location = System::Drawing::Point(29, 20);
			this->devOutputLbl->Name = L"devOutputLbl";
			this->devOutputLbl->Size = System::Drawing::Size(86, 20);
			this->devOutputLbl->TabIndex = 12;
			this->devOutputLbl->Text = L"dev output";
			// 
			// usersRTB
			// 
			this->usersRTB->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usersRTB->Location = System::Drawing::Point(33, 54);
			this->usersRTB->Name = L"usersRTB";
			this->usersRTB->Size = System::Drawing::Size(329, 400);
			this->usersRTB->TabIndex = 10;
			this->usersRTB->Text = L"";
			// 
			// lgnPanel
			// 
			this->lgnPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lgnPanel->Controls->Add(this->lgnPasswordLbl);
			this->lgnPanel->Controls->Add(this->lgnEmailLbl);
			this->lgnPanel->Controls->Add(this->enterLbl);
			this->lgnPanel->Controls->Add(this->lgnAcceptBtn);
			this->lgnPanel->Controls->Add(this->lgnPasswordTB);
			this->lgnPanel->Controls->Add(this->lgnEmailTB);
			this->lgnPanel->Location = System::Drawing::Point(887, 20);
			this->lgnPanel->Name = L"lgnPanel";
			this->lgnPanel->Size = System::Drawing::Size(421, 468);
			this->lgnPanel->TabIndex = 14;
			this->lgnPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::panel3_Paint);
			// 
			// lgnPasswordLbl
			// 
			this->lgnPasswordLbl->AutoSize = true;
			this->lgnPasswordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->lgnPasswordLbl->Location = System::Drawing::Point(101, 220);
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
			this->lgnEmailLbl->Location = System::Drawing::Point(119, 196);
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
			this->enterLbl->Location = System::Drawing::Point(143, 115);
			this->enterLbl->Name = L"enterLbl";
			this->enterLbl->Size = System::Drawing::Size(147, 77);
			this->enterLbl->TabIndex = 3;
			this->enterLbl->Text = L"LOGIN";
			this->enterLbl->Click += gcnew System::EventHandler(this, &mainForm::enterLbl_Click);
			// 
			// lgnAcceptBtn
			// 
			this->lgnAcceptBtn->Location = System::Drawing::Point(179, 250);
			this->lgnAcceptBtn->Name = L"lgnAcceptBtn";
			this->lgnAcceptBtn->Size = System::Drawing::Size(75, 23);
			this->lgnAcceptBtn->TabIndex = 2;
			this->lgnAcceptBtn->Text = L"Войти";
			this->lgnAcceptBtn->UseVisualStyleBackColor = true;
			this->lgnAcceptBtn->Click += gcnew System::EventHandler(this, &mainForm::lgnAcceptBtn_Click);
			// 
			// lgnPasswordTB
			// 
			this->lgnPasswordTB->Location = System::Drawing::Point(165, 220);
			this->lgnPasswordTB->Name = L"lgnPasswordTB";
			this->lgnPasswordTB->Size = System::Drawing::Size(100, 20);
			this->lgnPasswordTB->TabIndex = 1;
			// 
			// lgnEmailTB
			// 
			this->lgnEmailTB->Location = System::Drawing::Point(165, 193);
			this->lgnEmailTB->Name = L"lgnEmailTB";
			this->lgnEmailTB->Size = System::Drawing::Size(100, 20);
			this->lgnEmailTB->TabIndex = 0;
			// 
			// adminPanel
			// 
			this->adminPanel->Controls->Add(this->label2);
			this->adminPanel->Location = System::Drawing::Point(429, 510);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(424, 618);
			this->adminPanel->TabIndex = 15;
			this->adminPanel->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(43, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(342, 93);
			this->label2->TabIndex = 0;
			this->label2->Text = L"НУ ЛАДЫ";
			// 
			// clientPanel
			// 
			this->clientPanel->Controls->Add(this->label3);
			this->clientPanel->Location = System::Drawing::Point(887, 510);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(421, 618);
			this->clientPanel->TabIndex = 16;
			this->clientPanel->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 42, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(17, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(390, 93);
			this->label3->TabIndex = 1;
			this->label3->Text = L"НУ ТЫ ДЭБ";
			// 
			// employeePanel
			// 
			this->employeePanel->Controls->Add(this->label4);
			this->employeePanel->Location = System::Drawing::Point(1340, 510);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(421, 618);
			this->employeePanel->TabIndex = 17;
			this->employeePanel->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 42, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(33, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(367, 93);
			this->label4->TabIndex = 2;
			this->label4->Text = L"НУ И КЕК";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->monthCalendar1);
			this->panel3->Controls->Add(this->deleteByIDTB);
			this->panel3->Controls->Add(this->deleteSpecificBtn);
			this->panel3->Location = System::Drawing::Point(13, 514);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(366, 535);
			this->panel3->TabIndex = 18;
			// 
			// deleteByIDTB
			// 
			this->deleteByIDTB->Location = System::Drawing::Point(127, 39);
			this->deleteByIDTB->Multiline = true;
			this->deleteByIDTB->Name = L"deleteByIDTB";
			this->deleteByIDTB->Size = System::Drawing::Size(100, 23);
			this->deleteByIDTB->TabIndex = 1;
			// 
			// deleteSpecificBtn
			// 
			this->deleteSpecificBtn->Location = System::Drawing::Point(30, 39);
			this->deleteSpecificBtn->Name = L"deleteSpecificBtn";
			this->deleteSpecificBtn->Size = System::Drawing::Size(75, 23);
			this->deleteSpecificBtn->TabIndex = 0;
			this->deleteSpecificBtn->Text = L"Удалить";
			this->deleteSpecificBtn->UseVisualStyleBackColor = true;
			this->deleteSpecificBtn->Click += gcnew System::EventHandler(this, &mainForm::deleteSpecificBtn_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(39, 111);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 2;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->clientPanel);
			this->Controls->Add(this->employeePanel);
			this->Controls->Add(this->adminPanel);
			this->Controls->Add(this->lgnPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->lgnPanel->ResumeLayout(false);
			this->lgnPanel->PerformLayout();
			this->adminPanel->ResumeLayout(false);
			this->adminPanel->PerformLayout();
			this->clientPanel->ResumeLayout(false);
			this->clientPanel->PerformLayout();
			this->employeePanel->ResumeLayout(false);
			this->employeePanel->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void acceptBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void regBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maleCB_CheckStateChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void femaleCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maleCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void enterLbl_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lgnAcceptBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void writeDataBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loadBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteSpecificBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
