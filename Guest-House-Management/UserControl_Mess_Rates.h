#pragma once

# include <ctype.h>
# include <iomanip>

#using <System.dll>
#using <System.data.dll>

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
	/// Summary for UserControl_Mess_Rates
	/// </summary>
	public ref class UserControl_Mess_Rates : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Mess_Rates(void)
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
		~UserControl_Mess_Rates()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Breakfast";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(268, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Lunch";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Dinner";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(268, 152);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(268, 214);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 22);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 44);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Mess_Rates::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(157, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Please enter all the rates in Rs.";
			// 
			// UserControl_Mess_Rates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Mess_Rates";
			this->Size = System::Drawing::Size(548, 339);
			this->Load += gcnew System::EventHandler(this, &UserControl_Mess_Rates::UserControl_Mess_Rates_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Mess_Rates_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getUserData = "Select * From Mess_Rates where ID like 1";
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);

					 OleDbDataReader ^ user_data = cmdUpdate->ExecuteReader();

					 while(user_data->Read() == true)
					 {
						 textBox1->Text=Convert::ToString(user_data->GetInt32(1));
						 textBox2->Text=Convert::ToString(user_data->GetInt32(2));
						 textBox3->Text=Convert::ToString(user_data->GetInt32(3));
					 }
					 DB_Connection->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^ str = textBox1->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(isdigit(str[i])||str[i]=='.')
					 {
						 continue;
					 }
					 MessageBox::Show("Rates can contain only digits","Warning");
					 return; 
				 }
				 str = textBox2->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(isdigit(str[i])||str[i]=='.')
					 {
						 continue;
					 }
					 MessageBox::Show("Rates can contain only digits","Warning");
					 return; 
				 }
				 str = textBox3->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(isdigit(str[i])||str[i]=='.')
					 {
						 continue;
					 }
					 MessageBox::Show("Rates can contain only digits","Warning");
					 return; 
				 }
				 if(textBox1->Text->Length>8||textBox1->Text->Length>8||textBox1->Text->Length>8) 
				 {
					 MessageBox::Show("Can't enter more than 8 characters for rates","Warning");
					 return;
				 }
				 if(textBox1->Text == ""||textBox2->Text == ""||textBox3->Text == "")
				 {
					 MessageBox::Show("All fields must be filled out","Warning");
					 return;
				 }
				 try
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getUserData = "Select * From Mess_Rates where ID like 1";
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
					 cmdUpdate->CommandText = "UPDATE Mess_Rates SET Breakfast = " + Convert::ToInt32(textBox1->Text) + " , Lunch = " + Convert::ToInt32(textBox2->Text) + " , Dinner = " + Convert::ToInt32(textBox3->Text) + " WHERE ID = 1;";
					 cmdUpdate->ExecuteNonQuery();
					 MessageBox::Show("Changes Saved");
					 DB_Connection->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
				 }
			 }
	};
}
