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
	/// Summary for UserControl_Staff_Edit_Details
	/// </summary>
	public ref class UserControl_Staff_Edit_Details : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Edit_Details(void)
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
		~UserControl_Staff_Edit_Details()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::TextBox^  Text_Email;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  Text_Contact;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  Text_Address;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Text_ID_Proof;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Text_Birth;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Text_Gender;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  Text_Join;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Text_Desig;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Text_Name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Text_ID;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->Text_Email = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Text_Contact = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Text_Address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Text_ID_Proof = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Text_Birth = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Text_Gender = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Text_Join = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Text_Desig = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Text_ID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Text_Email
			// 
			this->Text_Email->Location = System::Drawing::Point(282, 317);
			this->Text_Email->Margin = System::Windows::Forms::Padding(2);
			this->Text_Email->Multiline = true;
			this->Text_Email->Name = L"Text_Email";
			this->Text_Email->Size = System::Drawing::Size(188, 19);
			this->Text_Email->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(136, 315);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Email";
			// 
			// Text_Contact
			// 
			this->Text_Contact->Location = System::Drawing::Point(282, 283);
			this->Text_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Text_Contact->Multiline = true;
			this->Text_Contact->Name = L"Text_Contact";
			this->Text_Contact->Size = System::Drawing::Size(188, 19);
			this->Text_Contact->TabIndex = 39;
			this->Text_Contact->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::Text_Contact_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(136, 282);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 20);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Contact Number";
			// 
			// Text_Address
			// 
			this->Text_Address->Location = System::Drawing::Point(282, 248);
			this->Text_Address->Margin = System::Windows::Forms::Padding(2);
			this->Text_Address->Multiline = true;
			this->Text_Address->Name = L"Text_Address";
			this->Text_Address->Size = System::Drawing::Size(188, 19);
			this->Text_Address->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(136, 248);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Address";
			// 
			// Text_ID_Proof
			// 
			this->Text_ID_Proof->Location = System::Drawing::Point(282, 217);
			this->Text_ID_Proof->Margin = System::Windows::Forms::Padding(2);
			this->Text_ID_Proof->Name = L"Text_ID_Proof";
			this->Text_ID_Proof->Size = System::Drawing::Size(188, 20);
			this->Text_ID_Proof->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(136, 215);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 20);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Identity Proof";
			// 
			// Text_Birth
			// 
			this->Text_Birth->Enabled = false;
			this->Text_Birth->Location = System::Drawing::Point(282, 183);
			this->Text_Birth->Margin = System::Windows::Forms::Padding(2);
			this->Text_Birth->Name = L"Text_Birth";
			this->Text_Birth->Size = System::Drawing::Size(188, 20);
			this->Text_Birth->TabIndex = 33;
			this->Text_Birth->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::Text_Birth_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(136, 182);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Date of Birth";
			// 
			// Text_Gender
			// 
			this->Text_Gender->Enabled = false;
			this->Text_Gender->Location = System::Drawing::Point(282, 146);
			this->Text_Gender->Margin = System::Windows::Forms::Padding(2);
			this->Text_Gender->Name = L"Text_Gender";
			this->Text_Gender->Size = System::Drawing::Size(188, 20);
			this->Text_Gender->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(136, 149);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Gender";
			// 
			// Text_Join
			// 
			this->Text_Join->Enabled = false;
			this->Text_Join->Location = System::Drawing::Point(282, 112);
			this->Text_Join->Margin = System::Windows::Forms::Padding(2);
			this->Text_Join->Name = L"Text_Join";
			this->Text_Join->Size = System::Drawing::Size(188, 20);
			this->Text_Join->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(136, 115);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Date of Join";
			// 
			// Text_Desig
			// 
			this->Text_Desig->Location = System::Drawing::Point(282, 82);
			this->Text_Desig->Margin = System::Windows::Forms::Padding(2);
			this->Text_Desig->Name = L"Text_Desig";
			this->Text_Desig->Size = System::Drawing::Size(188, 20);
			this->Text_Desig->TabIndex = 27;
			this->Text_Desig->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::Text_Desig_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(136, 82);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Designation";
			// 
			// Text_Name
			// 
			this->Text_Name->Enabled = false;
			this->Text_Name->Location = System::Drawing::Point(282, 15);
			this->Text_Name->Margin = System::Windows::Forms::Padding(2);
			this->Text_Name->Name = L"Text_Name";
			this->Text_Name->Size = System::Drawing::Size(188, 20);
			this->Text_Name->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(136, 15);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Name";
			// 
			// Text_ID
			// 
			this->Text_ID->Enabled = false;
			this->Text_ID->Location = System::Drawing::Point(282, 49);
			this->Text_ID->Margin = System::Windows::Forms::Padding(2);
			this->Text_ID->Name = L"Text_ID";
			this->Text_ID->Size = System::Drawing::Size(188, 20);
			this->Text_ID->TabIndex = 23;
			this->Text_ID->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::Text_ID_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(136, 49);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Employee ID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button1->Location = System::Drawing::Point(359, 368);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 40);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Employee Resigned";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button2->Location = System::Drawing::Point(81, 368);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 40);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Save changes";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::button2_Click);
			// 
			// UserControl_Staff_Edit_Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Text_Email);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Text_Contact);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Text_Address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Text_ID_Proof);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Text_Birth);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Text_Gender);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Text_Join);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Text_Desig);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Text_Name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Text_ID);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Staff_Edit_Details";
			this->Size = System::Drawing::Size(687, 435);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Edit_Details::UserControl_Staff_Edit_Details_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Staff_Edit_Details_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern int S_ID;
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUserData = "Select * From Staff_Register where Employee_ID like '%" + Convert::ToString(S_ID) + "%'";

				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();

				 while(user_data->Read() == true)
				 {
					 Text_Name->Text = user_data->GetString(1);
					 Text_ID->Text = Convert::ToString(S_ID);
					 Text_Desig->Text = user_data->GetString(2);
					 Text_Join->Text = user_data->GetString(3);
					 Text_Gender->Text = user_data->GetString(4);
					 Text_Birth->Text = user_data->GetString(5);
					 Text_ID_Proof->Text = user_data->GetString(6);
					 Text_Address->Text = user_data->GetString(7);
					 Text_Contact->Text = user_data->GetString(8);
					 if(user_data->GetString(9) != "")
					 {
						 Text_Email->Text = user_data->GetString(9);
					 }    
				 }
				 //MessageBox::Show(Convert::ToString(S_ID));
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 extern int S_ID;
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 DateTime ^ curr_date = System::DateTime().Now;
				 String ^ curr_date_of_resig = curr_date->ToString("dd-MM-yyyy");

				 String ^ getUserData = "Select * From Staff_Register where Employee_ID like '%" + Convert::ToString(S_ID) + "%'";
				 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
				 cmdUpdate->CommandText = "UPDATE Staff_Register SET Date_of_resignation = '" + curr_date_of_resig + "'WHERE Employee_ID = " + S_ID + ";";
				 cmdUpdate->ExecuteNonQuery();
				 MessageBox::Show("Employee Fired!!","Notification");
				 DB_Connection->Close();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 extern int S_ID;

				 string sname = tosstring(Text_Name->Text);
				 remove_if(sname.begin(), sname.end(), isspace);
				 string semail = tosstring(Text_Email->Text);
				 remove_if(semail.begin(), semail.end(), isspace);
				 string scontact = tosstring(Text_Contact->Text);
				 remove_if(scontact.begin(), scontact.end(), isspace);

				 regex rx("^[A-Z|a-z|.|']+$");
				 if(!regex_match(sname.cbegin(), sname.cend(), rx)){
					 MessageBox::Show("Enter Name in alphabets");
					 goto ErrExit;
				 }

				 rx = "^[^@]+@[^@]+$";
				 if(!regex_match(semail.cbegin(), semail.cend(), rx)){
					 MessageBox::Show("Enter email address(in form ID@domain)");
					 goto ErrExit;
				 }

				 rx = "^[0-9]{10}$";
				 if(!regex_match(scontact.cbegin(), scontact.cend(), rx)){
					 MessageBox::Show("Enter 10 digit Contact Number [use digits from 0-9]");
					 goto ErrExit;
				 }

				 String ^ new_desig = "";
				 String ^ new_iden = "";
				 String ^ new_add = "";
				 String ^ new_contact = "";
				 String ^ new_email = "";

				 new_desig = Text_Desig->Text;
				 new_iden = Text_ID_Proof->Text;
				 new_add = Text_Address->Text;
				 new_contact = Text_Contact->Text;
				 new_email = Text_Email->Text;


				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUserData = "Select * From Staff_Register where Employee_ID like '%" + Convert::ToString(S_ID) + "%'";
				 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
				 cmdUpdate->CommandText = "UPDATE Staff_Register SET Designation = '" + new_desig + "' , Identity_proof = '" + new_iden + "' , Address = '" + new_add + "' , Contact_Number = '" + new_contact + "' , Email = '" + new_email + "'WHERE Employee_ID = " + S_ID + ";";
				 cmdUpdate->ExecuteNonQuery();
				 //cmdUpdate->Close();  should work, it's not working
				 MessageBox::Show("Changes Saved","Yaay");
				 DB_Connection->Close();
				 //this->Close();
ErrExit:
				 ;
			 }
	private: System::Void Text_Desig_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_ID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Contact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Birth_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}