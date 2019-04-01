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
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  Mess_Panel;
	private: System::Windows::Forms::Button^  button1;
	internal: 
	private: 
	public: 
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Mess_Panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Mess_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(114, 321);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(74, 29);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(114, 244);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 29);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Contact Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(114, 159);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(114, 101);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 29);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Name";
			// 
			// Txt_Email
			// 
			this->Txt_Email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Email->Location = System::Drawing::Point(396, 324);
			this->Txt_Email->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Email->Name = L"Txt_Email";
			this->Txt_Email->Size = System::Drawing::Size(267, 26);
			this->Txt_Email->TabIndex = 51;
			// 
			// Txt_Contact
			// 
			this->Txt_Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Contact->Location = System::Drawing::Point(396, 247);
			this->Txt_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Contact->Name = L"Txt_Contact";
			this->Txt_Contact->Size = System::Drawing::Size(267, 26);
			this->Txt_Contact->TabIndex = 52;
			// 
			// Txt_Address
			// 
			this->Txt_Address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Address->Location = System::Drawing::Point(396, 161);
			this->Txt_Address->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Address->Multiline = true;
			this->Txt_Address->Name = L"Txt_Address";
			this->Txt_Address->Size = System::Drawing::Size(267, 53);
			this->Txt_Address->TabIndex = 53;
			// 
			// Txt_Name
			// 
			this->Txt_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Name->Location = System::Drawing::Point(396, 105);
			this->Txt_Name->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Name->Name = L"Txt_Name";
			this->Txt_Name->Size = System::Drawing::Size(267, 26);
			this->Txt_Name->TabIndex = 54;
			// 
			// Btn_Submit
			// 
			this->Btn_Submit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Btn_Submit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Submit->Location = System::Drawing::Point(119, 401);
			this->Btn_Submit->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Submit->Name = L"Btn_Submit";
			this->Btn_Submit->Size = System::Drawing::Size(225, 86);
			this->Btn_Submit->TabIndex = 68;
			this->Btn_Submit->Text = L"Submit Changes";
			this->Btn_Submit->UseVisualStyleBackColor = false;
			this->Btn_Submit->Click += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::Btn_Submit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(281, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(251, 29);
			this->label4->TabIndex = 73;
			this->label4->Text = L"Guest House Details";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 126);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 76;
			this->pictureBox1->TabStop = false;
			// 
			// Mess_Panel
			// 
			this->Mess_Panel->Controls->Add(this->pictureBox1);
			this->Mess_Panel->Location = System::Drawing::Point(635, 379);
			this->Mess_Panel->Margin = System::Windows::Forms::Padding(2);
			this->Mess_Panel->Name = L"Mess_Panel";
			this->Mess_Panel->Size = System::Drawing::Size(184, 126);
			this->Mess_Panel->TabIndex = 78;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(459, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 72);
			this->button1->TabIndex = 79;
			this->button1->Text = L"Add Image";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::button1_Click_1);
			// 
			// UserControl_Guest_House_Info
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Mess_Panel);
			this->Controls->Add(this->label4);
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
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::UserControl_Guest_House_Info_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Guest_House_Info::myMouseEnter);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Mess_Panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//public: ^EventHandler OnLoggedIn;
	/*private: System::Void UC_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);

			 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					  }
}*/
	private: System::Void UserControl_Guest_House_Info_Load(System::Object^  sender, System::EventArgs^  e) {
				 //pnl->Size = System::Drawing::Size(173, 44);
				 //pnl->BringToFront();
				 //Second_Panel->Visible = false;
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

					 String ^ name2 = "guest_house";
					 if(pictureBox1->Image)
					 {
						 try
						 {
							 Image ^ img = pictureBox1->Image;
							 img->Save(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\" + name2 + ".jpg");
						 }
						 catch(Exception ^ ex)
						 {
							 MessageBox::Show(ex->Message,"Warning");
						 }
					 }

					 MessageBox::Show("Successfully updated Guest House Details", "Notification");

				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
ErrExit:
				 ;
			 }

	public: System::Void myMouseEnter(System::Object^  sender, System::EventArgs^  e) {
				pnl->Size = System::Drawing::Size(173, 44);
				pn2->Size = System::Drawing::Size(173, 44);
				pn3->Size = System::Drawing::Size(173, 44);
				pn4->Size = System::Drawing::Size(173, 44);
				pn5->Size = System::Drawing::Size(173, 44);
				 //if (this->myMouseEnter!= nullptr)
					// this->myMouseEnter(this, e); 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Mess_Panel->Controls->Clear();
			 this->Mess_Panel->Controls->Add(this->pictureBox1);
			 OpenFileDialog ^ dialog=gcnew OpenFileDialog;
			 dialog->Title = "Browse Picture";
			 dialog->Filter = "Image Files(*.BMP;*.JPEG,*.JPG;*.GIF;*.PNG)|*.BMP;*.JPEG;*.JPG;*.GIF;*.PNG";
			 if(dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 this->pictureBox1->Image = Image::FromFile(dialog->FileName);
			 }
		 }
};


}
