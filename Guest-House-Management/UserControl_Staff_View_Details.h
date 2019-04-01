#pragma once

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
	/// Summary for UserControl_Staff_View_Details
	/// </summary>
	public ref class UserControl_Staff_View_Details : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_View_Details(void)
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
		~UserControl_Staff_View_Details()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Text_ID;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Text_Name;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Text_Desig;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Text_Join;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Text_Birth;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Text_Address;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  Text_Contact;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  Text_Email;

	private: System::Windows::Forms::TextBox^  Text_Resignation;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  Text_ID_Proof;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Text_Gender;
	private: System::Windows::Forms::Label^  label5;


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
			this->Text_ID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Text_Name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_Desig = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Text_Join = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Text_Birth = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Text_Address = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Text_Contact = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Text_Email = (gcnew System::Windows::Forms::TextBox());
			this->Text_Resignation = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Text_ID_Proof = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Text_Gender = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(149, 49);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee ID";
			// 
			// Text_ID
			// 
			this->Text_ID->Location = System::Drawing::Point(319, 51);
			this->Text_ID->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_ID->Name = L"Text_ID";
			this->Text_ID->ReadOnly = true;
			this->Text_ID->Size = System::Drawing::Size(188, 20);
			this->Text_ID->TabIndex = 1;
			this->Text_ID->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_View_Details::Text_ID_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(149, 19);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name";
			// 
			// Text_Name
			// 
			this->Text_Name->Location = System::Drawing::Point(319, 20);
			this->Text_Name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Name->Name = L"Text_Name";
			this->Text_Name->ReadOnly = true;
			this->Text_Name->Size = System::Drawing::Size(188, 20);
			this->Text_Name->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(149, 80);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Designation";
			// 
			// Text_Desig
			// 
			this->Text_Desig->Location = System::Drawing::Point(319, 83);
			this->Text_Desig->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Desig->Name = L"Text_Desig";
			this->Text_Desig->ReadOnly = true;
			this->Text_Desig->Size = System::Drawing::Size(188, 20);
			this->Text_Desig->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(149, 115);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date of Join";
			// 
			// Text_Join
			// 
			this->Text_Join->Location = System::Drawing::Point(319, 116);
			this->Text_Join->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Join->Name = L"Text_Join";
			this->Text_Join->ReadOnly = true;
			this->Text_Join->Size = System::Drawing::Size(188, 20);
			this->Text_Join->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(149, 188);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date of Birth";
			// 
			// Text_Birth
			// 
			this->Text_Birth->Location = System::Drawing::Point(319, 187);
			this->Text_Birth->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Birth->Name = L"Text_Birth";
			this->Text_Birth->ReadOnly = true;
			this->Text_Birth->Size = System::Drawing::Size(188, 20);
			this->Text_Birth->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 274);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Address";
			// 
			// Text_Address
			// 
			this->Text_Address->Location = System::Drawing::Point(319, 273);
			this->Text_Address->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Address->Multiline = true;
			this->Text_Address->Name = L"Text_Address";
			this->Text_Address->ReadOnly = true;
			this->Text_Address->Size = System::Drawing::Size(188, 19);
			this->Text_Address->TabIndex = 15;
			this->Text_Address->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_View_Details::Text_Address_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(149, 315);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Contact Number";
			// 
			// Text_Contact
			// 
			this->Text_Contact->Location = System::Drawing::Point(319, 317);
			this->Text_Contact->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Contact->Multiline = true;
			this->Text_Contact->Name = L"Text_Contact";
			this->Text_Contact->ReadOnly = true;
			this->Text_Contact->Size = System::Drawing::Size(188, 19);
			this->Text_Contact->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(149, 354);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Email";
			this->label10->Click += gcnew System::EventHandler(this, &UserControl_Staff_View_Details::label10_Click);
			// 
			// Text_Email
			// 
			this->Text_Email->Location = System::Drawing::Point(319, 356);
			this->Text_Email->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Email->Multiline = true;
			this->Text_Email->Name = L"Text_Email";
			this->Text_Email->ReadOnly = true;
			this->Text_Email->Size = System::Drawing::Size(188, 19);
			this->Text_Email->TabIndex = 19;
			// 
			// Text_Resignation
			// 
			this->Text_Resignation->Location = System::Drawing::Point(319, 388);
			this->Text_Resignation->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Text_Resignation->Multiline = true;
			this->Text_Resignation->Name = L"Text_Resignation";
			this->Text_Resignation->ReadOnly = true;
			this->Text_Resignation->Size = System::Drawing::Size(188, 20);
			this->Text_Resignation->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(149, 387);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(144, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Date of resignation";
			// 
			// Text_ID_Proof
			// 
			this->Text_ID_Proof->Location = System::Drawing::Point(319, 231);
			this->Text_ID_Proof->Margin = System::Windows::Forms::Padding(2);
			this->Text_ID_Proof->Name = L"Text_ID_Proof";
			this->Text_ID_Proof->ReadOnly = true;
			this->Text_ID_Proof->Size = System::Drawing::Size(188, 20);
			this->Text_ID_Proof->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(149, 230);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Identity Proof";
			// 
			// Text_Gender
			// 
			this->Text_Gender->Location = System::Drawing::Point(319, 147);
			this->Text_Gender->Margin = System::Windows::Forms::Padding(2);
			this->Text_Gender->Name = L"Text_Gender";
			this->Text_Gender->ReadOnly = true;
			this->Text_Gender->Size = System::Drawing::Size(188, 20);
			this->Text_Gender->TabIndex = 9;
			this->Text_Gender->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_View_Details::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(149, 148);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Gender";
			// 
			// UserControl_Staff_View_Details
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->Controls->Add(this->Text_Resignation);
			this->Controls->Add(this->label11);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_Staff_View_Details";
			this->Size = System::Drawing::Size(687, 435);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_View_Details::UserControl_Staff_View_Details_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Staff_View_Details_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern int S_ID;
				 Text_ID->Text = Convert::ToString(S_ID);
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
					 if(user_data->GetString(9) != ""){
						 Text_Email->Text = user_data->GetString(9);
					 }
					 if(user_data->GetString(10) != ""){
						 Text_Resignation->Text = user_data->GetString(10);
					 }

				 }
				 //cmd->ExecuteNonQuery();
				 DB_Connection->Close();
			 }

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Address_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_ID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}