#pragma once
#include <regex>
#include "tosstring.h"

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
	/// Summary for UserControl_Customer_Booking
	/// </summary>
	public ref class UserControl_Customer_Booking : public System::Windows::Forms::UserControl
	{
	public:
		String ^username_info;
		UserControl_Customer_Booking(String ^user)
		{
			InitializeComponent();
			username_info=user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~UserControl_Customer_Booking()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: 
	private: System::Windows::Forms::Label^  label2;


	internal: System::Windows::Forms::TextBox^  Register_First_Name;
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;

	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::TextBox^  Textbox_name;

	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::TextBox^  Textbox_contact;
	internal: System::Windows::Forms::TextBox^  TextBox_Email;






	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::ComboBox^  User_Type_Box;
	private: 



	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	internal: 
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;

	private: 

	private: 

	private: System::Windows::Forms::Button^  Btn_Room_Add;
	internal: System::Windows::Forms::Label^  label10;
	internal: System::Windows::Forms::ComboBox^  Number_Rooms;
	private: 

	internal: System::Windows::Forms::ComboBox^  RoomTypeBox;

	internal: System::Windows::Forms::Label^  label11;
	internal: 
	private: 
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Register_First_Name = (gcnew System::Windows::Forms::TextBox());
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Textbox_name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Textbox_contact = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Email = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->User_Type_Box = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Btn_Room_Add = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Number_Rooms = (gcnew System::Windows::Forms::ComboBox());
			this->RoomTypeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 70);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label2_Click);
			// 
			// Register_First_Name
			// 
			this->Register_First_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_First_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Register_First_Name->Location = System::Drawing::Point(162, 44);
			this->Register_First_Name->Margin = System::Windows::Forms::Padding(2);
			this->Register_First_Name->Name = L"Register_First_Name";
			this->Register_First_Name->ReadOnly = true;
			this->Register_First_Name->Size = System::Drawing::Size(234, 26);
			this->Register_First_Name->TabIndex = 51;
			this->Register_First_Name->TextChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::Register_First_Name_TextChanged);
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(16, 44);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(99, 18);
			this->Lbl_Register_Name->TabIndex = 52;
			this->Lbl_Register_Name->Text = L"Booking By";
			this->Lbl_Register_Name->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::Lbl_Register_Name_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 227);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 18);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Booking Upto";
			this->label3->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 187);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 18);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Booking From";
			this->label4->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 145);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 18);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Customer Type";
			this->label5->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 94);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 18);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Booking For";
			this->label6->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label6_Click);
			// 
			// Textbox_name
			// 
			this->Textbox_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_name->Location = System::Drawing::Point(162, 93);
			this->Textbox_name->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_name->Name = L"Textbox_name";
			this->Textbox_name->Size = System::Drawing::Size(234, 26);
			this->Textbox_name->TabIndex = 58;
			this->Textbox_name->TextChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::Textbox_name_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 276);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 18);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Booking Contact";
			this->label7->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 318);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 18);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Email";
			this->label8->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::label8_Click);
			// 
			// Textbox_contact
			// 
			this->Textbox_contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_contact->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_contact->Location = System::Drawing::Point(162, 276);
			this->Textbox_contact->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_contact->Name = L"Textbox_contact";
			this->Textbox_contact->Size = System::Drawing::Size(267, 26);
			this->Textbox_contact->TabIndex = 65;
			this->Textbox_contact->TextChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::Textbox_contact_TextChanged);
			// 
			// TextBox_Email
			// 
			this->TextBox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TextBox_Email->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TextBox_Email->Location = System::Drawing::Point(162, 317);
			this->TextBox_Email->Margin = System::Windows::Forms::Padding(2);
			this->TextBox_Email->Name = L"TextBox_Email";
			this->TextBox_Email->Size = System::Drawing::Size(267, 26);
			this->TextBox_Email->TabIndex = 66;
			this->TextBox_Email->TextChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::TextBox_Email_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(162, 379);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 52);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Submit ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::button1_Click);
			// 
			// User_Type_Box
			// 
			this->User_Type_Box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->User_Type_Box->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->User_Type_Box->FormattingEnabled = true;
			this->User_Type_Box->Location = System::Drawing::Point(162, 140);
			this->User_Type_Box->Margin = System::Windows::Forms::Padding(2);
			this->User_Type_Box->Name = L"User_Type_Box";
			this->User_Type_Box->Size = System::Drawing::Size(234, 25);
			this->User_Type_Box->TabIndex = 68;
			this->User_Type_Box->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::User_Type_Box_SelectedIndexChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(162, 187);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(234, 20);
			this->dateTimePicker1->TabIndex = 70;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(162, 225);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(234, 20);
			this->dateTimePicker2->TabIndex = 71;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &UserControl_Customer_Booking::dateTimePicker2_ValueChanged);
			// 
			// Btn_Room_Add
			// 
			this->Btn_Room_Add->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Room_Add->FlatAppearance->BorderSize = 0;
			this->Btn_Room_Add->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Room_Add->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Room_Add->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Btn_Room_Add->Location = System::Drawing::Point(542, 145);
			this->Btn_Room_Add->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Room_Add->Name = L"Btn_Room_Add";
			this->Btn_Room_Add->Size = System::Drawing::Size(91, 30);
			this->Btn_Room_Add->TabIndex = 74;
			this->Btn_Room_Add->Text = L"Add Room";
			this->Btn_Room_Add->UseVisualStyleBackColor = false;
			this->Btn_Room_Add->Click += gcnew System::EventHandler(this, &UserControl_Customer_Booking::Btn_Room_Add_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(442, 94);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(154, 18);
			this->label10->TabIndex = 81;
			this->label10->Text = L"Number of Rooms";
			// 
			// Number_Rooms
			// 
			this->Number_Rooms->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(9) {L"1", L"2", L"3", L"4", L"5", 
				L"6", L"7", L"8", L"9"});
			this->Number_Rooms->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Number_Rooms->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Number_Rooms->FormattingEnabled = true;
			this->Number_Rooms->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9"});
			this->Number_Rooms->Location = System::Drawing::Point(598, 89);
			this->Number_Rooms->Margin = System::Windows::Forms::Padding(2);
			this->Number_Rooms->Name = L"Number_Rooms";
			this->Number_Rooms->Size = System::Drawing::Size(125, 25);
			this->Number_Rooms->TabIndex = 80;
			// 
			// RoomTypeBox
			// 
			this->RoomTypeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RoomTypeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RoomTypeBox->FormattingEnabled = true;
			this->RoomTypeBox->Location = System::Drawing::Point(598, 44);
			this->RoomTypeBox->Margin = System::Windows::Forms::Padding(2);
			this->RoomTypeBox->Name = L"RoomTypeBox";
			this->RoomTypeBox->Size = System::Drawing::Size(125, 25);
			this->RoomTypeBox->TabIndex = 79;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(442, 44);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 18);
			this->label11->TabIndex = 78;
			this->label11->Text = L"Room Type";
			// 
			// UserControl_Customer_Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Number_Rooms);
			this->Controls->Add(this->RoomTypeBox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Btn_Room_Add);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->User_Type_Box);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TextBox_Email);
			this->Controls->Add(this->Textbox_contact);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Textbox_name);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Controls->Add(this->Register_First_Name);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Customer_Booking";
			this->Size = System::Drawing::Size(855, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Booking::UserControl_Customer_Booking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static String ^final = "";
	private: System::Void UserControl_Customer_Booking_Load(System::Object^  sender, System::EventArgs^  e) {
				 final = "";
				 this->dateTimePicker1->MinDate=System::DateTime().Now;
				 this->dateTimePicker2->MinDate=System::DateTime().Now.AddDays(1);
				 //this->dateTimePicker2->Enabled=false;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getRoomTypes = "Select * from Room_Types";
				 OleDbCommand ^ cmdRoomType = gcnew OleDbCommand(getRoomTypes, DB_Connection);
				 OleDbDataReader ^ room_data = cmdRoomType->ExecuteReader();

				 while(room_data->Read() == true)
				 {
					 RoomTypeBox->Items->Add(room_data->GetString(1));
				 }

				 String ^ getUserTypes = "Select * from User_Types";
				 OleDbCommand ^ cmdUserType = gcnew OleDbCommand(getUserTypes, DB_Connection);
				 OleDbDataReader ^ UserType_data = cmdUserType->ExecuteReader();
				 while(UserType_data->Read() == true)
				 {
					 User_Type_Box->Items->Add(UserType_data->GetString(1));
				 }

				 String ^ getUserData = "Select * From User_Table where Username like '%" + username_info + "%'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();
				 while(user_data->Read()==true)
				 {
					 Register_First_Name->Text = user_data->GetString(5);
					 Textbox_contact->Text = user_data->GetString(3);
					 TextBox_Email->Text = user_data->GetString(8);
				 }
				 DB_Connection->Close();
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->dateTimePicker2->Enabled=true;
				 this->dateTimePicker2->MinDate=this->dateTimePicker1->Value.AddDays(1);
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Register_First_Name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Lbl_Register_Name_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Textbox_name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Textbox_contact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void TextBox_Email_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 string susername = tosstring(Register_First_Name->Text);
					 remove_if(susername.begin(), susername.end(), isspace);
					 string sbf_name = tosstring(Textbox_name->Text);
					 remove_if(sbf_name.begin(), sbf_name.end(), isspace);
					 string scontact = tosstring(Textbox_contact->Text);
					 remove_if(scontact.begin(), scontact.end(), isspace);
					 string semail = tosstring(TextBox_Email->Text);
					 remove_if(semail.begin(), semail.end(), isspace);
					 string scust = tosstring(User_Type_Box->Text);

					 regex rx("^[A-Z|a-z|.|']+$");
					 if(!regex_match(sbf_name.cbegin(), sbf_name.cend(), rx)){
						 MessageBox::Show("Enter Booking For: Name in alphabets");
						 goto ErrExit;
					 }

					 rx = "^[0-9]{10}$";
					 if(!regex_match(scontact.cbegin(), scontact.cend(), rx)){
						 MessageBox::Show("Enter 10 digit Contact Number [use digits from 0-9]");
						 goto ErrExit;
					 }

					 rx = "^[^@]+@[^@]+$";
					 if(!regex_match(semail.cbegin(), semail.cend(), rx)){
						 MessageBox::Show("Enter email address(in form ID@domain)");
						 goto ErrExit;
					 }

					 if(scust.compare("") == 0){
						 MessageBox::Show("No Customer Type is Selected");
						 goto ErrExit;
					 }
					 if(final == ""){
						 MessageBox::Show("Please Select some Room Type");
						 goto ErrExit;
					 }

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 DateTime ^ st_date = dateTimePicker1->Value;
					 String ^ start_date = st_date->ToString("dd-MM-yyyy");
					 //String ^ start_date = st_date->ToString("yyyyMMdd");
					 DateTime ^ en_date = dateTimePicker2->Value;
					 String ^ end_date = en_date->ToString("dd-MM-yyyy");
					 //String ^ end_date = en_date->ToString("yyyyMMdd");

					 String ^customer_username = username_info;
					 String ^customer_type = User_Type_Box->Text;
					 String ^count = Number_Rooms->Text;
					 String ^customer_name = Textbox_name->Text;
					 //String ^start_date = dateTimePicker1->Text;
					 //String ^end_date = dateTimePicker2->Text;
					 String ^room_type = RoomTypeBox->Text;
					 String ^new_room_type = room_type + ":" + count;
					 String ^customer_contact = Textbox_contact->Text;
					 String ^customer_email = TextBox_Email->Text;

					 String ^ insert_booking = "insert into Booking_Request([Customer_Username],[Customer_Type],[Customer_Name],[Date_From],[Date_Upto],[Room_Type],[Contact_Number],[Email],[Approved]) VALUES('" +customer_username+ "', '" +customer_type+ "', '" +customer_name+ "', '" +start_date+ "', '" +end_date+ "', '" + final + "', '" +customer_contact+ "', '" +customer_email+ "', 'NO' );";
					 OleDbCommand ^ cmdInsert = gcnew OleDbCommand(insert_booking, DB_Connection);
					 //Debug::WriteLine(insert_booking);
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Username",Convert::ToString(customer_username)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Type",Convert::ToString(customer_type)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Name",Convert::ToString(customer_name)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Date_From",Convert::ToString(start_date)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Date_Upto",Convert::ToString(end_date)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Room_Type",Convert::ToString(final)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Contact_Number",Convert::ToString(customer_contact)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Email",Convert::ToString(customer_email)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Approved",Convert::ToString("NO")));

					 cmdInsert->ExecuteNonQuery();

					 DB_Connection->Close();
					 MessageBox::Show("Booking requested has been sent to the Admin for approval","Notification");
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
ErrExit:
				 ;
			 }
	private: System::Void User_Type_Box_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void RoomTypeBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Number_Rooms_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void add_room_function() {
			 }

			 static int j=0;
	private: System::Void Btn_Room_Add_Click(System::Object^  sender, System::EventArgs^  e) {
				 string sroom = tosstring(RoomTypeBox->Text);
				 string c_room = tosstring(Number_Rooms->Text);
				 if(sroom.compare("") == 0){
					 MessageBox::Show("No Room Type is Selected");
					 goto ErrExit;
				 }
				 if(c_room.compare("") == 0){
					 MessageBox::Show("Number of Rooms can't be empty");
					 goto ErrExit;
				 }
				 String ^room_type = RoomTypeBox->Text;
				 String ^count = Number_Rooms->Text;

				 final = final + room_type + ":" + count + ",";

				 j=j+1;
				 TextBox ^tb = gcnew TextBox();
				 tb->Text = room_type + ":" + count;
				 tb->Size = System::Drawing::Size(125, 25);
				 tb->ReadOnly = true;
				 tb->Location = System::Drawing::Point(442,150+30*j);
				 this->Controls->Add(tb);
				 RoomTypeBox->Text = "";
				 Number_Rooms->SelectedIndex = -1;
				 RoomTypeBox->Items->Remove(room_type);
ErrExit:
				 ;

			 }
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
