#ifndef MENUFORM_H
#define MENUFORM_H
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
	/// Сводка для menuForm
	/// </summary>
	public ref class menuForm : public System::Windows::Forms::Form
	{
	public:

		menuForm(int ID, int userStatus)
		{
			InitializeComponent();
			this->ID = ID;
			this->userStatus = userStatus;
		}

		menuForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~menuForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int ID;
		int userStatus;
	private: System::Windows::Forms::Panel^ adminPanel;
		   //MockDatabase* db = MockDatabase::getInstance();



	private: System::Windows::Forms::DataGridView^ ordersDataGrid;
	private: System::Windows::Forms::DataGridView^ servicesDataGrid;
	private: System::Windows::Forms::DataGridView^ usersDataGrid;






	private: System::Windows::Forms::Label^ AdminLbl;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ updateGridsBtn;


















	private: System::Windows::Forms::Panel^ clientPanel;
	private: System::Windows::Forms::Label^ ClientNameLbl;
	private: System::Windows::Forms::Label^ ordersList;
	private: System::Windows::Forms::Button^ exitFromClientPanel;
	private: System::Windows::Forms::Label^ selectDateLbl;
	private: System::Windows::Forms::Label^ timeStatusLbl;
	private: System::Windows::Forms::ListBox^ availableTimeLB;
	private: System::Windows::Forms::Button^ updateServiceOrderBtn;
	private: System::Windows::Forms::MonthCalendar^ Calendar;
	private: System::Windows::Forms::TextBox^ costTB;
	private: System::Windows::Forms::ComboBox^ employeeIDCB;
	private: System::Windows::Forms::ComboBox^ serviceIDCB;
	private: System::Windows::Forms::Label^ orderCostLbl;
	private: System::Windows::Forms::DataGridView^ orderInitGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeOerderID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientIDOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sssorderStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordersDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderTime;
	private: System::Windows::Forms::Label^ employeeIDFromOrderLbl;
	private: System::Windows::Forms::Label^ serviceIDfromOrderLbl;
	private: System::Windows::Forms::Panel^ employeePanel;





	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ achievementsEmployeeTB;
	private: System::Windows::Forms::TextBox^ specialityEmployeeTB;
	private: System::Windows::Forms::TextBox^ nameEmployeeTB;
	private: System::Windows::Forms::Label^ orderEmployeeLbl;
	private: System::Windows::Forms::ComboBox^ orderEmployeeIdCB;
	private: System::Windows::Forms::CheckBox^ orderEmployeeCheckCB;
private: System::Windows::Forms::DataGridView^ employeeDataGrid;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeIdDG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateEmployeeDG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceEmployeeDG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientNameEmployeeDG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costOfServiceEmployeeDG;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordersTime;
	private: System::Windows::Forms::Label^ achievementsEmployeeLbl;
	private: System::Windows::Forms::Label^ specialityEmployeeLbl;
	private: System::Windows::Forms::Label^ nameEmployeeLbl;
private: System::Windows::Forms::Button^ exitFromEmployeePanelBtn;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ selectDataLbl;
private: System::Windows::Forms::Label^ selectedDateEmployeeLbl;
private: System::Windows::Forms::TextBox^ selectedDateEmployeeTB;
private: System::Windows::Forms::MonthCalendar^ employeeCalendar;
private: System::Windows::Forms::Button^ updateOrdersGridBtn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderCurStatus;
private: System::Windows::Forms::Button^ showReportBtn;
private: System::Windows::Forms::Button^ changeServiceBtn;
private: System::Windows::Forms::Button^ addServiceBtnFromAdminPanel;

private: System::Windows::Forms::Button^ delOrderBtn;
private: System::Windows::Forms::Button^ changeUserBtn;
private: System::Windows::Forms::Button^ addUserBtn;
private: System::Windows::Forms::Panel^ changeUserPanel;

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
private: System::Windows::Forms::Panel^ reportPanel;






private: System::Windows::Forms::Button^ updateReportBtn;
private: System::Windows::Forms::RichTextBox^ makeReportRTB;
private: System::Windows::Forms::Button^ makeReportBtn;

private: System::Windows::Forms::ComboBox^ reportPeriodCB;
private: System::Windows::Forms::Label^ reportPeriodLbl;
private: System::Windows::Forms::Button^ saveReportBtn;
private: System::Windows::Forms::Label^ financialStatementsLbl;
private: System::Windows::Forms::Panel^ changeServicePanel;





private: System::Windows::Forms::Label^ changeServicePriceLbl;
private: System::Windows::Forms::Label^ deleteServices;
private: System::Windows::Forms::Label^ changeServiceNameLbl;
private: System::Windows::Forms::TextBox^ changeServiceNameTB;
private: System::Windows::Forms::TextBox^ changeServicePriceTB;
private: System::Windows::Forms::Button^ changeServiceFormBtn;
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
private: System::Windows::Forms::RadioButton^ addUserMaleRB;
private: System::Windows::Forms::RadioButton^ addUserFemaleRB;
private: System::Windows::Forms::GroupBox^ addUserSexGP;

private: System::Windows::Forms::TextBox^ addUserNameTB;


private: System::Windows::Forms::TextBox^ addUserMailTB;
private: System::Windows::Forms::TextBox^ addUserPasswordTB;
private: System::Windows::Forms::Label^ addDateLbl;
private: System::Windows::Forms::Label^ addPhonenumberLbl;
private: System::Windows::Forms::Label^ addEmailLbl;
private: System::Windows::Forms::Label^ addPassLbl;
private: System::Windows::Forms::Button^ addUserFormBtn;
private: System::Windows::Forms::Label^ addUserTypeLbl;

private: System::Windows::Forms::Label^ addUser;
private: System::Windows::Forms::Panel^ specialityPanel;


private: System::Windows::Forms::Panel^ addUserPanel;
private: System::Windows::Forms::ComboBox^ changeUserIdCB;
private: System::Windows::Forms::MaskedTextBox^ addUserPhonenumberTB;
private: System::Windows::Forms::MaskedTextBox^ addUserDateTB;
private: System::Windows::Forms::GroupBox^ changeUserSexGP;

private: System::Windows::Forms::RadioButton^ changeUserFemaleRB;
private: System::Windows::Forms::RadioButton^ changeUserMaleRB;
private: System::Windows::Forms::MaskedTextBox^ changeUserPhonenumberTB;
private: System::Windows::Forms::MaskedTextBox^ changeUserDateTB;
private: System::Windows::Forms::Panel^ changeUserSpecialityPanel;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::ComboBox^ changeUserSpecialityCB;



private: System::Windows::Forms::TextBox^ changeUserNameTB;














private: System::Windows::Forms::Label^ addStatusLbl;
private: System::Windows::Forms::ComboBox^ addUserSpecialityCB;

private: System::Windows::Forms::ComboBox^ addUserTypeCB;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ changePersonalAchievementsTB;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ changeUserExperienceTB;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderStatus;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ servicesID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ userCurrentStatus;
private: System::Windows::Forms::Button^ deleteSpecificUser;
private: System::Windows::Forms::Button^ deleteSpecidicServiceOrderBtn;
private: System::Windows::Forms::CheckBox^ averageСheckCB;

private: System::Windows::Forms::CheckBox^ clientsNumberCB;

private: System::Windows::Forms::CheckBox^ profitCB;

private: System::Windows::Forms::CheckBox^ proceedsCB;

private: System::Windows::Forms::CheckBox^ ExpensesCB;

























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
			System::Windows::Forms::Button^ acceptOrderBtn;
			System::Windows::Forms::Label^ changeNameLbl;
			System::Windows::Forms::Label^ addNameLbl;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuForm::typeid));
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->deleteSpecidicServiceOrderBtn = (gcnew System::Windows::Forms::Button());
			this->deleteSpecificUser = (gcnew System::Windows::Forms::Button());
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->addServiceBtnFromAdminPanel = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->ordersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->orderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->servicesDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->servicesID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->usersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->userID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userCurrentStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updateGridsBtn = (gcnew System::Windows::Forms::Button());
			this->changeServicePanel = (gcnew System::Windows::Forms::Panel());
			this->deleteServices = (gcnew System::Windows::Forms::Label());
			this->changeServicePriceLbl = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameLbl = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServicePriceTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServiceFormBtn = (gcnew System::Windows::Forms::Button());
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
			this->reportPanel = (gcnew System::Windows::Forms::Panel());
			this->averageСheckCB = (gcnew System::Windows::Forms::CheckBox());
			this->clientsNumberCB = (gcnew System::Windows::Forms::CheckBox());
			this->profitCB = (gcnew System::Windows::Forms::CheckBox());
			this->proceedsCB = (gcnew System::Windows::Forms::CheckBox());
			this->ExpensesCB = (gcnew System::Windows::Forms::CheckBox());
			this->updateReportBtn = (gcnew System::Windows::Forms::Button());
			this->makeReportRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->makeReportBtn = (gcnew System::Windows::Forms::Button());
			this->reportPeriodCB = (gcnew System::Windows::Forms::ComboBox());
			this->reportPeriodLbl = (gcnew System::Windows::Forms::Label());
			this->saveReportBtn = (gcnew System::Windows::Forms::Button());
			this->financialStatementsLbl = (gcnew System::Windows::Forms::Label());
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
			this->clientPanel = (gcnew System::Windows::Forms::Panel());
			this->ClientNameLbl = (gcnew System::Windows::Forms::Label());
			this->ordersList = (gcnew System::Windows::Forms::Label());
			this->exitFromClientPanel = (gcnew System::Windows::Forms::Button());
			this->timeStatusLbl = (gcnew System::Windows::Forms::Label());
			this->availableTimeLB = (gcnew System::Windows::Forms::ListBox());
			this->updateServiceOrderBtn = (gcnew System::Windows::Forms::Button());
			this->Calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->costTB = (gcnew System::Windows::Forms::TextBox());
			this->employeeIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->serviceIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->selectDateLbl = (gcnew System::Windows::Forms::Label());
			this->orderCostLbl = (gcnew System::Windows::Forms::Label());
			this->orderInitGrid = (gcnew System::Windows::Forms::DataGridView());
			this->serviceID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeOerderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientIDOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sssorderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordersDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeIDFromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->serviceIDfromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->employeePanel = (gcnew System::Windows::Forms::Panel());
			this->updateOrdersGridBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->selectDataLbl = (gcnew System::Windows::Forms::Label());
			this->selectedDateEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->selectedDateEmployeeTB = (gcnew System::Windows::Forms::TextBox());
			this->employeeCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->achievementsEmployeeTB = (gcnew System::Windows::Forms::TextBox());
			this->specialityEmployeeTB = (gcnew System::Windows::Forms::TextBox());
			this->nameEmployeeTB = (gcnew System::Windows::Forms::TextBox());
			this->orderEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->orderEmployeeIdCB = (gcnew System::Windows::Forms::ComboBox());
			this->orderEmployeeCheckCB = (gcnew System::Windows::Forms::CheckBox());
			this->employeeDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->employeeIdDG = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateEmployeeDG = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceEmployeeDG = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientNameEmployeeDG = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costOfServiceEmployeeDG = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordersTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderCurStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->achievementsEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->specialityEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->nameEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->exitFromEmployeePanelBtn = (gcnew System::Windows::Forms::Button());
			acceptOrderBtn = (gcnew System::Windows::Forms::Button());
			changeNameLbl = (gcnew System::Windows::Forms::Label());
			addNameLbl = (gcnew System::Windows::Forms::Label());
			this->adminPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
			this->changeServicePanel->SuspendLayout();
			this->changeUserPanel->SuspendLayout();
			this->changeUserSpecialityPanel->SuspendLayout();
			this->changeUserSexGP->SuspendLayout();
			this->addUserPanel->SuspendLayout();
			this->addUserSexGP->SuspendLayout();
			this->specialityPanel->SuspendLayout();
			this->reportPanel->SuspendLayout();
			this->addServicePanel->SuspendLayout();
			this->clientPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->BeginInit();
			this->employeePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// acceptOrderBtn
			// 
			acceptOrderBtn->Location = System::Drawing::Point(580, 262);
			acceptOrderBtn->Name = L"acceptOrderBtn";
			acceptOrderBtn->Size = System::Drawing::Size(160, 36);
			acceptOrderBtn->TabIndex = 13;
			acceptOrderBtn->Text = L"Подтвердить";
			acceptOrderBtn->UseVisualStyleBackColor = true;
			acceptOrderBtn->Click += gcnew System::EventHandler(this, &menuForm::acceptOrderBtn_Click);
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
			this->adminPanel->Controls->Add(this->deleteSpecidicServiceOrderBtn);
			this->adminPanel->Controls->Add(this->deleteSpecificUser);
			this->adminPanel->Controls->Add(this->showReportBtn);
			this->adminPanel->Controls->Add(this->changeServiceBtn);
			this->adminPanel->Controls->Add(this->addServiceBtnFromAdminPanel);
			this->adminPanel->Controls->Add(this->delOrderBtn);
			this->adminPanel->Controls->Add(this->changeUserBtn);
			this->adminPanel->Controls->Add(this->addUserBtn);
			this->adminPanel->Controls->Add(this->AdminLbl);
			this->adminPanel->Controls->Add(this->ordersDataGrid);
			this->adminPanel->Controls->Add(this->servicesDataGrid);
			this->adminPanel->Controls->Add(this->usersDataGrid);
			this->adminPanel->Controls->Add(this->label3);
			this->adminPanel->Controls->Add(this->label2);
			this->adminPanel->Controls->Add(this->label1);
			this->adminPanel->Controls->Add(this->updateGridsBtn);
			this->adminPanel->Location = System::Drawing::Point(990, 228);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(651, 709);
			this->adminPanel->TabIndex = 1;
			// 
			// deleteSpecidicServiceOrderBtn
			// 
			this->deleteSpecidicServiceOrderBtn->Location = System::Drawing::Point(16, 260);
			this->deleteSpecidicServiceOrderBtn->Name = L"deleteSpecidicServiceOrderBtn";
			this->deleteSpecidicServiceOrderBtn->Size = System::Drawing::Size(153, 23);
			this->deleteSpecidicServiceOrderBtn->TabIndex = 30;
			this->deleteSpecidicServiceOrderBtn->Text = L"Удалить запись на услугу";
			this->deleteSpecidicServiceOrderBtn->UseVisualStyleBackColor = true;
			this->deleteSpecidicServiceOrderBtn->Click += gcnew System::EventHandler(this, &menuForm::deleteSpecidicServiceOrderBtn_Click);
			// 
			// deleteSpecificUser
			// 
			this->deleteSpecificUser->Location = System::Drawing::Point(16, 144);
			this->deleteSpecificUser->Name = L"deleteSpecificUser";
			this->deleteSpecificUser->Size = System::Drawing::Size(153, 23);
			this->deleteSpecificUser->TabIndex = 29;
			this->deleteSpecificUser->Text = L"Удалить пользователя";
			this->deleteSpecificUser->UseVisualStyleBackColor = true;
			this->deleteSpecificUser->Click += gcnew System::EventHandler(this, &menuForm::deleteSpecificUser_Click);
			// 
			// showReportBtn
			// 
			this->showReportBtn->Location = System::Drawing::Point(17, 290);
			this->showReportBtn->Name = L"showReportBtn";
			this->showReportBtn->Size = System::Drawing::Size(153, 23);
			this->showReportBtn->TabIndex = 28;
			this->showReportBtn->Text = L"Показать/составить отчёт";
			this->showReportBtn->UseVisualStyleBackColor = true;
			this->showReportBtn->Click += gcnew System::EventHandler(this, &menuForm::showReportBtn_Click);
			// 
			// changeServiceBtn
			// 
			this->changeServiceBtn->Location = System::Drawing::Point(16, 231);
			this->changeServiceBtn->Name = L"changeServiceBtn";
			this->changeServiceBtn->Size = System::Drawing::Size(153, 23);
			this->changeServiceBtn->TabIndex = 27;
			this->changeServiceBtn->Text = L"Изменить услугу";
			this->changeServiceBtn->UseVisualStyleBackColor = true;
			this->changeServiceBtn->Click += gcnew System::EventHandler(this, &menuForm::changeServiceBtn_Click);
			// 
			// addServiceBtnFromAdminPanel
			// 
			this->addServiceBtnFromAdminPanel->Location = System::Drawing::Point(16, 202);
			this->addServiceBtnFromAdminPanel->Name = L"addServiceBtnFromAdminPanel";
			this->addServiceBtnFromAdminPanel->Size = System::Drawing::Size(153, 23);
			this->addServiceBtnFromAdminPanel->TabIndex = 26;
			this->addServiceBtnFromAdminPanel->Text = L"Добавить услугу";
			this->addServiceBtnFromAdminPanel->UseVisualStyleBackColor = true;
			this->addServiceBtnFromAdminPanel->Click += gcnew System::EventHandler(this, &menuForm::addServiceBtnFromAdminPanel_Click);
			// 
			// delOrderBtn
			// 
			this->delOrderBtn->Location = System::Drawing::Point(16, 173);
			this->delOrderBtn->Name = L"delOrderBtn";
			this->delOrderBtn->Size = System::Drawing::Size(153, 23);
			this->delOrderBtn->TabIndex = 25;
			this->delOrderBtn->Text = L"Удалить услугу";
			this->delOrderBtn->UseVisualStyleBackColor = true;
			this->delOrderBtn->Click += gcnew System::EventHandler(this, &menuForm::delOrderBtn_Click);
			// 
			// changeUserBtn
			// 
			this->changeUserBtn->Location = System::Drawing::Point(16, 115);
			this->changeUserBtn->Name = L"changeUserBtn";
			this->changeUserBtn->Size = System::Drawing::Size(153, 23);
			this->changeUserBtn->TabIndex = 24;
			this->changeUserBtn->Text = L"Изменить пользователя";
			this->changeUserBtn->UseVisualStyleBackColor = true;
			this->changeUserBtn->Click += gcnew System::EventHandler(this, &menuForm::changeUserBtn_Click);
			// 
			// addUserBtn
			// 
			this->addUserBtn->Location = System::Drawing::Point(16, 86);
			this->addUserBtn->Name = L"addUserBtn";
			this->addUserBtn->Size = System::Drawing::Size(153, 23);
			this->addUserBtn->TabIndex = 23;
			this->addUserBtn->Text = L"Добавить пользователя";
			this->addUserBtn->UseVisualStyleBackColor = true;
			this->addUserBtn->Click += gcnew System::EventHandler(this, &menuForm::addUserBtn_Click_1);
			// 
			// AdminLbl
			// 
			this->AdminLbl->AutoSize = true;
			this->AdminLbl->Location = System::Drawing::Point(13, 13);
			this->AdminLbl->Name = L"AdminLbl";
			this->AdminLbl->Size = System::Drawing::Size(36, 13);
			this->AdminLbl->TabIndex = 0;
			this->AdminLbl->Text = L"Admin";
			// 
			// ordersDataGrid
			// 
			this->ordersDataGrid->AllowUserToAddRows = false;
			this->ordersDataGrid->AllowUserToDeleteRows = false;
			this->ordersDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ordersDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ordersDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->orderID,
					this->employeeID, this->clientID, this->orderStatus
			});
			this->ordersDataGrid->Location = System::Drawing::Point(292, 498);
			this->ordersDataGrid->MultiSelect = false;
			this->ordersDataGrid->Name = L"ordersDataGrid";
			this->ordersDataGrid->Size = System::Drawing::Size(543, 176);
			this->ordersDataGrid->TabIndex = 9;
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
			this->servicesDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->servicesDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->servicesDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->servicesID,
					this->serviceName
			});
			this->servicesDataGrid->Location = System::Drawing::Point(292, 290);
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
			this->usersDataGrid->Location = System::Drawing::Point(292, 92);
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(292, 482);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"orders";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(292, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"services";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(292, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"users";
			// 
			// updateGridsBtn
			// 
			this->updateGridsBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateGridsBtn.BackgroundImage")));
			this->updateGridsBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateGridsBtn->Location = System::Drawing::Point(795, 31);
			this->updateGridsBtn->Name = L"updateGridsBtn";
			this->updateGridsBtn->Size = System::Drawing::Size(40, 40);
			this->updateGridsBtn->TabIndex = 12;
			this->updateGridsBtn->UseVisualStyleBackColor = true;
			this->updateGridsBtn->Click += gcnew System::EventHandler(this, &menuForm::updateGridsBtn_Click);
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
			this->changeServicePanel->Location = System::Drawing::Point(990, 304);
			this->changeServicePanel->Name = L"changeServicePanel";
			this->changeServicePanel->Size = System::Drawing::Size(651, 692);
			this->changeServicePanel->TabIndex = 25;
			// 
			// deleteServices
			// 
			this->deleteServices->AutoSize = true;
			this->deleteServices->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 15.25F, System::Drawing::FontStyle::Bold));
			this->deleteServices->Location = System::Drawing::Point(23, 21);
			this->deleteServices->Name = L"deleteServices";
			this->deleteServices->Size = System::Drawing::Size(179, 30);
			this->deleteServices->TabIndex = 9;
			this->deleteServices->Text = L"Изменить услугу";
			// 
			// changeServicePriceLbl
			// 
			this->changeServicePriceLbl->AutoSize = true;
			this->changeServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->changeServicePriceLbl->Location = System::Drawing::Point(25, 108);
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
			this->changeServiceNameLbl->Location = System::Drawing::Point(22, 70);
			this->changeServiceNameLbl->Name = L"changeServiceNameLbl";
			this->changeServiceNameLbl->Size = System::Drawing::Size(68, 17);
			this->changeServiceNameLbl->TabIndex = 10;
			this->changeServiceNameLbl->Text = L"Название";
			// 
			// changeServiceNameTB
			// 
			this->changeServiceNameTB->Location = System::Drawing::Point(96, 67);
			this->changeServiceNameTB->Name = L"changeServiceNameTB";
			this->changeServiceNameTB->Size = System::Drawing::Size(100, 24);
			this->changeServiceNameTB->TabIndex = 6;
			// 
			// changeServicePriceTB
			// 
			this->changeServicePriceTB->Location = System::Drawing::Point(96, 101);
			this->changeServicePriceTB->Name = L"changeServicePriceTB";
			this->changeServicePriceTB->Size = System::Drawing::Size(100, 24);
			this->changeServicePriceTB->TabIndex = 7;
			// 
			// changeServiceFormBtn
			// 
			this->changeServiceFormBtn->Location = System::Drawing::Point(23, 140);
			this->changeServiceFormBtn->Name = L"changeServiceFormBtn";
			this->changeServiceFormBtn->Size = System::Drawing::Size(173, 23);
			this->changeServiceFormBtn->TabIndex = 8;
			this->changeServiceFormBtn->Text = L"Изменить";
			this->changeServiceFormBtn->UseVisualStyleBackColor = true;
			this->changeServiceFormBtn->Click += gcnew System::EventHandler(this, &menuForm::changeServiceFormBtn_Click);
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
			this->changeUserPanel->Location = System::Drawing::Point(990, 633);
			this->changeUserPanel->Name = L"changeUserPanel";
			this->changeUserPanel->Size = System::Drawing::Size(651, 696);
			this->changeUserPanel->TabIndex = 22;
			this->changeUserPanel->VisibleChanged += gcnew System::EventHandler(this, &menuForm::changeUserPanel_VisibleChanged);
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
			this->changeUserIdCB->Location = System::Drawing::Point(57, 106);
			this->changeUserIdCB->Name = L"changeUserIdCB";
			this->changeUserIdCB->Size = System::Drawing::Size(76, 23);
			this->changeUserIdCB->TabIndex = 59;
			this->changeUserIdCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::changeUserIdCB_SelectionChangeCommitted);
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
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(68, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(335, 25);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Изменить данные пользователя";
			// 
			// UserIdLbl
			// 
			this->UserIdLbl->AutoSize = true;
			this->UserIdLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UserIdLbl->Location = System::Drawing::Point(31, 111);
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
			this->changeUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &menuForm::changeUserTypeCB_SelectedIndexChanged);
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
			this->changeUserFormBtn->Size = System::Drawing::Size(121, 23);
			this->changeUserFormBtn->TabIndex = 52;
			this->changeUserFormBtn->Text = L"Изменить";
			this->changeUserFormBtn->UseVisualStyleBackColor = true;
			this->changeUserFormBtn->Click += gcnew System::EventHandler(this, &menuForm::changeUserFormBtn_Click);
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
			this->addUserPanel->Location = System::Drawing::Point(990, 562);
			this->addUserPanel->Name = L"addUserPanel";
			this->addUserPanel->Size = System::Drawing::Size(651, 686);
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
			this->addUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &menuForm::addUserTypeCB_SelectedIndexChanged);
			this->addUserTypeCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::addUserTypeCB_SelectionChangeCommitted);
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
			this->addUserFormBtn->Size = System::Drawing::Size(124, 23);
			this->addUserFormBtn->TabIndex = 34;
			this->addUserFormBtn->Text = L"Добавить";
			this->addUserFormBtn->UseVisualStyleBackColor = true;
			this->addUserFormBtn->Click += gcnew System::EventHandler(this, &menuForm::addUserFormBtn_Click);
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
			this->addUser->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addUser->Location = System::Drawing::Point(30, 11);
			this->addUser->Name = L"addUser";
			this->addUser->Size = System::Drawing::Size(321, 25);
			this->addUser->TabIndex = 37;
			this->addUser->Text = L"Добавить нового пользователя";
			// 
			// reportPanel
			// 
			this->reportPanel->Controls->Add(this->averageСheckCB);
			this->reportPanel->Controls->Add(this->clientsNumberCB);
			this->reportPanel->Controls->Add(this->profitCB);
			this->reportPanel->Controls->Add(this->proceedsCB);
			this->reportPanel->Controls->Add(this->ExpensesCB);
			this->reportPanel->Controls->Add(this->updateReportBtn);
			this->reportPanel->Controls->Add(this->makeReportRTB);
			this->reportPanel->Controls->Add(this->makeReportBtn);
			this->reportPanel->Controls->Add(this->reportPeriodCB);
			this->reportPanel->Controls->Add(this->reportPeriodLbl);
			this->reportPanel->Controls->Add(this->saveReportBtn);
			this->reportPanel->Controls->Add(this->financialStatementsLbl);
			this->reportPanel->Location = System::Drawing::Point(990, 484);
			this->reportPanel->Name = L"reportPanel";
			this->reportPanel->Size = System::Drawing::Size(651, 676);
			this->reportPanel->TabIndex = 24;
			// 
			// averageСheckCB
			// 
			this->averageСheckCB->AutoSize = true;
			this->averageСheckCB->Location = System::Drawing::Point(288, 158);
			this->averageСheckCB->Name = L"averageСheckCB";
			this->averageСheckCB->Size = System::Drawing::Size(89, 17);
			this->averageСheckCB->TabIndex = 28;
			this->averageСheckCB->Text = L"Средний чек";
			this->averageСheckCB->UseVisualStyleBackColor = true;
			// 
			// clientsNumberCB
			// 
			this->clientsNumberCB->AutoSize = true;
			this->clientsNumberCB->Location = System::Drawing::Point(288, 138);
			this->clientsNumberCB->Name = L"clientsNumberCB";
			this->clientsNumberCB->Size = System::Drawing::Size(135, 17);
			this->clientsNumberCB->TabIndex = 27;
			this->clientsNumberCB->Text = L"Количество клиентов";
			this->clientsNumberCB->UseVisualStyleBackColor = true;
			// 
			// profitCB
			// 
			this->profitCB->AutoSize = true;
			this->profitCB->Location = System::Drawing::Point(288, 120);
			this->profitCB->Name = L"profitCB";
			this->profitCB->Size = System::Drawing::Size(72, 17);
			this->profitCB->TabIndex = 26;
			this->profitCB->Text = L"Прибыль";
			this->profitCB->UseVisualStyleBackColor = true;
			// 
			// proceedsCB
			// 
			this->proceedsCB->AutoSize = true;
			this->proceedsCB->Location = System::Drawing::Point(288, 101);
			this->proceedsCB->Name = L"proceedsCB";
			this->proceedsCB->Size = System::Drawing::Size(69, 17);
			this->proceedsCB->TabIndex = 25;
			this->proceedsCB->Text = L"Выручка";
			this->proceedsCB->UseVisualStyleBackColor = true;
			// 
			// ExpensesCB
			// 
			this->ExpensesCB->AutoSize = true;
			this->ExpensesCB->Location = System::Drawing::Point(288, 80);
			this->ExpensesCB->Name = L"ExpensesCB";
			this->ExpensesCB->Size = System::Drawing::Size(69, 17);
			this->ExpensesCB->TabIndex = 24;
			this->ExpensesCB->Text = L"Затраты";
			this->ExpensesCB->UseVisualStyleBackColor = true;
			// 
			// updateReportBtn
			// 
			this->updateReportBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateReportBtn.BackgroundImage")));
			this->updateReportBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateReportBtn->Location = System::Drawing::Point(368, 193);
			this->updateReportBtn->Name = L"updateReportBtn";
			this->updateReportBtn->Size = System::Drawing::Size(40, 40);
			this->updateReportBtn->TabIndex = 18;
			this->updateReportBtn->UseVisualStyleBackColor = true;
			// 
			// makeReportRTB
			// 
			this->makeReportRTB->Location = System::Drawing::Point(23, 241);
			this->makeReportRTB->Name = L"makeReportRTB";
			this->makeReportRTB->Size = System::Drawing::Size(385, 265);
			this->makeReportRTB->TabIndex = 23;
			this->makeReportRTB->Text = L"";
			// 
			// makeReportBtn
			// 
			this->makeReportBtn->Location = System::Drawing::Point(70, 123);
			this->makeReportBtn->Name = L"makeReportBtn";
			this->makeReportBtn->Size = System::Drawing::Size(121, 34);
			this->makeReportBtn->TabIndex = 22;
			this->makeReportBtn->Text = L"Составить отчёт";
			this->makeReportBtn->UseVisualStyleBackColor = true;
			this->makeReportBtn->Click += gcnew System::EventHandler(this, &menuForm::makeReportBtn_Click);
			// 
			// reportPeriodCB
			// 
			this->reportPeriodCB->FormattingEnabled = true;
			this->reportPeriodCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"День", L"Месяц", L"Год" });
			this->reportPeriodCB->Location = System::Drawing::Point(70, 83);
			this->reportPeriodCB->Name = L"reportPeriodCB";
			this->reportPeriodCB->Size = System::Drawing::Size(121, 21);
			this->reportPeriodCB->TabIndex = 19;
			// 
			// reportPeriodLbl
			// 
			this->reportPeriodLbl->AutoSize = true;
			this->reportPeriodLbl->Location = System::Drawing::Point(20, 88);
			this->reportPeriodLbl->Name = L"reportPeriodLbl";
			this->reportPeriodLbl->Size = System::Drawing::Size(45, 13);
			this->reportPeriodLbl->TabIndex = 18;
			this->reportPeriodLbl->Text = L"Период";
			// 
			// saveReportBtn
			// 
			this->saveReportBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveReportBtn.BackgroundImage")));
			this->saveReportBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->saveReportBtn->Location = System::Drawing::Point(317, 193);
			this->saveReportBtn->Name = L"saveReportBtn";
			this->saveReportBtn->Size = System::Drawing::Size(40, 40);
			this->saveReportBtn->TabIndex = 17;
			this->saveReportBtn->UseVisualStyleBackColor = true;
			// 
			// financialStatementsLbl
			// 
			this->financialStatementsLbl->AutoSize = true;
			this->financialStatementsLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->financialStatementsLbl->Location = System::Drawing::Point(90, 20);
			this->financialStatementsLbl->Name = L"financialStatementsLbl";
			this->financialStatementsLbl->Size = System::Drawing::Size(252, 25);
			this->financialStatementsLbl->TabIndex = 0;
			this->financialStatementsLbl->Text = L"Финансовая отчётность";
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
			this->addServicePanel->Location = System::Drawing::Point(990, 390);
			this->addServicePanel->Name = L"addServicePanel";
			this->addServicePanel->Size = System::Drawing::Size(651, 698);
			this->addServicePanel->TabIndex = 27;
			// 
			// loadServicesBtn
			// 
			this->loadServicesBtn->Location = System::Drawing::Point(305, 278);
			this->loadServicesBtn->Name = L"loadServicesBtn";
			this->loadServicesBtn->Size = System::Drawing::Size(58, 40);
			this->loadServicesBtn->TabIndex = 17;
			this->loadServicesBtn->Text = L"load";
			this->loadServicesBtn->UseVisualStyleBackColor = true;
			this->loadServicesBtn->Click += gcnew System::EventHandler(this, &menuForm::loadServicesBtn_Click);
			// 
			// updateServicesBtn
			// 
			this->updateServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateServicesBtn.BackgroundImage")));
			this->updateServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateServicesBtn->Location = System::Drawing::Point(213, 278);
			this->updateServicesBtn->Name = L"updateServicesBtn";
			this->updateServicesBtn->Size = System::Drawing::Size(40, 40);
			this->updateServicesBtn->TabIndex = 16;
			this->updateServicesBtn->UseVisualStyleBackColor = true;
			this->updateServicesBtn->Click += gcnew System::EventHandler(this, &menuForm::updateServicesBtn_Click);
			// 
			// saveServicesBtn
			// 
			this->saveServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveServicesBtn.BackgroundImage")));
			this->saveServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->saveServicesBtn->Location = System::Drawing::Point(259, 278);
			this->saveServicesBtn->Name = L"saveServicesBtn";
			this->saveServicesBtn->Size = System::Drawing::Size(40, 40);
			this->saveServicesBtn->TabIndex = 16;
			this->saveServicesBtn->UseVisualStyleBackColor = true;
			this->saveServicesBtn->Click += gcnew System::EventHandler(this, &menuForm::saveServicesBtn_Click);
			// 
			// servicesRTB
			// 
			this->servicesRTB->Location = System::Drawing::Point(13, 189);
			this->servicesRTB->Name = L"servicesRTB";
			this->servicesRTB->Size = System::Drawing::Size(350, 83);
			this->servicesRTB->TabIndex = 12;
			this->servicesRTB->Text = L"";
			// 
			// addServicePriceLbl
			// 
			this->addServicePriceLbl->AutoSize = true;
			this->addServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addServicePriceLbl->Location = System::Drawing::Point(31, 112);
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
			this->addServices->Location = System::Drawing::Point(8, 28);
			this->addServices->Name = L"addServices";
			this->addServices->Size = System::Drawing::Size(178, 30);
			this->addServices->TabIndex = 9;
			this->addServices->Text = L"Добавить услугу";
			// 
			// addServiceNameLbl
			// 
			this->addServiceNameLbl->AutoSize = true;
			this->addServiceNameLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->addServiceNameLbl->Location = System::Drawing::Point(8, 79);
			this->addServiceNameLbl->Name = L"addServiceNameLbl";
			this->addServiceNameLbl->Size = System::Drawing::Size(68, 17);
			this->addServiceNameLbl->TabIndex = 10;
			this->addServiceNameLbl->Text = L"Название";
			// 
			// serviceNameTB
			// 
			this->serviceNameTB->Location = System::Drawing::Point(87, 76);
			this->serviceNameTB->Name = L"serviceNameTB";
			this->serviceNameTB->Size = System::Drawing::Size(204, 24);
			this->serviceNameTB->TabIndex = 6;
			// 
			// servicePriceTB
			// 
			this->servicePriceTB->Location = System::Drawing::Point(87, 110);
			this->servicePriceTB->Name = L"servicePriceTB";
			this->servicePriceTB->Size = System::Drawing::Size(204, 24);
			this->servicePriceTB->TabIndex = 7;
			// 
			// addServiceBtn
			// 
			this->addServiceBtn->Location = System::Drawing::Point(191, 142);
			this->addServiceBtn->Name = L"addServiceBtn";
			this->addServiceBtn->Size = System::Drawing::Size(100, 31);
			this->addServiceBtn->TabIndex = 8;
			this->addServiceBtn->Text = L"Добавить";
			this->addServiceBtn->UseVisualStyleBackColor = true;
			this->addServiceBtn->Click += gcnew System::EventHandler(this, &menuForm::addServiceBtn_Click);
			// 
			// clientPanel
			// 
			this->clientPanel->Controls->Add(this->ClientNameLbl);
			this->clientPanel->Controls->Add(this->ordersList);
			this->clientPanel->Controls->Add(this->exitFromClientPanel);
			this->clientPanel->Controls->Add(this->timeStatusLbl);
			this->clientPanel->Controls->Add(this->availableTimeLB);
			this->clientPanel->Controls->Add(this->updateServiceOrderBtn);
			this->clientPanel->Controls->Add(acceptOrderBtn);
			this->clientPanel->Controls->Add(this->Calendar);
			this->clientPanel->Controls->Add(this->costTB);
			this->clientPanel->Controls->Add(this->employeeIDCB);
			this->clientPanel->Controls->Add(this->serviceIDCB);
			this->clientPanel->Controls->Add(this->selectDateLbl);
			this->clientPanel->Controls->Add(this->orderCostLbl);
			this->clientPanel->Controls->Add(this->orderInitGrid);
			this->clientPanel->Controls->Add(this->employeeIDFromOrderLbl);
			this->clientPanel->Controls->Add(this->serviceIDfromOrderLbl);
			this->clientPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clientPanel->Location = System::Drawing::Point(990, 165);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(651, 751);
			this->clientPanel->TabIndex = 17;
			this->clientPanel->Visible = false;
			this->clientPanel->VisibleChanged += gcnew System::EventHandler(this, &menuForm::clientPanel_VisibleChanged);
			// 
			// ClientNameLbl
			// 
			this->ClientNameLbl->AutoSize = true;
			this->ClientNameLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClientNameLbl->Location = System::Drawing::Point(45, 44);
			this->ClientNameLbl->Name = L"ClientNameLbl";
			this->ClientNameLbl->Size = System::Drawing::Size(100, 23);
			this->ClientNameLbl->TabIndex = 35;
			this->ClientNameLbl->Text = L"ClientName";
			// 
			// ordersList
			// 
			this->ordersList->AutoSize = true;
			this->ordersList->Location = System::Drawing::Point(46, 80);
			this->ordersList->Name = L"ordersList";
			this->ordersList->Size = System::Drawing::Size(151, 17);
			this->ordersList->TabIndex = 34;
			this->ordersList->Text = L"Список ваших записей";
			// 
			// exitFromClientPanel
			// 
			this->exitFromClientPanel->Location = System::Drawing::Point(580, 309);
			this->exitFromClientPanel->Name = L"exitFromClientPanel";
			this->exitFromClientPanel->Size = System::Drawing::Size(160, 36);
			this->exitFromClientPanel->TabIndex = 33;
			this->exitFromClientPanel->Text = L"Выход";
			this->exitFromClientPanel->UseVisualStyleBackColor = true;
			this->exitFromClientPanel->Click += gcnew System::EventHandler(this, &menuForm::exitFromClientPanel_Click);
			// 
			// timeStatusLbl
			// 
			this->timeStatusLbl->AutoSize = true;
			this->timeStatusLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeStatusLbl->ForeColor = System::Drawing::Color::DarkRed;
			this->timeStatusLbl->Location = System::Drawing::Point(580, 353);
			this->timeStatusLbl->Name = L"timeStatusLbl";
			this->timeStatusLbl->Size = System::Drawing::Size(0, 24);
			this->timeStatusLbl->TabIndex = 31;
			// 
			// availableTimeLB
			// 
			this->availableTimeLB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->availableTimeLB->FormatString = L"t";
			this->availableTimeLB->FormattingEnabled = true;
			this->availableTimeLB->ItemHeight = 20;
			this->availableTimeLB->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"12:30", L"12:31", L"12:32", L"12:33", L"12:34",
					L"12:35", L"12:36", L"12:37"
			});
			this->availableTimeLB->Location = System::Drawing::Point(217, 394);
			this->availableTimeLB->Name = L"availableTimeLB";
			this->availableTimeLB->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->availableTimeLB->Size = System::Drawing::Size(164, 24);
			this->availableTimeLB->TabIndex = 30;
			// 
			// updateServiceOrderBtn
			// 
			this->updateServiceOrderBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateServiceOrderBtn.BackgroundImage")));
			this->updateServiceOrderBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateServiceOrderBtn->Location = System::Drawing::Point(700, 52);
			this->updateServiceOrderBtn->Name = L"updateServiceOrderBtn";
			this->updateServiceOrderBtn->Size = System::Drawing::Size(40, 40);
			this->updateServiceOrderBtn->TabIndex = 27;
			this->updateServiceOrderBtn->UseVisualStyleBackColor = true;
			this->updateServiceOrderBtn->Click += gcnew System::EventHandler(this, &menuForm::updateServiceOrderBtn_Click);
			// 
			// Calendar
			// 
			this->Calendar->Location = System::Drawing::Point(404, 259);
			this->Calendar->MaxSelectionCount = 1;
			this->Calendar->Name = L"Calendar";
			this->Calendar->TabIndex = 2;
			this->Calendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &menuForm::Calendar_DateSelected);
			// 
			// costTB
			// 
			this->costTB->Location = System::Drawing::Point(216, 353);
			this->costTB->Name = L"costTB";
			this->costTB->ReadOnly = true;
			this->costTB->Size = System::Drawing::Size(164, 24);
			this->costTB->TabIndex = 11;
			// 
			// employeeIDCB
			// 
			this->employeeIDCB->FormattingEnabled = true;
			this->employeeIDCB->Location = System::Drawing::Point(217, 307);
			this->employeeIDCB->Name = L"employeeIDCB";
			this->employeeIDCB->Size = System::Drawing::Size(163, 23);
			this->employeeIDCB->TabIndex = 8;
			// 
			// serviceIDCB
			// 
			this->serviceIDCB->FormattingEnabled = true;
			this->serviceIDCB->Location = System::Drawing::Point(217, 264);
			this->serviceIDCB->Name = L"serviceIDCB";
			this->serviceIDCB->Size = System::Drawing::Size(163, 23);
			this->serviceIDCB->TabIndex = 7;
			this->serviceIDCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::serviceIDCB_SelectionChangeCommitted);
			this->serviceIDCB->SelectedValueChanged += gcnew System::EventHandler(this, &menuForm::serviceIDCB_SelectedValueChanged);
			// 
			// selectDateLbl
			// 
			this->selectDateLbl->AutoSize = true;
			this->selectDateLbl->Location = System::Drawing::Point(44, 401);
			this->selectDateLbl->Name = L"selectDateLbl";
			this->selectDateLbl->Size = System::Drawing::Size(157, 17);
			this->selectDateLbl->TabIndex = 32;
			this->selectDateLbl->Text = L"Выберите дату и время";
			// 
			// orderCostLbl
			// 
			this->orderCostLbl->AutoSize = true;
			this->orderCostLbl->Location = System::Drawing::Point(44, 360);
			this->orderCostLbl->Name = L"orderCostLbl";
			this->orderCostLbl->Size = System::Drawing::Size(75, 17);
			this->orderCostLbl->TabIndex = 5;
			this->orderCostLbl->Text = L"Стоимость";
			// 
			// orderInitGrid
			// 
			this->orderInitGrid->AllowUserToAddRows = false;
			this->orderInitGrid->AllowUserToDeleteRows = false;
			this->orderInitGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->orderInitGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->orderInitGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->serviceID,
					this->employeeOerderID, this->clientIDOrder, this->cost, this->sssorderStatus, this->ordersDate, this->orderTime
			});
			this->orderInitGrid->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->orderInitGrid->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->orderInitGrid->Location = System::Drawing::Point(46, 99);
			this->orderInitGrid->Margin = System::Windows::Forms::Padding(2);
			this->orderInitGrid->Name = L"orderInitGrid";
			this->orderInitGrid->ReadOnly = true;
			this->orderInitGrid->RowHeadersWidth = 30;
			this->orderInitGrid->Size = System::Drawing::Size(694, 137);
			this->orderInitGrid->TabIndex = 0;
			// 
			// serviceID
			// 
			this->serviceID->HeaderText = L"Услуга";
			this->serviceID->Name = L"serviceID";
			this->serviceID->ReadOnly = true;
			this->serviceID->Width = 73;
			// 
			// employeeOerderID
			// 
			this->employeeOerderID->HeaderText = L"Исполнитель";
			this->employeeOerderID->Name = L"employeeOerderID";
			this->employeeOerderID->ReadOnly = true;
			this->employeeOerderID->Width = 115;
			// 
			// clientIDOrder
			// 
			this->clientIDOrder->HeaderText = L"Клиент";
			this->clientIDOrder->Name = L"clientIDOrder";
			this->clientIDOrder->ReadOnly = true;
			this->clientIDOrder->Width = 77;
			// 
			// cost
			// 
			this->cost->HeaderText = L"Стоимость";
			this->cost->Name = L"cost";
			this->cost->ReadOnly = true;
			// 
			// sssorderStatus
			// 
			this->sssorderStatus->HeaderText = L"Статус заказа";
			this->sssorderStatus->Name = L"sssorderStatus";
			this->sssorderStatus->ReadOnly = true;
			this->sssorderStatus->Width = 117;
			// 
			// ordersDate
			// 
			this->ordersDate->HeaderText = L"Дата";
			this->ordersDate->Name = L"ordersDate";
			this->ordersDate->ReadOnly = true;
			this->ordersDate->Width = 62;
			// 
			// orderTime
			// 
			this->orderTime->HeaderText = L"Время";
			this->orderTime->Name = L"orderTime";
			this->orderTime->ReadOnly = true;
			this->orderTime->Width = 73;
			// 
			// employeeIDFromOrderLbl
			// 
			this->employeeIDFromOrderLbl->AutoSize = true;
			this->employeeIDFromOrderLbl->Location = System::Drawing::Point(44, 313);
			this->employeeIDFromOrderLbl->Name = L"employeeIDFromOrderLbl";
			this->employeeIDFromOrderLbl->Size = System::Drawing::Size(76, 17);
			this->employeeIDFromOrderLbl->TabIndex = 3;
			this->employeeIDFromOrderLbl->Text = L"Сотрудник";
			// 
			// serviceIDfromOrderLbl
			// 
			this->serviceIDfromOrderLbl->AutoSize = true;
			this->serviceIDfromOrderLbl->Location = System::Drawing::Point(43, 265);
			this->serviceIDfromOrderLbl->Name = L"serviceIDfromOrderLbl";
			this->serviceIDfromOrderLbl->Size = System::Drawing::Size(113, 17);
			this->serviceIDfromOrderLbl->TabIndex = 2;
			this->serviceIDfromOrderLbl->Text = L"Выберите услугу";
			// 
			// employeePanel
			// 
			this->employeePanel->Controls->Add(this->updateOrdersGridBtn);
			this->employeePanel->Controls->Add(this->label6);
			this->employeePanel->Controls->Add(this->label5);
			this->employeePanel->Controls->Add(this->selectDataLbl);
			this->employeePanel->Controls->Add(this->selectedDateEmployeeLbl);
			this->employeePanel->Controls->Add(this->selectedDateEmployeeTB);
			this->employeePanel->Controls->Add(this->employeeCalendar);
			this->employeePanel->Controls->Add(this->label13);
			this->employeePanel->Controls->Add(this->achievementsEmployeeTB);
			this->employeePanel->Controls->Add(this->specialityEmployeeTB);
			this->employeePanel->Controls->Add(this->nameEmployeeTB);
			this->employeePanel->Controls->Add(this->orderEmployeeLbl);
			this->employeePanel->Controls->Add(this->orderEmployeeIdCB);
			this->employeePanel->Controls->Add(this->orderEmployeeCheckCB);
			this->employeePanel->Controls->Add(this->employeeDataGrid);
			this->employeePanel->Controls->Add(this->achievementsEmployeeLbl);
			this->employeePanel->Controls->Add(this->specialityEmployeeLbl);
			this->employeePanel->Controls->Add(this->nameEmployeeLbl);
			this->employeePanel->Controls->Add(this->exitFromEmployeePanelBtn);
			this->employeePanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12.25F, System::Drawing::FontStyle::Bold));
			this->employeePanel->Location = System::Drawing::Point(23, 28);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(913, 712);
			this->employeePanel->TabIndex = 18;
			this->employeePanel->Visible = false;
			this->employeePanel->VisibleChanged += gcnew System::EventHandler(this, &menuForm::employeePanel_VisibleChanged);
			// 
			// updateOrdersGridBtn
			// 
			this->updateOrdersGridBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateOrdersGridBtn.BackgroundImage")));
			this->updateOrdersGridBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateOrdersGridBtn->Location = System::Drawing::Point(761, 282);
			this->updateOrdersGridBtn->Name = L"updateOrdersGridBtn";
			this->updateOrdersGridBtn->Size = System::Drawing::Size(40, 40);
			this->updateOrdersGridBtn->TabIndex = 28;
			this->updateOrdersGridBtn->UseVisualStyleBackColor = true;
			this->updateOrdersGridBtn->Click += gcnew System::EventHandler(this, &menuForm::updateOrdersGridBtn_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(38, 524);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(235, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"---------------------------------------------------------";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(38, 379);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"---------------------------------------------------------";
			// 
			// selectDataLbl
			// 
			this->selectDataLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectDataLbl->AutoSize = true;
			this->selectDataLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectDataLbl->Location = System::Drawing::Point(343, 289);
			this->selectDataLbl->Name = L"selectDataLbl";
			this->selectDataLbl->Size = System::Drawing::Size(102, 17);
			this->selectDataLbl->TabIndex = 17;
			this->selectDataLbl->Text = L"Выберите дату";
			// 
			// selectedDateEmployeeLbl
			// 
			this->selectedDateEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectedDateEmployeeLbl->AutoSize = true;
			this->selectedDateEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectedDateEmployeeLbl->Location = System::Drawing::Point(343, 497);
			this->selectedDateEmployeeLbl->Name = L"selectedDateEmployeeLbl";
			this->selectedDateEmployeeLbl->Size = System::Drawing::Size(114, 17);
			this->selectedDateEmployeeLbl->TabIndex = 16;
			this->selectedDateEmployeeLbl->Text = L"Выбранная дата:";
			// 
			// selectedDateEmployeeTB
			// 
			this->selectedDateEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectedDateEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectedDateEmployeeTB->Location = System::Drawing::Point(346, 524);
			this->selectedDateEmployeeTB->Name = L"selectedDateEmployeeTB";
			this->selectedDateEmployeeTB->Size = System::Drawing::Size(164, 24);
			this->selectedDateEmployeeTB->TabIndex = 15;
			// 
			// employeeCalendar
			// 
			this->employeeCalendar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->employeeCalendar->Location = System::Drawing::Point(346, 320);
			this->employeeCalendar->MaxSelectionCount = 1;
			this->employeeCalendar->Name = L"employeeCalendar";
			this->employeeCalendar->TabIndex = 2;
			this->employeeCalendar->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &menuForm::employeeCalendar_DateChanged);
			this->employeeCalendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &menuForm::employeeCalendar_DateSelected);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(40, 320);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(235, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"---------------------------------------------------------";
			// 
			// achievementsEmployeeTB
			// 
			this->achievementsEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeTB->Location = System::Drawing::Point(42, 421);
			this->achievementsEmployeeTB->Multiline = true;
			this->achievementsEmployeeTB->Name = L"achievementsEmployeeTB";
			this->achievementsEmployeeTB->ReadOnly = true;
			this->achievementsEmployeeTB->Size = System::Drawing::Size(231, 93);
			this->achievementsEmployeeTB->TabIndex = 10;
			// 
			// specialityEmployeeTB
			// 
			this->specialityEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->specialityEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->specialityEmployeeTB->Location = System::Drawing::Point(173, 347);
			this->specialityEmployeeTB->Name = L"specialityEmployeeTB";
			this->specialityEmployeeTB->ReadOnly = true;
			this->specialityEmployeeTB->Size = System::Drawing::Size(100, 24);
			this->specialityEmployeeTB->TabIndex = 9;
			// 
			// nameEmployeeTB
			// 
			this->nameEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nameEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->nameEmployeeTB->Location = System::Drawing::Point(173, 286);
			this->nameEmployeeTB->Name = L"nameEmployeeTB";
			this->nameEmployeeTB->ReadOnly = true;
			this->nameEmployeeTB->Size = System::Drawing::Size(100, 24);
			this->nameEmployeeTB->TabIndex = 8;
			// 
			// orderEmployeeLbl
			// 
			this->orderEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->orderEmployeeLbl->AutoSize = true;
			this->orderEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->orderEmployeeLbl->Location = System::Drawing::Point(42, 551);
			this->orderEmployeeLbl->Name = L"orderEmployeeLbl";
			this->orderEmployeeLbl->Size = System::Drawing::Size(42, 17);
			this->orderEmployeeLbl->TabIndex = 7;
			this->orderEmployeeLbl->Text = L"Заказ";
			// 
			// orderEmployeeIdCB
			// 
			this->orderEmployeeIdCB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->orderEmployeeIdCB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->orderEmployeeIdCB->FormattingEnabled = true;
			this->orderEmployeeIdCB->Location = System::Drawing::Point(173, 545);
			this->orderEmployeeIdCB->Name = L"orderEmployeeIdCB";
			this->orderEmployeeIdCB->Size = System::Drawing::Size(100, 23);
			this->orderEmployeeIdCB->TabIndex = 6;
			this->orderEmployeeIdCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::orderEmployeeIdCB_SelectionChangeCommitted);
			// 
			// orderEmployeeCheckCB
			// 
			this->orderEmployeeCheckCB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->orderEmployeeCheckCB->AutoSize = true;
			this->orderEmployeeCheckCB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->orderEmployeeCheckCB->Location = System::Drawing::Point(173, 574);
			this->orderEmployeeCheckCB->Name = L"orderEmployeeCheckCB";
			this->orderEmployeeCheckCB->Size = System::Drawing::Size(91, 21);
			this->orderEmployeeCheckCB->TabIndex = 5;
			this->orderEmployeeCheckCB->Text = L"Выполнен";
			this->orderEmployeeCheckCB->UseVisualStyleBackColor = true;
			this->orderEmployeeCheckCB->CheckedChanged += gcnew System::EventHandler(this, &menuForm::orderEmployeeCheckCB_CheckedChanged);
			// 
			// employeeDataGrid
			// 
			this->employeeDataGrid->AllowUserToAddRows = false;
			this->employeeDataGrid->AllowUserToDeleteRows = false;
			this->employeeDataGrid->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->employeeDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->employeeDataGrid->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->employeeDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->employeeDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->employeeIdDG,
					this->dateEmployeeDG, this->serviceEmployeeDG, this->clientNameEmployeeDG, this->costOfServiceEmployeeDG, this->ordersTime, this->orderCurStatus
			});
			this->employeeDataGrid->Location = System::Drawing::Point(41, 77);
			this->employeeDataGrid->Name = L"employeeDataGrid";
			this->employeeDataGrid->Size = System::Drawing::Size(760, 195);
			this->employeeDataGrid->TabIndex = 4;
			// 
			// employeeIdDG
			// 
			this->employeeIdDG->HeaderText = L"id";
			this->employeeIdDG->Name = L"employeeIdDG";
			// 
			// dateEmployeeDG
			// 
			this->dateEmployeeDG->HeaderText = L"Дата";
			this->dateEmployeeDG->Name = L"dateEmployeeDG";
			// 
			// serviceEmployeeDG
			// 
			this->serviceEmployeeDG->HeaderText = L"Услуга";
			this->serviceEmployeeDG->Name = L"serviceEmployeeDG";
			// 
			// clientNameEmployeeDG
			// 
			this->clientNameEmployeeDG->HeaderText = L"Клиент";
			this->clientNameEmployeeDG->Name = L"clientNameEmployeeDG";
			// 
			// costOfServiceEmployeeDG
			// 
			this->costOfServiceEmployeeDG->HeaderText = L"Стоимость";
			this->costOfServiceEmployeeDG->Name = L"costOfServiceEmployeeDG";
			// 
			// ordersTime
			// 
			this->ordersTime->HeaderText = L"Время";
			this->ordersTime->Name = L"ordersTime";
			// 
			// orderCurStatus
			// 
			this->orderCurStatus->HeaderText = L"Статус";
			this->orderCurStatus->Name = L"orderCurStatus";
			// 
			// achievementsEmployeeLbl
			// 
			this->achievementsEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeLbl->AutoSize = true;
			this->achievementsEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeLbl->Location = System::Drawing::Point(38, 397);
			this->achievementsEmployeeLbl->Name = L"achievementsEmployeeLbl";
			this->achievementsEmployeeLbl->Size = System::Drawing::Size(138, 17);
			this->achievementsEmployeeLbl->TabIndex = 3;
			this->achievementsEmployeeLbl->Text = L"Личные достижения";
			// 
			// specialityEmployeeLbl
			// 
			this->specialityEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->specialityEmployeeLbl->AutoSize = true;
			this->specialityEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->specialityEmployeeLbl->Location = System::Drawing::Point(42, 350);
			this->specialityEmployeeLbl->Name = L"specialityEmployeeLbl";
			this->specialityEmployeeLbl->Size = System::Drawing::Size(77, 17);
			this->specialityEmployeeLbl->TabIndex = 2;
			this->specialityEmployeeLbl->Text = L"Должность";
			// 
			// nameEmployeeLbl
			// 
			this->nameEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nameEmployeeLbl->AutoSize = true;
			this->nameEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->nameEmployeeLbl->Location = System::Drawing::Point(42, 293);
			this->nameEmployeeLbl->Name = L"nameEmployeeLbl";
			this->nameEmployeeLbl->Size = System::Drawing::Size(35, 17);
			this->nameEmployeeLbl->TabIndex = 1;
			this->nameEmployeeLbl->Text = L"Имя";
			// 
			// exitFromEmployeePanelBtn
			// 
			this->exitFromEmployeePanelBtn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->exitFromEmployeePanelBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->exitFromEmployeePanelBtn->Location = System::Drawing::Point(707, 589);
			this->exitFromEmployeePanelBtn->Name = L"exitFromEmployeePanelBtn";
			this->exitFromEmployeePanelBtn->Size = System::Drawing::Size(94, 35);
			this->exitFromEmployeePanelBtn->TabIndex = 0;
			this->exitFromEmployeePanelBtn->Text = L"Выход";
			this->exitFromEmployeePanelBtn->UseVisualStyleBackColor = true;
			this->exitFromEmployeePanelBtn->Click += gcnew System::EventHandler(this, &menuForm::exitFromEmployeePanelBtn_Click);
			// 
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1707, 912);
			this->Controls->Add(this->employeePanel);
			this->Controls->Add(this->changeUserPanel);
			this->Controls->Add(this->addUserPanel);
			this->Controls->Add(this->reportPanel);
			this->Controls->Add(this->addServicePanel);
			this->Controls->Add(this->changeServicePanel);
			this->Controls->Add(this->adminPanel);
			this->Controls->Add(this->clientPanel);
			this->MaximizeBox = false;
			this->Name = L"menuForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"menuForm";
			this->Load += gcnew System::EventHandler(this, &menuForm::menuForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &menuForm::menuForm_VisibleChanged);
			this->adminPanel->ResumeLayout(false);
			this->adminPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->EndInit();
			this->changeServicePanel->ResumeLayout(false);
			this->changeServicePanel->PerformLayout();
			this->changeUserPanel->ResumeLayout(false);
			this->changeUserPanel->PerformLayout();
			this->changeUserSpecialityPanel->ResumeLayout(false);
			this->changeUserSpecialityPanel->PerformLayout();
			this->changeUserSexGP->ResumeLayout(false);
			this->changeUserSexGP->PerformLayout();
			this->addUserPanel->ResumeLayout(false);
			this->addUserPanel->PerformLayout();
			this->addUserSexGP->ResumeLayout(false);
			this->addUserSexGP->PerformLayout();
			this->specialityPanel->ResumeLayout(false);
			this->specialityPanel->PerformLayout();
			this->reportPanel->ResumeLayout(false);
			this->reportPanel->PerformLayout();
			this->addServicePanel->ResumeLayout(false);
			this->addServicePanel->PerformLayout();
			this->clientPanel->ResumeLayout(false);
			this->clientPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->EndInit();
			this->employeePanel->ResumeLayout(false);
			this->employeePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bshop::menuForm::updateAvailableTimes();
	private: System::Void bshop::menuForm::updateOrdersGrid(std::list<ServiceOrder*> orders);
	private: System::Int32 bshop::menuForm::findID(int employeeIndex, bool isEmployee);
	private: System::Void menuForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateAvailableTimes(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void serviceIDCB_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void menuForm_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void serviceIDCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void employeeCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void employeePanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void orderEmployeeIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void orderEmployeeCheckCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateOrdersGridBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void employeeCalendar_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void bshop::menuForm::updateTimetable(MonthCalendar^ employeeCalendar, TextBox^ selectedDateEmployeeTB);
	private: System::Void clientPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitFromEmployeePanelBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserBtn_Click_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserTypeCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addUserTypeCB_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeUserBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addServiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void saveServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void loadServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateServicesBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addServiceBtnFromAdminPanel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeServiceFormBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateGridsBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void changeServiceBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void delOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void bshop::menuForm::clearAllGrids();
	private: System::Void deleteSpecificUser_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deleteSpecidicServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void showReportBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void makeReportBtn_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void reportPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void bshop::menuForm::closeAllPanels(System::Object^ sender, System::EventArgs^ e);
};
}
 
#endif MENUFORM_H