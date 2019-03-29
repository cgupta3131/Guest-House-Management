#pragma once
#include "UserControl_Add_Cab_Details.h"
#include "UserControl_Add_Restaurant.h"
#include "UserControl_Add_Places.h"
#include "UserControl_Add_Mess.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_GuestHouseDetails
	/// </summary>
	public ref class UserControl_GuestHouseDetails : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_GuestHouseDetails(void)
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
		~UserControl_GuestHouseDetails()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Button^  Btn_Create;
	protected: 
	internal: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;


	internal: System::Windows::Forms::Button^  button4;
	private: 
	internal: 
	private: 
	internal: 

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
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(31, 28);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(126, 59);
			this->Btn_Create->TabIndex = 68;
			this->Btn_Create->Text = L"Add Cab Services";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::Btn_Create_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(191, 28);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 59);
			this->button1->TabIndex = 69;
			this->button1->Text = L"Add Restaurant";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(346, 28);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 59);
			this->button2->TabIndex = 70;
			this->button2->Text = L"Add Tourist Places";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(31, 113);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(893, 400);
			this->panel1->TabIndex = 71;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OrangeRed;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(511, 28);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 59);
			this->button4->TabIndex = 73;
			this->button4->Text = L"Add Mess Details";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::button4_Click);
			// 
			// UserControl_GuestHouseDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_Create);
			this->Location = System::Drawing::Point(31, 111);
			this->Name = L"UserControl_GuestHouseDetails";
			this->Size = System::Drawing::Size(994, 534);
			this->Load += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::UserControl_GuestHouseDetails_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 panel1->Controls->Add(gcnew UserControl_Add_Cab_Details);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 panel1->Controls->Add(gcnew UserControl_Add_Places);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 panel1->Controls->Add(gcnew UserControl_Add_Restaurant);
			 }
	
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 panel1->Controls->Add(gcnew UserControl_Add_Mess);
			 }
	private: System::Void UserControl_GuestHouseDetails_Load(System::Object^  sender, System::EventArgs^  e) {
				 /*Allow code for editing these details also*/
				 /*Also don't allow multiple bookings*/
			 }
	};
}
