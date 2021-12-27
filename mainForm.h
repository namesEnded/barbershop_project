#ifndef MAINFORM_H
#define MAINFORM_H
#include "menuForm.h"
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


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ writeDataBtn;
	private: System::Windows::Forms::Button^ loadBtn;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ deleteByIDTB;
	private: System::Windows::Forms::Button^ deleteSpecificBtn;
	private: System::Windows::Forms::MonthCalendar^ Calendar;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ servicePriceLbl;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ serviceNameLbl;
	private: System::Windows::Forms::TextBox^ serviceNameTB;
	private: System::Windows::Forms::TextBox^ servicePriceTB;
	private: System::Windows::Forms::Button^ addServiceBtn;
	private: System::Windows::Forms::Button^ loadServicesBtn;
	private: System::Windows::Forms::Button^ updateServicesBtn;
	private: System::Windows::Forms::Button^ saveServicesBtn;
	private: System::Windows::Forms::RichTextBox^ servicesRTB;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ updateGrid;
	private: System::Windows::Forms::DataGridView^ ordersDataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderStatus;
	private: System::Windows::Forms::DataGridView^ servicesDataGrid;



	private: System::Windows::Forms::DataGridView^ usersDataGrid;





	private: System::Windows::Forms::Button^ showReportBtn;
	private: System::Windows::Forms::Button^ changeServiceBtn;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ delOrderBtn;
	private: System::Windows::Forms::Button^ changeUserBtn;
	private: System::Windows::Forms::Button^ addUserBtn;
	private: System::Windows::Forms::Label^ AdminLbl;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ selected;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ servicesID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceName;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ selectedRow;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userCurrentStatus;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ addUser;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ addUserMaleCB;
private: System::Windows::Forms::TextBox^ addUserNameTB;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ changeUserLbl;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Button^ btn;
private: System::Windows::Forms::Label^ clientIDFromOrderLbl;

private: System::Windows::Forms::Label^ employeeIDFromOrderLbl;


private: System::Windows::Forms::Label^ serviceIDfromOrderLbl;

private: System::Windows::Forms::Label^ serviceOrderIDLbl;
private: System::Windows::Forms::DataGridView^ orderInitGrid;



