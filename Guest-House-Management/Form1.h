#pragma once
#include "UserControl_Signup.h"
#include "UserControl_Login.h"
#include "UserControl_Staff.h"
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

	internal: System::Windows::Forms::Panel^  Output_Panel;
	private: System::Windows::Forms::LinkLabel^  backlabel;
	internal: 

	private: System::Windows::Forms::Button^  btn_signup;

	internal: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Btn_Login = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->backlabel = (gcnew System::Windows::Forms::LinkLabel());
			this->btn_signup = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Login
			// 
			this->Btn_Login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(216)), 
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->Btn_Login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Btn_Login.BackgroundImage")));
			this->Btn_Login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Btn_Login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Login->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Login->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->Btn_Login->Location = System::Drawing::Point(413, 155);
			this->Btn_Login->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Login->Name = L"Btn_Login";
			this->Btn_Login->Size = System::Drawing::Size(325, 111);
			this->Btn_Login->TabIndex = 0;
			this->Btn_Login->Text = L"Login";
			this->Btn_Login->UseVisualStyleBackColor = false;
			this->Btn_Login->Click += gcnew System::EventHandler(this, &Form1::Btn_Login_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->AutoSize = true;
			this->Output_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Output_Panel->Location = System::Drawing::Point(79, 58);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(875, 62);
			this->Output_Panel->TabIndex = 15;
			this->Output_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Output_Panel_Paint);
			// 
			// backlabel
			// 
			this->backlabel->AutoSize = true;
			this->backlabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->backlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backlabel->ForeColor = System::Drawing::SystemColors::ControlText;
			this->backlabel->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->backlabel->Location = System::Drawing::Point(43, 17);
			this->backlabel->Name = L"backlabel";
			this->backlabel->Size = System::Drawing::Size(64, 24);
			this->backlabel->TabIndex = 16;
			this->backlabel->TabStop = true;
			this->backlabel->Text = L"BACK";
			this->backlabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// btn_signup
			// 
			this->btn_signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(216)), 
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->btn_signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_signup.BackgroundImage")));
			this->btn_signup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_signup->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_signup->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_signup->Location = System::Drawing::Point(413, 335);
			this->btn_signup->Margin = System::Windows::Forms::Padding(4);
			this->btn_signup->Name = L"btn_signup";
			this->btn_signup->Size = System::Drawing::Size(325, 111);
			this->btn_signup->TabIndex = 17;
			this->btn_signup->Text = L"Sign up";
			this->btn_signup->UseVisualStyleBackColor = false;
			this->btn_signup->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1333, 734);
			this->Controls->Add(this->btn_signup);
			this->Controls->Add(this->backlabel);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Btn_Login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 backlabel->Hide();
				 Output_Panel->Hide();
			 }
	private: System::Void Output_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Btn_Login_Click(System::Object^  sender, System::EventArgs^  e) {
				 Btn_Login->Hide();
				 btn_signup->Hide();
				 backlabel->Show();
				 Output_Panel->Show();
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Login(this));
			 }
	private: System::Void Btn_Signup_Click(System::Object^  sender, System::EventArgs^  e) {
				 Btn_Login->Hide();
				 btn_signup->Hide();
				 backlabel->Show();
				 Output_Panel->Show();
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Signup);
			 }

	private: System::Void Staff_Button_Click(System::Object^  sender, System::EventArgs^  e) {


			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Btn_Login->Hide();
				 btn_signup->Hide();
				 backlabel->Show();
				 Output_Panel->Show();
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Signup);
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Hide();
				 btn_signup->Show();
				 Btn_Login->Show();
				 backlabel->Hide();
			 }
	};
}
