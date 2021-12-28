#ifndef EMPLOYEEFORM_H
#define EMPLOYEEFORM_H
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
	/// Сводка для employeeForm
	/// </summary>
	public ref class employeeForm : public System::Windows::Forms::Form
	{
	public:
		employeeForm(int ID, int userStatus)
		{
			InitializeComponent();
			this->ID = ID;
			this->userStatus = userStatus;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~employeeForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int ID;
		int userStatus;
	private: System::Windows::Forms::Panel^ employeePanel;
	private: System::Windows::Forms::Button^ updateOrdersGridBtn;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ selectDataLbl;
	private: System::Windows::Forms::Label^ selectedDateEmployeeLbl;
	private: System::Windows::Forms::TextBox^ selectedDateEmployeeTB;
	private: System::Windows::Forms::MonthCalendar^ employeeCalendar;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ orderCurStatus;
	private: System::Windows::Forms::Label^ achievementsEmployeeLbl;
	private: System::Windows::Forms::Label^ specialityEmployeeLbl;
	private: System::Windows::Forms::Label^ nameEmployeeLbl;
	private: System::Windows::Forms::Button^ exitFromEmployeePanelBtn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(employeeForm::typeid));
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
			this->employeePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->BeginInit();
			this->SuspendLayout();
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
			this->employeePanel->Location = System::Drawing::Point(1, 0);
			this->employeePanel->Name = L"employeePanel";
			this->employeePanel->Size = System::Drawing::Size(913, 712);
			this->employeePanel->TabIndex = 19;
			// 
			// updateOrdersGridBtn
			// 
			this->updateOrdersGridBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateOrdersGridBtn.BackgroundImage")));
			this->updateOrdersGridBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->updateOrdersGridBtn->Location = System::Drawing::Point(791, 296);
			this->updateOrdersGridBtn->Name = L"updateOrdersGridBtn";
			this->updateOrdersGridBtn->Size = System::Drawing::Size(40, 40);
			this->updateOrdersGridBtn->TabIndex = 28;
			this->updateOrdersGridBtn->UseVisualStyleBackColor = true;
			this->updateOrdersGridBtn->Click += gcnew System::EventHandler(this, &employeeForm::updateOrdersGridBtn_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(68, 538);
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
			this->label5->Location = System::Drawing::Point(68, 393);
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
			this->selectDataLbl->Location = System::Drawing::Point(373, 303);
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
			this->selectedDateEmployeeLbl->Location = System::Drawing::Point(373, 511);
			this->selectedDateEmployeeLbl->Name = L"selectedDateEmployeeLbl";
			this->selectedDateEmployeeLbl->Size = System::Drawing::Size(114, 17);
			this->selectedDateEmployeeLbl->TabIndex = 16;
			this->selectedDateEmployeeLbl->Text = L"Выбранная дата:";
			// 
			// selectedDateEmployeeTB
			// 
			this->selectedDateEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->selectedDateEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->selectedDateEmployeeTB->Location = System::Drawing::Point(376, 538);
			this->selectedDateEmployeeTB->Name = L"selectedDateEmployeeTB";
			this->selectedDateEmployeeTB->Size = System::Drawing::Size(164, 24);
			this->selectedDateEmployeeTB->TabIndex = 15;
			// 
			// employeeCalendar
			// 
			this->employeeCalendar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->employeeCalendar->Location = System::Drawing::Point(376, 334);
			this->employeeCalendar->MaxSelectionCount = 1;
			this->employeeCalendar->Name = L"employeeCalendar";
			this->employeeCalendar->TabIndex = 2;
			this->employeeCalendar->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &employeeForm::employeeCalendar_DateChanged);
			this->employeeCalendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &employeeForm::employeeCalendar_DateSelected);
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(70, 334);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(235, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"---------------------------------------------------------";
			// 
			// achievementsEmployeeTB
			// 
			this->achievementsEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->achievementsEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->achievementsEmployeeTB->Location = System::Drawing::Point(72, 435);
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
			this->specialityEmployeeTB->Location = System::Drawing::Point(203, 361);
			this->specialityEmployeeTB->Name = L"specialityEmployeeTB";
			this->specialityEmployeeTB->ReadOnly = true;
			this->specialityEmployeeTB->Size = System::Drawing::Size(100, 24);
			this->specialityEmployeeTB->TabIndex = 9;
			// 
			// nameEmployeeTB
			// 
			this->nameEmployeeTB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nameEmployeeTB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->nameEmployeeTB->Location = System::Drawing::Point(203, 300);
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
			this->orderEmployeeLbl->Location = System::Drawing::Point(72, 565);
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
			this->orderEmployeeIdCB->Location = System::Drawing::Point(203, 559);
			this->orderEmployeeIdCB->Name = L"orderEmployeeIdCB";
			this->orderEmployeeIdCB->Size = System::Drawing::Size(100, 23);
			this->orderEmployeeIdCB->TabIndex = 6;
			this->orderEmployeeIdCB->SelectionChangeCommitted += gcnew System::EventHandler(this, &employeeForm::orderEmployeeIdCB_SelectionChangeCommitted);
			// 
			// orderEmployeeCheckCB
			// 
			this->orderEmployeeCheckCB->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->orderEmployeeCheckCB->AutoSize = true;
			this->orderEmployeeCheckCB->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->orderEmployeeCheckCB->Location = System::Drawing::Point(203, 588);
			this->orderEmployeeCheckCB->Name = L"orderEmployeeCheckCB";
			this->orderEmployeeCheckCB->Size = System::Drawing::Size(91, 21);
			this->orderEmployeeCheckCB->TabIndex = 5;
			this->orderEmployeeCheckCB->Text = L"Выполнен";
			this->orderEmployeeCheckCB->UseVisualStyleBackColor = true;
			this->orderEmployeeCheckCB->CheckedChanged += gcnew System::EventHandler(this, &employeeForm::orderEmployeeCheckCB_CheckedChanged);
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
			this->employeeDataGrid->Location = System::Drawing::Point(71, 48);
			this->employeeDataGrid->Name = L"employeeDataGrid";
			this->employeeDataGrid->Size = System::Drawing::Size(760, 238);
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
			this->achievementsEmployeeLbl->Location = System::Drawing::Point(68, 411);
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
			this->specialityEmployeeLbl->Location = System::Drawing::Point(72, 364);
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
			this->nameEmployeeLbl->Location = System::Drawing::Point(72, 307);
			this->nameEmployeeLbl->Name = L"nameEmployeeLbl";
			this->nameEmployeeLbl->Size = System::Drawing::Size(35, 17);
			this->nameEmployeeLbl->TabIndex = 1;
			this->nameEmployeeLbl->Text = L"Имя";
			// 
			// exitFromEmployeePanelBtn
			// 
			this->exitFromEmployeePanelBtn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->exitFromEmployeePanelBtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 9.25F, System::Drawing::FontStyle::Bold));
			this->exitFromEmployeePanelBtn->Location = System::Drawing::Point(737, 607);
			this->exitFromEmployeePanelBtn->Name = L"exitFromEmployeePanelBtn";
			this->exitFromEmployeePanelBtn->Size = System::Drawing::Size(94, 35);
			this->exitFromEmployeePanelBtn->TabIndex = 0;
			this->exitFromEmployeePanelBtn->Text = L"Выход";
			this->exitFromEmployeePanelBtn->UseVisualStyleBackColor = true;
			this->exitFromEmployeePanelBtn->Click += gcnew System::EventHandler(this, &employeeForm::exitFromEmployeePanelBtn_Click);
			// 
			// employeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 712);
			this->Controls->Add(this->employeePanel);
			this->Name = L"employeeForm";
			this->Text = L"Работник";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &employeeForm::employeeForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &employeeForm::employeeForm_Load);
			this->employeePanel->ResumeLayout(false);
			this->employeePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void employeeForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void orderEmployeeIdCB_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e);
	private: System::Void employeeCalendar_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void employeeCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e);
	private: System::Void orderEmployeeCheckCB_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateOrdersGridBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void exitFromEmployeePanelBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateTimetable(MonthCalendar^ employeeCalendar, TextBox^ selectedDateEmployeeTB);
	private: System::Void updateOrdersGrid(std::list<ServiceOrder*> orders);
	private: System::Void employeeForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
#endif EMPLOYEEFORM_H