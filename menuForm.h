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
	private: System::Windows::Forms::Button^ showReportBtn;
	private: System::Windows::Forms::Button^ changeServiceBtn;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ delOrderBtn;
	private: System::Windows::Forms::Button^ changeUserBtn;
	private: System::Windows::Forms::Button^ addUserBtn;
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
	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ selectDataLbl;
private: System::Windows::Forms::Label^ selectedDateEmployeeLbl;
private: System::Windows::Forms::TextBox^ selectedDateEmployeeTB;
private: System::Windows::Forms::MonthCalendar^ employeeCalendar;
private: System::Windows::Forms::Button^ updateOrdersGridBtn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderCurStatus;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
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
			this->achievementsEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->specialityEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->nameEmployeeLbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->orderCurStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			acceptOrderBtn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
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
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->updateBtn);
			this->panel1->Controls->Add(this->ordersDataGrid);
			this->panel1->Controls->Add(this->servicesDataGrid);
			this->panel1->Controls->Add(this->usersDataGrid);
			this->panel1->Controls->Add(this->showReportBtn);
			this->panel1->Controls->Add(this->changeServiceBtn);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->delOrderBtn);
			this->panel1->Controls->Add(this->changeUserBtn);
			this->panel1->Controls->Add(this->addUserBtn);
			this->panel1->Controls->Add(this->AdminLbl);
			this->panel1->Location = System::Drawing::Point(1282, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 78);
			this->panel1->TabIndex = 1;
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
			// showReportBtn
			// 
			this->showReportBtn->Location = System::Drawing::Point(33, 231);
			this->showReportBtn->Name = L"showReportBtn";
			this->showReportBtn->Size = System::Drawing::Size(136, 23);
			this->showReportBtn->TabIndex = 6;
			this->showReportBtn->Text = L"collect a report";
			this->showReportBtn->UseVisualStyleBackColor = true;
			// 
			// changeServiceBtn
			// 
			this->changeServiceBtn->Location = System::Drawing::Point(33, 202);
			this->changeServiceBtn->Name = L"changeServiceBtn";
			this->changeServiceBtn->Size = System::Drawing::Size(136, 23);
			this->changeServiceBtn->TabIndex = 5;
			this->changeServiceBtn->Text = L"change service";
			this->changeServiceBtn->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(33, 173);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"add service";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// delOrderBtn
			// 
			this->delOrderBtn->Location = System::Drawing::Point(33, 144);
			this->delOrderBtn->Name = L"delOrderBtn";
			this->delOrderBtn->Size = System::Drawing::Size(136, 23);
			this->delOrderBtn->TabIndex = 3;
			this->delOrderBtn->Text = L"delete Order";
			this->delOrderBtn->UseVisualStyleBackColor = true;
			// 
			// changeUserBtn
			// 
			this->changeUserBtn->Location = System::Drawing::Point(33, 115);
			this->changeUserBtn->Name = L"changeUserBtn";
			this->changeUserBtn->Size = System::Drawing::Size(136, 23);
			this->changeUserBtn->TabIndex = 2;
			this->changeUserBtn->Text = L"Change user";
			this->changeUserBtn->UseVisualStyleBackColor = true;
			// 
			// addUserBtn
			// 
			this->addUserBtn->Location = System::Drawing::Point(33, 86);
			this->addUserBtn->Name = L"addUserBtn";
			this->addUserBtn->Size = System::Drawing::Size(136, 23);
			this->addUserBtn->TabIndex = 1;
			this->addUserBtn->Text = L"Add user";
			this->addUserBtn->UseVisualStyleBackColor = true;
			this->addUserBtn->Click += gcnew System::EventHandler(this, &menuForm::addUserBtn_Click);
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
			this->clientPanel->Location = System::Drawing::Point(1055, 214);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(766, 578);
			this->clientPanel->TabIndex = 17;
			this->clientPanel->Visible = false;
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
			this->timeStatusLbl->Size = System::Drawing::Size(50, 24);
			this->timeStatusLbl->TabIndex = 31;
			this->timeStatusLbl->Text = L"error";
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
			this->employeePanel->Controls->Add(this->button1);
			this->employeePanel->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12.25F, System::Drawing::FontStyle::Bold));
			this->employeePanel->Location = System::Drawing::Point(36, 200);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(841, 578);
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
			this->label6->Location = System::Drawing::Point(38, 456);
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
			this->label5->Location = System::Drawing::Point(38, 311);
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
			this->selectDataLbl->Location = System::Drawing::Point(343, 221);
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
			this->selectedDateEmployeeLbl->Location = System::Drawing::Point(343, 429);
			this->selectedDateEmployeeLbl->Name = L"selectedDateEmployeeLbl";
			this->selectedDateEmployeeLbl->Size = System::Drawing::Size(114, 17);
			this->selectedDateEmployeeLbl->TabIndex = 16;
			this->selectedDateEmployeeLbl->Text = L"Выбранная дата:";
			// 
			// selectedDateEmployeeTB
			// 
			this->selectedDateEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectedDateEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectedDateEmployeeTB->Location = System::Drawing::Point(346, 456);
			this->selectedDateEmployeeTB->Name = L"selectedDateEmployeeTB";
			this->selectedDateEmployeeTB->Size = System::Drawing::Size(164, 24);
			this->selectedDateEmployeeTB->TabIndex = 15;
			// 
			// employeeCalendar
			// 
			this->employeeCalendar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->employeeCalendar->Location = System::Drawing::Point(346, 252);
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
			this->label13->Location = System::Drawing::Point(40, 252);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(235, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"---------------------------------------------------------";
			// 
			// achievementsEmployeeTB
			// 
			this->achievementsEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeTB->Location = System::Drawing::Point(42, 353);
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
			this->specialityEmployeeTB->Location = System::Drawing::Point(173, 279);
			this->specialityEmployeeTB->Name = L"specialityEmployeeTB";
			this->specialityEmployeeTB->ReadOnly = true;
			this->specialityEmployeeTB->Size = System::Drawing::Size(100, 24);
			this->specialityEmployeeTB->TabIndex = 9;
			// 
			// nameEmployeeTB
			// 
			this->nameEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nameEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->nameEmployeeTB->Location = System::Drawing::Point(173, 218);
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
			this->orderEmployeeLbl->Location = System::Drawing::Point(42, 483);
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
			this->orderEmployeeIdCB->Location = System::Drawing::Point(173, 477);
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
			this->orderEmployeeCheckCB->Location = System::Drawing::Point(173, 506);
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
			this->employeeDataGrid->Location = System::Drawing::Point(41, 9);
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
			// achievementsEmployeeLbl
			// 
			this->achievementsEmployeeLbl->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeLbl->AutoSize = true;
			this->achievementsEmployeeLbl->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeLbl->Location = System::Drawing::Point(38, 329);
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
			this->specialityEmployeeLbl->Location = System::Drawing::Point(42, 282);
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
			this->nameEmployeeLbl->Location = System::Drawing::Point(42, 225);
			this->nameEmployeeLbl->Name = L"nameEmployeeLbl";
			this->nameEmployeeLbl->Size = System::Drawing::Size(35, 17);
			this->nameEmployeeLbl->TabIndex = 1;
			this->nameEmployeeLbl->Text = L"Имя";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(707, 521);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// orderCurStatus
			// 
			this->orderCurStatus->HeaderText = L"Статус";
			this->orderCurStatus->Name = L"orderCurStatus";
			// 
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
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
};
}
 
#endif MENUFORM_H