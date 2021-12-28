#ifndef ADMINFORM_H
#define ADMINFORM_H
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
	/// Сводка для adminForm
	/// </summary>
	public ref class adminForm : public System::Windows::Forms::Form
	{
	public:
		adminForm(int ID, int userStatus)
		{
			InitializeComponent();
			this->ID = ID;
			this->userStatus = userStatus;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~adminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ adminPanel;
	protected:
	private: System::Windows::Forms::TabControl^ mainTabSekector;
	private: System::Windows::Forms::TabPage^ mainTab;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ updateGridsBtn;
	private: System::Windows::Forms::Button^ writeDataBtn;
	private: System::Windows::Forms::Button^ loadBtn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ usersDataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userCurrentStatus;
	private: System::Windows::Forms::DataGridView^ servicesDataGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ servicesID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceName;
	private: System::Windows::Forms::DataGridView^ ordersDataGrid;




	private: System::Windows::Forms::TabPage^ addUserTab;
	private: System::Windows::Forms::Panel^ addUserPanel;
	private: System::Windows::Forms::MaskedTextBox^ addUserPhonenumberTB;
	private: System::Windows::Forms::MaskedTextBox^ addUserDateTB;
	private: System::Windows::Forms::GroupBox^ addUserSexGP;
	private: System::Windows::Forms::RadioButton^ addUserFemaleRB;
	private: System::Windows::Forms::RadioButton^ addUserMaleRB;
	private: System::Windows::Forms::Panel^ specialityPanel;
	private: System::Windows::Forms::Label^ addStatusLbl;
	private: System::Windows::Forms::ComboBox^ addUserSpecialityCB;
	private: System::Windows::Forms::ComboBox^ addUserTypeCB;
	private: System::Windows::Forms::Label^ addUserTypeLbl;
	private: System::Windows::Forms::Button^ addUserFormBtn;
	private: System::Windows::Forms::Label^ addPassLbl;
	private: System::Windows::Forms::Label^ addEmailLbl;
	private: System::Windows::Forms::Label^ addPhonenumberLbl;
	private: System::Windows::Forms::Label^ addDateLbl;
	private: System::Windows::Forms::TextBox^ addUserPasswordTB;
	private: System::Windows::Forms::TextBox^ addUserMailTB;
	private: System::Windows::Forms::TextBox^ addUserNameTB;
	private: System::Windows::Forms::Label^ addUser;
	private: System::Windows::Forms::TabPage^ changeUserTab;
	private: System::Windows::Forms::Panel^ changeUserPanel;
	private: System::Windows::Forms::MaskedTextBox^ changeUserPhonenumberTB;
	private: System::Windows::Forms::MaskedTextBox^ changeUserDateTB;
	private: System::Windows::Forms::Panel^ changeUserSpecialityPanel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ changePersonalAchievementsTB;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ changeUserExperienceTB;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ changeUserSpecialityCB;
	private: System::Windows::Forms::GroupBox^ changeUserSexGP;
	private: System::Windows::Forms::RadioButton^ changeUserFemaleRB;
	private: System::Windows::Forms::RadioButton^ changeUserMaleRB;
	private: System::Windows::Forms::ComboBox^ changeUserIdCB;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ UserIdLbl;
	private: System::Windows::Forms::ComboBox^ changeUserTypeCB;
	private: System::Windows::Forms::Label^ changeUserTypeLbl;
	private: System::Windows::Forms::Button^ changeUserFormBtn;
	private: System::Windows::Forms::Label^ changePassLbl;
	private: System::Windows::Forms::Label^ changeEmailLbl;
	private: System::Windows::Forms::Label^ changePhonenumberLbl;
	private: System::Windows::Forms::Label^ changeDateLbl;
	private: System::Windows::Forms::TextBox^ changeUserPasswordTB;
	private: System::Windows::Forms::TextBox^ changeUserMailTB;
	private: System::Windows::Forms::TextBox^ changeUserNameTB;
	private: System::Windows::Forms::TabPage^ addServiceTab;




	private: System::Windows::Forms::Panel^ addServicePanel;
	private: System::Windows::Forms::Button^ loadServicesBtn;
	private: System::Windows::Forms::Button^ updateServicesBtn;
	private: System::Windows::Forms::Button^ saveServicesBtn;
	private: System::Windows::Forms::RichTextBox^ servicesRTB;
	private: System::Windows::Forms::Label^ addServicePriceLbl;
	private: System::Windows::Forms::Label^ addServices;
	private: System::Windows::Forms::Label^ addServiceNameLbl;
	private: System::Windows::Forms::TextBox^ serviceNameTB;
	private: System::Windows::Forms::TextBox^ servicePriceTB;
	private: System::Windows::Forms::Button^ addServiceBtn;
private: System::Windows::Forms::TabPage^ changeServiceTab;

	private: System::Windows::Forms::Panel^ changeServicePanel;
	private: System::Windows::Forms::Label^ deleteServices;
	private: System::Windows::Forms::Label^ changeServicePriceLbl;
	private: System::Windows::Forms::Label^ changeServiceNameLbl;
	private: System::Windows::Forms::TextBox^ changeServiceNameTB;
	private: System::Windows::Forms::TextBox^ changeServicePriceTB;
	private: System::Windows::Forms::Button^ changeServiceFormBtn;
	private: System::Windows::Forms::TabPage^ showReportTab;
	private: System::Windows::Forms::Panel^ reportPanel;
	private: System::Windows::Forms::CheckBox^ averageСheckCB;
	private: System::Windows::Forms::CheckBox^ clientsNumberCB;
	private: System::Windows::Forms::CheckBox^ profitCB;
	private: System::Windows::Forms::CheckBox^ proceedsCB;
	private: System::Windows::Forms::CheckBox^ ExpensesCB;
	private: System::Windows::Forms::RichTextBox^ makeReportRTB;
	private: System::Windows::Forms::Button^ makeReportBtn;
	private: System::Windows::Forms::ComboBox^ reportPeriodCB;
	private: System::Windows::Forms::Label^ reportPeriodLbl;
	private: System::Windows::Forms::Label^ financialStatementsLbl;
	private: System::Windows::Forms::Button^ deleteSpecidicServiceOrderBtn;
	private: System::Windows::Forms::Button^ deleteSpecificUser;
	private: System::Windows::Forms::Button^ showReportBtn;
	private: System::Windows::Forms::Button^ changeServiceBtn;
	private: System::Windows::Forms::Button^ addServiceBtnFromAdminPanel;
	private: System::Windows::Forms::Button^ delOrderBtn;
	private: System::Windows::Forms::Button^ changeUserBtn;
	private: System::Windows::Forms::Button^ addUserBtn;
	private: System::Windows::Forms::Label^ AdminLbl;

	private:
		int ID;
		int userStatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderStatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceInOrder;
	   /// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ changeNameLbl;
			System::Windows::Forms::Label^ addNameLbl;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminForm::typeid));
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->mainTabSekector = (gcnew System::Windows::Forms::TabControl());
			this->mainTab = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updateGridsBtn = (gcnew System::Windows::Forms::Button());
			this->writeDataBtn = (gcnew System::Windows::Forms::Button());
			this->loadBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->userID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userCurrentStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->servicesDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->servicesID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->addUserTab = (gcnew System::Windows::Forms::TabPage());
			this->addUserPanel = (gcnew System::Windows::Forms::Panel());
			this->addUserPhonenumberTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addUserDateTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addUserSexGP = (gcnew System::Windows::Forms::GroupBox());
			this->addUserFemaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->addUserMaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->specialityPanel = (gcnew System::Windows::Forms::Panel());
			this->addStatusLbl = (gcnew System::Windows::Forms::Label());
			this->addUserSpecialityCB = (gcnew System::Windows::Forms::ComboBox());
			this->addUserTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->addUserTypeLbl = (gcnew System::Windows::Forms::Label());
			this->addUserFormBtn = (gcnew System::Windows::Forms::Button());
			this->addPassLbl = (gcnew System::Windows::Forms::Label());
			this->addEmailLbl = (gcnew System::Windows::Forms::Label());
			this->addPhonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->addDateLbl = (gcnew System::Windows::Forms::Label());
			this->addUserPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserMailTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserNameTB = (gcnew System::Windows::Forms::TextBox());
			this->addUser = (gcnew System::Windows::Forms::Label());
			this->changeUserTab = (gcnew System::Windows::Forms::TabPage());
			this->changeUserPanel = (gcnew System::Windows::Forms::Panel());
			this->changeUserPhonenumberTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->changeUserDateTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->changeUserSpecialityPanel = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->changePersonalAchievementsTB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->changeUserExperienceTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->changeUserSpecialityCB = (gcnew System::Windows::Forms::ComboBox());
			this->changeUserSexGP = (gcnew System::Windows::Forms::GroupBox());
			this->changeUserFemaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->changeUserMaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->changeUserIdCB = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->UserIdLbl = (gcnew System::Windows::Forms::Label());
			this->changeUserTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->changeUserTypeLbl = (gcnew System::Windows::Forms::Label());
			this->changeUserFormBtn = (gcnew System::Windows::Forms::Button());
			this->changePassLbl = (gcnew System::Windows::Forms::Label());
			this->changeEmailLbl = (gcnew System::Windows::Forms::Label());
			this->changePhonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->changeDateLbl = (gcnew System::Windows::Forms::Label());
			this->changeUserPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->changeUserMailTB = (gcnew System::Windows::Forms::TextBox());
			this->changeUserNameTB = (gcnew System::Windows::Forms::TextBox());
			this->addServiceTab = (gcnew System::Windows::Forms::TabPage());
			this->addServicePanel = (gcnew System::Windows::Forms::Panel());
			this->loadServicesBtn = (gcnew System::Windows::Forms::Button());
			this->updateServicesBtn = (gcnew System::Windows::Forms::Button());
			this->saveServicesBtn = (gcnew System::Windows::Forms::Button());
			this->servicesRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->addServicePriceLbl = (gcnew System::Windows::Forms::Label());
			this->addServices = (gcnew System::Windows::Forms::Label());
			this->addServiceNameLbl = (gcnew System::Windows::Forms::Label());
			this->serviceNameTB = (gcnew System::Windows::Forms::TextBox());
			this->servicePriceTB = (gcnew System::Windows::Forms::TextBox());
			this->addServiceBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceTab = (gcnew System::Windows::Forms::TabPage());
			this->changeServicePanel = (gcnew System::Windows::Forms::Panel());
			this->deleteServices = (gcnew System::Windows::Forms::Label());
			this->changeServicePriceLbl = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameLbl = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServicePriceTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServiceFormBtn = (gcnew System::Windows::Forms::Button());
			this->showReportTab = (gcnew System::Windows::Forms::TabPage());
			this->reportPanel = (gcnew System::Windows::Forms::Panel());
			this->averageСheckCB = (gcnew System::Windows::Forms::CheckBox());
			this->clientsNumberCB = (gcnew System::Windows::Forms::CheckBox());
			this->profitCB = (gcnew System::Windows::Forms::CheckBox());
			this->proceedsCB = (gcnew System::Windows::Forms::CheckBox());
			this->ExpensesCB = (gcnew System::Windows::Forms::CheckBox());
			this->makeReportRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->makeReportBtn = (gcnew System::Windows::Forms::Button());
			this->reportPeriodCB = (gcnew System::Windows::Forms::ComboBox());
			this->reportPeriodLbl = (gcnew System::Windows::Forms::Label());
			this->financialStatementsLbl = (gcnew System::Windows::Forms::Label());
			this->deleteSpecidicServiceOrderBtn = (gcnew System::Windows::Forms::Button());
			this->deleteSpecificUser = (gcnew System::Windows::Forms::Button());
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->addServiceBtnFromAdminPanel = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceInOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			changeNameLbl = (gcnew System::Windows::Forms::Label());
			addNameLbl = (gcnew System::Windows::Forms::Label());
			this->adminPanel->SuspendLayout();
			this->mainTabSekector->SuspendLayout();
			this->mainTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			this->addUserTab->SuspendLayout();
			this->addUserPanel->SuspendLayout();
			this->addUserSexGP->SuspendLayout();
			this->specialityPanel->SuspendLayout();
			this->changeUserTab->SuspendLayout();
			this->changeUserPanel->SuspendLayout();
			this->changeUserSpecialityPanel->SuspendLayout();
			this->changeUserSexGP->SuspendLayout();
			this->addServiceTab->SuspendLayout();
			this->addServicePanel->SuspendLayout();
			this->changeServiceTab->SuspendLayout();
			this->changeServicePanel->SuspendLayout();
			this->showReportTab->SuspendLayout();
			this->reportPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// changeNameLbl
			// 
			changeNameLbl->AutoSize = true;
			changeNameLbl->Location = System::Drawing::Point(224, 83);
			changeNameLbl->Name = L"changeNameLbl";
			changeNameLbl->Size = System::Drawing::Size(35, 17);
			changeNameLbl->TabIndex = 45;
			changeNameLbl->Text = L"Имя";
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
			// adminPanel
			// 
			this->adminPanel->Controls->Add(this->mainTabSekector);
			this->adminPanel->Controls->Add(this->deleteSpecidicServiceOrderBtn);
			this->adminPanel->Controls->Add(this->deleteSpecificUser);
			this->adminPanel->Controls->Add(this->showReportBtn);
			this->adminPanel->Controls->Add(this->changeServiceBtn);
			this->adminPanel->Controls->Add(this->addServiceBtnFromAdminPanel);
			this->adminPanel->Controls->Add(this->delOrderBtn);
			this->adminPanel->Controls->Add(this->changeUserBtn);
			this->adminPanel->Controls->Add(this->addUserBtn);
			this->adminPanel->Controls->Add(this->AdminLbl);
			this->adminPanel->Location = System::Drawing::Point(12, 12);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(904, 725);
			this->adminPanel->TabIndex = 2;
			// 
			// mainTabSekector
			// 
			this->mainTabSekector->Controls->Add(this->mainTab);
			this->mainTabSekector->Controls->Add(this->addUserTab);
			this->mainTabSekector->Controls->Add(this->changeUserTab);
			this->mainTabSekector->Controls->Add(this->addServiceTab);
			this->mainTabSekector->Controls->Add(this->changeServiceTab);
			this->mainTabSekector->Controls->Add(this->showReportTab);
			this->mainTabSekector->Location = System::Drawing::Point(301, 3);
			this->mainTabSekector->Name = L"mainTabSekector";
			this->mainTabSekector->SelectedIndex = 0;
			this->mainTabSekector->Size = System::Drawing::Size(583, 712);
			this->mainTabSekector->TabIndex = 33;
			this->mainTabSekector->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &adminForm::mainTabSekector_Selected);
			// 
			// mainTab
			// 
			this->mainTab->BackColor = System::Drawing::Color::Gainsboro;
			this->mainTab->Controls->Add(this->label1);
			this->mainTab->Controls->Add(this->updateGridsBtn);
			this->mainTab->Controls->Add(this->writeDataBtn);
			this->mainTab->Controls->Add(this->loadBtn);
			this->mainTab->Controls->Add(this->label2);
			this->mainTab->Controls->Add(this->label3);
			this->mainTab->Controls->Add(this->usersDataGrid);
			this->mainTab->Controls->Add(this->servicesDataGrid);
			this->mainTab->Controls->Add(this->ordersDataGrid);
			this->mainTab->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->mainTab->Location = System::Drawing::Point(4, 22);
			this->mainTab->Name = L"mainTab";
			this->mainTab->Padding = System::Windows::Forms::Padding(3);
			this->mainTab->Size = System::Drawing::Size(575, 686);
			this->mainTab->TabIndex = 0;
			this->mainTab->Text = L"Главная";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 30);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Пользователи";
			// 
			// updateGridsBtn
			// 
			this->updateGridsBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateGridsBtn.BackgroundImage")));
			this->updateGridsBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateGridsBtn->Location = System::Drawing::Point(511, 12);
			this->updateGridsBtn->Name = L"updateGridsBtn";
			this->updateGridsBtn->Size = System::Drawing::Size(40, 40);
			this->updateGridsBtn->TabIndex = 12;
			this->updateGridsBtn->UseVisualStyleBackColor = true;
			this->updateGridsBtn->Click += gcnew System::EventHandler(this, &adminForm::updateGridsBtn_Click);
			// 
			// writeDataBtn
			// 
			this->writeDataBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"writeDataBtn.BackgroundImage")));
			this->writeDataBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->writeDataBtn->Location = System::Drawing::Point(465, 12);
			this->writeDataBtn->Name = L"writeDataBtn";
			this->writeDataBtn->Size = System::Drawing::Size(40, 40);
			this->writeDataBtn->TabIndex = 31;
			this->writeDataBtn->UseVisualStyleBackColor = true;
			this->writeDataBtn->Click += gcnew System::EventHandler(this, &adminForm::writeDataBtn_Click);
			// 
			// loadBtn
			// 
			this->loadBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loadBtn.BackgroundImage")));
			this->loadBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->loadBtn->Location = System::Drawing::Point(419, 12);
			this->loadBtn->Name = L"loadBtn";
			this->loadBtn->Size = System::Drawing::Size(40, 40);
			this->loadBtn->TabIndex = 32;
			this->loadBtn->UseVisualStyleBackColor = true;
			this->loadBtn->Click += gcnew System::EventHandler(this, &adminForm::loadBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(6, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 30);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Услуги";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(3, 460);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 30);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Заказы";
			// 
			// usersDataGrid
			// 
			this->usersDataGrid->AllowUserToAddRows = false;
			this->usersDataGrid->AllowUserToDeleteRows = false;
			this->usersDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->usersDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->usersDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->userID,
					this->userName, this->userCurrentStatus
			});
			this->usersDataGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->usersDataGrid->Location = System::Drawing::Point(8, 55);
			this->usersDataGrid->MultiSelect = false;
			this->usersDataGrid->Name = L"usersDataGrid";
			this->usersDataGrid->Size = System::Drawing::Size(543, 168);
			this->usersDataGrid->TabIndex = 7;
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
			// servicesDataGrid
			// 
			this->servicesDataGrid->AllowUserToAddRows = false;
			this->servicesDataGrid->AllowUserToDeleteRows = false;
			this->servicesDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->servicesDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->servicesDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->servicesID,
					this->serviceName, this->Price
			});
			this->servicesDataGrid->Location = System::Drawing::Point(8, 268);
			this->servicesDataGrid->MultiSelect = false;
			this->servicesDataGrid->Name = L"servicesDataGrid";
			this->servicesDataGrid->Size = System::Drawing::Size(543, 178);
			this->servicesDataGrid->TabIndex = 8;
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
			// ordersDataGrid
			// 
			this->ordersDataGrid->AllowUserToAddRows = false;
			this->ordersDataGrid->AllowUserToDeleteRows = false;
			this->ordersDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ordersDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ordersDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->orderID,
					this->employeeID, this->clientID, this->orderStatus, this->serviceInOrder
			});
			this->ordersDataGrid->Location = System::Drawing::Point(8, 493);
			this->ordersDataGrid->MultiSelect = false;
			this->ordersDataGrid->Name = L"ordersDataGrid";
			this->ordersDataGrid->Size = System::Drawing::Size(543, 176);
			this->ordersDataGrid->TabIndex = 9;
			// 
			// addUserTab
			// 
			this->addUserTab->BackColor = System::Drawing::Color::Gainsboro;
			this->addUserTab->Controls->Add(this->addUserPanel);
			this->addUserTab->Location = System::Drawing::Point(4, 22);
			this->addUserTab->Name = L"addUserTab";
			this->addUserTab->Padding = System::Windows::Forms::Padding(3);
			this->addUserTab->Size = System::Drawing::Size(575, 686);
			this->addUserTab->TabIndex = 1;
			this->addUserTab->Text = L"Добавить пользователя";
			// 
			// addUserPanel
			// 
			this->addUserPanel->Controls->Add(this->addUserPhonenumberTB);
			this->addUserPanel->Controls->Add(this->addUserDateTB);
			this->addUserPanel->Controls->Add(this->addUserSexGP);
			this->addUserPanel->Controls->Add(this->specialityPanel);
			this->addUserPanel->Controls->Add(this->addUserTypeCB);
			this->addUserPanel->Controls->Add(this->addUserTypeLbl);
			this->addUserPanel->Controls->Add(this->addUserFormBtn);
			this->addUserPanel->Controls->Add(this->addPassLbl);
			this->addUserPanel->Controls->Add(this->addEmailLbl);
			this->addUserPanel->Controls->Add(this->addPhonenumberLbl);
			this->addUserPanel->Controls->Add(this->addDateLbl);
			this->addUserPanel->Controls->Add(addNameLbl);
			this->addUserPanel->Controls->Add(this->addUserPasswordTB);
			this->addUserPanel->Controls->Add(this->addUserMailTB);
			this->addUserPanel->Controls->Add(this->addUserNameTB);
			this->addUserPanel->Controls->Add(this->addUser);
			this->addUserPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addUserPanel->Location = System::Drawing::Point(6, 5);
			this->addUserPanel->Name = L"addUserPanel";
			this->addUserPanel->Size = System::Drawing::Size(563, 675);
			this->addUserPanel->TabIndex = 26;
			// 
			// addUserPhonenumberTB
			// 
			this->addUserPhonenumberTB->Location = System::Drawing::Point(141, 201);
			this->addUserPhonenumberTB->Mask = L"(999) 000-0000";
			this->addUserPhonenumberTB->Name = L"addUserPhonenumberTB";
			this->addUserPhonenumberTB->Size = System::Drawing::Size(124, 24);
			this->addUserPhonenumberTB->TabIndex = 28;
			// 
			// addUserDateTB
			// 
			this->addUserDateTB->Location = System::Drawing::Point(141, 171);
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
			// specialityPanel
			// 
			this->specialityPanel->Controls->Add(this->addStatusLbl);
			this->specialityPanel->Controls->Add(this->addUserSpecialityCB);
			this->specialityPanel->Location = System::Drawing::Point(42, 287);
			this->specialityPanel->Name = L"specialityPanel";
			this->specialityPanel->Size = System::Drawing::Size(242, 38);
			this->specialityPanel->TabIndex = 38;
			this->specialityPanel->Visible = false;
			// 
			// addStatusLbl
			// 
			this->addStatusLbl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addStatusLbl->AutoSize = true;
			this->addStatusLbl->Location = System::Drawing::Point(16, 11);
			this->addStatusLbl->Name = L"addStatusLbl";
			this->addStatusLbl->Size = System::Drawing::Size(77, 17);
			this->addStatusLbl->TabIndex = 33;
			this->addStatusLbl->Text = L"Должность";
			// 
			// addUserSpecialityCB
			// 
			this->addUserSpecialityCB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addUserSpecialityCB->FormattingEnabled = true;
			this->addUserSpecialityCB->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"BARBER", L"ADMINISTRATOR", L"CLEANER",
					L"DIRECTOR"
			});
			this->addUserSpecialityCB->Location = System::Drawing::Point(99, 10);
			this->addUserSpecialityCB->Name = L"addUserSpecialityCB";
			this->addUserSpecialityCB->Size = System::Drawing::Size(124, 23);
			this->addUserSpecialityCB->TabIndex = 26;
			// 
			// addUserTypeCB
			// 
			this->addUserTypeCB->FormattingEnabled = true;
			this->addUserTypeCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->addUserTypeCB->Location = System::Drawing::Point(141, 142);
			this->addUserTypeCB->Name = L"addUserTypeCB";
			this->addUserTypeCB->Size = System::Drawing::Size(124, 23);
			this->addUserTypeCB->TabIndex = 36;
			this->addUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &adminForm::addUserTypeCB_SelectedIndexChanged);
			this->addUserTypeCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &adminForm::addUserTypeCB_SelectionChangeCommitted);
			// 
			// addUserTypeLbl
			// 
			this->addUserTypeLbl->AutoSize = true;
			this->addUserTypeLbl->Location = System::Drawing::Point(14, 145);
			this->addUserTypeLbl->Name = L"addUserTypeLbl";
			this->addUserTypeLbl->Size = System::Drawing::Size(120, 17);
			this->addUserTypeLbl->TabIndex = 35;
			this->addUserTypeLbl->Text = L"Тип пользователя";
			// 
			// addUserFormBtn
			// 
			this->addUserFormBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addUserFormBtn->Location = System::Drawing::Point(141, 331);
			this->addUserFormBtn->Name = L"addUserFormBtn";
			this->addUserFormBtn->Size = System::Drawing::Size(124, 34);
			this->addUserFormBtn->TabIndex = 34;
			this->addUserFormBtn->Text = L"Добавить";
			this->addUserFormBtn->UseVisualStyleBackColor = true;
			this->addUserFormBtn->Click += gcnew System::EventHandler(this, &adminForm::addUserFormBtn_Click);
			// 
			// addPassLbl
			// 
			this->addPassLbl->AutoSize = true;
			this->addPassLbl->Location = System::Drawing::Point(80, 264);
			this->addPassLbl->Name = L"addPassLbl";
			this->addPassLbl->Size = System::Drawing::Size(55, 17);
			this->addPassLbl->TabIndex = 32;
			this->addPassLbl->Text = L"Пароль";
			// 
			// addEmailLbl
			// 
			this->addEmailLbl->AutoSize = true;
			this->addEmailLbl->Location = System::Drawing::Point(88, 234);
			this->addEmailLbl->Name = L"addEmailLbl";
			this->addEmailLbl->Size = System::Drawing::Size(45, 17);
			this->addEmailLbl->TabIndex = 31;
			this->addEmailLbl->Text = L"e-mail";
			// 
			// addPhonenumberLbl
			// 
			this->addPhonenumberLbl->AutoSize = true;
			this->addPhonenumberLbl->Location = System::Drawing::Point(21, 204);
			this->addPhonenumberLbl->Name = L"addPhonenumberLbl";
			this->addPhonenumberLbl->Size = System::Drawing::Size(114, 17);
			this->addPhonenumberLbl->TabIndex = 30;
			this->addPhonenumberLbl->Text = L"Номер телефона";
			// 
			// addDateLbl
			// 
			this->addDateLbl->AutoSize = true;
			this->addDateLbl->Location = System::Drawing::Point(30, 174);
			this->addDateLbl->Name = L"addDateLbl";
			this->addDateLbl->Size = System::Drawing::Size(105, 17);
			this->addDateLbl->TabIndex = 29;
			this->addDateLbl->Text = L"Дата рождения";
			// 
			// addUserPasswordTB
			// 
			this->addUserPasswordTB->Location = System::Drawing::Point(141, 261);
			this->addUserPasswordTB->Name = L"addUserPasswordTB";
			this->addUserPasswordTB->Size = System::Drawing::Size(124, 24);
			this->addUserPasswordTB->TabIndex = 25;
			// 
			// addUserMailTB
			// 
			this->addUserMailTB->Location = System::Drawing::Point(141, 231);
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
			this->addUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->addUser->Location = System::Drawing::Point(30, 11);
			this->addUser->Name = L"addUser";
			this->addUser->Size = System::Drawing::Size(329, 30);
			this->addUser->TabIndex = 37;
			this->addUser->Text = L"Добавить нового пользователя";
			// 
			// changeUserTab
			// 
			this->changeUserTab->BackColor = System::Drawing::Color::Gainsboro;
			this->changeUserTab->Controls->Add(this->changeUserPanel);
			this->changeUserTab->Location = System::Drawing::Point(4, 22);
			this->changeUserTab->Name = L"changeUserTab";
			this->changeUserTab->Padding = System::Windows::Forms::Padding(3);
			this->changeUserTab->Size = System::Drawing::Size(575, 686);
			this->changeUserTab->TabIndex = 2;
			this->changeUserTab->Text = L"Изменить пользователя";
			// 
			// changeUserPanel
			// 
			this->changeUserPanel->Controls->Add(this->changeUserPhonenumberTB);
			this->changeUserPanel->Controls->Add(this->changeUserDateTB);
			this->changeUserPanel->Controls->Add(this->changeUserSpecialityPanel);
			this->changeUserPanel->Controls->Add(this->changeUserSexGP);
			this->changeUserPanel->Controls->Add(this->changeUserIdCB);
			this->changeUserPanel->Controls->Add(this->label9);
			this->changeUserPanel->Controls->Add(this->label8);
			this->changeUserPanel->Controls->Add(this->UserIdLbl);
			this->changeUserPanel->Controls->Add(this->changeUserTypeCB);
			this->changeUserPanel->Controls->Add(this->changeUserTypeLbl);
			this->changeUserPanel->Controls->Add(this->changeUserFormBtn);
			this->changeUserPanel->Controls->Add(this->changePassLbl);
			this->changeUserPanel->Controls->Add(this->changeEmailLbl);
			this->changeUserPanel->Controls->Add(this->changePhonenumberLbl);
			this->changeUserPanel->Controls->Add(this->changeDateLbl);
			this->changeUserPanel->Controls->Add(changeNameLbl);
			this->changeUserPanel->Controls->Add(this->changeUserPasswordTB);
			this->changeUserPanel->Controls->Add(this->changeUserMailTB);
			this->changeUserPanel->Controls->Add(this->changeUserNameTB);
			this->changeUserPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->changeUserPanel->Location = System::Drawing::Point(3, 6);
			this->changeUserPanel->Name = L"changeUserPanel";
			this->changeUserPanel->Size = System::Drawing::Size(642, 694);
			this->changeUserPanel->TabIndex = 22;
			// 
			// changeUserPhonenumberTB
			// 
			this->changeUserPhonenumberTB->Location = System::Drawing::Point(271, 202);
			this->changeUserPhonenumberTB->Mask = L"(999) 000-0000";
			this->changeUserPhonenumberTB->Name = L"changeUserPhonenumberTB";
			this->changeUserPhonenumberTB->Size = System::Drawing::Size(121, 24);
			this->changeUserPhonenumberTB->TabIndex = 62;
			// 
			// changeUserDateTB
			// 
			this->changeUserDateTB->Location = System::Drawing::Point(271, 176);
			this->changeUserDateTB->Mask = L"00/00/0000";
			this->changeUserDateTB->Name = L"changeUserDateTB";
			this->changeUserDateTB->Size = System::Drawing::Size(121, 24);
			this->changeUserDateTB->TabIndex = 63;
			this->changeUserDateTB->ValidatingType = System::DateTime::typeid;
			// 
			// changeUserSpecialityPanel
			// 
			this->changeUserSpecialityPanel->Controls->Add(this->label10);
			this->changeUserSpecialityPanel->Controls->Add(this->changePersonalAchievementsTB);
			this->changeUserSpecialityPanel->Controls->Add(this->label7);
			this->changeUserSpecialityPanel->Controls->Add(this->changeUserExperienceTB);
			this->changeUserSpecialityPanel->Controls->Add(this->label4);
			this->changeUserSpecialityPanel->Controls->Add(this->changeUserSpecialityCB);
			this->changeUserSpecialityPanel->Location = System::Drawing::Point(73, 310);
			this->changeUserSpecialityPanel->Name = L"changeUserSpecialityPanel";
			this->changeUserSpecialityPanel->Size = System::Drawing::Size(344, 192);
			this->changeUserSpecialityPanel->TabIndex = 61;
			this->changeUserSpecialityPanel->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 17);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Личные достижения";
			// 
			// changePersonalAchievementsTB
			// 
			this->changePersonalAchievementsTB->Location = System::Drawing::Point(197, 63);
			this->changePersonalAchievementsTB->Multiline = true;
			this->changePersonalAchievementsTB->Name = L"changePersonalAchievementsTB";
			this->changePersonalAchievementsTB->Size = System::Drawing::Size(122, 75);
			this->changePersonalAchievementsTB->TabIndex = 42;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(144, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 17);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Стаж";
			// 
			// changeUserExperienceTB
			// 
			this->changeUserExperienceTB->Location = System::Drawing::Point(197, 33);
			this->changeUserExperienceTB->Name = L"changeUserExperienceTB";
			this->changeUserExperienceTB->Size = System::Drawing::Size(122, 24);
			this->changeUserExperienceTB->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 17);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Должность";
			// 
			// changeUserSpecialityCB
			// 
			this->changeUserSpecialityCB->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->changeUserSpecialityCB->FormattingEnabled = true;
			this->changeUserSpecialityCB->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"BARBER", L"ADMINISTRATOR", L"CLEANER",
					L"DIRECTOR"
			});
			this->changeUserSpecialityCB->Location = System::Drawing::Point(197, 3);
			this->changeUserSpecialityCB->Name = L"changeUserSpecialityCB";
			this->changeUserSpecialityCB->Size = System::Drawing::Size(122, 23);
			this->changeUserSpecialityCB->TabIndex = 26;
			// 
			// changeUserSexGP
			// 
			this->changeUserSexGP->Controls->Add(this->changeUserFemaleRB);
			this->changeUserSexGP->Controls->Add(this->changeUserMaleRB);
			this->changeUserSexGP->Location = System::Drawing::Point(217, 107);
			this->changeUserSexGP->Name = L"changeUserSexGP";
			this->changeUserSexGP->Size = System::Drawing::Size(175, 58);
			this->changeUserSexGP->TabIndex = 60;
			this->changeUserSexGP->TabStop = false;
			this->changeUserSexGP->Text = L"Пол";
			// 
			// changeUserFemaleRB
			// 
			this->changeUserFemaleRB->AutoSize = true;
			this->changeUserFemaleRB->Location = System::Drawing::Point(69, 33);
			this->changeUserFemaleRB->Name = L"changeUserFemaleRB";
			this->changeUserFemaleRB->Size = System::Drawing::Size(82, 21);
			this->changeUserFemaleRB->TabIndex = 40;
			this->changeUserFemaleRB->TabStop = true;
			this->changeUserFemaleRB->Text = L"Женский";
			this->changeUserFemaleRB->UseVisualStyleBackColor = true;
			// 
			// changeUserMaleRB
			// 
			this->changeUserMaleRB->AutoSize = true;
			this->changeUserMaleRB->Location = System::Drawing::Point(69, 13);
			this->changeUserMaleRB->Name = L"changeUserMaleRB";
			this->changeUserMaleRB->Size = System::Drawing::Size(84, 21);
			this->changeUserMaleRB->TabIndex = 39;
			this->changeUserMaleRB->TabStop = true;
			this->changeUserMaleRB->Text = L"Мужской";
			this->changeUserMaleRB->UseVisualStyleBackColor = true;
			// 
			// changeUserIdCB
			// 
			this->changeUserIdCB->FormattingEnabled = true;
			this->changeUserIdCB->Location = System::Drawing::Point(57, 112);
			this->changeUserIdCB->Name = L"changeUserIdCB";
			this->changeUserIdCB->Size = System::Drawing::Size(76, 23);
			this->changeUserIdCB->TabIndex = 59;
			this->changeUserIdCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &adminForm::changeUserIdCB_SelectionChangeCommitted);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Location = System::Drawing::Point(34, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 36);
			this->label9->TabIndex = 58;
			this->label9->Text = L"         Введите id\r\n  для изменения данных";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(30, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(333, 30);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Изменить данные пользователя";
			// 
			// UserIdLbl
			// 
			this->UserIdLbl->AutoSize = true;
			this->UserIdLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UserIdLbl->Location = System::Drawing::Point(31, 117);
			this->UserIdLbl->Name = L"UserIdLbl";
			this->UserIdLbl->Size = System::Drawing::Size(20, 13);
			this->UserIdLbl->TabIndex = 56;
			this->UserIdLbl->Text = L"ID";
			// 
			// changeUserTypeCB
			// 
			this->changeUserTypeCB->FormattingEnabled = true;
			this->changeUserTypeCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->changeUserTypeCB->Location = System::Drawing::Point(271, 284);
			this->changeUserTypeCB->Name = L"changeUserTypeCB";
			this->changeUserTypeCB->Size = System::Drawing::Size(121, 23);
			this->changeUserTypeCB->TabIndex = 54;
			this->changeUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &adminForm::changeUserTypeCB_SelectedIndexChanged);
			// 
			// changeUserTypeLbl
			// 
			this->changeUserTypeLbl->AutoSize = true;
			this->changeUserTypeLbl->Location = System::Drawing::Point(141, 286);
			this->changeUserTypeLbl->Name = L"changeUserTypeLbl";
			this->changeUserTypeLbl->Size = System::Drawing::Size(120, 17);
			this->changeUserTypeLbl->TabIndex = 53;
			this->changeUserTypeLbl->Text = L"Тип пользователя";
			// 
			// changeUserFormBtn
			// 
			this->changeUserFormBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changeUserFormBtn->Location = System::Drawing::Point(436, 512);
			this->changeUserFormBtn->Name = L"changeUserFormBtn";
			this->changeUserFormBtn->Size = System::Drawing::Size(121, 37);
			this->changeUserFormBtn->TabIndex = 52;
			this->changeUserFormBtn->Text = L"Изменить";
			this->changeUserFormBtn->UseVisualStyleBackColor = true;
			this->changeUserFormBtn->Click += gcnew System::EventHandler(this, &adminForm::changeUserFormBtn_Click);
			// 
			// changePassLbl
			// 
			this->changePassLbl->AutoSize = true;
			this->changePassLbl->Location = System::Drawing::Point(201, 261);
			this->changePassLbl->Name = L"changePassLbl";
			this->changePassLbl->Size = System::Drawing::Size(55, 17);
			this->changePassLbl->TabIndex = 50;
			this->changePassLbl->Text = L"Пароль";
			// 
			// changeEmailLbl
			// 
			this->changeEmailLbl->AutoSize = true;
			this->changeEmailLbl->Location = System::Drawing::Point(211, 233);
			this->changeEmailLbl->Name = L"changeEmailLbl";
			this->changeEmailLbl->Size = System::Drawing::Size(45, 17);
			this->changeEmailLbl->TabIndex = 49;
			this->changeEmailLbl->Text = L"e-mail";
			// 
			// changePhonenumberLbl
			// 
			this->changePhonenumberLbl->AutoSize = true;
			this->changePhonenumberLbl->Location = System::Drawing::Point(144, 207);
			this->changePhonenumberLbl->Name = L"changePhonenumberLbl";
			this->changePhonenumberLbl->Size = System::Drawing::Size(114, 17);
			this->changePhonenumberLbl->TabIndex = 48;
			this->changePhonenumberLbl->Text = L"Номер телефона";
			// 
			// changeDateLbl
			// 
			this->changeDateLbl->AutoSize = true;
			this->changeDateLbl->Location = System::Drawing::Point(151, 179);
			this->changeDateLbl->Name = L"changeDateLbl";
			this->changeDateLbl->Size = System::Drawing::Size(105, 17);
			this->changeDateLbl->TabIndex = 47;
			this->changeDateLbl->Text = L"Дата рождения";
			// 
			// changeUserPasswordTB
			// 
			this->changeUserPasswordTB->Location = System::Drawing::Point(271, 257);
			this->changeUserPasswordTB->Name = L"changeUserPasswordTB";
			this->changeUserPasswordTB->Size = System::Drawing::Size(120, 24);
			this->changeUserPasswordTB->TabIndex = 43;
			// 
			// changeUserMailTB
			// 
			this->changeUserMailTB->Location = System::Drawing::Point(271, 230);
			this->changeUserMailTB->Name = L"changeUserMailTB";
			this->changeUserMailTB->Size = System::Drawing::Size(121, 24);
			this->changeUserMailTB->TabIndex = 42;
			// 
			// changeUserNameTB
			// 
			this->changeUserNameTB->Location = System::Drawing::Point(271, 76);
			this->changeUserNameTB->Name = L"changeUserNameTB";
			this->changeUserNameTB->Size = System::Drawing::Size(121, 24);
			this->changeUserNameTB->TabIndex = 37;
			// 
			// addServiceTab
			// 
			this->addServiceTab->BackColor = System::Drawing::Color::Gainsboro;
			this->addServiceTab->Controls->Add(this->addServicePanel);
			this->addServiceTab->Location = System::Drawing::Point(4, 22);
			this->addServiceTab->Name = L"addServiceTab";
			this->addServiceTab->Padding = System::Windows::Forms::Padding(3);
			this->addServiceTab->Size = System::Drawing::Size(575, 686);
			this->addServiceTab->TabIndex = 3;
			this->addServiceTab->Text = L"Добавить услугу";
			// 
			// addServicePanel
			// 
			this->addServicePanel->Controls->Add(this->loadServicesBtn);
			this->addServicePanel->Controls->Add(this->updateServicesBtn);
			this->addServicePanel->Controls->Add(this->saveServicesBtn);
			this->addServicePanel->Controls->Add(this->servicesRTB);
			this->addServicePanel->Controls->Add(this->addServicePriceLbl);
			this->addServicePanel->Controls->Add(this->addServices);
			this->addServicePanel->Controls->Add(this->addServiceNameLbl);
			this->addServicePanel->Controls->Add(this->serviceNameTB);
			this->addServicePanel->Controls->Add(this->servicePriceTB);
			this->addServicePanel->Controls->Add(this->addServiceBtn);
			this->addServicePanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addServicePanel->Location = System::Drawing::Point(3, 6);
			this->addServicePanel->Name = L"addServicePanel";
			this->addServicePanel->Size = System::Drawing::Size(566, 677);
			this->addServicePanel->TabIndex = 27;
			// 
			// loadServicesBtn
			// 
			this->loadServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loadServicesBtn.BackgroundImage")));
			this->loadServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->loadServicesBtn->Location = System::Drawing::Point(500, 134);
			this->loadServicesBtn->Name = L"loadServicesBtn";
			this->loadServicesBtn->Size = System::Drawing::Size(40, 39);
			this->loadServicesBtn->TabIndex = 17;
			this->loadServicesBtn->UseVisualStyleBackColor = true;
			this->loadServicesBtn->Click += gcnew System::EventHandler(this, &adminForm::loadServicesBtn_Click);
			// 
			// updateServicesBtn
			// 
			this->updateServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateServicesBtn.BackgroundImage")));
			this->updateServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateServicesBtn->Location = System::Drawing::Point(408, 134);
			this->updateServicesBtn->Name = L"updateServicesBtn";
			this->updateServicesBtn->Size = System::Drawing::Size(40, 40);
			this->updateServicesBtn->TabIndex = 16;
			this->updateServicesBtn->UseVisualStyleBackColor = true;
			this->updateServicesBtn->Click += gcnew System::EventHandler(this, &adminForm::updateServicesBtn_Click);
			// 
			// saveServicesBtn
			// 
			this->saveServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveServicesBtn.BackgroundImage")));
			this->saveServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->saveServicesBtn->Location = System::Drawing::Point(454, 134);
			this->saveServicesBtn->Name = L"saveServicesBtn";
			this->saveServicesBtn->Size = System::Drawing::Size(40, 40);
			this->saveServicesBtn->TabIndex = 16;
			this->saveServicesBtn->UseVisualStyleBackColor = true;
			this->saveServicesBtn->Click += gcnew System::EventHandler(this, &adminForm::saveServicesBtn_Click);
			// 
			// servicesRTB
			// 
			this->servicesRTB->Location = System::Drawing::Point(34, 180);
			this->servicesRTB->Name = L"servicesRTB";
			this->servicesRTB->Size = System::Drawing::Size(506, 143);
			this->servicesRTB->TabIndex = 12;
			this->servicesRTB->Text = L"";
			// 
			// addServicePriceLbl
			// 
			this->addServicePriceLbl->AutoSize = true;
			this->addServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addServicePriceLbl->Location = System::Drawing::Point(52, 103);
			this->addServicePriceLbl->Name = L"addServicePriceLbl";
			this->addServicePriceLbl->Size = System::Drawing::Size(40, 17);
			this->addServicePriceLbl->TabIndex = 11;
			this->addServicePriceLbl->Text = L"Цена";
			this->addServicePriceLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// addServices
			// 
			this->addServices->AutoSize = true;
			this->addServices->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->addServices->Location = System::Drawing::Point(27, 21);
			this->addServices->Name = L"addServices";
			this->addServices->Size = System::Drawing::Size(178, 30);
			this->addServices->TabIndex = 9;
			this->addServices->Text = L"Добавить услугу";
			// 
			// addServiceNameLbl
			// 
			this->addServiceNameLbl->AutoSize = true;
			this->addServiceNameLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addServiceNameLbl->Location = System::Drawing::Point(29, 70);
			this->addServiceNameLbl->Name = L"addServiceNameLbl";
			this->addServiceNameLbl->Size = System::Drawing::Size(68, 17);
			this->addServiceNameLbl->TabIndex = 10;
			this->addServiceNameLbl->Text = L"Название";
			// 
			// serviceNameTB
			// 
			this->serviceNameTB->Location = System::Drawing::Point(108, 67);
			this->serviceNameTB->Name = L"serviceNameTB";
			this->serviceNameTB->Size = System::Drawing::Size(204, 24);
			this->serviceNameTB->TabIndex = 6;
			// 
			// servicePriceTB
			// 
			this->servicePriceTB->Location = System::Drawing::Point(108, 101);
			this->servicePriceTB->Name = L"servicePriceTB";
			this->servicePriceTB->Size = System::Drawing::Size(204, 24);
			this->servicePriceTB->TabIndex = 7;
			// 
			// addServiceBtn
			// 
			this->addServiceBtn->Location = System::Drawing::Point(212, 134);
			this->addServiceBtn->Name = L"addServiceBtn";
			this->addServiceBtn->Size = System::Drawing::Size(100, 39);
			this->addServiceBtn->TabIndex = 8;
			this->addServiceBtn->Text = L"Добавить";
			this->addServiceBtn->UseVisualStyleBackColor = true;
			this->addServiceBtn->Click += gcnew System::EventHandler(this, &adminForm::addServiceBtn_Click);
			// 
			// changeServiceTab
			// 
			this->changeServiceTab->BackColor = System::Drawing::Color::Gainsboro;
			this->changeServiceTab->Controls->Add(this->changeServicePanel);
			this->changeServiceTab->Location = System::Drawing::Point(4, 22);
			this->changeServiceTab->Name = L"changeServiceTab";
			this->changeServiceTab->Padding = System::Windows::Forms::Padding(3);
			this->changeServiceTab->Size = System::Drawing::Size(575, 686);
			this->changeServiceTab->TabIndex = 4;
			this->changeServiceTab->Text = L"Изменить услугу";
			// 
			// changeServicePanel
			// 
			this->changeServicePanel->Controls->Add(this->deleteServices);
			this->changeServicePanel->Controls->Add(this->changeServicePriceLbl);
			this->changeServicePanel->Controls->Add(this->changeServiceNameLbl);
			this->changeServicePanel->Controls->Add(this->changeServiceNameTB);
			this->changeServicePanel->Controls->Add(this->changeServicePriceTB);
			this->changeServicePanel->Controls->Add(this->changeServiceFormBtn);
			this->changeServicePanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->changeServicePanel->Location = System::Drawing::Point(6, 6);
			this->changeServicePanel->Name = L"changeServicePanel";
			this->changeServicePanel->Size = System::Drawing::Size(563, 674);
			this->changeServicePanel->TabIndex = 25;
			// 
			// deleteServices
			// 
			this->deleteServices->AutoSize = true;
			this->deleteServices->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->deleteServices->Location = System::Drawing::Point(30, 18);
			this->deleteServices->Name = L"deleteServices";
			this->deleteServices->Size = System::Drawing::Size(179, 30);
			this->deleteServices->TabIndex = 9;
			this->deleteServices->Text = L"Изменить услугу";
			// 
			// changeServicePriceLbl
			// 
			this->changeServicePriceLbl->AutoSize = true;
			this->changeServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->changeServicePriceLbl->Location = System::Drawing::Point(32, 105);
			this->changeServicePriceLbl->Name = L"changeServicePriceLbl";
			this->changeServicePriceLbl->Size = System::Drawing::Size(40, 17);
			this->changeServicePriceLbl->TabIndex = 11;
			this->changeServicePriceLbl->Text = L"Цена";
			this->changeServicePriceLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// changeServiceNameLbl
			// 
			this->changeServiceNameLbl->AutoSize = true;
			this->changeServiceNameLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->changeServiceNameLbl->Location = System::Drawing::Point(29, 67);
			this->changeServiceNameLbl->Name = L"changeServiceNameLbl";
			this->changeServiceNameLbl->Size = System::Drawing::Size(68, 17);
			this->changeServiceNameLbl->TabIndex = 10;
			this->changeServiceNameLbl->Text = L"Название";
			// 
			// changeServiceNameTB
			// 
			this->changeServiceNameTB->Location = System::Drawing::Point(103, 64);
			this->changeServiceNameTB->Name = L"changeServiceNameTB";
			this->changeServiceNameTB->Size = System::Drawing::Size(100, 24);
			this->changeServiceNameTB->TabIndex = 6;
			// 
			// changeServicePriceTB
			// 
			this->changeServicePriceTB->Location = System::Drawing::Point(103, 98);
			this->changeServicePriceTB->Name = L"changeServicePriceTB";
			this->changeServicePriceTB->Size = System::Drawing::Size(100, 24);
			this->changeServicePriceTB->TabIndex = 7;
			// 
			// changeServiceFormBtn
			// 
			this->changeServiceFormBtn->Location = System::Drawing::Point(30, 137);
			this->changeServiceFormBtn->Name = L"changeServiceFormBtn";
			this->changeServiceFormBtn->Size = System::Drawing::Size(173, 41);
			this->changeServiceFormBtn->TabIndex = 8;
			this->changeServiceFormBtn->Text = L"Изменить";
			this->changeServiceFormBtn->UseVisualStyleBackColor = true;
			this->changeServiceFormBtn->Click += gcnew System::EventHandler(this, &adminForm::changeServiceFormBtn_Click);
			// 
			// showReportTab
			// 
			this->showReportTab->BackColor = System::Drawing::Color::Gainsboro;
			this->showReportTab->Controls->Add(this->reportPanel);
			this->showReportTab->Location = System::Drawing::Point(4, 22);
			this->showReportTab->Name = L"showReportTab";
			this->showReportTab->Padding = System::Windows::Forms::Padding(3);
			this->showReportTab->Size = System::Drawing::Size(575, 686);
			this->showReportTab->TabIndex = 5;
			this->showReportTab->Text = L"Составить отчёт";
			// 
			// reportPanel
			// 
			this->reportPanel->Controls->Add(this->averageСheckCB);
			this->reportPanel->Controls->Add(this->clientsNumberCB);
			this->reportPanel->Controls->Add(this->profitCB);
			this->reportPanel->Controls->Add(this->proceedsCB);
			this->reportPanel->Controls->Add(this->ExpensesCB);
			this->reportPanel->Controls->Add(this->makeReportRTB);
			this->reportPanel->Controls->Add(this->makeReportBtn);
			this->reportPanel->Controls->Add(this->reportPeriodCB);
			this->reportPanel->Controls->Add(this->reportPeriodLbl);
			this->reportPanel->Controls->Add(this->financialStatementsLbl);
			this->reportPanel->Location = System::Drawing::Point(6, 6);
			this->reportPanel->Name = L"reportPanel";
			this->reportPanel->Size = System::Drawing::Size(563, 677);
			this->reportPanel->TabIndex = 24;
			// 
			// averageСheckCB
			// 
			this->averageСheckCB->AutoSize = true;
			this->averageСheckCB->Location = System::Drawing::Point(208, 148);
			this->averageСheckCB->Name = L"averageСheckCB";
			this->averageСheckCB->Size = System::Drawing::Size(89, 17);
			this->averageСheckCB->TabIndex = 28;
			this->averageСheckCB->Text = L"Средний чек";
			this->averageСheckCB->UseVisualStyleBackColor = true;
			// 
			// clientsNumberCB
			// 
			this->clientsNumberCB->AutoSize = true;
			this->clientsNumberCB->Location = System::Drawing::Point(208, 128);
			this->clientsNumberCB->Name = L"clientsNumberCB";
			this->clientsNumberCB->Size = System::Drawing::Size(135, 17);
			this->clientsNumberCB->TabIndex = 27;
			this->clientsNumberCB->Text = L"Количество клиентов";
			this->clientsNumberCB->UseVisualStyleBackColor = true;
			// 
			// profitCB
			// 
			this->profitCB->AutoSize = true;
			this->profitCB->Location = System::Drawing::Point(208, 110);
			this->profitCB->Name = L"profitCB";
			this->profitCB->Size = System::Drawing::Size(72, 17);
			this->profitCB->TabIndex = 26;
			this->profitCB->Text = L"Прибыль";
			this->profitCB->UseVisualStyleBackColor = true;
			// 
			// proceedsCB
			// 
			this->proceedsCB->AutoSize = true;
			this->proceedsCB->Location = System::Drawing::Point(208, 91);
			this->proceedsCB->Name = L"proceedsCB";
			this->proceedsCB->Size = System::Drawing::Size(69, 17);
			this->proceedsCB->TabIndex = 25;
			this->proceedsCB->Text = L"Выручка";
			this->proceedsCB->UseVisualStyleBackColor = true;
			// 
			// ExpensesCB
			// 
			this->ExpensesCB->AutoSize = true;
			this->ExpensesCB->Location = System::Drawing::Point(208, 70);
			this->ExpensesCB->Name = L"ExpensesCB";
			this->ExpensesCB->Size = System::Drawing::Size(69, 17);
			this->ExpensesCB->TabIndex = 24;
			this->ExpensesCB->Text = L"Затраты";
			this->ExpensesCB->UseVisualStyleBackColor = true;
			// 
			// makeReportRTB
			// 
			this->makeReportRTB->Location = System::Drawing::Point(28, 181);
			this->makeReportRTB->Name = L"makeReportRTB";
			this->makeReportRTB->Size = System::Drawing::Size(391, 270);
			this->makeReportRTB->TabIndex = 23;
			this->makeReportRTB->Text = L"";
			// 
			// makeReportBtn
			// 
			this->makeReportBtn->Location = System::Drawing::Point(28, 100);
			this->makeReportBtn->Name = L"makeReportBtn";
			this->makeReportBtn->Size = System::Drawing::Size(168, 65);
			this->makeReportBtn->TabIndex = 22;
			this->makeReportBtn->Text = L"Составить отчёт";
			this->makeReportBtn->UseVisualStyleBackColor = true;
			this->makeReportBtn->Click += gcnew System::EventHandler(this, &adminForm::makeReportBtn_Click);
			// 
			// reportPeriodCB
			// 
			this->reportPeriodCB->FormattingEnabled = true;
			this->reportPeriodCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"День", L"Месяц", L"Год" });
			this->reportPeriodCB->Location = System::Drawing::Point(75, 70);
			this->reportPeriodCB->Name = L"reportPeriodCB";
			this->reportPeriodCB->Size = System::Drawing::Size(121, 21);
			this->reportPeriodCB->TabIndex = 19;
			// 
			// reportPeriodLbl
			// 
			this->reportPeriodLbl->AutoSize = true;
			this->reportPeriodLbl->Location = System::Drawing::Point(25, 75);
			this->reportPeriodLbl->Name = L"reportPeriodLbl";
			this->reportPeriodLbl->Size = System::Drawing::Size(45, 13);
			this->reportPeriodLbl->TabIndex = 18;
			this->reportPeriodLbl->Text = L"Период";
			// 
			// financialStatementsLbl
			// 
			this->financialStatementsLbl->AutoSize = true;
			this->financialStatementsLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->financialStatementsLbl->Location = System::Drawing::Point(30, 22);
			this->financialStatementsLbl->Name = L"financialStatementsLbl";
			this->financialStatementsLbl->Size = System::Drawing::Size(249, 30);
			this->financialStatementsLbl->TabIndex = 0;
			this->financialStatementsLbl->Text = L"Финансовая отчётность";
			// 
			// deleteSpecidicServiceOrderBtn
			// 
			this->deleteSpecidicServiceOrderBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->deleteSpecidicServiceOrderBtn->Location = System::Drawing::Point(13, 488);
			this->deleteSpecidicServiceOrderBtn->Name = L"deleteSpecidicServiceOrderBtn";
			this->deleteSpecidicServiceOrderBtn->Size = System::Drawing::Size(268, 70);
			this->deleteSpecidicServiceOrderBtn->TabIndex = 30;
			this->deleteSpecidicServiceOrderBtn->Text = L"Удалить запись на услугу";
			this->deleteSpecidicServiceOrderBtn->UseVisualStyleBackColor = true;
			this->deleteSpecidicServiceOrderBtn->Click += gcnew System::EventHandler(this, &adminForm::deleteSpecidicServiceOrderBtn_Click);
			// 
			// deleteSpecificUser
			// 
			this->deleteSpecificUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->deleteSpecificUser->Location = System::Drawing::Point(13, 216);
			this->deleteSpecificUser->Name = L"deleteSpecificUser";
			this->deleteSpecificUser->Size = System::Drawing::Size(268, 43);
			this->deleteSpecificUser->TabIndex = 29;
			this->deleteSpecificUser->Text = L"Удалить пользователя";
			this->deleteSpecificUser->UseVisualStyleBackColor = true;
			this->deleteSpecificUser->Click += gcnew System::EventHandler(this, &adminForm::deleteSpecificUser_Click);
			// 
			// showReportBtn
			// 
			this->showReportBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->showReportBtn->Location = System::Drawing::Point(13, 575);
			this->showReportBtn->Name = L"showReportBtn";
			this->showReportBtn->Size = System::Drawing::Size(268, 70);
			this->showReportBtn->TabIndex = 28;
			this->showReportBtn->Text = L"Показать/составить отчёт";
			this->showReportBtn->UseVisualStyleBackColor = true;
			this->showReportBtn->Click += gcnew System::EventHandler(this, &adminForm::showReportBtn_Click);
			// 
			// changeServiceBtn
			// 
			this->changeServiceBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->changeServiceBtn->Location = System::Drawing::Point(13, 420);
			this->changeServiceBtn->Name = L"changeServiceBtn";
			this->changeServiceBtn->Size = System::Drawing::Size(268, 43);
			this->changeServiceBtn->TabIndex = 27;
			this->changeServiceBtn->Text = L"Изменить услугу";
			this->changeServiceBtn->UseVisualStyleBackColor = true;
			this->changeServiceBtn->Click += gcnew System::EventHandler(this, &adminForm::changeServiceBtn_Click);
			// 
			// addServiceBtnFromAdminPanel
			// 
			this->addServiceBtnFromAdminPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->addServiceBtnFromAdminPanel->Location = System::Drawing::Point(13, 352);
			this->addServiceBtnFromAdminPanel->Name = L"addServiceBtnFromAdminPanel";
			this->addServiceBtnFromAdminPanel->Size = System::Drawing::Size(268, 43);
			this->addServiceBtnFromAdminPanel->TabIndex = 26;
			this->addServiceBtnFromAdminPanel->Text = L"Добавить услугу";
			this->addServiceBtnFromAdminPanel->UseVisualStyleBackColor = true;
			this->addServiceBtnFromAdminPanel->Click += gcnew System::EventHandler(this, &adminForm::addServiceBtnFromAdminPanel_Click);
			// 
			// delOrderBtn
			// 
			this->delOrderBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->delOrderBtn->Location = System::Drawing::Point(13, 284);
			this->delOrderBtn->Name = L"delOrderBtn";
			this->delOrderBtn->Size = System::Drawing::Size(268, 43);
			this->delOrderBtn->TabIndex = 25;
			this->delOrderBtn->Text = L"Удалить услугу";
			this->delOrderBtn->UseVisualStyleBackColor = true;
			this->delOrderBtn->Click += gcnew System::EventHandler(this, &adminForm::delOrderBtn_Click);
			// 
			// changeUserBtn
			// 
			this->changeUserBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->changeUserBtn->Location = System::Drawing::Point(13, 148);
			this->changeUserBtn->Name = L"changeUserBtn";
			this->changeUserBtn->Size = System::Drawing::Size(268, 43);
			this->changeUserBtn->TabIndex = 24;
			this->changeUserBtn->Text = L"Изменить пользователя";
			this->changeUserBtn->UseVisualStyleBackColor = true;
			this->changeUserBtn->Click += gcnew System::EventHandler(this, &adminForm::changeUserBtn_Click);
			// 
			// addUserBtn
			// 
			this->addUserBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->addUserBtn->Location = System::Drawing::Point(13, 80);
			this->addUserBtn->Name = L"addUserBtn";
			this->addUserBtn->Size = System::Drawing::Size(268, 43);
			this->addUserBtn->TabIndex = 23;
			this->addUserBtn->Text = L"Добавить пользователя";
			this->addUserBtn->UseVisualStyleBackColor = true;
			this->addUserBtn->Click += gcnew System::EventHandler(this, &adminForm::addUserBtn_Click);
			// 
			// AdminLbl
			// 
			this->AdminLbl->AutoSize = true;
			this->AdminLbl->Location = System::Drawing::Point(13, 13);
			this->AdminLbl->Name = L"AdminLbl";
			this->AdminLbl->Size = System::Drawing::Size(194, 13);
			this->AdminLbl->TabIndex = 0;
			this->AdminLbl->Text = L"Панель управления администратора";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
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
			// serviceInOrder
			// 
			this->serviceInOrder->HeaderText = L"service";
			this->serviceInOrder->Name = L"serviceInOrder";
			// 
			// adminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(898, 732);
			this->Controls->Add(this->adminPanel);
			this->Name = L"adminForm";
			this->Text = L"adminForm";
			this->adminPanel->ResumeLayout(false);
			this->adminPanel->PerformLayout();
			this->mainTabSekector->ResumeLayout(false);
			this->mainTab->ResumeLayout(false);
			this->mainTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->EndInit();
			this->addUserTab->ResumeLayout(false);
			this->addUserPanel->ResumeLayout(false);
			this->addUserPanel->PerformLayout();
			this->addUserSexGP->ResumeLayout(false);
			this->addUserSexGP->PerformLayout();
			this->specialityPanel->ResumeLayout(false);
			this->specialityPanel->PerformLayout();
			this->changeUserTab->ResumeLayout(false);
			this->changeUserPanel->ResumeLayout(false);
			this->changeUserPanel->PerformLayout();
			this->changeUserSpecialityPanel->ResumeLayout(false);
			this->changeUserSpecialityPanel->PerformLayout();
			this->changeUserSexGP->ResumeLayout(false);
			this->changeUserSexGP->PerformLayout();
			this->addServiceTab->ResumeLayout(false);
			this->addServicePanel->ResumeLayout(false);
			this->addServicePanel->PerformLayout();
			this->changeServiceTab->ResumeLayout(false);
			this->changeServicePanel->ResumeLayout(false);
			this->changeServicePanel->PerformLayout();
			this->showReportTab->ResumeLayout(false);
			this->reportPanel->ResumeLayout(false);
			this->reportPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addUserBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteSpecificUser_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addServiceBtnFromAdminPanel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeServiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteSpecidicServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void showReportBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserTypeCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateGridsBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void writeDataBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loadBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loadServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void clearAllGrids();
	private: System::Void addServiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeServiceFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void makeReportBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mainTabSekector_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e);
};
}
#endif ADMINFORM_H