#pragma once
#using <System.dll>
#using <System.data.dll>
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
	/// Summary for UserControl_Password_Change
	/// </summary>
	public ref class UserControl_Password_Change : public System::Windows::Forms::UserControl
	{
	public:
		String ^username_info;
		UserControl_Password_Change(String ^user)
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
		~UserControl_Password_Change()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  Txtbox_new;
	private: System::Windows::Forms::TextBox^  Txtbox_confirm;


	private: System::Windows::Forms::Button^  btn_changepass;
	private: System::Windows::Forms::TextBox^  Txtbox_old;
	private: System::Windows::Forms::Label^  label4;

	protected: 

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txtbox_new = (gcnew System::Windows::Forms::TextBox());
			this->Txtbox_confirm = (gcnew System::Windows::Forms::TextBox());
			this->btn_changepass = (gcnew System::Windows::Forms::Button());
			this->Txtbox_old = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(114, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 23);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter Old Password :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(114, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 23);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter New Password: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(88, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(246, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Confirm New Password: ";
			// 
			// Txtbox_new
			// 
			this->Txtbox_new->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txtbox_new->Location = System::Drawing::Point(388, 168);
			this->Txtbox_new->Name = L"Txtbox_new";
			this->Txtbox_new->PasswordChar = '*';
			this->Txtbox_new->Size = System::Drawing::Size(145, 21);
			this->Txtbox_new->TabIndex = 9;
			// 
			// Txtbox_confirm
			// 
			this->Txtbox_confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txtbox_confirm->Location = System::Drawing::Point(388, 210);
			this->Txtbox_confirm->Name = L"Txtbox_confirm";
			this->Txtbox_confirm->PasswordChar = '*';
			this->Txtbox_confirm->Size = System::Drawing::Size(145, 21);
			this->Txtbox_confirm->TabIndex = 10;
			this->Txtbox_confirm->TextChanged += gcnew System::EventHandler(this, &UserControl_Password_Change::Txtbox_confirm_TextChanged);
			// 
			// btn_changepass
			// 
			this->btn_changepass->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_changepass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_changepass->Location = System::Drawing::Point(210, 285);
			this->btn_changepass->Name = L"btn_changepass";
			this->btn_changepass->Size = System::Drawing::Size(254, 86);
			this->btn_changepass->TabIndex = 11;
			this->btn_changepass->Text = L"Change Password";
			this->btn_changepass->UseVisualStyleBackColor = false;
			this->btn_changepass->Click += gcnew System::EventHandler(this, &UserControl_Password_Change::btn_changepass_Click);
			// 
			// Txtbox_old
			// 
			this->Txtbox_old->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txtbox_old->Location = System::Drawing::Point(388, 124);
			this->Txtbox_old->Name = L"Txtbox_old";
			this->Txtbox_old->PasswordChar = '*';
			this->Txtbox_old->Size = System::Drawing::Size(145, 21);
			this->Txtbox_old->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(222, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(252, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Change Password";
			// 
			// UserControl_Password_Change
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Txtbox_old);
			this->Controls->Add(this->btn_changepass);
			this->Controls->Add(this->Txtbox_confirm);
			this->Controls->Add(this->Txtbox_new);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Password_Change";
			this->Size = System::Drawing::Size(746, 434);
			this->Load += gcnew System::EventHandler(this, &UserControl_Password_Change::UserControl_Password_Change_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_changepass_Click(System::Object^  sender, System::EventArgs^  e) {

				 string sold_password = tosstring(Txtbox_old->Text);
				 //remove_if(sold_password.begin(), sold_password.end(), isspace);
				 string spassword = tosstring(Txtbox_new->Text);
				 //remove_if(spassword.begin(), spassword.end(), isspace);
				 string sconfirm_password = tosstring(Txtbox_confirm->Text);
				 //remove_if(sconfirm_password.begin(), sconfirm_password.end(), isspace);

				 if(sold_password.size()<3){
					 MessageBox::Show("Old Password has to be a minimum of three letters");
					 goto ErrExit;
				 }

				 if(spassword.size()<3){
					 MessageBox::Show("New Password has to be a minimum of three letters");
					 goto ErrExit;
				 }

				 if(sconfirm_password.size()<3){
					 MessageBox::Show("Confirm Password has to be a minimum of three letters");
					 goto ErrExit;
				 }

				 if(spassword.compare(sconfirm_password) != 0){
					 MessageBox::Show("Password not equal to confirm password");
					 goto ErrExit;
				 }

				 String ^old_password = Txtbox_old->Text;
				 int hash = old_password->GetHashCode();
				 old_password = Convert::ToString(hash);
				 String ^password = Txtbox_new->Text;
				 hash = password->GetHashCode();
				 password = Convert::ToString(hash);
				 String ^username = username_info;

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 OleDb::OleDbConnection ^ DB_Connection2 = gcnew OleDb::OleDbConnection();
				 DB_Connection2->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 String ^ check_userString = "Select * from [User_Table] where [Username] = '" +username_info+ "';";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(check_userString, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();
				 while (user_data->Read() == true)
				 { 
					 if (old_password == user_data->GetString(2))
					 {
						 DB_Connection2->Open();
						 String ^ reset_pass= "UPDATE [User_Table] SET [Password] = '" +password+ "' Where [Username] = '" +username+ "' ;";
						 OleDb::OleDbCommand ^ cmd2 = gcnew OleDbCommand(reset_pass, DB_Connection);
						 cmd2->ExecuteNonQuery();
						 DB_Connection2->Close();
						 MessageBox::Show("Password Updated.");
					 }
					 else{
						 MessageBox::Show("You've entered the incorrect current password. Try again.");
						 break;
					 }
				 }
				 DB_Connection->Close();
ErrExit:
				 ;
			 }
	private: System::Void UserControl_Password_Change_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Txtbox_confirm_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
