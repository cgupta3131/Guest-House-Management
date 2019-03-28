#pragma once
#include<ctype.h>

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Approve_Users
	/// </summary>
	public ref class UserControl_Approve_Users : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Approve_Users(void)
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
		~UserControl_Approve_Users()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Users to be Approved";
			// 
			// UserControl_Approve_Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Approve_Users";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Approve_Users::UserControl_Approve_Users_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	void approve_button_click(System::Object^  sender, System::EventArgs^  e)
	{
		Button^ btn = gcnew Button();
		btn = static_cast<Button^>(sender);
		int x = static_cast<int>(btn->Tag);

		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
		
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

		DB_Connection->Open();
			
		String ^ approveUser = "UPDATE User_Table SET [Approved] = @app Where [ID] = @idNum;";
		
		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(approveUser, DB_Connection);
		cmd->Parameters->AddWithValue("@app", "YES");
		cmd->Parameters->AddWithValue("@idNum", x);
		//String ^ temp = Convert::ToString(x);
		//MessageBox::Show(temp);
		cmd->ExecuteNonQuery();

		DB_Connection->Close();
		MessageBox::Show("User approved");
		this->Controls->Clear();
		this->InitializeComponent();
		UserControl_Approve_Users_Load(sender,e);

	}

	void cancel_button_click(System::Object^  sender, System::EventArgs^  e)
	{
		Button^ btn = gcnew Button();
		btn = static_cast<Button^>(sender);
		int x = static_cast<int>(btn->Tag);

		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
		
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
		DB_Connection->Open();
			
		String ^ approveUser = "DELETE From User_Table Where [ID] = @idNum;";
		
		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(approveUser, DB_Connection);
		cmd->Parameters->AddWithValue("@idNum", x);
		cmd->ExecuteNonQuery();
		DB_Connection->Close();
		MessageBox::Show("User Deleted"); 

		this->Controls->Clear();
		this->InitializeComponent();
		UserControl_Approve_Users_Load(sender,e);
	}

	private: System::Void UserControl_Approve_Users_Load(System::Object^  sender, System::EventArgs^  e) {
				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				DB_Connection->Open();
			
				String ^ getNonApprovedUsers = "Select * from User_Table where [Approved] = 'NO'";
		
				OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getNonApprovedUsers, DB_Connection);
				OleDbDataReader ^ users_data = cmd->ExecuteReader();

				int i=0;
				MessageBox::Show("Chirag");
				while(users_data->Read() == true)
				{
					i=i+1;
					TextBox ^tb = gcnew TextBox();
					tb->Text = "Username    : " + users_data->GetString(1) + "\r\n" + 
						"Email     : " + users_data->GetString(8) + "\r\n" + 
						"Contact No. : " + users_data->GetString(3) + "\r\n" + 
						"Name        : " + users_data->GetString(5) + " " + users_data->GetString(6) + "\r\n";

					tb->Location = System::Drawing::Point(20,140*i);
					tb->Width = 450;
					tb->Height = 120;
					tb->Name = "TextBox" + i;
					tb->Multiline = true;
					tb->ReadOnly = true;
					tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(0)));
					this->Controls->Add(tb);

					Button ^ btnApprove = gcnew Button();
					btnApprove->Width = 120;
					btnApprove->Height = 30;
					btnApprove->Tag = users_data->GetInt32(0);
					btnApprove->Text = "Approve";
					btnApprove->Location = System::Drawing::Point(500,140*i);
					btnApprove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(0)));
					btnApprove->Click += gcnew System::EventHandler(this,&UserControl_Approve_Users::approve_button_click);
					this->Controls->Add(btnApprove);

					Button ^ btnCancel = gcnew Button();
					btnCancel->Width = 120;
					btnCancel->Height = 30;
					btnCancel->Tag = users_data->GetInt32(0);
					btnCancel->Text = "Cancel";
					btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(0)));
					btnCancel->Location = System::Drawing::Point(500,140*i+40);
					btnCancel->Click += gcnew System::EventHandler(this,&UserControl_Approve_Users::cancel_button_click);
					this->Controls->Add(btnCancel);
			}
			
				if(i == 0)
					label1->Text = "No Users to be Approved";
			 }
	};
}