private: System::Windows::Forms::Label^ orderCostLbl;
private: System::Windows::Forms::Button^ updateServiceOrderBtn;
private: System::Windows::Forms::TextBox^ oerderID;
private: System::Windows::Forms::TextBox^ costTB;
private: System::Windows::Forms::CheckBox^ orderStatusCB;
private: System::Windows::Forms::ComboBox^ clientIDCB;
private: System::Windows::Forms::ComboBox^ employeeIDCB;
private: System::Windows::Forms::ComboBox^ serviceIDCB;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeOerderID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientIDOrder;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ sssorderStatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordersDate;


















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
			System::Windows::Forms::Label^ label15;
			System::Windows::Forms::Label^ label23;
			System::Windows::Forms::Button^ acceptOrderBtn;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->updateGrid = (gcnew System::Windows::Forms::Button());
			this->ordersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->orderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->servicesDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->selected = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->servicesID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->selectedRow = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->userID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userCurrentStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->clientPanel = (gcnew System::Windows::Forms::Panel());
			this->updateServiceOrderBtn = (gcnew System::Windows::Forms::Button());
			this->oerderID = (gcnew System::Windows::Forms::TextBox());
			this->Calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->costTB = (gcnew System::Windows::Forms::TextBox());
			this->orderStatusCB = (gcnew System::Windows::Forms::CheckBox());
			this->clientIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->employeeIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->serviceIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->orderCostLbl = (gcnew System::Windows::Forms::Label());
			this->clientIDFromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->employeeIDFromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->serviceIDfromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->serviceOrderIDLbl = (gcnew System::Windows::Forms::Label());
			this->orderInitGrid = (gcnew System::Windows::Forms::DataGridView());
			this->employeePanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->deleteByIDTB = (gcnew System::Windows::Forms::TextBox());
			this->deleteSpecificBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->loadServicesBtn = (gcnew System::Windows::Forms::Button());
			this->updateServicesBtn = (gcnew System::Windows::Forms::Button());
			this->saveServicesBtn = (gcnew System::Windows::Forms::Button());
			this->servicesRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->servicePriceLbl = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->serviceNameLbl = (gcnew System::Windows::Forms::Label());
			this->serviceNameTB = (gcnew System::Windows::Forms::TextBox());
			this->servicePriceTB = (gcnew System::Windows::Forms::TextBox());
			this->addServiceBtn = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->addUser = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->addUserMaleCB = (gcnew System::Windows::Forms::CheckBox());
			this->addUserNameTB = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->changeUserLbl = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeOerderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientIDOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sssorderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordersDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			nameLbl = (gcnew System::Windows::Forms::Label());
			label15 = (gcnew System::Windows::Forms::Label());
			label23 = (gcnew System::Windows::Forms::Label());
			acceptOrderBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->lgnPanel->SuspendLayout();
			this->adminPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
			this->clientPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->BeginInit();
			this->employeePanel->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
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
			// label15
			// 
			label15->AutoSize = true;
			label15->Location = System::Drawing::Point(106, 54);
			label15->Name = L"label15";
			label15->Size = System::Drawing::Size(29, 13);
			label15->TabIndex = 27;
			label15->Text = L"Имя";
			// 
			// label23
			// 
			label23->AutoSize = true;
			label23->Location = System::Drawing::Point(78, 26);
			label23->Name = L"label23";
			label23->Size = System::Drawing::Size(29, 13);
			label23->TabIndex = 45;
			label23->Text = L"Имя";
			// 
			// acceptOrderBtn
			// 
			acceptOrderBtn->Location = System::Drawing::Point(315, 461);
			acceptOrderBtn->Name = L"acceptOrderBtn";
			acceptOrderBtn->Size = System::Drawing::Size(75, 23);
			acceptOrderBtn->TabIndex = 13;
			acceptOrderBtn->Text = L"Отсосать";
			acceptOrderBtn->UseVisualStyleBackColor = true;
			acceptOrderBtn->Click += gcnew System::EventHandler(this, &mainForm::acceptOrderBtn_Click);
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
			this->lgnPanel->Location = System::Drawing::Point(789, 20);
			this->lgnPanel->Name = L"lgnPanel";
			this->lgnPanel->Size = System::Drawing::Size(228, 176);
			this->lgnPanel->TabIndex = 14;
			this->lgnPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::panel3_Paint);
			// 
			// lgnPasswordLbl
			// 
			this->lgnPasswordLbl->AutoSize = true;
			this->lgnPasswordLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->lgnPasswordLbl->Location = System::Drawing::Point(10, 118);
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
			this->lgnEmailLbl->Location = System::Drawing::Point(28, 94);
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
			this->enterLbl->Location = System::Drawing::Point(52, 13);
			this->enterLbl->Name = L"enterLbl";
			this->enterLbl->Size = System::Drawing::Size(147, 77);
			this->enterLbl->TabIndex = 3;
			this->enterLbl->Text = L"LOGIN";
			this->enterLbl->Click += gcnew System::EventHandler(this, &mainForm::enterLbl_Click);
			// 
			// lgnAcceptBtn
			// 
			this->lgnAcceptBtn->Location = System::Drawing::Point(88, 148);
			this->lgnAcceptBtn->Name = L"lgnAcceptBtn";
			this->lgnAcceptBtn->Size = System::Drawing::Size(75, 23);
			this->lgnAcceptBtn->TabIndex = 2;
			this->lgnAcceptBtn->Text = L"Войти";
			this->lgnAcceptBtn->UseVisualStyleBackColor = true;
			this->lgnAcceptBtn->Click += gcnew System::EventHandler(this, &mainForm::lgnAcceptBtn_Click);
			// 
			// lgnPasswordTB
			// 
			this->lgnPasswordTB->Location = System::Drawing::Point(74, 118);
			this->lgnPasswordTB->Name = L"lgnPasswordTB";
			this->lgnPasswordTB->Size = System::Drawing::Size(100, 20);
			this->lgnPasswordTB->TabIndex = 1;
			// 
			// lgnEmailTB
			// 
			this->lgnEmailTB->Location = System::Drawing::Point(74, 91);
			this->lgnEmailTB->Name = L"lgnEmailTB";
			this->lgnEmailTB->Size = System::Drawing::Size(100, 20);
			this->lgnEmailTB->TabIndex = 0;
			// 
			// adminPanel
			// 
			this->adminPanel->Controls->Add(this->label2);
			this->adminPanel->Controls->Add(this->label5);
			this->adminPanel->Controls->Add(this->label6);
			this->adminPanel->Controls->Add(this->updateGrid);
			this->adminPanel->Controls->Add(this->ordersDataGrid);
			this->adminPanel->Controls->Add(this->servicesDataGrid);
			this->adminPanel->Controls->Add(this->usersDataGrid);
			this->adminPanel->Controls->Add(this->showReportBtn);
			this->adminPanel->Controls->Add(this->changeServiceBtn);
			this->adminPanel->Controls->Add(this->button4);
			this->adminPanel->Controls->Add(this->delOrderBtn);
			this->adminPanel->Controls->Add(this->changeUserBtn);
			this->adminPanel->Controls->Add(this->addUserBtn);
			this->adminPanel->Controls->Add(this->AdminLbl);
			this->adminPanel->Location = System::Drawing::Point(12, 510);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(653, 671);
			this->adminPanel->TabIndex = 15;
			this->adminPanel->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(193, 467);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"orders";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 259);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"services";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"users";
			// 
			// updateGrid
			// 
			this->updateGrid->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateGrid.BackgroundImage")));
			this->updateGrid->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateGrid->Location = System::Drawing::Point(597, 26);
			this->updateGrid->Name = L"updateGrid";
			this->updateGrid->Size = System::Drawing::Size(40, 40);
			this->updateGrid->TabIndex = 26;
			this->updateGrid->UseVisualStyleBackColor = true;
			this->updateGrid->Click += gcnew System::EventHandler(this, &mainForm::updateGrid_Click);
			// 
			// ordersDataGrid
			// 
			this->ordersDataGrid->AllowUserToAddRows = false;
			this->ordersDataGrid->AllowUserToDeleteRows = false;
			this->ordersDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ordersDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->orderID,
					this->employeeID, this->clientID, this->orderStatus
			});
			this->ordersDataGrid->Location = System::Drawing::Point(193, 483);
			this->ordersDataGrid->Name = L"ordersDataGrid";
			this->ordersDataGrid->Size = System::Drawing::Size(444, 176);
			this->ordersDataGrid->TabIndex = 25;
			// 
			// orderID
			// 
			this->orderID->HeaderText = L"ID";
			this->orderID->Name = L"orderID";
			// 
			// employeeID
			// 
			this->employeeID->HeaderText = L"employee";
			this->employeeID->Name = L"employeeID";
			// 
			// clientID
			// 
			this->clientID->HeaderText = L"client";
			this->clientID->Name = L"clientID";
			// 
			// orderStatus
			// 
			this->orderStatus->HeaderText = L"status";
			this->orderStatus->Name = L"orderStatus";
			// 
			// servicesDataGrid
			// 
			this->servicesDataGrid->AllowUserToAddRows = false;
			this->servicesDataGrid->AllowUserToDeleteRows = false;
			this->servicesDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->servicesDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->selected,
					this->servicesID, this->serviceName
			});
			this->servicesDataGrid->Location = System::Drawing::Point(193, 275);
			this->servicesDataGrid->Name = L"servicesDataGrid";
			this->servicesDataGrid->Size = System::Drawing::Size(444, 178);
			this->servicesDataGrid->TabIndex = 24;
			// 
			// selected
			// 
			this->selected->HeaderText = L"Select";
			this->selected->Name = L"selected";
			this->selected->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->selected->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// servicesID
			// 
			this->servicesID->HeaderText = L"ID";
			this->servicesID->Name = L"servicesID";
			// 
			// serviceName
			// 
			this->serviceName->HeaderText = L"Name";
			this->serviceName->Name = L"serviceName";
			// 
			// usersDataGrid
			// 
			this->usersDataGrid->AllowUserToAddRows = false;
			this->usersDataGrid->AllowUserToDeleteRows = false;
			this->usersDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->usersDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->selectedRow,
					this->userID, this->userName, this->userCurrentStatus
			});
			this->usersDataGrid->Location = System::Drawing::Point(193, 72);
			this->usersDataGrid->Name = L"usersDataGrid";
			this->usersDataGrid->Size = System::Drawing::Size(444, 168);
			this->usersDataGrid->TabIndex = 23;
			// 
			// selectedRow
			// 
			this->selectedRow->HeaderText = L"Select";
			this->selectedRow->Name = L"selectedRow";
			this->selectedRow->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->selectedRow->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// userID
			// 
			this->userID->HeaderText = L"ID";
			this->userID->Name = L"userID";
			// 
			// userName
			// 
			this->userName->HeaderText = L"Name";
			this->userName->Name = L"userName";
			// 
			// userCurrentStatus
			// 
			this->userCurrentStatus->HeaderText = L"Status";
			this->userCurrentStatus->Name = L"userCurrentStatus";
			// 
			// showReportBtn
			// 
			this->showReportBtn->Location = System::Drawing::Point(35, 222);
			this->showReportBtn->Name = L"showReportBtn";
			this->showReportBtn->Size = System::Drawing::Size(136, 23);
			this->showReportBtn->TabIndex = 22;
			this->showReportBtn->Text = L"collect a report";
			this->showReportBtn->UseVisualStyleBackColor = true;
			// 
			// changeServiceBtn
			// 
			this->changeServiceBtn->Location = System::Drawing::Point(35, 193);
			this->changeServiceBtn->Name = L"changeServiceBtn";
			this->changeServiceBtn->Size = System::Drawing::Size(136, 23);
			this->changeServiceBtn->TabIndex = 21;
			this->changeServiceBtn->Text = L"change service";
			this->changeServiceBtn->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(35, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"add service";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// delOrderBtn
			// 
			this->delOrderBtn->Location = System::Drawing::Point(35, 135);
			this->delOrderBtn->Name = L"delOrderBtn";
			this->delOrderBtn->Size = System::Drawing::Size(136, 23);
			this->delOrderBtn->TabIndex = 19;
			this->delOrderBtn->Text = L"delete Order";
			this->delOrderBtn->UseVisualStyleBackColor = true;
			// 
			// changeUserBtn
			// 
			this->changeUserBtn->Location = System::Drawing::Point(35, 106);
			this->changeUserBtn->Name = L"changeUserBtn";
			this->changeUserBtn->Size = System::Drawing::Size(136, 23);
			this->changeUserBtn->TabIndex = 18;
			this->changeUserBtn->Text = L"Change user";
			this->changeUserBtn->UseVisualStyleBackColor = true;
			// 
			// addUserBtn
			// 
			this->addUserBtn->Location = System::Drawing::Point(35, 77);
			this->addUserBtn->Name = L"addUserBtn";
			this->addUserBtn->Size = System::Drawing::Size(136, 23);
			this->addUserBtn->TabIndex = 17;
			this->addUserBtn->Text = L"Add user";
			this->addUserBtn->UseVisualStyleBackColor = true;
			// 
			// AdminLbl
			// 
			this->AdminLbl->AutoSize = true;
			this->AdminLbl->Location = System::Drawing::Point(15, 4);
			this->AdminLbl->Name = L"AdminLbl";
			this->AdminLbl->Size = System::Drawing::Size(36, 13);
			this->AdminLbl->TabIndex = 16;
			this->AdminLbl->Text = L"Admin";
			// 
			// clientPanel
			// 
			this->clientPanel->Controls->Add(this->updateServiceOrderBtn);
			this->clientPanel->Controls->Add(acceptOrderBtn);
			this->clientPanel->Controls->Add(this->oerderID);
			this->clientPanel->Controls->Add(this->Calendar);
			this->clientPanel->Controls->Add(this->costTB);
			this->clientPanel->Controls->Add(this->orderStatusCB);
			this->clientPanel->Controls->Add(this->clientIDCB);
			this->clientPanel->Controls->Add(this->employeeIDCB);
			this->clientPanel->Controls->Add(this->serviceIDCB);
			this->clientPanel->Controls->Add(this->orderCostLbl);
			this->clientPanel->Controls->Add(this->clientIDFromOrderLbl);
			this->clientPanel->Controls->Add(this->employeeIDFromOrderLbl);
			this->clientPanel->Controls->Add(this->serviceIDfromOrderLbl);
			this->clientPanel->Controls->Add(this->serviceOrderIDLbl);
			this->clientPanel->Controls->Add(this->orderInitGrid);
			this->clientPanel->Location = System::Drawing::Point(1030, 514);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(769, 667);
			this->clientPanel->TabIndex = 16;
			// 
			// updateServiceOrderBtn
			// 
			this->updateServiceOrderBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateServiceOrderBtn.BackgroundImage")));
			this->updateServiceOrderBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateServiceOrderBtn->Location = System::Drawing::Point(702, 8);
			this->updateServiceOrderBtn->Name = L"updateServiceOrderBtn";
			this->updateServiceOrderBtn->Size = System::Drawing::Size(40, 40);
			this->updateServiceOrderBtn->TabIndex = 27;
			this->updateServiceOrderBtn->UseVisualStyleBackColor = true;
			this->updateServiceOrderBtn->Click += gcnew System::EventHandler(this, &mainForm::updateServiceOrderBtn_Click);
			// 
			// oerderID
			// 
			this->oerderID->Enabled = false;
			this->oerderID->Location = System::Drawing::Point(129, 275);
			this->oerderID->Name = L"oerderID";
			this->oerderID->Size = System::Drawing::Size(100, 20);
			this->oerderID->TabIndex = 12;
			// 
			// Calendar
			// 
			this->Calendar->Location = System::Drawing::Point(128, 460);
			this->Calendar->Name = L"Calendar";
			this->Calendar->TabIndex = 2;
			// 
			// costTB
			// 
			this->costTB->Location = System::Drawing::Point(129, 412);
			this->costTB->Name = L"costTB";
			this->costTB->Size = System::Drawing::Size(100, 20);
			this->costTB->TabIndex = 11;
			// 
			// orderStatusCB
			// 
			this->orderStatusCB->AutoSize = true;
			this->orderStatusCB->Location = System::Drawing::Point(248, 414);
			this->orderStatusCB->Name = L"orderStatusCB";
			this->orderStatusCB->Size = System::Drawing::Size(54, 17);
			this->orderStatusCB->TabIndex = 10;
			this->orderStatusCB->Text = L"status";
			this->orderStatusCB->UseVisualStyleBackColor = true;
			// 
			// clientIDCB
			// 
			this->clientIDCB->FormattingEnabled = true;
			this->clientIDCB->Location = System::Drawing::Point(128, 379);
			this->clientIDCB->Name = L"clientIDCB";
			this->clientIDCB->Size = System::Drawing::Size(121, 21);
			this->clientIDCB->TabIndex = 9;
			// 
			// employeeIDCB
			// 
			this->employeeIDCB->FormattingEnabled = true;
			this->employeeIDCB->Location = System::Drawing::Point(128, 343);
			this->employeeIDCB->Name = L"employeeIDCB";
			this->employeeIDCB->Size = System::Drawing::Size(121, 21);
			this->employeeIDCB->TabIndex = 8;
			// 
			// serviceIDCB
			// 
			this->serviceIDCB->FormattingEnabled = true;
			this->serviceIDCB->Location = System::Drawing::Point(128, 307);
			this->serviceIDCB->Name = L"serviceIDCB";
			this->serviceIDCB->Size = System::Drawing::Size(121, 21);
			this->serviceIDCB->TabIndex = 7;
			// 
			// orderCostLbl
			// 
			this->orderCostLbl->AutoSize = true;
			this->orderCostLbl->Location = System::Drawing::Point(94, 417);
			this->orderCostLbl->Name = L"orderCostLbl";
			this->orderCostLbl->Size = System::Drawing::Size(28, 13);
			this->orderCostLbl->TabIndex = 5;
			this->orderCostLbl->Text = L"Cost";
			// 
			// clientIDFromOrderLbl
			// 
			this->clientIDFromOrderLbl->AutoSize = true;
			this->clientIDFromOrderLbl->Location = System::Drawing::Point(86, 388);
			this->clientIDFromOrderLbl->Name = L"clientIDFromOrderLbl";
			this->clientIDFromOrderLbl->Size = System::Drawing::Size(43, 13);
			this->clientIDFromOrderLbl->TabIndex = 4;
			this->clientIDFromOrderLbl->Text = L"clientID";
			// 
			// employeeIDFromOrderLbl
			// 
			this->employeeIDFromOrderLbl->AutoSize = true;
			this->employeeIDFromOrderLbl->Location = System::Drawing::Point(66, 352);
			this->employeeIDFromOrderLbl->Name = L"employeeIDFromOrderLbl";
			this->employeeIDFromOrderLbl->Size = System::Drawing::Size(63, 13);
			this->employeeIDFromOrderLbl->TabIndex = 3;
			this->employeeIDFromOrderLbl->Text = L"employeeID";
			// 
			// serviceIDfromOrderLbl
			// 
			this->serviceIDfromOrderLbl->AutoSize = true;
			this->serviceIDfromOrderLbl->Location = System::Drawing::Point(77, 312);
			this->serviceIDfromOrderLbl->Name = L"serviceIDfromOrderLbl";
			this->serviceIDfromOrderLbl->Size = System::Drawing::Size(52, 13);
			this->serviceIDfromOrderLbl->TabIndex = 2;
			this->serviceIDfromOrderLbl->Text = L"serviceID";
			// 
			// serviceOrderIDLbl
			// 
			this->serviceOrderIDLbl->AutoSize = true;
			this->serviceOrderIDLbl->Location = System::Drawing::Point(111, 281);
			this->serviceOrderIDLbl->Name = L"serviceOrderIDLbl";
			this->serviceOrderIDLbl->Size = System::Drawing::Size(18, 13);
			this->serviceOrderIDLbl->TabIndex = 1;
			this->serviceOrderIDLbl->Text = L"ID";
			// 
			// orderInitGrid
			// 
			this->orderInitGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderInitGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ID, this->serviceID,
					this->employeeOerderID, this->clientIDOrder, this->cost, this->sssorderStatus, this->ordersDate
			});
			this->orderInitGrid->Location = System::Drawing::Point(3, 54);
			this->orderInitGrid->Name = L"orderInitGrid";
			this->orderInitGrid->Size = System::Drawing::Size(739, 150);
			this->orderInitGrid->TabIndex = 0;
			// 
			// employeePanel
			// 
			this->employeePanel->Controls->Add(this->label4);
			this->employeePanel->Location = System::Drawing::Point(1805, 510);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(83, 618);
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
			this->panel3->Controls->Add(this->btn);
			this->panel3->Controls->Add(this->deleteByIDTB);
			this->panel3->Controls->Add(this->deleteSpecificBtn);
			this->panel3->Location = System::Drawing::Point(1242, 13);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(307, 469);
			this->panel3->TabIndex = 18;
			// 
			// btn
			// 
			this->btn->Location = System::Drawing::Point(215, 111);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(75, 23);
			this->btn->TabIndex = 3;
			this->btn->Text = L"btn";
			this->btn->UseVisualStyleBackColor = true;
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
			// panel4
			// 
			this->panel4->Controls->Add(this->loadServicesBtn);
			this->panel4->Controls->Add(this->updateServicesBtn);
			this->panel4->Controls->Add(this->saveServicesBtn);
			this->panel4->Controls->Add(this->servicesRTB);
			this->panel4->Controls->Add(this->servicePriceLbl);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->serviceNameLbl);
			this->panel4->Controls->Add(this->serviceNameTB);
			this->panel4->Controls->Add(this->servicePriceTB);
			this->panel4->Controls->Add(this->addServiceBtn);
			this->panel4->Location = System::Drawing::Point(789, 207);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(428, 275);
			this->panel4->TabIndex = 19;
			// 
			// loadServicesBtn
			// 
			this->loadServicesBtn->Location = System::Drawing::Point(241, 123);
			this->loadServicesBtn->Name = L"loadServicesBtn";
			this->loadServicesBtn->Size = System::Drawing::Size(40, 40);
			this->loadServicesBtn->TabIndex = 17;
			this->loadServicesBtn->Text = L"load";
			this->loadServicesBtn->UseVisualStyleBackColor = true;
			this->loadServicesBtn->Click += gcnew System::EventHandler(this, &mainForm::loadServicesBtn_Click);
			// 
			// updateServicesBtn
			// 
			this->updateServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateServicesBtn.BackgroundImage")));
			this->updateServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateServicesBtn->Location = System::Drawing::Point(333, 123);
			this->updateServicesBtn->Name = L"updateServicesBtn";
			this->updateServicesBtn->Size = System::Drawing::Size(40, 40);
			this->updateServicesBtn->TabIndex = 16;
			this->updateServicesBtn->UseVisualStyleBackColor = true;
			this->updateServicesBtn->Click += gcnew System::EventHandler(this, &mainForm::updateServicesBtn_Click);
			// 
			// saveServicesBtn
			// 
			this->saveServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveServicesBtn.BackgroundImage")));
			this->saveServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->saveServicesBtn->Location = System::Drawing::Point(287, 123);
			this->saveServicesBtn->Name = L"saveServicesBtn";
			this->saveServicesBtn->Size = System::Drawing::Size(40, 40);
			this->saveServicesBtn->TabIndex = 16;
			this->saveServicesBtn->UseVisualStyleBackColor = true;
			this->saveServicesBtn->Click += gcnew System::EventHandler(this, &mainForm::saveServicesBtn_Click);
			// 
			// servicesRTB
			// 
			this->servicesRTB->Location = System::Drawing::Point(23, 178);
			this->servicesRTB->Name = L"servicesRTB";
			this->servicesRTB->Size = System::Drawing::Size(350, 83);
			this->servicesRTB->TabIndex = 12;
			this->servicesRTB->Text = L"";
			// 
			// servicePriceLbl
			// 
			this->servicePriceLbl->AutoSize = true;
			this->servicePriceLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->servicePriceLbl->Location = System::Drawing::Point(13, 112);
			this->servicePriceLbl->Name = L"servicePriceLbl";
			this->servicePriceLbl->Size = System::Drawing::Size(34, 17);
			this->servicePriceLbl->TabIndex = 11;
			this->servicePriceLbl->Text = L"Price";
			this->servicePriceLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->servicePriceLbl->Click += gcnew System::EventHandler(this, &mainForm::label5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 77);
			this->label7->TabIndex = 9;
			this->label7->Text = L"SERVICES";
			// 
			// serviceNameLbl
			// 
			this->serviceNameLbl->AutoSize = true;
			this->serviceNameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->serviceNameLbl->Location = System::Drawing::Point(13, 89);
			this->serviceNameLbl->Name = L"serviceNameLbl";
			this->serviceNameLbl->Size = System::Drawing::Size(38, 17);
			this->serviceNameLbl->TabIndex = 10;
			this->serviceNameLbl->Text = L"Name";
			// 
			// serviceNameTB
			// 
			this->serviceNameTB->Location = System::Drawing::Point(59, 86);
			this->serviceNameTB->Name = L"serviceNameTB";
			this->serviceNameTB->Size = System::Drawing::Size(100, 20);
			this->serviceNameTB->TabIndex = 6;
			this->serviceNameTB->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox2_TextChanged);
			// 
			// servicePriceTB
			// 
			this->servicePriceTB->Location = System::Drawing::Point(59, 112);
			this->servicePriceTB->Name = L"servicePriceTB";
			this->servicePriceTB->Size = System::Drawing::Size(100, 20);
			this->servicePriceTB->TabIndex = 7;
			this->servicePriceTB->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox1_TextChanged);
			// 
			// addServiceBtn
			// 
			this->addServiceBtn->Location = System::Drawing::Point(59, 140);
			this->addServiceBtn->Name = L"addServiceBtn";
			this->addServiceBtn->Size = System::Drawing::Size(100, 23);
			this->addServiceBtn->TabIndex = 8;
			this->addServiceBtn->Text = L"Добавить";
			this->addServiceBtn->UseVisualStyleBackColor = true;
			this->addServiceBtn->Click += gcnew System::EventHandler(this, &mainForm::addServiceBtn_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->addUser);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(label15);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->checkBox1);
			this->panel5->Controls->Add(this->addUserMaleCB);
			this->panel5->Controls->Add(this->addUserNameTB);
			this->panel5->Location = System::Drawing::Point(680, 514);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(325, 328);
			this->panel5->TabIndex = 20;
			// 
			// addUser
			// 
			this->addUser->AutoSize = true;
			this->addUser->Location = System::Drawing::Point(17, 14);
			this->addUser->Name = L"addUser";
			this->addUser->Size = System::Drawing::Size(49, 13);
			this->addUser->TabIndex = 37;
			this->addUser->Text = L"Add user";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BARBER", L"ADMINISTRATOR", L"CLEANER", L"DIRECTOR" });
			this->comboBox1->Location = System::Drawing::Point(158, 256);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Тип пользователя";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(70, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 13);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Должность";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(90, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Пароль";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(100, 178);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"e-mail";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(93, 13);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Номер телефона";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(49, 121);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Дата рождения";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(108, 83);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Пол";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->comboBox2->Location = System::Drawing::Point(158, 226);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 26;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 199);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 118);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 22;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(245, 83);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 17);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Женский";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// addUserMaleCB
			// 
			this->addUserMaleCB->AutoSize = true;
			this->addUserMaleCB->Location = System::Drawing::Point(158, 83);
			this->addUserMaleCB->Name = L"addUserMaleCB";
			this->addUserMaleCB->Size = System::Drawing::Size(72, 17);
			this->addUserMaleCB->TabIndex = 20;
			this->addUserMaleCB->Text = L"Мужской";
			this->addUserMaleCB->UseVisualStyleBackColor = true;
			// 
			// addUserNameTB
			// 
			this->addUserNameTB->Location = System::Drawing::Point(158, 47);
			this->addUserNameTB->Name = L"addUserNameTB";
			this->addUserNameTB->Size = System::Drawing::Size(121, 20);
			this->addUserNameTB->TabIndex = 19;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->changeUserLbl);
			this->panel6->Controls->Add(this->textBox10);
			this->panel6->Controls->Add(this->comboBox3);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->label18);
			this->panel6->Controls->Add(this->label19);
			this->panel6->Controls->Add(this->label20);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(label23);
			this->panel6->Controls->Add(this->comboBox4);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Controls->Add(this->textBox7);
			this->panel6->Controls->Add(this->textBox8);
			this->panel6->Controls->Add(this->checkBox2);
			this->panel6->Controls->Add(this->checkBox3);
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Location = System::Drawing::Point(683, 871);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(322, 310);
			this->panel6->TabIndex = 21;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::panel6_Paint);
			// 
			// changeUserLbl
			// 
			this->changeUserLbl->AutoSize = true;
			this->changeUserLbl->Location = System::Drawing::Point(1, 269);
			this->changeUserLbl->Name = L"changeUserLbl";
			this->changeUserLbl->Size = System::Drawing::Size(18, 13);
			this->changeUserLbl->TabIndex = 56;
			this->changeUserLbl->Text = L"ID";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(25, 266);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 55;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BARBER", L"ADMINISTRATOR", L"CLEANER", L"DIRECTOR" });
			this->comboBox3->Location = System::Drawing::Point(130, 228);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 54;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(5, 228);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 13);
			this->label16->TabIndex = 53;
			this->label16->Text = L"Тип пользователя";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(42, 201);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 13);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Должность";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(62, 178);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 13);
			this->label18->TabIndex = 50;
			this->label18->Text = L"Пароль";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(72, 150);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(34, 13);
			this->label19->TabIndex = 49;
			this->label19->Text = L"e-mail";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(14, 124);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 13);
			this->label20->TabIndex = 48;
			this->label20->Text = L"Номер телефона";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(21, 93);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(86, 13);
			this->label21->TabIndex = 47;
			this->label21->Text = L"Дата рождения";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(80, 55);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(27, 13);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Пол";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->comboBox4->Location = System::Drawing::Point(130, 198);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 44;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(131, 171);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 20);
			this->textBox5->TabIndex = 43;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(130, 144);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 42;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(130, 117);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 20);
			this->textBox7->TabIndex = 41;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(130, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(121, 20);
			this->textBox8->TabIndex = 40;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(217, 55);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(73, 17);
			this->checkBox2->TabIndex = 39;
			this->checkBox2->Text = L"Женский";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(130, 55);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(72, 17);
			this->checkBox3->TabIndex = 38;
			this->checkBox3->Text = L"Мужской";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(130, 19);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(121, 20);
			this->textBox9->TabIndex = 37;
			// 
			// ID
			// 
			this->ID->HeaderText = L"orderID";
			this->ID->Name = L"ID";
			// 
			// serviceID
			// 
			this->serviceID->HeaderText = L"serviceID";
			this->serviceID->Name = L"serviceID";
			// 
			// employeeOerderID
			// 
			this->employeeOerderID->HeaderText = L"employeeID";
			this->employeeOerderID->Name = L"employeeOerderID";
			// 
			// clientIDOrder
			// 
			this->clientIDOrder->HeaderText = L"clientID";
			this->clientIDOrder->Name = L"clientIDOrder";
			// 
			// cost
			// 
			this->cost->HeaderText = L"cost";
			this->cost->Name = L"cost";
			// 
			// sssorderStatus
			// 
			this->sssorderStatus->HeaderText = L"orderStatus";
			this->sssorderStatus->Name = L"sssorderStatus";
			// 
			// ordersDate
			// 
			this->ordersDate->HeaderText = L"Date";
			this->ordersDate->Name = L"ordersDate";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1205);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->EndInit();
			this->clientPanel->ResumeLayout(false);
			this->clientPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->EndInit();
			this->employeePanel->ResumeLayout(false);
			this->employeePanel->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e);
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
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void loadServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void addServiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void updateGrid_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
#endif MAINFORM_H