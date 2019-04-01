#pragma once
#using <System.dll>
#using <System.data.dll>
#include <string.h>
#include <regex>
#include <msclr\marshal_cppstd.h>

#include "Form_Reception.h"
#include "Form_Customer_Homepage.h"

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Web;
using namespace System::Net::Mail;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Login
	/// </summary>
	public ref class UserControl_Login : public System::Windows::Forms::UserControl
	{
	public:
		Form ^ gf;
		UserControl_Login(Form ^ f1)
		{
			InitializeComponent();

			gf = f1;
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
	private: System::Windows::Forms::Label^  Lbl_token;
	internal: 




	private: System::Windows::Forms::TextBox^  Txtbox_token;






	private: System::Windows::Forms::TextBox^  Txtbox_new_pass;
	private: System::Windows::Forms::TextBox^  Txtbox_confirm_pass;


	private: System::Windows::Forms::Button^  btn_reset;
	private: System::Windows::Forms::Label^  Lbl_new_pass;

	private: System::Windows::Forms::Button^  btn_checks;
	private: System::Windows::Forms::Label^  Lbl_confirm_pass;



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
			this->Btn_Forget = (gcnew System::Windows::Forms::Button());
			this->Btn_submit = (gcnew System::Windows::Forms::Button());
			this->Lbl_password = (gcnew System::Windows::Forms::Label());
			this->Txt_password = (gcnew System::Windows::Forms::TextBox());
			this->Txt_username = (gcnew System::Windows::Forms::TextBox());
			this->Lbl_username = (gcnew System::Windows::Forms::Label());
			this->Lbl_token = (gcnew System::Windows::Forms::Label());
			this->Txtbox_token = (gcnew System::Windows::Forms::TextBox());
			this->Txtbox_new_pass = (gcnew System::Windows::Forms::TextBox());
			this->Txtbox_confirm_pass = (gcnew System::Windows::Forms::TextBox());
			this->btn_reset = (gcnew System::Windows::Forms::Button());
			this->Lbl_new_pass = (gcnew System::Windows::Forms::Label());
			this->btn_checks = (gcnew System::Windows::Forms::Button());
			this->Lbl_confirm_pass = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Forget
			// 
			this->Btn_Forget->BackColor = System::Drawing::Color::Transparent;
			this->Btn_Forget->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Forget->Font = (gcnew System::Drawing::Font(L"Segoe Script", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Forget->ForeColor = System::Drawing::Color::White;
			this->Btn_Forget->Location = System::Drawing::Point(369, 250);
			this->Btn_Forget->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Forget->Name = L"Btn_Forget";
			this->Btn_Forget->Size = System::Drawing::Size(136, 29);
			this->Btn_Forget->TabIndex = 41;
			this->Btn_Forget->Text = L"Forget Password\?";
			this->Btn_Forget->UseVisualStyleBackColor = false;
			this->Btn_Forget->Click += gcnew System::EventHandler(this, &UserControl_Login::Btn_Forget_Click);
			// 
			// Btn_submit
			// 
			this->Btn_submit->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->Btn_submit->ForeColor = System::Drawing::Color::AliceBlue;
			this->Btn_submit->Location = System::Drawing::Point(268, 340);
			this->Btn_submit->Margin = System::Windows::Forms::Padding(2);
			this->Btn_submit->Name = L"Btn_submit";
			this->Btn_submit->Size = System::Drawing::Size(148, 48);
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
			this->Lbl_password->Location = System::Drawing::Point(186, 204);
			this->Lbl_password->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_password->Name = L"Lbl_password";
			this->Lbl_password->Size = System::Drawing::Size(104, 24);
			this->Lbl_password->TabIndex = 39;
			this->Lbl_password->Text = L"Password";
			// 
			// Txt_password
			// 
			this->Txt_password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_password->Location = System::Drawing::Point(335, 204);
			this->Txt_password->Margin = System::Windows::Forms::Padding(2);
			this->Txt_password->Name = L"Txt_password";
			this->Txt_password->PasswordChar = '*';
			this->Txt_password->Size = System::Drawing::Size(170, 27);
			this->Txt_password->TabIndex = 38;
			// 
			// Txt_username
			// 
			this->Txt_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_username->Location = System::Drawing::Point(335, 165);
			this->Txt_username->Margin = System::Windows::Forms::Padding(2);
			this->Txt_username->Name = L"Txt_username";
			this->Txt_username->Size = System::Drawing::Size(170, 27);
			this->Txt_username->TabIndex = 37;
			// 
			// Lbl_username
			// 
			this->Lbl_username->AutoSize = true;
			this->Lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_username->Location = System::Drawing::Point(186, 165);
			this->Lbl_username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_username->Name = L"Lbl_username";
			this->Lbl_username->Size = System::Drawing::Size(113, 24);
			this->Lbl_username->TabIndex = 36;
			this->Lbl_username->Text = L"Username";
			// 
			// Lbl_token
			// 
			this->Lbl_token->AutoSize = true;
			this->Lbl_token->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_token->Location = System::Drawing::Point(150, 108);
			this->Lbl_token->Name = L"Lbl_token";
			this->Lbl_token->Size = System::Drawing::Size(126, 23);
			this->Lbl_token->TabIndex = 43;
			this->Lbl_token->Text = L"Enter Token:";
			// 
			// Txtbox_token
			// 
			this->Txtbox_token->Location = System::Drawing::Point(282, 111);
			this->Txtbox_token->Name = L"Txtbox_token";
			this->Txtbox_token->Size = System::Drawing::Size(170, 20);
			this->Txtbox_token->TabIndex = 45;
			// 
			// Txtbox_new_pass
			// 
			this->Txtbox_new_pass->Location = System::Drawing::Point(304, 150);
			this->Txtbox_new_pass->Name = L"Txtbox_new_pass";
			this->Txtbox_new_pass->Size = System::Drawing::Size(170, 20);
			this->Txtbox_new_pass->TabIndex = 48;
			// 
			// Txtbox_confirm_pass
			// 
			this->Txtbox_confirm_pass->Location = System::Drawing::Point(304, 207);
			this->Txtbox_confirm_pass->Name = L"Txtbox_confirm_pass";
			this->Txtbox_confirm_pass->Size = System::Drawing::Size(170, 20);
			this->Txtbox_confirm_pass->TabIndex = 49;
			// 
			// btn_reset
			// 
			this->btn_reset->BackColor = System::Drawing::Color::OrangeRed;
			this->btn_reset->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_reset->Location = System::Drawing::Point(292, 240);
			this->btn_reset->Name = L"btn_reset";
			this->btn_reset->Size = System::Drawing::Size(101, 47);
			this->btn_reset->TabIndex = 50;
			this->btn_reset->Text = L"Reset";
			this->btn_reset->UseVisualStyleBackColor = false;
			this->btn_reset->Click += gcnew System::EventHandler(this, &UserControl_Login::btn_reset_Click);
			// 
			// Lbl_new_pass
			// 
			this->Lbl_new_pass->AutoSize = true;
			this->Lbl_new_pass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_new_pass->Location = System::Drawing::Point(64, 147);
			this->Lbl_new_pass->Name = L"Lbl_new_pass";
			this->Lbl_new_pass->Size = System::Drawing::Size(221, 23);
			this->Lbl_new_pass->TabIndex = 51;
			this->Lbl_new_pass->Text = L"Enter New Password: ";
			// 
			// btn_checks
			// 
			this->btn_checks->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_checks->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_checks->Location = System::Drawing::Point(475, 99);
			this->btn_checks->Name = L"btn_checks";
			this->btn_checks->Size = System::Drawing::Size(88, 36);
			this->btn_checks->TabIndex = 53;
			this->btn_checks->Text = L"Check";
			this->btn_checks->UseVisualStyleBackColor = false;
			this->btn_checks->Click += gcnew System::EventHandler(this, &UserControl_Login::btn_checks_Click);
			// 
			// Lbl_confirm_pass
			// 
			this->Lbl_confirm_pass->AutoSize = true;
			this->Lbl_confirm_pass->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_confirm_pass->Location = System::Drawing::Point(90, 204);
			this->Lbl_confirm_pass->Name = L"Lbl_confirm_pass";
			this->Lbl_confirm_pass->Size = System::Drawing::Size(195, 23);
			this->Lbl_confirm_pass->TabIndex = 54;
			this->Lbl_confirm_pass->Text = L"Confirm Password: ";
			// 
			// UserControl_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Lbl_confirm_pass);
			this->Controls->Add(this->btn_checks);
			this->Controls->Add(this->Lbl_new_pass);
			this->Controls->Add(this->btn_reset);
			this->Controls->Add(this->Txtbox_confirm_pass);
			this->Controls->Add(this->Txtbox_new_pass);
			this->Controls->Add(this->Txtbox_token);
			this->Controls->Add(this->Lbl_token);
			this->Controls->Add(this->Btn_Forget);
			this->Controls->Add(this->Btn_submit);
			this->Controls->Add(this->Lbl_password);
			this->Controls->Add(this->Txt_password);
			this->Controls->Add(this->Txt_username);
			this->Controls->Add(this->Lbl_username);
			this->Name = L"UserControl_Login";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Login::UserControl_Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String ^token_temp;
	String^ genToken(int n) 
	{ 
		String^ alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		String^ res = ""; 
		for (int i = 0; i < n; i++)  
			res = res + Convert::ToString(alphanum[rand() % 62]); 
		return res; 
	}

	private: System::Void Btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {

			String ^ stored_pass;
			try{
			
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();
			
			string sname = msclr::interop::marshal_as<std::string>(Txt_username->Text);
			//remove_if(sname.begin(), sname.end(), isspace);
			string spassword = msclr::interop::marshal_as<std::string>(Txt_password->Text);
			//remove_if(spassword.begin(), spassword.end(), isspace);

			regex rx("^[A-Z|a-z|.|0-9|_']+$");
			if(!regex_match(sname.cbegin(), sname.cend(), rx)){
				MessageBox::Show("Enter Username in Correct Format");
				goto ErrExit;
			}

			String ^ username = Txt_username->Text;
			String ^ password = Txt_password->Text;
			int hash = password->GetHashCode();
			password = Convert::ToString(hash);
		
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
						Form_Reception ^form2 = gcnew Form_Reception(gf);
						form2->ShowDialog();
			 
						//myForm = gcnew Form_Reception();
						//myForm->Show();
					}
					else if(stored_username=="receptionist")
					{
						MessageBox::Show("Receptionist login successful");
						Form_Reception ^form2 = gcnew Form_Reception(gf);
						form2->ShowDialog();
					}
					else
					{

						MessageBox::Show("User Login Successful!");
						//Form_Reception ^form2 = gcnew Form_Reception();
						Form_Customer_Homepage ^form2 = gcnew Form_Customer_Homepage(username,gf);
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
ErrExit:
			;
			 }
private: System::Void UserControl_Login_Load(System::Object^  sender, System::EventArgs^  e) {
			 Lbl_token->Visible = false;
			 Lbl_new_pass->Visible = false;
			 Lbl_confirm_pass->Visible = false;
			 Txtbox_token->Visible = false;
			 Txtbox_new_pass->Visible = false;
			 Txtbox_confirm_pass->Visible = false;
			 btn_checks->Visible = false;
			 btn_reset->Visible = false;
		 }

private: System::Void Btn_Forget_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^username = Txt_username->Text;

			 if (Txt_username->Text=="")
			 {	
				 Lbl_password->Visible = false;
				 Txt_password->Visible = false;
				 Btn_submit->Visible = false;
				 //MessageBox::Show("Enter Username");
				 goto ErrExit;
			 }
			 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			 DB_Connection->Open();
			 String ^ getuserString = "Select * from [User_Table] where [Username] = '" +username+ "';";
			 OleDbCommand ^ cmd2 = gcnew OleDbCommand(getuserString, DB_Connection);
			 OleDbDataReader ^ user_data2 = cmd2->ExecuteReader();
			 if(user_data2->Read() == false){
				 MessageBox::Show("This username does not exist in our database. Enter a valid username.");
				 goto ErrExit;
			 }

			 DB_Connection->Close();

			 Lbl_username->Visible = false;
			 Lbl_password->Visible = false;
			 Txt_username->Visible = false;
			 Txt_password->Visible = false;
			 Btn_submit->Visible = false;
			 Lbl_token->Visible = true;
			 Txtbox_token->Visible = true;
			 btn_checks->Visible = true;
			 Btn_Forget->Visible = false;

			 DB_Connection->Open();

			 String ^ getUserData = "Select * from User_Table where [Username] = '" + username + "' AND [Approved]= 'YES';";

			 String ^ stored_email;
			 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);

			 OleDbDataReader ^ user_data = cmd->ExecuteReader();

			 while(user_data->Read() == true)
			 {
				 stored_email = user_data->GetString(8);
			 }
			 
			 String ^token=genToken(10);
			 token_temp = token;
			 //MessageBox::Show(token);
			 DB_Connection->Close();

			 
			try{
				MailMessage ^ mail = gcnew MailMessage("iitgguesthouse@gmail.com",stored_email,"Password Change","How can someone forget his password? Fine, use this token to change your password: "+token);
				SmtpClient ^ client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				client->Credentials = gcnew System::Net::NetworkCredential("iitgguesthouse","MMMM1234");
				client->EnableSsl = true;
				client->Send(mail);
				MessageBox::Show("Mail Sent!","Success",MessageBoxButtons::OK);

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show("Unable to send E-mail");

			}
			 
ErrExit:
			 ;
		 }

private: System::Void btn_reset_Click(System::Object^  sender, System::EventArgs^  e) {

			 string spassword = tosstring(Txtbox_new_pass->Text);
			 //remove_if(spassword.begin(), spassword.end(), isspace);
			 string sconfirm_password = tosstring(Txtbox_confirm_pass->Text);
			 //remove_if(sconfirm_password.begin(), sconfirm_password.end(), isspace);

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

			 String ^username = Txt_username->Text;
			 String ^password = Txtbox_new_pass->Text;
			 int hash = password->GetHashCode();
			 password = Convert::ToString(hash);

			 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			 String ^ reset_pass= "UPDATE [User_Table] SET [Password] = '" +password+ "' Where [Username] = '" +username+ "' ;";
			 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(reset_pass, DB_Connection);

			 DB_Connection->Open();

			 cmd->ExecuteNonQuery();

			 DB_Connection->Close();
			 MessageBox::Show("Password updated.");
			 this->Controls->Clear();
			 this->InitializeComponent();
			 UserControl_Login_Load(sender,e);
ErrExit:
			 ;
		 }

private: System::Void btn_checks_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^token_text = Txtbox_token->Text;
			 if(token_text == token_temp){
				 Lbl_token->Visible = false;
				 Txtbox_token->Visible = false;
				 btn_checks->Visible = false;
				 Lbl_new_pass->Visible = true;
				 Lbl_confirm_pass->Visible = true;
				 Txtbox_new_pass->Visible = true;
				 Txtbox_confirm_pass->Visible = true;
				 btn_reset->Visible = true;
			 }
			 else{
				 MessageBox::Show("Wrong token. please try again.");
			 }
		 }
};
}