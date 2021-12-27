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
	/// —водка дл€ menuForm
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
		/// ќсвободить все используемые ресурсы.
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

	private: System::Windows::Forms::RichTextBox^ outputRTB;
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





		   /// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuForm::typeid));
			this->outputRTB = (gcnew System::Windows::Forms::RichTextBox());
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
			this->showReportBtn = (gcnew System::Windows::Forms::Button());
			this->changeServiceBtn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->delOrderBtn = (gcnew System::Windows::Forms::Button());
			this->changeUserBtn = (gcnew System::Windows::Forms::Button());
			this->addUserBtn = (gcnew System::Windows::Forms::Button());
			this->AdminLbl = (gcnew System::Windows::Forms::Label());
			this->selectedRow = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->userID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->userCurrentStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// outputRTB
			// 
			this->outputRTB->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 78, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputRTB->Location = System::Drawing::Point(12, 12);
			this->outputRTB->Name = L"outputRTB";
			this->outputRTB->Size = System::Drawing::Size(658, 115);
			this->outputRTB->TabIndex = 0;
			this->outputRTB->Text = L"ee";
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
			this->panel1->Location = System::Drawing::Point(23, 157);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(763, 708);
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
			// menuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->outputRTB);
			this->Name = L"menuForm";
			this->Text = L"menuForm";
			this->Load += gcnew System::EventHandler(this, &menuForm::menuForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ordersDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->servicesDataGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersDataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menuForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void updateAvailableTimes(System::Object^ sender, System::EventArgs^ e);
private: System::Void addUserBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
 
#endif MENUFORM_H