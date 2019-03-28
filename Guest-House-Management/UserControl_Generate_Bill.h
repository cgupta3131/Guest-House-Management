#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
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
	/// Summary for UserControl_Generate_Bill
	/// </summary>
	public ref class UserControl_Generate_Bill : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Generate_Bill(void)
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
		~UserControl_Generate_Bill()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

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
			this->SuspendLayout();
			// 
			// UserControl_Generate_Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Name = L"UserControl_Generate_Bill";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Generate_Bill::UserControl_Generate_Bill_Load);
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
			String ^ userdata = "UPDATE Booking_Request SET [Checked_Out] = @app Where [ID] = @idNum;";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(userdata, DB_Connection);
			cmd->Parameters->AddWithValue("@app", "NO");
			cmd->Parameters->AddWithValue("@idNum", x);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			this->Controls->Clear();
			DB_Connection->Open();
			String ^getUsers = "Select * from [Booking_Request] where [ID] = " + x + ";";
			cmd = gcnew OleDbCommand(getUsers, DB_Connection);
			OleDbDataReader ^ room_data = cmd->ExecuteReader();

			String ^room_type;
			String ^user_type;
			while(room_data->Read() == true)
			{
				room_type = room_data->GetString(6);
				user_type = room_data->GetString(2);
			}
			cliext::vector<String^> room_full_data;
			String ^temp;
			for(int j=0;j<room_type->Length;j++)
			{
				if(room_type[j] == ',')
				{
					room_full_data.push_back(temp);
					temp = "";
				}
				else
					temp = temp + room_type[j];
			}
			DB_Connection->Close();

			for(int i=0;i<room_full_data.size();i++)
			{
				int len = room_full_data[i]->Length;
				Char ^room_count2 = room_full_data[i][len-1];
				String ^room_count3 = Convert::ToString(room_count2);
				int room_cnt = Convert::ToInt32(room_count3);
				room_full_data[i] = room_full_data[i]->Substring(0,len-2);

				//Now room_cnt is total rooms for room_full_date[i] room type

				DB_Connection->Open();
				String ^getPrice = "Select * from [User_Room_Price] where [User_Types] = '" + user_type + "' AND [Room_Types] = '" + room_full_data[i] + "' ";
				cmd = gcnew OleDbCommand(getPrice, DB_Connection);
				OleDbDataReader ^ room_price = cmd->ExecuteReader();

				int price;
				while(room_price->Read() == true)
				{
					String ^price_string = room_price->GetString(3);
					price = Convert::ToInt32(price_string);
				}
				DB_Connection->Close();

				DB_Connection->Open();
				String ^GHinfo = "Select * from [Guest_House_Info] ";
				cmd = gcnew OleDbCommand(GHinfo, DB_Connection);
				OleDbDataReader ^ info = cmd->ExecuteReader();
				String ^name;
				String ^address;
				String ^contact;
				String ^email;
				while(info->Read() == true)
				{
					name = info->GetString(1);
					address = info->GetString(2);
					contact = info->GetString(3);
					email = info->GetString(4);
				}
				DB_Connection->Close();

				TextBox ^ tb = gcnew TextBox();
				tb->Text = room_full_data[i] + ":"+ price + "\t" + price*room_cnt;
				tb->Location = System::Drawing::Point(20,140*(i+1));
				tb->Width = 500;
				tb->Height = 100;
				tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
				tb->Multiline = true;
				tb->ReadOnly = true;
				tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				tb->Name = "TextBox" + i;
				this->Controls->Add(tb);
			}

			//UserControl_Generate_Bill_Load(sender,e);
		}


	private: System::Void UserControl_Generate_Bill_Load(System::Object^  sender, System::EventArgs^  e) {

				 String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");
				 //MessageBox::Show(today_date);

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUsers = "Select * from Booking_Request where [Checked_Out] = 'NO' AND [Approved] = 'YES' ";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
				 OleDbDataReader ^ users_data = cmd->ExecuteReader();
				 //MessageBox::Show(today_date);
				 
				 int i=0;
				 while(users_data->Read() == true)
				 {
					 String ^temp = users_data->GetString(5);
					 String ^dateto = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +													  Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy
					 temp = users_data->GetString(4);
					 String ^datefrom = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +													  Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy
					
					 int datefrom_int = System::Convert::ToInt32(datefrom);
					 int dateto_int = System::Convert::ToInt32(dateto);
					 int today_date_int = System::Convert::ToInt32(today_date);
					 if(today_date_int <= dateto_int)
					 {
						 i=i+1;
						 TextBox ^ tb = gcnew TextBox();
						 tb->Text = "Username : " + users_data->GetString(1) + "\r\n" + 
									"Name : " + users_data->GetString(3) + "\r\n" + 
									"Check-in : " + users_data->GetString(4) + "\r\n" +
									"Check-out : " + users_data->GetString(5) + "\r\n";

						 tb->Location = System::Drawing::Point(20,140*i);
						 tb->Width = 300;
						 tb->Height = 100;
						 tb->Multiline = true;
						 tb->ReadOnly = true;
						 tb->Name = "TextBox" + i;
						 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
							 static_cast<System::Byte>(0)));
						 this->Controls->Add(tb);

						 Button ^ btnCheckout = gcnew Button();
						 btnCheckout->Width = 120;
						 btnCheckout->Height = 30;
						 btnCheckout->Tag = users_data->GetInt32(0);
						 btnCheckout->Text = "Checkout";
						 btnCheckout->Location = System::Drawing::Point(350,140*i);
						 btnCheckout->Click += gcnew System::EventHandler(this,&UserControl_Generate_Bill::approve_button_click);
						 this->Controls->Add(btnCheckout);

					 }
				 }

				 DB_Connection->Close();

			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
