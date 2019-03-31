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
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Staff_Booking_Display(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Booking_Display::okkk);
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

				 int i=0;
				 while(users_data->Read() == true)
				 {
					 i=i+1;
					 //j=(j)%3 + 1;
					 TextBox ^tb = gcnew TextBox();
					 String ^str = users_data->GetString(14);
					 int len = str->Length;
					 tb->Text = "Name : " + users_data->GetString(3) + "\t\t Contact Number : " + users_data->GetString(7) + "\r\n" +
								"Check-in : " + users_data->GetString(4) + "\t Check-out : " + users_data->GetString(5) + "\r\n" + 
								"Room Nos. : " + str->Substring(0,len-1);
					 //MessageBox::Show(tb->Text);
					 tb->Location = System::Drawing::Point(40 , 100*(i-1)+10);
					 tb->Width = 580;
					 tb->Height = 90;
					 tb->Name = "TextBox" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 //tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 tb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(202)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(212)));
					 tb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 this->Controls->Add(tb);
				 }
				 DB_Connection->Close();
			 }
	private: System::Void okkk(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	};
}
