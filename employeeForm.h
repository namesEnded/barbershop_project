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
	/// —водка дл€ employeeForm
	/// </summary>
	public ref class employeeForm : public System::Windows::Forms::Form
	{
	public:
		employeeForm(int ID, int userStatus)
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
		/// ќсвободить все используемые ресурсы.
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
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"employeeForm";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}
#endif EMPLOYEEFORM_H