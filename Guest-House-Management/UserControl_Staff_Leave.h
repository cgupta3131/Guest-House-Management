#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Leave
	/// </summary>
	public ref class UserControl_Staff_Leave : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Leave(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Staff_Leave()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(134, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(278, 103);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(219, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(137, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"From";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(278, 161);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(219, 22);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"To";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(278, 212);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(219, 22);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// UserControl_Staff_Leave
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Staff_Leave";
			this->Size = System::Drawing::Size(719, 389);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Leave::UserControl_Staff_Leave_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Staff_Leave_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
