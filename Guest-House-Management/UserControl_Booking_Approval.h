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
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label1;
	public: 
		Panel ^pn5;

		UserControl_Booking_Approval(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Txt_Room_Type
			// 
			this->Txt_Room_Type->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Room_Type->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room_Type->FormattingEnabled = true;
			this->Txt_Room_Type->Location = System::Drawing::Point(401, 85);
			this->Txt_Room_Type->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room_Type->Name = L"Txt_Room_Type";
			this->Txt_Room_Type->Size = System::Drawing::Size(238, 25);
			this->Txt_Room_Type->TabIndex = 72;
			this->Txt_Room_Type->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Booking_Approval::Txt_Room_Type_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->label2->Location = System::Drawing::Point(213, 85);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 25);
			this->label2->TabIndex = 71;
			this->label2->Text = L"Room Type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(279, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 29);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Booking Approval";
			// 
			// UserControl_Booking_Approval
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txt_Room_Type);
			this->Controls->Add(this->label2);
			this->Name = L"UserControl_Booking_Approval";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Booking_Approval::UserControl_Booking_Approval_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Booking_Approval::ookk);
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
			
			String ^room_type;
			String ^datefrom;
			String ^dateto;

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

			// Extract Booking Data
			DB_Connection->Open();
			String ^ getdata = "Select * from [Booking_Request] where [ID] = " + x + ";";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getdata, DB_Connection);
			OleDbDataReader ^ room_data = cmd->ExecuteReader();
			
			while(room_data->Read() == true)
			{
				room_type = room_data->GetString(6);
				datefrom = room_data->GetString(4);
				dateto = room_data->GetString(5);
			}
			cliext::vector<String^> room_full_data;
			String ^temp;
			String ^aux_datefrom = datefrom;
			String ^aux_dateto = dateto;
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
			
			int f=1;
			String ^room_numbers;



			for(int i=0;i<room_full_data.size();i++)
			{
				int len = room_full_data[i]->Length;
				Char ^room_count2 = room_full_data[i][len-1];
				String ^room_count3 = Convert::ToString(room_count2); 
				//MessageBox::Show(Convert::ToString(room_count2));

				int room_cnt = Convert::ToInt32(room_count3);
				room_full_data[i] = room_full_data[i]->Substring(0,len-2);
				//Extracting Data of Room Available

				DB_Connection->Open();
				String ^ getroomNo2 = "Select * from [Room_No] where [Category] = '" + room_full_data[i] + "' AND [Status] = 'Available' ;";
				cmd = gcnew OleDbCommand(getroomNo2, DB_Connection);
				OleDbDataReader ^ room_data2 = cmd->ExecuteReader();
				cliext::vector<String^> vec;

				while(room_data2->Read() == true)
				{
					
					String ^room_number = room_data2->GetString(1);
					//MessageBox::Show(room_number);
					vec.push_back(room_number);
				}

				DB_Connection->Close();
				int flag = 1;
				if(vec.size()==0){
					MessageBox::Show("No room for such room type available");
					Txt_Room_Type_SelectedIndexChanged(sender,e);
					return;
				}
				String ^room_to_be_booked = vec[0];
				cliext::vector<String^> vec_can_be_booked;
				for(int p=0;p<vec.size();p++)
				{
					//vec[p] denotes the Potential Room No. Available
					//MessageBox::Show("Potential" + vec[p]);

					DB_Connection->Open();
					String ^getUsers = "Select * from [Booking_Request] where [Approved] = 'YES' ;";
					cmd = gcnew OleDbCommand(getUsers,DB_Connection);
					OleDbDataReader ^roomdata = cmd->ExecuteReader();
					int flag = 0;


					while(roomdata->Read() == true)
					{
						String ^temp_room_num = roomdata->GetString(14);
						//MessageBox::Show(temp_room_num);

						cliext::vector<String^> vec2;
						String ^store = "";
						for(int k=0;k<temp_room_num->Length;k++)
						{
							if(temp_room_num[k] == ',')
							{
								vec2.push_back(store);
								store = "";
							}

							else
								store = store + temp_room_num[k];
						}

						int aux = 0;
						for(int k=0;k<vec2.size();k++)
						{
							if(vec2[k] == vec[p])
							{
								aux=1;
								break;
							}
						}
						
						if(aux == 0)
							continue;

						flag = 1;
						String ^temp = roomdata->GetString(4);
	
						String ^datefrom2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString							(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
						temp = roomdata->GetString(5);
						String ^dateto2 =Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp						[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
						temp = datefrom;
						datefrom = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) +						Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
						temp = dateto;
						dateto =Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) +							Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
					
					
						int datefrom_int = System::Convert::ToInt32(datefrom2);
						int dateto_int = System::Convert::ToInt32(dateto2);
						int mydatefrom_int = System::Convert::ToInt32(datefrom);
						int mydateto_int = System::Convert::ToInt32(dateto);
						datefrom = aux_datefrom;
						dateto = aux_dateto;
						if(mydatefrom_int < datefrom_int)
						{
							if(mydateto_int <= datefrom_int)
							{
								vec_can_be_booked.push_back(vec[p]);
							}
							else
							{
							}
						}

						else if(mydatefrom_int == datefrom_int)
						{
						}

						else if(mydatefrom_int > datefrom_int)
						{
							if(mydatefrom_int >= dateto_int)
							{
								vec_can_be_booked.push_back(vec[p]);
							}
							else
							{
							}
						}

					}

					if(flag == 0)
						vec_can_be_booked.push_back(vec[p]);

					DB_Connection->Close();
					//MessageBox::Show(Convert::ToString(vec_can_be_booked.size()));
					//this line is added at last if issue remove it
					if(vec_can_be_booked.size() == room_cnt )
						break;

				}

				

				//MessageBox::Show(Convert::ToString(vec_can_be_booked.size()));
				if(vec_can_be_booked.size() < room_cnt )
				{
					f=0;
					MessageBox::Show("No room available for the given Room Type and Duration");
					break;
				}
					
				else
				{
					for(int r=0;r<room_cnt;r++)
						room_numbers = room_numbers + vec_can_be_booked[r] + ","; 
				}

					
			}

			if(f == 1)
			{
				DB_Connection->Open();
				String ^ approveUser = "UPDATE Booking_Request SET [Approved] = @app, [Room_No] = '" + room_numbers + "', [Status_Feedback]='Unread', [Checked_Out]='NO', [Comments_Feedback]=''  Where [ID] = @idNum;";
				cmd = gcnew OleDbCommand(approveUser, DB_Connection);
				cmd->Parameters->AddWithValue("@app", "YES");
				cmd->Parameters->AddWithValue("@idNum", x);
				cmd->ExecuteNonQuery();
				DB_Connection->Close();

				MessageBox::Show("Booking approved");
			}
			
			Txt_Room_Type_SelectedIndexChanged(sender,e);
			
		}

		void cancel_button_click(System::Object^  sender, System::EventArgs^  e)
		{
			Button^ btn = gcnew Button();
			btn = static_cast<Button^>(sender);
			int x = static_cast<int>(btn->Tag);

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();

			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			String ^ approveUser = "DELETE From Booking_Request Where [ID] = @idNum;";

			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(approveUser, DB_Connection);
			cmd->Parameters->AddWithValue("@idNum", x);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();
			MessageBox::Show("Booking Deleted");
			Txt_Room_Type_SelectedIndexChanged(sender,e);
		}

	private: System::Void UserControl_Booking_Approval_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Controls->Clear();
				 this->InitializeComponent();
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
				 Txt_Room_Type->Items->Add("All");
				 while(room_type->Read() == true)
				 {
					 String ^temp = room_type->GetString(1);
					 Txt_Room_Type->Items->Add(temp);
				 }
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
				 Txt_Room_Type->Text = "All";
				 Txt_Room_Type_SelectedIndexChanged(sender,e);

			 }
	private: System::Void Txt_Room_Type_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				for (int i=1;i<=n;i++)
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
				
				 String ^getUsers = "Select * from Booking_Request where [Approved] = 'NO' ";
				 txt = Txt_Room_Type->Text;
				 //MessageBox::Show(getUsers);
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
				 OleDbDataReader ^ users_data = cmd->ExecuteReader();

				 int i=0;
				 //n=0;
				 while(users_data->Read() == true)
				 {
					 //MessageBox::Show("Hey");
					 int f=0;
					 
					 String^ full_rooms = users_data->GetString(6);
					 cliext::vector<String^> room_full_data;
					 cliext::vector<String^> aux_vec;
					 String ^temp;
					 for(int j=0;j<full_rooms->Length;j++)
					 {
						 if(full_rooms[j] == ',')
						 {
							 room_full_data.push_back(temp);
							 aux_vec.push_back(temp);
							 temp = "";
						 }
						 else
							temp = temp + full_rooms[j];
					 }
						
					 for(int j=0;j<room_full_data.size();j++)
					 {

						 int len = room_full_data[j]->Length;
						 room_full_data[j] = room_full_data[j]->Substring(0,len-2);
						 //MessageBox::Show(room_full_data[j]);
						 if(room_full_data[j] == Txt_Room_Type->Text)
							 f=1;
					 }
					 if(Txt_Room_Type->Text == "All")
						 f=1;
					 if(f == 0)
						continue;

					 n=n+1;
					 i=i+1;
					 txt2 = users_data->GetString(6);
					 TextBox ^tb = gcnew TextBox();
					 tb->Text = "Username : " + users_data->GetString(1) + "\r\n" + 
								 "Name : " + users_data->GetString(3) + "\r\n" + 
								 "Check-in : " + users_data->GetString(4) + "\r\n" +
								 "Check-out : " + users_data->GetString(5) + "\r\n" + 
								 "Room Type : "; 
					for(int j=0;j<aux_vec.size();j++)
						tb->Text = tb->Text + aux_vec[j] + " ";

					tb->Text =  tb->Text + "\r\n" + "Contact No. : " + users_data->GetString(7); 

					 tb->Location = System::Drawing::Point(20,140*i); 
					 tb->Width = 450;
					 tb->Height = 110;
					 tb->Name = "TextBox" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 this->Controls->Add(tb);

					 Button ^ btnApprove = gcnew Button();
					 btnApprove->Width = 120;
					 btnApprove->Height = 40;
					 btnApprove->Name = "btnApp" + i;
					 btnApprove->Tag = users_data->GetInt32(0);
					 btnApprove->Text = "Approve";
					 btnApprove->Location = System::Drawing::Point(500,140*i);
					 btnApprove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(87)));
					 btnApprove->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
					 btnApprove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 btnApprove->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(247)));
					 btnApprove->Click += gcnew System::EventHandler(this,&UserControl_Booking_Approval::approve_button_click);
					 this->Controls->Add(btnApprove);

					 Button ^ btnCancel = gcnew Button();
					 btnCancel->Width = 120;
					 btnCancel->Height = 40;
					 btnCancel->Name = "btnDiss" + i;
					 btnCancel->Tag = users_data->GetInt32(0);
					 btnCancel->Text = "Cancel";
					 btnCancel->Location = System::Drawing::Point(500,140*i+60);
					 btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(87)));
					 btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
					 btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(247)));
					 btnCancel->Click += gcnew System::EventHandler(this,&UserControl_Booking_Approval::cancel_button_click);
					 this->Controls->Add(btnCancel);
				 }
				 DB_Connection->Close();

			 }
private: System::Void ookk(System::Object^  sender, System::EventArgs^  e) {
			 pnl->Size = System::Drawing::Size(173, 44);
			 pn2->Size = System::Drawing::Size(173, 44);
			 pn3->Size = System::Drawing::Size(173, 44);
			 pn4->Size = System::Drawing::Size(173, 44);
			 pn5->Size = System::Drawing::Size(173, 44);
		 }
};
}
