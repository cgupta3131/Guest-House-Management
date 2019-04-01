#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>

#include "Form_Feedback.h"

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
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Generate_Bill(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::Label^  label_name;
	internal: System::Windows::Forms::Label^  label_address;
	internal: System::Windows::Forms::Label^  label_contact;
	internal: System::Windows::Forms::Label^  label_email;
	private: System::Windows::Forms::Label^  label1;



	private: 








	//private: Microsoft::VisualBasic::PowerPacks::Printing::PrintForm^  printForm1;
	private: System::ComponentModel::IContainer^  components;

	private: 




	internal: 
	internal: 
	private: 


	internal: 
	private: 

	private: 
	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_address = (gcnew System::Windows::Forms::Label());
			this->label_contact = (gcnew System::Windows::Forms::Label());
			this->label_email = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(23, 20);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_name->Location = System::Drawing::Point(204, 20);
			this->label_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(201, 31);
			this->label_name->TabIndex = 44;
			this->label_name->Text = L"XYZ Guest House";
			// 
			// label_address
			// 
			this->label_address->AutoSize = true;
			this->label_address->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_address->Location = System::Drawing::Point(205, 59);
			this->label_address->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_address->Name = L"label_address";
			this->label_address->Size = System::Drawing::Size(95, 23);
			this->label_address->TabIndex = 45;
			this->label_address->Text = L"First Name";
			// 
			// label_contact
			// 
			this->label_contact->AutoSize = true;
			this->label_contact->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_contact->Location = System::Drawing::Point(478, 20);
			this->label_contact->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_contact->Name = L"label_contact";
			this->label_contact->Size = System::Drawing::Size(92, 23);
			this->label_contact->TabIndex = 46;
			this->label_contact->Text = L"First Name";
			// 
			// label_email
			// 
			this->label_email->AutoSize = true;
			this->label_email->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_email->Location = System::Drawing::Point(478, 59);
			this->label_email->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_email->Name = L"label_email";
			this->label_email->Size = System::Drawing::Size(92, 23);
			this->label_email->TabIndex = 47;
			this->label_email->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			// 
			// UserControl_Generate_Bill
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label_email);
			this->Controls->Add(this->label_contact);
			this->Controls->Add(this->label_address);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UserControl_Generate_Bill";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Generate_Bill::UserControl_Generate_Bill_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Generate_Bill::entermou);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void print_bill(System::Object^  sender, System::EventArgs^  e)
		{
			Control ^ random_button = this->Controls["PrintButton"];
			random_button->Visible = false;
			//this->printForm1->PrintAction = Printing::PrintAction::PrintToPreview;
			//this->printForm1->Form = this::Forms["Form_Feedback"];
			//this->printForm1->Print();
		}
		//exit_bill
		void exit_bill(System::Object^  sender, System::EventArgs^  e)
		{
			this->Controls->Clear();
			this->InitializeComponent();
			UserControl_Generate_Bill_Load(sender,e);
		}
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
			cmd->Parameters->AddWithValue("@app", "YES");
			cmd->Parameters->AddWithValue("@idNum", x);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			this->Controls->Clear();

			Label ^ lb1 = gcnew Label;
			lb1->AutoSize = true;
			lb1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lb1->Location = System::Drawing::Point(272, 24);
			lb1->Name = "label_name";
			lb1->TabIndex = 44;
			this->Controls->Add(lb1);

			PictureBox ^ pb1 = gcnew PictureBox;
			pb1->Location = System::Drawing::Point(31, 24);
			pb1->Name = "pictureBox1";
			pb1->Size = System::Drawing::Size(156, 120);
			pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pb1->TabIndex = 0;
			pb1->TabStop = false;
			this->Controls->Add(pb1);

			Label ^ lb2 = gcnew Label;
			lb2->AutoSize = true;
			lb2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lb2->Location = System::Drawing::Point(272, 66);
			lb2->Name = "label_address";
			lb2->TabIndex = 44;
			this->Controls->Add(lb2);

			Label ^ lb3 = gcnew Label;
			lb3->AutoSize = true;
			lb3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lb3->Location = System::Drawing::Point(this->label_name->Location.X+264, this->label_name->Location.Y+10);
			lb3->Name = "label_contact";
			lb3->TabIndex = 44;
			this->Controls->Add(lb3);

			Label ^ lb4 = gcnew Label;
			lb4->AutoSize = true;
			lb4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lb4->Location = System::Drawing::Point(this->label_name->Location.X+264, this->label_address->Location.Y);
			lb4->Name = "label_email";
			lb4->TabIndex = 44;
			this->Controls->Add(lb4);

			Label ^ lbl2 = gcnew Label();
			lbl2->AutoSize = true;
			lbl2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl2->Location = System::Drawing::Point(this->pictureBox1->Location.X, this->pictureBox1->Location.Y+179);
			lbl2->Name = "label_CheckinDate";
			lbl2->Text = "Check-in Date";
			lbl2->TabIndex = 44;
			this->Controls->Add(lbl2);

			int x1 = this->pictureBox1->Location.X;
			int y1 = this->pictureBox1->Location.Y+179;

			Label ^ lbl3 = gcnew Label();
			lbl3->AutoSize = true;
			lbl3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl3->Location = System::Drawing::Point(x1+169, y1);
			lbl3->Name = "label_CheckoutDate";
			lbl3->Text = "Check-out Date";
			lbl3->TabIndex = 44;
			this->Controls->Add(lbl3);

			Label ^ lbl4 = gcnew Label;
			lbl4->AutoSize = true;
			lbl4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl4->Location = System::Drawing::Point(x1+169+169, y1);
			lbl4->Name = "label_BookingID";
			lbl4->Text = "Booking ID";
			lbl4->TabIndex = 44;
			this->Controls->Add(lbl4);

			Label ^ lbl5 = gcnew Label;
			lbl5->AutoSize = true;
			lbl5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl5->Location = System::Drawing::Point(x1+169+169+169, y1);
			lbl5->Name = "label_TotalRooms";
			lbl5->Text = "Total Rooms";
			lbl5->TabIndex = 44;
			this->Controls->Add(lbl5);

			Label ^ lbl6 = gcnew Label;
			lbl6->AutoSize = true;
			lbl6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			lbl6->Location = System::Drawing::Point(x1+282, y1-60);
			lbl6->Name = "label_Customer";
			lbl6->TabIndex = 44;
			this->Controls->Add(lbl6);

			Label ^ lbl7 = gcnew Label;
			lbl7->AutoSize = true;
			lbl7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl7->Location = System::Drawing::Point(x1, y1+24);
			lbl7->Name = "label_CheckinDate_val";
			lbl7->TabIndex = 44;
			this->Controls->Add(lbl7);

			Label ^ lbl8 = gcnew Label;
			lbl8->AutoSize = true;
			lbl8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl8->Location = System::Drawing::Point(x1+169, y1+24);
			lbl8->Name = "label_CheckOutDate_val";
			lbl8->TabIndex = 44;
			this->Controls->Add(lbl8);

			Label ^ lbl9 = gcnew Label;
			lbl9->AutoSize = true;
			lbl9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl9->Location = System::Drawing::Point(x1+169+169, y1+24);
			lbl9->Name = "label_Booking_ID_val";
			lbl9->TabIndex = 44;
			this->Controls->Add(lbl9);

			Label ^ lbl10 = gcnew Label;
			lbl10->AutoSize = true;
			lbl10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl10->Location = System::Drawing::Point(x1+169+169+169, y1+24);
			lbl10->Name = "label_Total_rooms_val";
			lbl10->TabIndex = 44;
			this->Controls->Add(lbl10);

			Label ^ lbl11 = gcnew Label;
			lbl11->AutoSize = true;
			lbl11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl11->Location = System::Drawing::Point(x1, y1+24+34);
			lbl11->Name = "label_Room";
			lbl11->TabIndex = 44;
			this->Controls->Add(lbl11);
			lbl11->Text = "Room Type";

			Label ^ lbl12 = gcnew Label;
			lbl12->AutoSize = true;
			lbl12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl12->Location = System::Drawing::Point(x1+169, y1+24+34);
			lbl12->Name = "label_Price";
			lbl12->TabIndex = 44;
			this->Controls->Add(lbl12);
			lbl12->Text = "Room Price(Rs.)";

			Label ^ lbl13 = gcnew Label;
			lbl13->AutoSize = true;
			lbl13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl13->Location = System::Drawing::Point(x1+169+169, y1+24+34);
			lbl13->Name = "label_Total_rooms_ofthistype";
			lbl13->TabIndex = 44;
			this->Controls->Add(lbl13);
			lbl13->Text = "No of rooms";

			Label ^ lbl14 = gcnew Label;
			lbl14->AutoSize = true;
			lbl14->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl14->Location = System::Drawing::Point(x1+169+169+169, y1+24+34);
			lbl14->Name = "label_price_of_room";
			lbl14->TabIndex = 44;
			this->Controls->Add(lbl14);
			lbl14->Text = "Price";

			DB_Connection->Open();

			String ^ getGuestHouseName = "Select * from Guest_House_Info";
			OleDb::OleDbCommand ^ cmdGuestHouse = gcnew OleDbCommand(getGuestHouseName, DB_Connection);
			OleDbDataReader ^ guestHouse_info = cmdGuestHouse->ExecuteReader();

			while(guestHouse_info->Read()==true)
			{
				lb1->Text = Convert::ToString(guestHouse_info[1]);
				lb2->Text = Convert::ToString(guestHouse_info[2]);
				lb3->Text = Convert::ToString(guestHouse_info[3]);
				lb4->Text = Convert::ToString(guestHouse_info[4]);
			}
			pb1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\guest_house.jpg");

			String ^getUsers = "Select * from [Booking_Request] where [ID] = " + x + ";";
			cmd = gcnew OleDbCommand(getUsers, DB_Connection);
			OleDbDataReader ^ room_data = cmd->ExecuteReader();

			String ^room_type;
			String ^user_type;
			int extra_charges;
			while(room_data->Read() == true)
			{
				lbl6->Text = room_data->GetString(3);
				lbl7->Text = room_data->GetString(4);
				lbl8->Text = room_data->GetString(5);
				lbl9->Text = Convert::ToString(room_data[0]);
				room_type = room_data->GetString(6);
				user_type = room_data->GetString(2);
				extra_charges = Convert::ToInt32(room_data[18]);
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

			int count=0;
			int total_rooms=0;
			int total_price_of_rooms =0;
			for(int i=0;i<room_full_data.size();i++)
			{
				count+=1;
				int len = room_full_data[i]->Length;
				Char ^room_count2 = room_full_data[i][len-1];
				String ^room_count3 = Convert::ToString(room_count2);
				int room_cnt = Convert::ToInt32(room_count3);
				total_rooms+=room_cnt;
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
				total_price_of_rooms += price*room_cnt;
				Label ^ dynamic_label1 = gcnew Label;
				dynamic_label1->AutoSize = true;
				dynamic_label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				dynamic_label1->Location = System::Drawing::Point(x1, y1+24+34+count*34);
				dynamic_label1->TabIndex = 44;
				this->Controls->Add(dynamic_label1);
				dynamic_label1->Text = Convert::ToString(room_full_data[i]);

				Label ^ dynamic_label2 = gcnew Label;
				dynamic_label2->AutoSize = true;
				dynamic_label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				dynamic_label2->Location = System::Drawing::Point(x1+169, y1+24+34+count*34);
				dynamic_label2->TabIndex = 44;
				this->Controls->Add(dynamic_label2);
				dynamic_label2->Text = Convert::ToString(price);

				Label ^ dynamic_label3 = gcnew Label;
				dynamic_label3->AutoSize = true;
				dynamic_label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				dynamic_label3->Location = System::Drawing::Point(x1+169+169, y1+24+34+count*34);
				dynamic_label3->TabIndex = 44;
				this->Controls->Add(dynamic_label3);
				dynamic_label3->Text = Convert::ToString(room_cnt);

				int room_type_cost = price * room_cnt;

				Label ^ dynamic_label4 = gcnew Label;
				dynamic_label4->AutoSize = true;
				dynamic_label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				dynamic_label4->Location = System::Drawing::Point(x1+169+169+169, y1+24+34+count*34);
				dynamic_label4->TabIndex = 44;
				this->Controls->Add(dynamic_label4);
				dynamic_label4->Text = Convert::ToString(room_type_cost);

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

			}
			lbl10->Text = Convert::ToString(total_rooms);

			Label ^ lbl15 = gcnew Label;
			lbl15->AutoSize = true;
			lbl15->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl15->Location = System::Drawing::Point(x1+169+169, y1+24+34+34+count*34);
			lbl15->TabIndex = 44;
			this->Controls->Add(lbl15);
			lbl15->Text = "Extra Charges";

			Label ^ lbl16 = gcnew Label;
			lbl16->AutoSize = true;
			lbl16->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl16->Location = System::Drawing::Point(x1+169+169+169, y1+24+34+34+count*34);
			lbl16->TabIndex = 44;
			this->Controls->Add(lbl16);
			lbl16->Text = Convert::ToString(extra_charges);

			Label ^ lbl17 = gcnew Label;
			lbl17->AutoSize = true;
			lbl17->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl17->Location = System::Drawing::Point(x1+169+169, y1+24+34+34+34+count*34);
			lbl17->TabIndex = 44;
			this->Controls->Add(lbl17);
			lbl17->Text = "CGST(2.5%)";

			Double cgst = 0;
			cgst = 0.025 * Convert::ToDouble(total_price_of_rooms+extra_charges);

			Label ^ lbl18 = gcnew Label;
			lbl18->AutoSize = true;
			lbl18->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl18->Location = System::Drawing::Point(x1+169+169+169, y1+24+34+34+34+count*34);
			lbl18->TabIndex = 44;
			this->Controls->Add(lbl18);
			lbl18->Text = Convert::ToString(cgst);

			Label ^ lbl19 = gcnew Label;
			lbl19->AutoSize = true;
			lbl19->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl19->Location = System::Drawing::Point(x1+169+169, y1+24+34+34+34+34+count*34);
			lbl19->TabIndex = 44;
			this->Controls->Add(lbl19);
			lbl19->Text = "SGST(2.5%)";

			Double sgst = 0;
			sgst = 0.025 * Convert::ToDouble(total_price_of_rooms+extra_charges);

			Label ^ lbl20 = gcnew Label;
			lbl20->AutoSize = true;
			lbl20->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl20->Location = System::Drawing::Point(x1+169+169+169, y1+24+34+34+34+34+count*34);
			lbl20->TabIndex = 44;
			this->Controls->Add(lbl20);
			lbl20->Text = Convert::ToString(sgst);

			Label ^ lbl21 = gcnew Label;
			lbl21->AutoSize = true;
			lbl21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl21->Location = System::Drawing::Point(x1+169+169, y1+24+34+34+34+34+34+count*34);
			lbl21->TabIndex = 44;
			this->Controls->Add(lbl21);
			lbl21->Text = "Total Amount";

			Double total_amount = sgst + cgst + Convert::ToDouble(total_price_of_rooms) + Convert::ToDouble(extra_charges);

			Label ^ lbl22 = gcnew Label;
			lbl22->AutoSize = true;
			lbl22->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl22->Location = System::Drawing::Point(x1+169+169+169, y1+24+34+34+34+34+34+count*34);
			lbl22->TabIndex = 44;
			this->Controls->Add(lbl22);
			lbl22->Text = Convert::ToString(total_amount);

			Label ^ lbl23 = gcnew Label;
			lbl23->AutoSize = true;
			lbl23->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl23->Location = System::Drawing::Point(x1, y1+24+34+34+34+34+34+count*34);
			lbl23->TabIndex = 44;
			this->Controls->Add(lbl23);
			lbl23->Text = "This is a system generated receipt hence ";

			Label ^ lbl24 = gcnew Label;
			lbl24->AutoSize = true;
			lbl24->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			lbl24->Location = System::Drawing::Point(x1, y1+24+34+34+34+34+48+count*34);
			lbl24->TabIndex = 44;
			this->Controls->Add(lbl24);
			lbl24->Text = " signature is not required";

			Button ^ print_button = gcnew Button;
			print_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			print_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			print_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			print_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			print_button->Location = System::Drawing::Point(x1+202,y1+24+34+34+34+34+80+count*34);
			print_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			print_button->Name = "PrintButton";
			print_button->Size = System::Drawing::Size(149, 49);
			print_button->TabIndex = 68;
			print_button->Text = "Print";
			print_button->UseVisualStyleBackColor = false;
			this->Controls->Add(print_button);
			print_button->Click += gcnew System::EventHandler(this,&UserControl_Generate_Bill::print_bill);

			Button ^ exit_button = gcnew Button;
			exit_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			exit_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			exit_button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			exit_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			exit_button->Location = System::Drawing::Point(x1+402,y1+24+34+34+34+34+80+count*34);
			exit_button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			exit_button->Name = "PrintButton";
			exit_button->Size = System::Drawing::Size(149, 49);
			exit_button->TabIndex = 68;
			exit_button->Text = "Go Back";
			exit_button->UseVisualStyleBackColor = false;
			this->Controls->Add(exit_button);
			exit_button->Click += gcnew System::EventHandler(this,&UserControl_Generate_Bill::exit_bill);
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

				 /* code snippet added by me */
				 String ^ getGuestHouseName = "Select * from Guest_House_Info";
				 OleDb::OleDbCommand ^ cmdGuestHouse = gcnew OleDbCommand(getGuestHouseName, DB_Connection);
				 OleDbDataReader ^ guestHouse_info = cmdGuestHouse->ExecuteReader();

				 pictureBox1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\guest_house.jpg");

				 while(guestHouse_info->Read()==true)
				 {
					 label_name->Text = Convert::ToString(guestHouse_info[1]);
					 label_address->Text = Convert::ToString(guestHouse_info[2]);
					 label_contact->Text = Convert::ToString(guestHouse_info[3]);
					 label_email->Text = Convert::ToString(guestHouse_info[4]);
				 }
				 /*         */

				 //MessageBox::Show(today_date);

				 int i=0;
				 while(users_data->Read() == true)
				 {
					 String ^temp = users_data->GetString(5);
					 String ^dateto = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +               Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy
					 temp = users_data->GetString(4);
					 String ^datefrom = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +               Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy

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

						 tb->Location = System::Drawing::Point(20,140*i+50);
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
						 btnCheckout->Height = 40;
						 btnCheckout->Tag = users_data->GetInt32(0);
						 btnCheckout->Text = "Checkout";
						 btnCheckout->Location = System::Drawing::Point(350,140*i+75);
						 btnCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
							 static_cast<System::Int32>(static_cast<System::Byte>(87)));
						 btnCheckout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
						 btnCheckout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
							 static_cast<System::Byte>(0)));
						 btnCheckout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
							 static_cast<System::Int32>(static_cast<System::Byte>(247)));
						 btnCheckout->Click += gcnew System::EventHandler(this,&UserControl_Generate_Bill::approve_button_click);
						 this->Controls->Add(btnCheckout);
					 }
				 }
				 DB_Connection->Close();

			 }
private: System::Void entermou(System::Object^  sender, System::EventArgs^  e) {
			 pnl->Size = System::Drawing::Size(173, 44);
			 pn2->Size = System::Drawing::Size(173, 44);
			 pn3->Size = System::Drawing::Size(173, 44);
			 pn4->Size = System::Drawing::Size(173, 44);
			 pn5->Size = System::Drawing::Size(173, 44);
		 }
	};
}