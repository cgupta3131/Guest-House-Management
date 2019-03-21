#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>
//

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
	/// Summary for UserControl_Booking_Approval
	/// </summary>
	public ref class UserControl_Booking_Approval : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Booking_Approval(void)
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
		~UserControl_Booking_Approval()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::ComboBox^  Txt_Room_Type;
	protected: 
	internal: System::Windows::Forms::Label^  label2;

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
			this->Txt_Room_Type = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Txt_Room_Type
			// 
			this->Txt_Room_Type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Room_Type->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room_Type->FormattingEnabled = true;
			this->Txt_Room_Type->Location = System::Drawing::Point(256, 71);
			this->Txt_Room_Type->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room_Type->Name = L"Txt_Room_Type";
			this->Txt_Room_Type->Size = System::Drawing::Size(238, 25);
			this->Txt_Room_Type->TabIndex = 72;
			this->Txt_Room_Type->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Booking_Approval::Txt_Room_Type_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(71, 67);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 24);
			this->label2->TabIndex = 71;
			this->label2->Text = L"Room Type";
			// 
			// UserControl_Booking_Approval
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Txt_Room_Type);
			this->Controls->Add(this->label2);
			this->Name = L"UserControl_Booking_Approval";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Booking_Approval::UserControl_Booking_Approval_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static int n = 0;
		static String ^txt = "";
		String ^txt2;

		void approve_button_click(System::Object^  sender, System::EventArgs^  e)
		{
			Button^ btn = gcnew Button();
			btn = static_cast<Button^>(sender);
			int x = static_cast<int>(btn->Tag);
			String ^room_number;

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

			DB_Connection->Open();
			String ^ getroomNo = "Select * from [Room_No] where [Category] = '" + txt + "' AND [Status] = 'Available' ;";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getroomNo, DB_Connection);
			OleDbDataReader ^ room_data = cmd->ExecuteReader();
			cliext::vector<String^> vec;
			while(room_data->Read() == true)
			{
				room_number = room_data->GetString(1);
				vec.push_back(room_number);
			}
			DB_Connection->Close();

			for(int i=0;i<vec.size();i++)
			{
				//vec[i] denotes the Potential Room No. Available
				DB_Connection->Open();
				String ^getRooms = "Select * from [Bookin_Request] where [Room_Type] = '" + txt +"' AND [Approved] = 'YES';";
				cmd = gcnew OleDbCommand(getRooms,DB_Connection);
				OleDbDataReader ^roomdata = cmd->ExecuteReader();

				while(roomdata->Read() == true)
				{
					String ^datefrom = roomdata->GetString(4); //yyyymmdd
					String ^dateto = roomdata->GetString(5);
					//mydatefrom and //mydateto
					int datefrom_int = System::Convert::ToInt32(datefrom);
					int dateto_int = System::Convert::ToInt32(dateto);
					int mydatefrom_int = System::Convert::ToInt32(mydatefrom);
					int mydateto_int = System::Convert::ToInt32(mydateto);
					int flag = 1;

					if(mydatefrom_int < datefrom_int)
					{
						if(mydateto_int <= datefrom_int)
						{
							//I can book
							flag = 1;
							break;
						}
						else
							//I can't book book
					}

					else if(mydatefrom_int == datefrom_int)
					{
						//I can't book
					}

					else if(mydatefrom_int > datefrom_int)
					{
						if(mydatefrom_int >= dateto_int)
						{
							//I can book
							flag = 1;
							break;
						}
						else
							//I can't book
					}

				}
				if(flag == 0)
					MessageBox::Show("No room available for the given duration")
				DB_Connection->Close();
			}
			DB_Connection->Open();
			//---------------------Room Number and Approved Status in Booking Request UPDATED--------------------//
			String ^ approveUser = "UPDATE Booking_Request SET [Approved] = @app, [Room_No] = '" + room_number + "' Where [Serial_Number] = @idNum;";
			cmd = gcnew OleDbCommand(approveUser, DB_Connection);
			cmd->Parameters->AddWithValue("@app", "YES");
			cmd->Parameters->AddWithValue("@idNum", x);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			DB_Connection->Open();
			String ^ updateRoomStatus = "UPDATE [Room_No] SET [Status] = 'Taken' Where [Room_No] = '"+ room_number +"' ;";
			cmd = gcnew OleDbCommand(updateRoomStatus, DB_Connection);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			//--------DISPLAYING THE MESSAGE-------------//
			MessageBox::Show("Booking approved");
			UserControl_Booking_Approval_Load(sender,e);
			
		}

		void cancel_button_click(System::Object^  sender, System::EventArgs^  e)
		{
			Button^ btn = gcnew Button();
			btn = static_cast<Button^>(sender);
			int x = static_cast<int>(btn->Tag);

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();

			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			String ^ approveUser = "DELETE From Booking_Request Where [Serial_Number] = @idNum;";


			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(approveUser, DB_Connection);
			cmd->Parameters->AddWithValue("@idNum", x);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();
			MessageBox::Show("Booking Deleted");
			UserControl_Booking_Approval_Load(sender,e);
		}

	private: System::Void UserControl_Booking_Approval_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 OleDb::OleDbConnection ^ DB_Connection2 = gcnew OleDb::OleDbConnection();
				 DB_Connection2->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

				 DB_Connection->Open();
				 String ^ getRoomData = "Select * from [Room_Types]";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				 OleDbDataReader ^ room_type = cmd->ExecuteReader();

				 cliext::vector<String^> vec;
				 Txt_Room_Type->Items->Clear();
				 while(room_type->Read() == true)
				 {
					 String ^temp = room_type->GetString(1);
					 Txt_Room_Type->Items->Add(temp);
				 }
				 Txt_Room_Type->Items->Add("All");
				 DB_Connection->Close();

				 DB_Connection2->Open();
				 String ^room_types = "Update [Room_Types] SET Count_Room = 0";
				 OleDbCommand ^ cmd3 = gcnew OleDbCommand(room_types, DB_Connection2);
				 cmd3->ExecuteNonQuery();
				 DB_Connection2->Close();

				 //For updating the Number of Rooms in the Database of Room_Types Table
				 DB_Connection->Open();
				 String ^roomNo = "Select * from [Room_No] where [Status] = 'Available' ;";
				 OleDbCommand ^ cmd2 = gcnew OleDbCommand(roomNo, DB_Connection);
				 OleDbDataReader ^ room_no = cmd2->ExecuteReader();

				 while(room_no->Read() == true)
				 {
					 DB_Connection2->Open();
					 String ^temp = room_no->GetString(2);
					 String ^room_types = "Update [Room_Types] SET Count_Room = Count_Room + 1 where [Room_Type] = '" + temp + "';";
					 OleDbCommand ^ cmd3 = gcnew OleDbCommand(room_types, DB_Connection2);
					 cmd3->ExecuteNonQuery();
					 DB_Connection2->Close();
				 }

				 DB_Connection->Close();
				 Txt_Room_Type->Text = txt;
				 Txt_Room_Type_SelectedIndexChanged(sender,e);
			 }
	private: System::Void Txt_Room_Type_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				for (int i=0;i<n;i++)
				 {
					 Control ^temp2 = this->Controls["TextBox"+(i)];
					 Controls->Remove(temp2);
					 Control ^temp3 = this->Controls["btnApp"+(i)];
					 Controls->Remove(temp3);
					 Control ^temp4 = this->Controls["btnDiss"+(i)];
					 Controls->Remove(temp4);
				}

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUsers = "Select * from Booking_Request where [Room_Type] = '" + Txt_Room_Type->Text + "' AND [Approved] = 'NO' ";
				 txt = Txt_Room_Type->Text;
				 //MessageBox::Show(getUsers);
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
				 OleDbDataReader ^ users_data = cmd->ExecuteReader();

				 int i=0;
				 //n=0;
				 while(users_data->Read() == true)
				 {
					 n=n+1;
					 i=i+1;
					 txt2 = users_data->GetString(6);
					 TextBox ^tb = gcnew TextBox();
					 tb->Text = users_data->GetString(3) + "\r\n" + users_data->GetString(4) + "\r\n" + users_data->GetString(5);
					 //MessageBox::Show(tb->Text);
					 tb->Location = System::Drawing::Point(20,140*i);
					 tb->Width = 100;
					 tb->Height = 100;
					 tb->Name = "TextBox" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 this->Controls->Add(tb);

					 Button ^ btnApprove = gcnew Button();
					 btnApprove->Width = 120;
					 btnApprove->Height = 30;
					 btnApprove->Name = "btnApp" + i;
					 btnApprove->Tag = users_data->GetInt32(0);
					 btnApprove->Text = "Approve";
					 btnApprove->Location = System::Drawing::Point(320,140*i);
					 btnApprove->Click += gcnew System::EventHandler(this,&UserControl_Booking_Approval::approve_button_click);
					 this->Controls->Add(btnApprove);

					 Button ^ btnCancel = gcnew Button();
					 btnCancel->Width = 120;
					 btnCancel->Height = 30;
					 btnCancel->Name = "btnDiss" + i;
					 btnCancel->Tag = users_data->GetInt32(0);
					 btnCancel->Text = "Cancel";
					 btnCancel->Location = System::Drawing::Point(320,140*i+40);
					 btnCancel->Click += gcnew System::EventHandler(this,&UserControl_Booking_Approval::cancel_button_click);
					 this->Controls->Add(btnCancel);
				 }
				 DB_Connection->Close();

			 }
};
}
