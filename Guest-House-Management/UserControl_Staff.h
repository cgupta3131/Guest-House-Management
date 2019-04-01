#pragma once
#using <System.dll>
#using <System.data.dll>
#include "UserControl_Staff_Register.h"
#include "UserControl_Staff_Record.h"
#include "UserControl_Staff_Planner.h"
#include "UserControl_Staff_Edit.h"
#include "UserControl_Staff_Leave.h"

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff
	/// </summary>
	public ref class UserControl_Staff : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff(void)
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
		~UserControl_Staff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Register_Button;
	protected: 
	private: System::Windows::Forms::Button^  Leave_Button;

	private: System::Windows::Forms::Button^  Planner_Button;
	private: System::Windows::Forms::Panel^  Staff_Panel;
	private: System::Windows::Forms::Button^  button1;


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
			this->Register_Button = (gcnew System::Windows::Forms::Button());
			this->Leave_Button = (gcnew System::Windows::Forms::Button());
			this->Planner_Button = (gcnew System::Windows::Forms::Button());
			this->Staff_Panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Register_Button
			// 
			this->Register_Button->Location = System::Drawing::Point(60, 82);
			this->Register_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Register_Button->Name = L"Register_Button";
			this->Register_Button->Size = System::Drawing::Size(120, 57);
			this->Register_Button->TabIndex = 0;
			this->Register_Button->Text = L"Register";
			this->Register_Button->UseVisualStyleBackColor = true;
			this->Register_Button->Click += gcnew System::EventHandler(this, &UserControl_Staff::Register_Button_Click);
			// 
			// Leave_Button
			// 
			this->Leave_Button->Location = System::Drawing::Point(237, 82);
			this->Leave_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Leave_Button->Name = L"Leave_Button";
			this->Leave_Button->Size = System::Drawing::Size(112, 57);
			this->Leave_Button->TabIndex = 1;
			this->Leave_Button->Text = L"Leave Request";
			this->Leave_Button->UseVisualStyleBackColor = true;
			this->Leave_Button->Click += gcnew System::EventHandler(this, &UserControl_Staff::Leave_Button_Click);
			// 
			// Planner_Button
			// 
			this->Planner_Button->Location = System::Drawing::Point(705, 82);
			this->Planner_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Planner_Button->Name = L"Planner_Button";
			this->Planner_Button->Size = System::Drawing::Size(117, 57);
			this->Planner_Button->TabIndex = 3;
			this->Planner_Button->Text = L"Planner";
			this->Planner_Button->UseVisualStyleBackColor = true;
			this->Planner_Button->Click += gcnew System::EventHandler(this, &UserControl_Staff::Planner_Button_Click);
			// 
			// Staff_Panel
			// 
			this->Staff_Panel->Location = System::Drawing::Point(60, 236);
			this->Staff_Panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Staff_Panel->Name = L"Staff_Panel";
			this->Staff_Panel->Size = System::Drawing::Size(719, 389);
			this->Staff_Panel->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(555, 82);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 57);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Edit Records";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Staff::button1_Click);
			// 
			// UserControl_Staff
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Staff_Panel);
			this->Controls->Add(this->Planner_Button);
			this->Controls->Add(this->Leave_Button);
			this->Controls->Add(this->Register_Button);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UserControl_Staff";
			this->Size = System::Drawing::Size(909, 681);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff::UserControl_Staff_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserControl_Staff_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Register_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				Staff_Panel->Controls->Clear();
				//Staff_Panel->Controls->Add(gcnew UserControl_Staff_Register(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Leave_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				Staff_Panel->Controls->Clear();
				//Staff_Panel->Controls->Add(gcnew UserControl_Staff_Leave);
		 }
private: System::Void Record_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				Staff_Panel->Controls->Clear();
				//Staff_Panel->Controls->Add(gcnew UserControl_Staff_Record);
		 }
private: System::Void Planner_Button_Click(System::Object^  sender, System::EventArgs^  e) {

				Staff_Panel->Controls->Clear();
				//Staff_Panel->Controls->Add(gcnew UserControl_Staff_Planner);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				Staff_Panel->Controls->Clear();
				//Staff_Panel->Controls->Add(gcnew UserControl_Staff_Edit);
		 }
};
}
