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

			//
			//TODO: добавьте код конструктора
			//
		}

		menuForm(void)
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
		//MockDatabase* db = MockDatabase::getInstance();


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ ordersDataGrid;
	private: System::Windows::Forms::DataGridView^ servicesDataGrid;
	private: System::Windows::Forms::DataGridView^ usersDataGrid;






	private: System::Windows::Forms::Label^ AdminLbl;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ updateBtn;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ servicesID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceName;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ selected;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderStatus;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ selectedRow;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ userCurrentStatus;
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
private: System::Windows::Forms::Button^ button4;
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





private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Button^ updateReportBtn;
private: System::Windows::Forms::RichTextBox^ makeReportRTB;
private: System::Windows::Forms::Button^ makeReportBtn;
private: System::Windows::Forms::CheckedListBox^ reportParametersCLB;
private: System::Windows::Forms::ComboBox^ reportPeriodCB;
private: System::Windows::Forms::Label^ reportPeriodLbl;
private: System::Windows::Forms::Button^ saveReportBtn;
private: System::Windows::Forms::Label^ financialStatementsLbl;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Button^ loadDeleteServicesBtn;
private: System::Windows::Forms::Button^ updateDeleteServicesBtn;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::RichTextBox^ deleteServicesRTB;
private: System::Windows::Forms::Label^ changeServicePriceLbl;
private: System::Windows::Forms::Label^ deleteServices;
private: System::Windows::Forms::Label^ changeServiceNameLbl;
private: System::Windows::Forms::TextBox^ changeServiceNameTB;
private: System::Windows::Forms::TextBox^ changeServicePriceTB;
private: System::Windows::Forms::Button^ changeServiceFormBtn;




















