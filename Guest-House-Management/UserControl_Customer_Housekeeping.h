#pragma once
#include <regex>
#include "tosstring.h"
//#include <msclr/marshal_cppstd.h>

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
	/// Summary for UserControl_Customer_Housekeeping
	/// </summary>
	public ref class UserControl_Customer_Housekeeping : public System::Windows::Forms::UserControl
	{
	public:
		String ^username_info;
		UserControl_Customer_Housekeeping(String ^user)
		{
			InitializeComponent();
			username_info=user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Customer_Housekeeping()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  Textbox_room;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  Textbox_Issues;



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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Textbox_room = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Textbox_Issues = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoEllipsis = true;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(114, 119);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(134, 29);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Bedsheets";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoEllipsis = true;
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(322, 119);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(183, 29);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Room Cleaning";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoEllipsis = true;
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(582, 119);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(263, 29);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Water Issues-Plumbing";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoEllipsis = true;
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::Transparent;
			this->checkBox4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(114, 189);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(113, 29);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Laundry";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoEllipsis = true;
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::Transparent;
			this->checkBox5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(322, 189);
			this->checkBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(193, 29);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Electrical Issues";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoEllipsis = true;
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::Transparent;
			this->checkBox6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Lime;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(582, 189);
			this->checkBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(196, 29);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Other Requests:";
			this->checkBox6->UseVisualStyleBackColor = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &UserControl_Customer_Housekeeping::checkBox6_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(262, 45);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Room Number";
			// 
			// Textbox_room
			// 
			this->Textbox_room->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_room->Location = System::Drawing::Point(448, 45);
			this->Textbox_room->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Textbox_room->Name = L"Textbox_room";
			this->Textbox_room->Size = System::Drawing::Size(173, 32);
			this->Textbox_room->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(311, 334);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 54);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Customer_Housekeeping::button1_Click);
			// 
			// Textbox_Issues
			// 
			this->Textbox_Issues->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Textbox_Issues->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Issues->Location = System::Drawing::Point(582, 237);
			this->Textbox_Issues->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Textbox_Issues->Multiline = true;
			this->Textbox_Issues->Name = L"Textbox_Issues";
			this->Textbox_Issues->Size = System::Drawing::Size(262, 65);
			this->Textbox_Issues->TabIndex = 11;
			// 
			// UserControl_Customer_Housekeeping
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Textbox_Issues);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Textbox_room);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UserControl_Customer_Housekeeping";
			this->Size = System::Drawing::Size(865, 417);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Housekeeping::UserControl_Customer_Housekeeping_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void UserControl_Customer_Housekeeping_Load(System::Object^  sender, System::EventArgs^  e) {
				 Textbox_Issues->Visible=false;
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 string susername = tosstring(username_info);
					 string sroom = tosstring(Textbox_room->Text);

					 regex rx("^[A-Z|a-z]{0,1}[0-9]+[A-Z|a-z]{0,1}$");
					 if(!regex_match(sroom.cbegin(), sroom.cend(), rx)){
						 MessageBox::Show("Enter Room in format: A(number using digits[0-9])A");
						 goto ErrExit;
					 }

					 String ^customer_username = username_info;
					 String ^room_no = Textbox_room->Text;

					 if(checkBox1->Checked==false && checkBox2->Checked==false && checkBox3->Checked==false && checkBox4->Checked==false && checkBox5->Checked==false && checkBox6->Checked==false){
						 MessageBox::Show("Select a housekeeping task");
						 goto ErrExit;
					 }

					 String ^housekeep_info="Look into: ";
					 if(checkBox1->Checked==true)
						 housekeep_info += checkBox1->Text + "  ";
					 if(checkBox2->Checked==true)
						 housekeep_info += checkBox2->Text + "  ";
					 if(checkBox3->Checked==true)
						 housekeep_info += checkBox3->Text + "  ";
					 if(checkBox4->Checked==true)
						 housekeep_info += checkBox4->Text + "  ";
					 if(checkBox5->Checked==true)
						 housekeep_info += checkBox5->Text + "  ";
					 if(checkBox6->Checked==true){
						 housekeep_info += checkBox6->Text + " " + Textbox_Issues->Text;
					 }

					 String ^ insert_request = "insert into House_Keeping_Request([Customer_Name],[Room_No],[Request_Info],[Request_Status]) VALUES('" +customer_username+ "','" +room_no+ "','" +housekeep_info+ "','NO' );";
					 OleDbCommand ^ cmdInsert = gcnew OleDbCommand(insert_request, DB_Connection);
					 //Debug::WriteLine(insert_request);
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Name",Convert::ToString(customer_username)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Room_No",Convert::ToString(room_no)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Request_Info",Convert::ToString(housekeep_info)));
					 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Request_Status",Convert::ToString("NO")));

					 cmdInsert->ExecuteNonQuery();

					 DB_Connection->Close();
					 MessageBox::Show("Request has been made to the Admin","Notification");
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
ErrExit:
				 ;
			 }
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if(Textbox_Issues->Visible==false)		
					 Textbox_Issues->Visible=true;
				 else
					 Textbox_Issues->Visible=false;
			 }
	};

}

