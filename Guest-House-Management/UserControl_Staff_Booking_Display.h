#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Booking_Display
	/// </summary>
	public ref class UserControl_Staff_Booking_Display : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Booking_Display(void)
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
		~UserControl_Staff_Booking_Display()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// UserControl_Staff_Booking_Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Name = L"UserControl_Staff_Booking_Display";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Booking_Display::UserControl_Staff_Booking_Display_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserControl_Staff_Booking_Display_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUsers = "Select * from Booking_Request where [Approved] = 'YES' AND [Checked_Out] = 'NO'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
				 OleDbDataReader ^ users_data = cmd->ExecuteReader();

				 int i=0, j=0;
				 while(users_data->Read() == true)
				 {
					 i=i+1;
					 j=(j)%3 + 1;
					 TextBox ^tb = gcnew TextBox();
					 tb->Text = users_data->GetString(3) + "\r\n" + users_data->GetString(4) + "\r\n" + users_data->GetString(5) + "\r\n" + users_data->GetString(14) + "\r\n" + users_data->GetString(6) + "\r\n" + users_data->GetString(7);
					 //MessageBox::Show(tb->Text);
					 tb->Location = System::Drawing::Point(25 + 200*(j-1),100*((i-1)/3)+100);
					 tb->Width = 200;
					 tb->Height = 90;
					 tb->Name = "TextBox" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 this->Controls->Add(tb);
				 }
				 DB_Connection->Close();
			 }
	};
}
