#pragma once
#using <System.dll>
#using <System.data.dll>
#include <string.h>

#include "Form_Reception.h"
#include "Form_Customer_Homepage.h"
#include "UserControl_Customer_Homepage.h"

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
	/// Summary for UserControl_Login
	/// </summary>
	public ref class UserControl_Login : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Login(void)
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
		~UserControl_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Button^  Btn_Forget;
	protected: 
	internal: System::Windows::Forms::Button^  Btn_submit;
	internal: System::Windows::Forms::Label^  Lbl_password;
	internal: System::Windows::Forms::TextBox^  Txt_password;
	internal: System::Windows::Forms::TextBox^  Txt_username;


	internal: System::Windows::Forms::Label^  Lbl_username;

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
			this->Btn_Forget = (gcnew System::Windows::Forms::Button());
			this->Btn_submit = (gcnew System::Windows::Forms::Button());
			this->Lbl_password = (gcnew System::Windows::Forms::Label());
			this->Txt_password = (gcnew System::Windows::Forms::TextBox());
			this->Txt_username = (gcnew System::Windows::Forms::TextBox());
			this->Lbl_username = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Forget
			// 
			this->Btn_Forget->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Forget->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Forget->Font = (gcnew System::Drawing::Font(L"Segoe Script", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Forget->ForeColor = System::Drawing::Color::White;
			this->Btn_Forget->Location = System::Drawing::Point(492, 308);
			this->Btn_Forget->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Forget->Name = L"Btn_Forget";
			this->Btn_Forget->Size = System::Drawing::Size(181, 36);
			this->Btn_Forget->TabIndex = 41;
			this->Btn_Forget->Text = L"Forget Password\?";
			this->Btn_Forget->UseVisualStyleBackColor = false;
			// 
			// Btn_submit
			// 
			this->Btn_submit->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->Btn_submit->ForeColor = System::Drawing::Color::AliceBlue;
			this->Btn_submit->Location = System::Drawing::Point(357, 418);
			this->Btn_submit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_submit->Name = L"Btn_submit";
			this->Btn_submit->Size = System::Drawing::Size(197, 59);
			this->Btn_submit->TabIndex = 40;
			this->Btn_submit->Text = L"Submit";
			this->Btn_submit->UseVisualStyleBackColor = false;
			this->Btn_submit->Click += gcnew System::EventHandler(this, &UserControl_Login::Btn_submit_Click);
			// 
			// Lbl_password
			// 
			this->Lbl_password->AutoSize = true;
			this->Lbl_password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_password->Location = System::Drawing::Point(248, 251);
			this->Lbl_password->Name = L"Lbl_password";
			this->Lbl_password->Size = System::Drawing::Size(138, 33);
			this->Lbl_password->TabIndex = 39;
			this->Lbl_password->Text = L"Password";
			// 
			// Txt_password
			// 
			this->Txt_password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_password->Location = System::Drawing::Point(447, 251);
			this->Txt_password->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Txt_password->Name = L"Txt_password";
			this->Txt_password->PasswordChar = '*';
			this->Txt_password->Size = System::Drawing::Size(225, 32);
			this->Txt_password->TabIndex = 38;
			// 
			// Txt_username
			// 
			this->Txt_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_username->Location = System::Drawing::Point(447, 203);
			this->Txt_username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Txt_username->Name = L"Txt_username";
			this->Txt_username->Size = System::Drawing::Size(225, 32);
			this->Txt_username->TabIndex = 37;
			// 
			// Lbl_username
			// 
			this->Lbl_username->AutoSize = true;
			this->Lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_username->Location = System::Drawing::Point(248, 203);
			this->Lbl_username->Name = L"Lbl_username";
			this->Lbl_username->Size = System::Drawing::Size(146, 33);
			this->Lbl_username->TabIndex = 36;
			this->Lbl_username->Text = L"Username";
			// 
			// UserControl_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Btn_Forget);
			this->Controls->Add(this->Btn_submit);
			this->Controls->Add(this->Lbl_password);
			this->Controls->Add(this->Txt_password);
			this->Controls->Add(this->Txt_username);
			this->Controls->Add(this->Lbl_username);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UserControl_Login";
			this->Size = System::Drawing::Size(909, 681);
			this->Load += gcnew System::EventHandler(this, &UserControl_Login::UserControl_Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {

			String ^ stored_pass;
			try{
			
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();
			
			String ^ username = Txt_username->Text;
			String ^ password = Txt_password->Text;
		
			String ^ getUserData = "Select * from User_Table where [Username] = '" + username + "';";
		
			//Debug::WriteLine(inputString);
			String ^ isApproved;
			//String ^ userCategory; 
			String ^ stored_username;
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
			
			OleDbDataReader ^ user_data = cmd->ExecuteReader();
			
			while(user_data->Read() == true)
			{
				stored_username=user_data->GetString(1);
				stored_pass=user_data->GetString(2);
				isApproved=user_data->GetString(4);
				//userCategory=user_data->GetString(7);
			}
			/*Debug::WriteLine("\n\n\n");
			Debug::WriteLine(stored_pass);d
			Debug::WriteLine(isApproved);
			Debug::WriteLine(userCategory);
			Debug::WriteLine("\n\n\n");*/

			DB_Connection->Close();
			if(isApproved=="NO")
			{
				MessageBox::Show("Not approved Yet!");
			}
			else
			{
				if(stored_pass==password)
				{	
					if(stored_username=="admin")
					{
						MessageBox::Show("Admin Login Successful!");
						Form_Reception ^form2 = gcnew Form_Reception();
						form2->ShowDialog();
			 
						//myForm = gcnew Form_Reception();
						//myForm->Show();
					}
					else if(stored_username=="receptionist")
					{
						MessageBox::Show("Receptionist login successful");
						Form_Reception ^form2 = gcnew Form_Reception();
						form2->ShowDialog();
					}
					else
					{

						//MessageBox::Show("User Login Successful!");
						Form_Reception ^form2 = gcnew Form_Reception();
						//Form_Customer_Homepage ^form2 = gcnew Form_Customer_Homepage();
						form2->ShowDialog();
						//this->Visible = false;
						//Form1 ^ form1 = gcnew Form1();
						//form1->ShowDialog();
						//form1->Output_Panel->Controls->Clear();
						//form1->Output_Panel->Controls->Add(gcnew UserControl_Customer_Homepage);
					}
					
				}
				else
				{
					MessageBox::Show("Wrong login credentials");
				}
			}

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			 }
private: System::Void UserControl_Login_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}