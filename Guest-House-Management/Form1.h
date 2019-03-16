#pragma once
#include "UserControl_Signup.h"
#include "UserControl_Login.h"
#include "Form_Reception.h"

#using <System.dll>
#using <System.data.dll>

namespace GuestHouseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;	
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1()
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Login;
	protected: 
	private: System::Windows::Forms::Button^  Btn_Signup;
	internal: System::Windows::Forms::Panel^  Output_Panel;
	private: System::Windows::Forms::Button^  button1;
	internal: 
	private: 

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
			this->Btn_Login = (gcnew System::Windows::Forms::Button());
			this->Btn_Signup = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Login
			// 
			this->Btn_Login->Location = System::Drawing::Point(39, 132);
			this->Btn_Login->Name = L"Btn_Login";
			this->Btn_Login->Size = System::Drawing::Size(166, 98);
			this->Btn_Login->TabIndex = 0;
			this->Btn_Login->Text = L"Login";
			this->Btn_Login->UseVisualStyleBackColor = true;
			this->Btn_Login->Click += gcnew System::EventHandler(this, &Form1::Btn_Login_Click);
			// 
			// Btn_Signup
			// 
			this->Btn_Signup->Location = System::Drawing::Point(39, 324);
			this->Btn_Signup->Name = L"Btn_Signup";
			this->Btn_Signup->Size = System::Drawing::Size(166, 98);
			this->Btn_Signup->TabIndex = 1;
			this->Btn_Signup->Text = L"Signup";
			this->Btn_Signup->UseVisualStyleBackColor = true;
			this->Btn_Signup->Click += gcnew System::EventHandler(this, &Form1::Btn_Signup_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Output_Panel->Location = System::Drawing::Point(285, 93);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(682, 553);
			this->Output_Panel->TabIndex = 15;
			this->Output_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Output_Panel_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(39, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 98);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Signup";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Btn_Signup);
			this->Controls->Add(this->Btn_Login);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Output_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Btn_Login_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Login);
			 }
	private: System::Void Btn_Signup_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Signup);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 //Form_Reception ^form2 = gcnew Form_Reception();
                 //form2->ShowDialog();
			 }
};
}