private: System::Windows::Forms::Panel^ panel4;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->ordersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->orderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->servicesDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->servicesID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->selected = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->usersDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->selectedRow = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->userID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userCurrentStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->clientPanel = (gcnew System::Windows::Forms::Panel());
			this->ClientNameLbl = (gcnew System::Windows::Forms::Label());
			this->ordersList = (gcnew System::Windows::Forms::Label());
			this->exitFromClientPanel = (gcnew System::Windows::Forms::Button());
			this->selectDateLbl = (gcnew System::Windows::Forms::Label());
			this->timeStatusLbl = (gcnew System::Windows::Forms::Label());
			this->availableTimeLB = (gcnew System::Windows::Forms::ListBox());
			this->updateServiceOrderBtn = (gcnew System::Windows::Forms::Button());
			this->Calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->costTB = (gcnew System::Windows::Forms::TextBox());
			this->employeeIDCB = (gcnew System::Windows::Forms::ComboBox());
			this->serviceIDCB = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->updateReportBtn = (gcnew System::Windows::Forms::Button());
			this->makeReportRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->makeReportBtn = (gcnew System::Windows::Forms::Button());
			this->reportParametersCLB = (gcnew System::Windows::Forms::CheckedListBox());
			this->reportPeriodCB = (gcnew System::Windows::Forms::ComboBox());
			this->reportPeriodLbl = (gcnew System::Windows::Forms::Label());
			this->saveReportBtn = (gcnew System::Windows::Forms::Button());
			this->financialStatementsLbl = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->loadDeleteServicesBtn = (gcnew System::Windows::Forms::Button());
			this->updateDeleteServicesBtn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->deleteServicesRTB = (gcnew System::Windows::Forms::RichTextBox());
			this->changeServicePriceLbl = (gcnew System::Windows::Forms::Label());
			this->deleteServices = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameLbl = (gcnew System::Windows::Forms::Label());
			this->changeServiceNameTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServicePriceTB = (gcnew System::Windows::Forms::TextBox());
			this->changeServiceFormBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
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
			this->addUserMaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->addUserFemaleRB = (gcnew System::Windows::Forms::RadioButton());
			this->addUserSexGP = (gcnew System::Windows::Forms::GroupBox());
			this->addUserNameTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserMailTB = (gcnew System::Windows::Forms::TextBox());
			this->addUserPasswordTB = (gcnew System::Windows::Forms::TextBox());
			this->addDateLbl = (gcnew System::Windows::Forms::Label());
			this->addPhonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->addEmailLbl = (gcnew System::Windows::Forms::Label());
			this->addPassLbl = (gcnew System::Windows::Forms::Label());
			this->addUserFormBtn = (gcnew System::Windows::Forms::Button());
			this->addUserTypeLbl = (gcnew System::Windows::Forms::Label());
			this->addUserTypeCB = (gcnew System::Windows::Forms::ComboBox());
			this->addUser = (gcnew System::Windows::Forms::Label());
			this->specialityPanel = (gcnew System::Windows::Forms::Panel());
			this->addStatusLbl = (gcnew System::Windows::Forms::Label());
			this->addUserSpecialityCB = (gcnew System::Windows::Forms::ComboBox());
			this->addUserPanel = (gcnew System::Windows::Forms::Panel());
			this->addUserPhonenumberTB = (gcnew System::Windows::Forms::MaskedTextBox());
			this->addUserDateTB = (gcnew System::Windows::Forms::MaskedTextBox());
			acceptOrderBtn = (gcnew System::Windows::Forms::Button());
			changeNameLbl = (gcnew System::Windows::Forms::Label());
			addNameLbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
			this->clientPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->BeginInit();
			this->employeePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->BeginInit();
			this->changeUserPanel->SuspendLayout();
			this->changeUserSpecialityPanel->SuspendLayout();
			this->changeUserSexGP->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel4->SuspendLayout();
			this->addUserSexGP->SuspendLayout();
			this->specialityPanel->SuspendLayout();
			this->addUserPanel->SuspendLayout();
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
			changeNameLbl->Size = System::Drawing::Size(29, 13);
			changeNameLbl->TabIndex = 45;
			changeNameLbl->Text = L"Имя";
			// 
			// addNameLbl
			// 
			addNameLbl->AutoSize = true;
			addNameLbl->Location = System::Drawing::Point(93, 53);
			addNameLbl->Name = L"addNameLbl";
			addNameLbl->Size = System::Drawing::Size(29, 13);
			addNameLbl->TabIndex = 27;
			addNameLbl->Text = L"Имя";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->showReportBtn);
			this->panel1->Controls->Add(this->changeServiceBtn);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->delOrderBtn);
			this->panel1->Controls->Add(this->changeUserBtn);
			this->panel1->Controls->Add(this->addUserBtn);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->updateBtn);
			this->panel1->Controls->Add(this->ordersDataGrid);
			this->panel1->Controls->Add(this->servicesDataGrid);
			this->panel1->Controls->Add(this->usersDataGrid);
			this->panel1->Controls->Add(this->AdminLbl);
			this->panel1->Location = System::Drawing::Point(1140, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(752, 744);
			this->panel1->TabIndex = 1;
			// 
			// showReportBtn
			// 
			this->showReportBtn->Location = System::Drawing::Point(16, 231);
			this->showReportBtn->Name = L"showReportBtn";
			this->showReportBtn->Size = System::Drawing::Size(153, 23);
			this->showReportBtn->TabIndex = 28;
			this->showReportBtn->Text = L"Показать/составить отчёт";
			this->showReportBtn->UseVisualStyleBackColor = true;
			// 
			// changeServiceBtn
			// 
			this->changeServiceBtn->Location = System::Drawing::Point(16, 202);
			this->changeServiceBtn->Name = L"changeServiceBtn";
			this->changeServiceBtn->Size = System::Drawing::Size(153, 23);
			this->changeServiceBtn->TabIndex = 27;
			this->changeServiceBtn->Text = L"Изменить услугу";
			this->changeServiceBtn->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 173);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Добавить услугу";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// delOrderBtn
			// 
			this->delOrderBtn->Location = System::Drawing::Point(16, 144);
			this->delOrderBtn->Name = L"delOrderBtn";
			this->delOrderBtn->Size = System::Drawing::Size(153, 23);
			this->delOrderBtn->TabIndex = 25;
			this->delOrderBtn->Text = L"Удалить услугу";
			this->delOrderBtn->UseVisualStyleBackColor = true;
			// 
			// changeUserBtn
			// 
			this->changeUserBtn->Location = System::Drawing::Point(16, 115);
			this->changeUserBtn->Name = L"changeUserBtn";
			this->changeUserBtn->Size = System::Drawing::Size(153, 23);
			this->changeUserBtn->TabIndex = 24;
			this->changeUserBtn->Text = L"Изменить пользователя";
			this->changeUserBtn->UseVisualStyleBackColor = true;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(191, 476);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"orders";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(191, 268);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"services";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(191, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"users";
			// 
			// updateBtn
			// 
			this->updateBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateBtn.BackgroundImage")));
			this->updateBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateBtn->Location = System::Drawing::Point(694, 25);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(40, 40);
			this->updateBtn->TabIndex = 12;
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &menuForm::updateBtn_Click);
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
			this->ordersDataGrid->Location = System::Drawing::Point(191, 492);
			this->ordersDataGrid->Name = L"ordersDataGrid";
			this->ordersDataGrid->ReadOnly = true;
			this->ordersDataGrid->Size = System::Drawing::Size(543, 176);
			this->ordersDataGrid->TabIndex = 9;
			// 
			// orderID
			// 
			this->orderID->HeaderText = L"ID";
			this->orderID->Name = L"orderID";
			this->orderID->ReadOnly = true;
			// 
			// employeeID
			// 
			this->employeeID->HeaderText = L"employee";
			this->employeeID->Name = L"employeeID";
			this->employeeID->ReadOnly = true;
			// 
			// clientID
			// 
			this->clientID->HeaderText = L"client";
			this->clientID->Name = L"clientID";
			this->clientID->ReadOnly = true;
			// 
			// orderStatus
			// 
			this->orderStatus->HeaderText = L"status";
			this->orderStatus->Name = L"orderStatus";
			this->orderStatus->ReadOnly = true;
			// 
			// servicesDataGrid
			// 
			this->servicesDataGrid->AllowUserToAddRows = false;
			this->servicesDataGrid->AllowUserToDeleteRows = false;
			this->servicesDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->servicesDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->servicesID,
					this->serviceName, this->selected
			});
			this->servicesDataGrid->Location = System::Drawing::Point(191, 284);
			this->servicesDataGrid->Name = L"servicesDataGrid";
			this->servicesDataGrid->ReadOnly = true;
			this->servicesDataGrid->Size = System::Drawing::Size(543, 178);
			this->servicesDataGrid->TabIndex = 8;
			// 
			// servicesID
			// 
			this->servicesID->HeaderText = L"ID";
			this->servicesID->Name = L"servicesID";
			this->servicesID->ReadOnly = true;
			// 
			// serviceName
			// 
			this->serviceName->HeaderText = L"Name";
			this->serviceName->Name = L"serviceName";
			this->serviceName->ReadOnly = true;
			// 
			// selected
			// 
			this->selected->HeaderText = L"Select";
			this->selected->Name = L"selected";
			this->selected->ReadOnly = true;
			this->selected->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->selected->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
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
			this->usersDataGrid->Location = System::Drawing::Point(191, 86);
			this->usersDataGrid->Name = L"usersDataGrid";
			this->usersDataGrid->ReadOnly = true;
			this->usersDataGrid->Size = System::Drawing::Size(543, 168);
			this->usersDataGrid->TabIndex = 7;
			// 
			// selectedRow
			// 
			this->selectedRow->HeaderText = L"Select";
			this->selectedRow->Name = L"selectedRow";
			this->selectedRow->ReadOnly = true;
			this->selectedRow->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->selectedRow->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// userID
			// 
			this->userID->HeaderText = L"ID";
			this->userID->Name = L"userID";
			this->userID->ReadOnly = true;
			// 
			// userName
			// 
			this->userName->HeaderText = L"Name";
			this->userName->Name = L"userName";
			this->userName->ReadOnly = true;
			// 
			// userCurrentStatus
			// 
			this->userCurrentStatus->HeaderText = L"Status";
			this->userCurrentStatus->Name = L"userCurrentStatus";
			this->userCurrentStatus->ReadOnly = true;
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
			// clientPanel
			// 
			this->clientPanel->Controls->Add(this->ClientNameLbl);
			this->clientPanel->Controls->Add(this->ordersList);
			this->clientPanel->Controls->Add(this->exitFromClientPanel);
			this->clientPanel->Controls->Add(this->selectDateLbl);
			this->clientPanel->Controls->Add(this->timeStatusLbl);
			this->clientPanel->Controls->Add(this->availableTimeLB);
			this->clientPanel->Controls->Add(this->updateServiceOrderBtn);
			this->clientPanel->Controls->Add(acceptOrderBtn);
			this->clientPanel->Controls->Add(this->Calendar);
			this->clientPanel->Controls->Add(this->costTB);
			this->clientPanel->Controls->Add(this->employeeIDCB);
			this->clientPanel->Controls->Add(this->serviceIDCB);
			this->clientPanel->Controls->Add(this->orderCostLbl);
			this->clientPanel->Controls->Add(this->orderInitGrid);
			this->clientPanel->Controls->Add(this->employeeIDFromOrderLbl);
			this->clientPanel->Controls->Add(this->serviceIDfromOrderLbl);
			this->clientPanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clientPanel->Location = System::Drawing::Point(283, 11);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(251, 125);
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
			// selectDateLbl
			// 
			this->selectDateLbl->AutoSize = true;
			this->selectDateLbl->Location = System::Drawing::Point(44, 401);
			this->selectDateLbl->Name = L"selectDateLbl";
			this->selectDateLbl->Size = System::Drawing::Size(157, 17);
			this->selectDateLbl->TabIndex = 32;
			this->selectDateLbl->Text = L"Выберите дату и время";
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
			this->employeePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->employeePanel->Location = System::Drawing::Point(12, 12);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(254, 124);
			this->employeePanel->TabIndex = 18;
			this->employeePanel->Visible = false;
			this->employeePanel->VisibleChanged += gcnew System::EventHandler(this, &menuForm::employeePanel_VisibleChanged);
			// 
			// updateOrdersGridBtn
			// 
			this->updateOrdersGridBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateOrdersGridBtn.BackgroundImage")));
			this->updateOrdersGridBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateOrdersGridBtn->Location = System::Drawing::Point(761, 209);
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
			this->label6->Location = System::Drawing::Point(38, 229);
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
			this->label5->Location = System::Drawing::Point(38, 84);
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
			this->selectDataLbl->Location = System::Drawing::Point(343, -6);
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
			this->selectedDateEmployeeLbl->Location = System::Drawing::Point(343, 202);
			this->selectedDateEmployeeLbl->Name = L"selectedDateEmployeeLbl";
			this->selectedDateEmployeeLbl->Size = System::Drawing::Size(114, 17);
			this->selectedDateEmployeeLbl->TabIndex = 16;
			this->selectedDateEmployeeLbl->Text = L"Выбранная дата:";
			// 
			// selectedDateEmployeeTB
			// 
			this->selectedDateEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectedDateEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectedDateEmployeeTB->Location = System::Drawing::Point(346, 229);
			this->selectedDateEmployeeTB->Name = L"selectedDateEmployeeTB";
			this->selectedDateEmployeeTB->Size = System::Drawing::Size(164, 24);
			this->selectedDateEmployeeTB->TabIndex = 15;
			// 
			// employeeCalendar
			// 
			this->employeeCalendar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->employeeCalendar->Location = System::Drawing::Point(346, 25);
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
			this->label13->Location = System::Drawing::Point(40, 25);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(235, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"---------------------------------------------------------";
			// 
			// achievementsEmployeeTB
			// 
			this->achievementsEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeTB->Location = System::Drawing::Point(42, 126);
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
			this->specialityEmployeeTB->Location = System::Drawing::Point(173, 52);
			this->specialityEmployeeTB->Name = L"specialityEmployeeTB";
			this->specialityEmployeeTB->ReadOnly = true;
			this->specialityEmployeeTB->Size = System::Drawing::Size(100, 24);
			this->specialityEmployeeTB->TabIndex = 9;
			// 
			// nameEmployeeTB
			// 
			this->nameEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nameEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->nameEmployeeTB->Location = System::Drawing::Point(173, -9);
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
			this->orderEmployeeLbl->Location = System::Drawing::Point(42, 256);
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
			this->orderEmployeeIdCB->Location = System::Drawing::Point(173, 250);
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
			this->orderEmployeeCheckCB->Location = System::Drawing::Point(173, 279);
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
			this->employeeDataGrid->Location = System::Drawing::Point(41, -218);
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
			this->achievementsEmployeeLbl->Location = System::Drawing::Point(38, 102);
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
			this->specialityEmployeeLbl->Location = System::Drawing::Point(42, 55);
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
			this->nameEmployeeLbl->Location = System::Drawing::Point(42, -2);
			this->nameEmployeeLbl->Name = L"nameEmployeeLbl";
			this->nameEmployeeLbl->Size = System::Drawing::Size(35, 17);
			this->nameEmployeeLbl->TabIndex = 1;
			this->nameEmployeeLbl->Text = L"Имя";
			// 
			// exitFromEmployeePanelBtn
			// 
			this->exitFromEmployeePanelBtn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->exitFromEmployeePanelBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->exitFromEmployeePanelBtn->Location = System::Drawing::Point(707, 294);
			this->exitFromEmployeePanelBtn->Name = L"exitFromEmployeePanelBtn";
			this->exitFromEmployeePanelBtn->Size = System::Drawing::Size(94, 35);
			this->exitFromEmployeePanelBtn->TabIndex = 0;
			this->exitFromEmployeePanelBtn->Text = L"Выход";
			this->exitFromEmployeePanelBtn->UseVisualStyleBackColor = true;
			this->exitFromEmployeePanelBtn->Click += gcnew System::EventHandler(this, &menuForm::exitFromEmployeePanelBtn_Click);
			// 
			// changeUserPanel
			// 
			this->changeUserPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
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
			this->changeUserPanel->Location = System::Drawing::Point(127, 212);
			this->changeUserPanel->Name = L"changeUserPanel";
			this->changeUserPanel->Size = System::Drawing::Size(432, 544);
			this->changeUserPanel->TabIndex = 22;
			this->changeUserPanel->VisibleChanged += gcnew System::EventHandler(this, &menuForm::changeUserPanel_VisibleChanged);
			// 
			// changeUserPhonenumberTB
			// 
			this->changeUserPhonenumberTB->Location = System::Drawing::Point(271, 202);
			this->changeUserPhonenumberTB->Mask = L"(999) 000-0000";
			this->changeUserPhonenumberTB->Name = L"changeUserPhonenumberTB";
			this->changeUserPhonenumberTB->Size = System::Drawing::Size(121, 20);
			this->changeUserPhonenumberTB->TabIndex = 62;
			// 
			// changeUserDateTB
			// 
			this->changeUserDateTB->Location = System::Drawing::Point(271, 176);
			this->changeUserDateTB->Mask = L"00/00/0000";
			this->changeUserDateTB->Name = L"changeUserDateTB";
			this->changeUserDateTB->Size = System::Drawing::Size(121, 20);
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
			this->changeUserSpecialityPanel->Location = System::Drawing::Point(130, 310);
			this->changeUserSpecialityPanel->Name = L"changeUserSpecialityPanel";
			this->changeUserSpecialityPanel->Size = System::Drawing::Size(287, 192);
			this->changeUserSpecialityPanel->TabIndex = 61;
			this->changeUserSpecialityPanel->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 59);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Личные достижения";
			// 
			// changePersonalAchievementsTB
			// 
			this->changePersonalAchievementsTB->Location = System::Drawing::Point(140, 56);
			this->changePersonalAchievementsTB->Multiline = true;
			this->changePersonalAchievementsTB->Name = L"changePersonalAchievementsTB";
			this->changePersonalAchievementsTB->Size = System::Drawing::Size(122, 75);
			this->changePersonalAchievementsTB->TabIndex = 42;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(87, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Стаж";
			// 
			// changeUserExperienceTB
			// 
			this->changeUserExperienceTB->Location = System::Drawing::Point(140, 30);
			this->changeUserExperienceTB->Name = L"changeUserExperienceTB";
			this->changeUserExperienceTB->Size = System::Drawing::Size(122, 20);
			this->changeUserExperienceTB->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
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
			this->changeUserSpecialityCB->Location = System::Drawing::Point(140, 6);
			this->changeUserSpecialityCB->Name = L"changeUserSpecialityCB";
			this->changeUserSpecialityCB->Size = System::Drawing::Size(122, 21);
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
			this->changeUserFemaleRB->Size = System::Drawing::Size(72, 17);
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
			this->changeUserMaleRB->Size = System::Drawing::Size(71, 17);
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
			this->changeUserIdCB->Size = System::Drawing::Size(76, 21);
			this->changeUserIdCB->TabIndex = 59;
			this->changeUserIdCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::changeUserIdCB_SelectionChangeCommitted);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Location = System::Drawing::Point(34, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 28);
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
			this->changeUserTypeCB->Location = System::Drawing::Point(271, 283);
			this->changeUserTypeCB->Name = L"changeUserTypeCB";
			this->changeUserTypeCB->Size = System::Drawing::Size(121, 21);
			this->changeUserTypeCB->TabIndex = 54;
			this->changeUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &menuForm::changeUserTypeCB_SelectedIndexChanged);
			// 
			// changeUserTypeLbl
			// 
			this->changeUserTypeLbl->AutoSize = true;
			this->changeUserTypeLbl->Location = System::Drawing::Point(162, 286);
			this->changeUserTypeLbl->Name = L"changeUserTypeLbl";
			this->changeUserTypeLbl->Size = System::Drawing::Size(100, 13);
			this->changeUserTypeLbl->TabIndex = 53;
			this->changeUserTypeLbl->Text = L"Тип пользователя";
			// 
			// changeUserFormBtn
			// 
			this->changeUserFormBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changeUserFormBtn->Location = System::Drawing::Point(34, 179);
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
			this->changePassLbl->Location = System::Drawing::Point(213, 260);
			this->changePassLbl->Name = L"changePassLbl";
			this->changePassLbl->Size = System::Drawing::Size(45, 13);
			this->changePassLbl->TabIndex = 50;
			this->changePassLbl->Text = L"Пароль";
			// 
			// changeEmailLbl
			// 
			this->changeEmailLbl->AutoSize = true;
			this->changeEmailLbl->Location = System::Drawing::Point(224, 233);
			this->changeEmailLbl->Name = L"changeEmailLbl";
			this->changeEmailLbl->Size = System::Drawing::Size(34, 13);
			this->changeEmailLbl->TabIndex = 49;
			this->changeEmailLbl->Text = L"e-mail";
			// 
			// changePhonenumberLbl
			// 
			this->changePhonenumberLbl->AutoSize = true;
			this->changePhonenumberLbl->Location = System::Drawing::Point(165, 207);
			this->changePhonenumberLbl->Name = L"changePhonenumberLbl";
			this->changePhonenumberLbl->Size = System::Drawing::Size(93, 13);
			this->changePhonenumberLbl->TabIndex = 48;
			this->changePhonenumberLbl->Text = L"Номер телефона";
			// 
			// changeDateLbl
			// 
			this->changeDateLbl->AutoSize = true;
			this->changeDateLbl->Location = System::Drawing::Point(172, 179);
			this->changeDateLbl->Name = L"changeDateLbl";
			this->changeDateLbl->Size = System::Drawing::Size(86, 13);
			this->changeDateLbl->TabIndex = 47;
			this->changeDateLbl->Text = L"Дата рождения";
			// 
			// changeUserPasswordTB
			// 
			this->changeUserPasswordTB->Location = System::Drawing::Point(272, 257);
			this->changeUserPasswordTB->Name = L"changeUserPasswordTB";
			this->changeUserPasswordTB->Size = System::Drawing::Size(120, 20);
			this->changeUserPasswordTB->TabIndex = 43;
			// 
			// changeUserMailTB
			// 
			this->changeUserMailTB->Location = System::Drawing::Point(271, 230);
			this->changeUserMailTB->Name = L"changeUserMailTB";
			this->changeUserMailTB->Size = System::Drawing::Size(121, 20);
			this->changeUserMailTB->TabIndex = 42;
			// 
			// changeUserNameTB
			// 
			this->changeUserNameTB->Location = System::Drawing::Point(271, 76);
			this->changeUserNameTB->Name = L"changeUserNameTB";
			this->changeUserNameTB->Size = System::Drawing::Size(121, 20);
			this->changeUserNameTB->TabIndex = 37;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->updateReportBtn);
			this->panel8->Controls->Add(this->makeReportRTB);
			this->panel8->Controls->Add(this->makeReportBtn);
			this->panel8->Controls->Add(this->reportParametersCLB);
			this->panel8->Controls->Add(this->reportPeriodCB);
			this->panel8->Controls->Add(this->reportPeriodLbl);
			this->panel8->Controls->Add(this->saveReportBtn);
			this->panel8->Controls->Add(this->financialStatementsLbl);
			this->panel8->Location = System::Drawing::Point(127, 764);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(429, 52);
			this->panel8->TabIndex = 24;
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
			this->makeReportRTB->Size = System::Drawing::Size(385, 91);
			this->makeReportRTB->TabIndex = 23;
			this->makeReportRTB->Text = L"";
			// 
			// makeReportBtn
			// 
			this->makeReportBtn->Location = System::Drawing::Point(159, 156);
			this->makeReportBtn->Name = L"makeReportBtn";
			this->makeReportBtn->Size = System::Drawing::Size(110, 34);
			this->makeReportBtn->TabIndex = 22;
			this->makeReportBtn->Text = L"Составить отчёт";
			this->makeReportBtn->UseVisualStyleBackColor = true;
			// 
			// reportParametersCLB
			// 
			this->reportParametersCLB->FormattingEnabled = true;
			this->reportParametersCLB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Затраты", L"Выручка", L"Прибыль", L"Количество клиентов",
					L"Средний чек"
			});
			this->reportParametersCLB->Location = System::Drawing::Point(253, 58);
			this->reportParametersCLB->Name = L"reportParametersCLB";
			this->reportParametersCLB->Size = System::Drawing::Size(139, 79);
			this->reportParametersCLB->TabIndex = 21;
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
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->loadDeleteServicesBtn);
			this->panel7->Controls->Add(this->updateDeleteServicesBtn);
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->deleteServicesRTB);
			this->panel7->Controls->Add(this->changeServicePriceLbl);
			this->panel7->Controls->Add(this->deleteServices);
			this->panel7->Controls->Add(this->changeServiceNameLbl);
			this->panel7->Controls->Add(this->changeServiceNameTB);
			this->panel7->Controls->Add(this->changeServicePriceTB);
			this->panel7->Controls->Add(this->changeServiceFormBtn);
			this->panel7->Location = System::Drawing::Point(127, 834);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(429, 71);
			this->panel7->TabIndex = 25;
			// 
			// loadDeleteServicesBtn
			// 
			this->loadDeleteServicesBtn->Location = System::Drawing::Point(241, 123);
			this->loadDeleteServicesBtn->Name = L"loadDeleteServicesBtn";
			this->loadDeleteServicesBtn->Size = System::Drawing::Size(40, 40);
			this->loadDeleteServicesBtn->TabIndex = 17;
			this->loadDeleteServicesBtn->Text = L"load";
			this->loadDeleteServicesBtn->UseVisualStyleBackColor = true;
			// 
			// updateDeleteServicesBtn
			// 
			this->updateDeleteServicesBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateDeleteServicesBtn.BackgroundImage")));
			this->updateDeleteServicesBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateDeleteServicesBtn->Location = System::Drawing::Point(333, 123);
			this->updateDeleteServicesBtn->Name = L"updateDeleteServicesBtn";
			this->updateDeleteServicesBtn->Size = System::Drawing::Size(40, 40);
			this->updateDeleteServicesBtn->TabIndex = 16;
			this->updateDeleteServicesBtn->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Location = System::Drawing::Point(287, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 16;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// deleteServicesRTB
			// 
			this->deleteServicesRTB->Location = System::Drawing::Point(23, 178);
			this->deleteServicesRTB->Name = L"deleteServicesRTB";
			this->deleteServicesRTB->Size = System::Drawing::Size(350, 83);
			this->deleteServicesRTB->TabIndex = 12;
			this->deleteServicesRTB->Text = L"";
			// 
			// changeServicePriceLbl
			// 
			this->changeServicePriceLbl->AutoSize = true;
			this->changeServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->changeServicePriceLbl->Location = System::Drawing::Point(24, 117);
			this->changeServicePriceLbl->Name = L"changeServicePriceLbl";
			this->changeServicePriceLbl->Size = System::Drawing::Size(37, 15);
			this->changeServicePriceLbl->TabIndex = 11;
			this->changeServicePriceLbl->Text = L"Цена";
			this->changeServicePriceLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// deleteServices
			// 
			this->deleteServices->AutoSize = true;
			this->deleteServices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteServices->Location = System::Drawing::Point(75, 16);
			this->deleteServices->Name = L"deleteServices";
			this->deleteServices->Size = System::Drawing::Size(310, 42);
			this->deleteServices->TabIndex = 9;
			this->deleteServices->Text = L"Изменить услугу";
			// 
			// changeServiceNameLbl
			// 
			this->changeServiceNameLbl->AutoSize = true;
			this->changeServiceNameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->changeServiceNameLbl->Location = System::Drawing::Point(3, 93);
			this->changeServiceNameLbl->Name = L"changeServiceNameLbl";
			this->changeServiceNameLbl->Size = System::Drawing::Size(64, 15);
			this->changeServiceNameLbl->TabIndex = 10;
			this->changeServiceNameLbl->Text = L"Название";
			// 
			// changeServiceNameTB
			// 
			this->changeServiceNameTB->Location = System::Drawing::Point(69, 90);
			this->changeServiceNameTB->Name = L"changeServiceNameTB";
			this->changeServiceNameTB->Size = System::Drawing::Size(100, 20);
			this->changeServiceNameTB->TabIndex = 6;
			// 
			// changeServicePriceTB
			// 
			this->changeServicePriceTB->Location = System::Drawing::Point(69, 116);
			this->changeServicePriceTB->Name = L"changeServicePriceTB";
			this->changeServicePriceTB->Size = System::Drawing::Size(100, 20);
			this->changeServicePriceTB->TabIndex = 7;
			// 
			// changeServiceFormBtn
			// 
			this->changeServiceFormBtn->Location = System::Drawing::Point(69, 142);
			this->changeServiceFormBtn->Name = L"changeServiceFormBtn";
			this->changeServiceFormBtn->Size = System::Drawing::Size(100, 23);
			this->changeServiceFormBtn->TabIndex = 8;
			this->changeServiceFormBtn->Text = L"Изменить";
			this->changeServiceFormBtn->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->loadServicesBtn);
			this->panel4->Controls->Add(this->updateServicesBtn);
			this->panel4->Controls->Add(this->saveServicesBtn);
			this->panel4->Controls->Add(this->servicesRTB);
			this->panel4->Controls->Add(this->addServicePriceLbl);
			this->panel4->Controls->Add(this->addServices);
			this->panel4->Controls->Add(this->addServiceNameLbl);
			this->panel4->Controls->Add(this->serviceNameTB);
			this->panel4->Controls->Add(this->servicePriceTB);
			this->panel4->Controls->Add(this->addServiceBtn);
			this->panel4->Location = System::Drawing::Point(989, 769);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(432, 105);
			this->panel4->TabIndex = 27;
			// 
			// loadServicesBtn
			// 
			this->loadServicesBtn->Location = System::Drawing::Point(241, 123);
			this->loadServicesBtn->Name = L"loadServicesBtn";
			this->loadServicesBtn->Size = System::Drawing::Size(40, 40);
			this->loadServicesBtn->TabIndex = 17;
			this->loadServicesBtn->Text = L"load";
			this->loadServicesBtn->UseVisualStyleBackColor = true;
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
			// 
			// servicesRTB
			// 
			this->servicesRTB->Location = System::Drawing::Point(23, 178);
			this->servicesRTB->Name = L"servicesRTB";
			this->servicesRTB->Size = System::Drawing::Size(350, 83);
			this->servicesRTB->TabIndex = 12;
			this->servicesRTB->Text = L"";
			// 
			// addServicePriceLbl
			// 
			this->addServicePriceLbl->AutoSize = true;
			this->addServicePriceLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->addServicePriceLbl->Location = System::Drawing::Point(21, 117);
			this->addServicePriceLbl->Name = L"addServicePriceLbl";
			this->addServicePriceLbl->Size = System::Drawing::Size(34, 17);
			this->addServicePriceLbl->TabIndex = 11;
			this->addServicePriceLbl->Text = L"Цена";
			this->addServicePriceLbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// addServices
			// 
			this->addServices->AutoSize = true;
			this->addServices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addServices->Location = System::Drawing::Point(81, 27);
			this->addServices->Name = L"addServices";
			this->addServices->Size = System::Drawing::Size(289, 39);
			this->addServices->TabIndex = 9;
			this->addServices->Text = L"Добавить услугу";
			// 
			// addServiceNameLbl
			// 
			this->addServiceNameLbl->AutoSize = true;
			this->addServiceNameLbl->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.25F));
			this->addServiceNameLbl->Location = System::Drawing::Point(13, 89);
			this->addServiceNameLbl->Name = L"addServiceNameLbl";
			this->addServiceNameLbl->Size = System::Drawing::Size(57, 17);
			this->addServiceNameLbl->TabIndex = 10;
			this->addServiceNameLbl->Text = L"Название";
			// 
			// serviceNameTB
			// 
			this->serviceNameTB->Location = System::Drawing::Point(72, 89);
			this->serviceNameTB->Name = L"serviceNameTB";
			this->serviceNameTB->Size = System::Drawing::Size(100, 20);
			this->serviceNameTB->TabIndex = 6;
			// 
			// servicePriceTB
			// 
			this->servicePriceTB->Location = System::Drawing::Point(72, 114);
			this->servicePriceTB->Name = L"servicePriceTB";
			this->servicePriceTB->Size = System::Drawing::Size(100, 20);
			this->servicePriceTB->TabIndex = 7;
			// 
			// addServiceBtn
			// 
			this->addServiceBtn->Location = System::Drawing::Point(59, 140);
			this->addServiceBtn->Name = L"addServiceBtn";
			this->addServiceBtn->Size = System::Drawing::Size(100, 23);
			this->addServiceBtn->TabIndex = 8;
			this->addServiceBtn->Text = L"Добавить";
			this->addServiceBtn->UseVisualStyleBackColor = true;
			// 
			// addUserMaleRB
			// 
			this->addUserMaleRB->AutoSize = true;
			this->addUserMaleRB->Location = System::Drawing::Point(69, 13);
			this->addUserMaleRB->Name = L"addUserMaleRB";
			this->addUserMaleRB->Size = System::Drawing::Size(71, 17);
			this->addUserMaleRB->TabIndex = 39;
			this->addUserMaleRB->TabStop = true;
			this->addUserMaleRB->Text = L"Мужской";
			this->addUserMaleRB->UseVisualStyleBackColor = true;
			// 
			// addUserFemaleRB
			// 
			this->addUserFemaleRB->AutoSize = true;
			this->addUserFemaleRB->Location = System::Drawing::Point(69, 33);
			this->addUserFemaleRB->Name = L"addUserFemaleRB";
			this->addUserFemaleRB->Size = System::Drawing::Size(72, 17);
			this->addUserFemaleRB->TabIndex = 40;
			this->addUserFemaleRB->TabStop = true;
			this->addUserFemaleRB->Text = L"Женский";
			this->addUserFemaleRB->UseVisualStyleBackColor = true;
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
			// addUserNameTB
			// 
			this->addUserNameTB->Location = System::Drawing::Point(142, 48);
			this->addUserNameTB->Name = L"addUserNameTB";
			this->addUserNameTB->Size = System::Drawing::Size(121, 20);
			this->addUserNameTB->TabIndex = 19;
			// 
			// addUserMailTB
			// 
			this->addUserMailTB->Location = System::Drawing::Point(141, 233);
			this->addUserMailTB->Name = L"addUserMailTB";
			this->addUserMailTB->Size = System::Drawing::Size(121, 20);
			this->addUserMailTB->TabIndex = 24;
			// 
			// addUserPasswordTB
			// 
			this->addUserPasswordTB->Location = System::Drawing::Point(141, 260);
			this->addUserPasswordTB->Name = L"addUserPasswordTB";
			this->addUserPasswordTB->Size = System::Drawing::Size(121, 20);
			this->addUserPasswordTB->TabIndex = 25;
			// 
			// addDateLbl
			// 
			this->addDateLbl->AutoSize = true;
			this->addDateLbl->Location = System::Drawing::Point(39, 182);
			this->addDateLbl->Name = L"addDateLbl";
			this->addDateLbl->Size = System::Drawing::Size(86, 13);
			this->addDateLbl->TabIndex = 29;
			this->addDateLbl->Text = L"Дата рождения";
			// 
			// addPhonenumberLbl
			// 
			this->addPhonenumberLbl->AutoSize = true;
			this->addPhonenumberLbl->Location = System::Drawing::Point(32, 209);
			this->addPhonenumberLbl->Name = L"addPhonenumberLbl";
			this->addPhonenumberLbl->Size = System::Drawing::Size(93, 13);
			this->addPhonenumberLbl->TabIndex = 30;
			this->addPhonenumberLbl->Text = L"Номер телефона";
			// 
			// addEmailLbl
			// 
			this->addEmailLbl->AutoSize = true;
			this->addEmailLbl->Location = System::Drawing::Point(88, 236);
			this->addEmailLbl->Name = L"addEmailLbl";
			this->addEmailLbl->Size = System::Drawing::Size(34, 13);
			this->addEmailLbl->TabIndex = 31;
			this->addEmailLbl->Text = L"e-mail";
			// 
			// addPassLbl
			// 
			this->addPassLbl->AutoSize = true;
			this->addPassLbl->Location = System::Drawing::Point(80, 263);
			this->addPassLbl->Name = L"addPassLbl";
			this->addPassLbl->Size = System::Drawing::Size(45, 13);
			this->addPassLbl->TabIndex = 32;
			this->addPassLbl->Text = L"Пароль";
			// 
			// addUserFormBtn
			// 
			this->addUserFormBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addUserFormBtn->Location = System::Drawing::Point(141, 330);
			this->addUserFormBtn->Name = L"addUserFormBtn";
			this->addUserFormBtn->Size = System::Drawing::Size(122, 23);
			this->addUserFormBtn->TabIndex = 34;
			this->addUserFormBtn->Text = L"Добавить";
			this->addUserFormBtn->UseVisualStyleBackColor = true;
			this->addUserFormBtn->Click += gcnew System::EventHandler(this, &menuForm::addUserFormBtn_Click);
			// 
			// addUserTypeLbl
			// 
			this->addUserTypeLbl->AutoSize = true;
			this->addUserTypeLbl->Location = System::Drawing::Point(25, 152);
			this->addUserTypeLbl->Name = L"addUserTypeLbl";
			this->addUserTypeLbl->Size = System::Drawing::Size(100, 13);
			this->addUserTypeLbl->TabIndex = 35;
			this->addUserTypeLbl->Text = L"Тип пользователя";
			// 
			// addUserTypeCB
			// 
			this->addUserTypeCB->FormattingEnabled = true;
			this->addUserTypeCB->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ADMIN", L"EMPLOYEE", L"CLIENT" });
			this->addUserTypeCB->Location = System::Drawing::Point(141, 149);
			this->addUserTypeCB->Name = L"addUserTypeCB";
			this->addUserTypeCB->Size = System::Drawing::Size(121, 21);
			this->addUserTypeCB->TabIndex = 36;
			this->addUserTypeCB->SelectedIndexChanged += gcnew System::EventHandler(this, &menuForm::addUserTypeCB_SelectedIndexChanged);
			this->addUserTypeCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &menuForm::addUserTypeCB_SelectionChangeCommitted);
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
			// specialityPanel
			// 
			this->specialityPanel->Controls->Add(this->addStatusLbl);
			this->specialityPanel->Controls->Add(this->addUserSpecialityCB);
			this->specialityPanel->Location = System::Drawing::Point(42, 286);
			this->specialityPanel->Name = L"specialityPanel";
			this->specialityPanel->Size = System::Drawing::Size(242, 38);
			this->specialityPanel->TabIndex = 38;
			this->specialityPanel->Visible = false;
			// 
			// addStatusLbl
			// 
			this->addStatusLbl->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->addStatusLbl->AutoSize = true;
			this->addStatusLbl->Location = System::Drawing::Point(18, 13);
			this->addStatusLbl->Name = L"addStatusLbl";
			this->addStatusLbl->Size = System::Drawing::Size(65, 13);
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
			this->addUserSpecialityCB->Size = System::Drawing::Size(122, 21);
			this->addUserSpecialityCB->TabIndex = 26;
			// 
			// addUserPanel
			// 
			this->addUserPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addUserPanel->Controls->Add(this->addUserPhonenumberTB);
			this->addUserPanel->Controls->Add(this->addUserDateTB);
			this->addUserPanel->Controls->Add(this->addUserSexGP);
			this->addUserPanel->Controls->Add(this->specialityPanel);
			this->addUserPanel->Controls->Add(this->addUser);
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
			this->addUserPanel->Location = System::Drawing::Point(768, 12);
			this->addUserPanel->Name = L"addUserPanel";
			this->addUserPanel->Size = System::Drawing::Size(366, 433);
			this->addUserPanel->TabIndex = 26;
			// 
			// addUserPhonenumberTB
			// 
			this->addUserPhonenumberTB->Location = System::Drawing::Point(139, 207);
			this->addUserPhonenumberTB->Mask = L"(999) 000-0000";
			this->addUserPhonenumberTB->Name = L"addUserPhonenumberTB";
			this->addUserPhonenumberTB->Size = System::Drawing::Size(124, 20);
			this->addUserPhonenumberTB->TabIndex = 28;
			// 
			// addUserDateTB
			// 
			this->addUserDateTB->Location = System::Drawing::Point(139, 180);
			this->addUserDateTB->Mask = L"00/00/0000";
			this->addUserDateTB->Name = L"addUserDateTB";
			this->addUserDateTB->Size = System::Drawing::Size(124, 20);
			this->addUserDateTB->TabIndex = 28;
			this->addUserDateTB->ValidatingType = System::DateTime::typeid;
			// 
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->addUserPanel);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->changeUserPanel);
			this->Controls->Add(this->employeePanel);
			this->Controls->Add(this->clientPanel);
			this->Controls->Add(this->panel1);
			this->Name = L"menuForm";
			this->Text = L"menuForm";
			this->Load += gcnew System::EventHandler(this, &menuForm::menuForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &menuForm::menuForm_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->EndInit();
			this->clientPanel->ResumeLayout(false);
			this->clientPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->EndInit();
			this->employeePanel->ResumeLayout(false);
			this->employeePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->EndInit();
			this->changeUserPanel->ResumeLayout(false);
			this->changeUserPanel->PerformLayout();
			this->changeUserSpecialityPanel->ResumeLayout(false);
			this->changeUserSpecialityPanel->PerformLayout();
			this->changeUserSexGP->ResumeLayout(false);
			this->changeUserSexGP->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->addUserSexGP->ResumeLayout(false);
			this->addUserSexGP->PerformLayout();
			this->specialityPanel->ResumeLayout(false);
			this->specialityPanel->PerformLayout();
			this->addUserPanel->ResumeLayout(false);
			this->addUserPanel->PerformLayout();
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
};
}
 
#endif MENUFORM_H