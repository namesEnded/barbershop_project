#ifndef CLIENTFORM_H
#define CLIENTFORM_H
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
	/// Сводка для clientForm
	/// </summary>
	public ref class clientForm : public System::Windows::Forms::Form
	{
	public:
		clientForm(int ID, int userStatus)
		{
			InitializeComponent();
			this->ID = ID;
			this->userStatus = userStatus;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~clientForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int ID;
		int userStatus;
	private: System::Windows::Forms::Panel^ clientPanel;
	private: System::Windows::Forms::Label^ ClientNameLbl;
	private: System::Windows::Forms::Label^ ordersList;
	private: System::Windows::Forms::Button^ exitFromClientPanel;
	private: System::Windows::Forms::Label^ timeStatusLbl;
	private: System::Windows::Forms::ListBox^ availableTimeLB;
	private: System::Windows::Forms::Button^ updateServiceOrderBtn;
	private: System::Windows::Forms::MonthCalendar^ Calendar;
	private: System::Windows::Forms::TextBox^ costTB;
	private: System::Windows::Forms::ComboBox^ employeeIDCB;
	private: System::Windows::Forms::ComboBox^ serviceIDCB;
	private: System::Windows::Forms::Label^ selectDateLbl;
	private: System::Windows::Forms::Label^ orderCostLbl;
	private: System::Windows::Forms::DataGridView^ orderInitGrid;







	private: System::Windows::Forms::Label^ employeeIDFromOrderLbl;
	private: System::Windows::Forms::Label^ serviceIDfromOrderLbl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrderID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ serviceID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employeeOerderID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clientIDOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sssorderStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ordersDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderTime;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(clientForm::typeid));
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
			this->OrderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serviceID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeOerderID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clientIDOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sssorderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ordersDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->orderTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employeeIDFromOrderLbl = (gcnew System::Windows::Forms::Label());
			this->serviceIDfromOrderLbl = (gcnew System::Windows::Forms::Label());
			acceptOrderBtn = (gcnew System::Windows::Forms::Button());
			this->clientPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->BeginInit();
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
			acceptOrderBtn->Click += gcnew System::EventHandler(this, &clientForm::acceptOrderBtn_Click);
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
			this->clientPanel->Location = System::Drawing::Point(-31, -9);
			this->clientPanel->Name = L"clientPanel";
			this->clientPanel->Size = System::Drawing::Size(930, 751);
			this->clientPanel->TabIndex = 18;
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
			this->exitFromClientPanel->Click += gcnew System::EventHandler(this, &clientForm::exitFromClientPanel_Click);
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
			this->updateServiceOrderBtn->Click += gcnew System::EventHandler(this, &clientForm::updateServiceOrderBtn_Click);
			// 
			// Calendar
			// 
			this->Calendar->Location = System::Drawing::Point(404, 259);
			this->Calendar->MaxSelectionCount = 1;
			this->Calendar->Name = L"Calendar";
			this->Calendar->TabIndex = 2;
			this->Calendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &clientForm::Calendar_DateSelected);
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
			this->serviceIDCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &clientForm::serviceIDCB_SelectionChangeCommitted);
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
			this->orderInitGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->OrderID,
					this->serviceID, this->employeeOerderID, this->clientIDOrder, this->cost, this->sssorderStatus, this->ordersDate, this->orderTime
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
			// OrderID
			// 
			this->OrderID->HeaderText = L"ID";
			this->OrderID->Name = L"OrderID";
			this->OrderID->ReadOnly = true;
			this->OrderID->Width = 46;
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
			// clientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(898, 732);
			this->Controls->Add(this->clientPanel);
			this->Name = L"clientForm";
			this->Text = L"Клиент";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &clientForm::clientForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &clientForm::clientForm_Load);
			this->clientPanel->ResumeLayout(false);
			this->clientPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderInitGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void acceptOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitFromClientPanel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateServiceOrderBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void serviceIDCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void clientForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateAvailableTimes();
	private: System::Int32 findID(int Index, bool isEmployee);
	private: System::Void clientForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
#endif CLIENTFORM_H