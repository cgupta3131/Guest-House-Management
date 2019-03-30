#pragma once
#using <System.dll>
#using <System.data.dll>
//#include "UserControl_Room_Types.h"
#include "UserControl_Room_Types2.h"
#include "UserControl_User_Types.h"
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
	/// Summary for UserControl_Guest_House_Info
	/// </summary>
	public ref class UserControl_Guest_House_Info : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Guest_House_Info(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Guest_House_Info()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	protected: 
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  Txt_Email;
	internal: System::Windows::Forms::TextBox^  Txt_Contact;
	internal: System::Windows::Forms::TextBox^  Txt_Address;
	internal: System::Windows::Forms::TextBox^  Txt_Name;
	internal: System::Windows::Forms::Button^  Btn_Submit;



	internal: System::Windows::Forms::Button^  Btn_User_Types;
	internal: System::Windows::Forms::Button^  Btn_Room_Types;
	internal: System::Windows::Forms::Panel^  Second_Panel;


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
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txt_Email = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Address = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Submit = (gcnew System::Windows::Forms::Button());
			this->Btn_User_Types = (gcnew System::Windows::Forms::Button());
			this->Btn_Room_Types = (gcnew System::Windows::Forms::Button());
			this->Second_Panel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(89, 194);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(51, 21);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(89, 150);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 21);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Contact";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(89, 111);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 21);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(89, 73);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 21);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Name";
			// 
			// Txt_Email
			// 
			this->Txt_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Email->Location = System::Drawing::Point(190, 192);
			this->Txt_Email->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Email->Name = L"Txt_Email";
			this->Txt_Email->Size = System::Drawing::Size(267, 26);
			this->Txt_Email->TabIndex = 51;
			// 
			// Txt_Contact
			// 
			this->Txt_Contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Contact->Location = System::Drawing::Point(190, 148);
			this->Txt_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Contact->Name = L"Txt_Contact";
			this->Txt_Contact->Size = System::Drawing::Size(267, 26);
			this->Txt_Contact->TabIndex = 52;
			// 
			// Txt_Address
			// 
			this->Txt_Address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Address->Location = System::Drawing::Point(190, 111);
			this->Txt_Address->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Address->Name = L"Txt_Address";
			this->Txt_Address->Size = System::Drawing::Size(267, 26);
			this->Txt_Address->TabIndex = 53;
			// 
			// Txt_Name
			// 
			this->Txt_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Name->Location = System::Drawing::Point(190, 73);
			this->Txt_Name->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Name->Name = L"Txt_Name";
			this->Txt_Name->Size = System::Drawing::Size(267, 26);
			this->Txt_Name->TabIndex = 54;
			// 
			// Btn_Submit
			// 
			this->Btn_Submit->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Submit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Submit->Location = System::Drawing::Point(227, 255);
			this->Btn_Submit->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Submit->Name = L"Btn_Submit";
			this->Btn_Submit->Size = System::Drawing::Size(142, 48);
			this->Btn_Submit->TabIndex = 68;
			this->Btn_Submit->Text = L"Submit Changes";
			this->Btn_Submit->UseVisualStyleBackColor = false;
			this->Btn_Submit->Click += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::Btn_Submit_Click);
			// 
			// Btn_User_Types
			// 
			this->Btn_User_Types->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_User_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_User_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_User_Types->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_User_Types->Location = System::Drawing::Point(93, 436);
			this->Btn_User_Types->Margin = System::Windows::Forms::Padding(2);
			this->Btn_User_Types->Name = L"Btn_User_Types";
			this->Btn_User_Types->Size = System::Drawing::Size(142, 48);
			this->Btn_User_Types->TabIndex = 71;
			this->Btn_User_Types->Text = L"User Types";
			this->Btn_User_Types->UseVisualStyleBackColor = false;
			this->Btn_User_Types->Click += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::Btn_User_Types_Click);
			// 
			// Btn_Room_Types
			// 
			this->Btn_Room_Types->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Room_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Room_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Room_Types->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Room_Types->Location = System::Drawing::Point(315, 436);
			this->Btn_Room_Types->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Room_Types->Name = L"Btn_Room_Types";
			this->Btn_Room_Types->Size = System::Drawing::Size(142, 48);
			this->Btn_Room_Types->TabIndex = 70;
			this->Btn_Room_Types->Text = L"Room Types";
			this->Btn_Room_Types->UseVisualStyleBackColor = false;
			this->Btn_Room_Types->Click += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::Btn_Room_Types_Click);
			// 
			// Second_Panel
			// 
			this->Second_Panel->Location = System::Drawing::Point(3, 3);
			this->Second_Panel->Name = L"Second_Panel";
			this->Second_Panel->Size = System::Drawing::Size(599, 498);
			this->Second_Panel->TabIndex = 72;
			// 
			// UserControl_Guest_House_Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Second_Panel);
			this->Controls->Add(this->Btn_Room_Types);
			this->Controls->Add(this->Btn_User_Types);
			this->Controls->Add(this->Btn_Submit);
			this->Controls->Add(this->Txt_Name);
			this->Controls->Add(this->Txt_Address);
			this->Controls->Add(this->Txt_Contact);
			this->Controls->Add(this->Txt_Email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Name = L"UserControl_Guest_House_Info";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::UserControl_Guest_House_Info_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::myMouseEnter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//public: ^EventHandler OnLoggedIn;
	/*private: System::Void UC_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(168, 23);

			 }*/
	private: System::Void UserControl_Guest_House_Info_Load(System::Object^  sender, System::EventArgs^  e) {
				 //pnl->Size = System::Drawing::Size(168, 23);
				 //pnl->BringToFront();
				 Second_Panel->Visible = false;
				 try{

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getGHData = "Select * from Guest_House_Info";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getGHData, DB_Connection);

					 OleDbDataReader ^ gh_data = cmd->ExecuteReader();

					 while(gh_data->Read() == true)
					 {
						 Txt_Name->Text = gh_data->GetString(1);
						 Txt_Address->Text = gh_data->GetString(2);
						 Txt_Contact->Text = gh_data->GetString(3);
						 Txt_Email->Text = gh_data->GetString(4);
					 }

					 DB_Connection->Close();
				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void Btn_Submit_Click(System::Object^  sender, System::EventArgs^  e) {


				 try{
					 string semail = tosstring(Txt_Email->Text);
					 remove_if(semail.begin(), semail.end(), isspace);
					 string scontact = tosstring(Txt_Contact->Text);
					 remove_if(scontact.begin(), scontact.end(), isspace);

					 regex rx("^[^@]+@[^@]+$");
					 if(!regex_match(semail.cbegin(), semail.cend(), rx)){
						 MessageBox::Show("Enter email address(in form ID@domain)");
						 goto ErrExit;
					 }

					 rx = "^[0-9]{10}$";
					 if(!regex_match(scontact.cbegin(), scontact.cend(), rx)){
						 MessageBox::Show("Enter 10 digit Contact Number [use digits from 0-9]");
						 goto ErrExit;
					 }

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ name = Txt_Name->Text;
					 String ^ address = Txt_Address->Text;
					 String ^ contact = Txt_Contact->Text;
					 String ^ email = Txt_Email->Text;

					 String ^ getGHData = "Update [Guest_House_Info] SET [GH_Name] = '" + name + "', [GH_Address] = '" + address + "', [GH_Contact] = '" + contact + "', [GH_Email] = '" + email + "' ;";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getGHData, DB_Connection);
					 cmd->ExecuteNonQuery();
					 DB_Connection->Close();

				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
ErrExit:
				 ;
			 }
	private: System::Void Btn_User_Types_Click(System::Object^  sender, System::EventArgs^  e) {
				 Second_Panel->Controls->Clear();
				 //Second_Panel->Controls->Add(gcnew UserControl_User_Types);
				 Second_Panel->Visible = true;
			 }

	private: System::Void Btn_Room_Types_Click(System::Object^  sender, System::EventArgs^  e) {
				 Second_Panel->Controls->Clear();
				 //Second_Panel->Controls->Add(gcnew UserControl_Room_Types2);
				 Second_Panel->Visible = true;
			 }
	public: System::Void myMouseEnter(System::Object^  sender, System::EventArgs^  e) {
				pnl->Size = System::Drawing::Size(168, 23);
				pn2->Size = System::Drawing::Size(168, 23);
				pn3->Size = System::Drawing::Size(168, 23);
				pn4->Size = System::Drawing::Size(168, 23);
				pn5->Size = System::Drawing::Size(168, 23);
				 //if (this->myMouseEnter!= nullptr)
					// this->myMouseEnter(this, e); 
			 }
};
}
