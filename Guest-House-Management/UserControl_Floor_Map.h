#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>

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
	/// Summary for UserControl_Floor_Map
	/// </summary>
	public ref class UserControl_Floor_Map : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label1;
	public: 
		Panel ^pn5;

		UserControl_Floor_Map(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_Floor_Map()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::ComboBox^  Txt_Floor;
	protected: 
	internal: System::Windows::Forms::Label^  label2;

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
			this->Txt_Floor = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->FormattingEnabled = true;
			this->Txt_Floor->Location = System::Drawing::Point(367, 79);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(238, 25);
			this->Txt_Floor->TabIndex = 70;
			this->Txt_Floor->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Floor_Map::Txt_Floor_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(228, 79);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 25);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Floor No.";
			this->label2->Click += gcnew System::EventHandler(this, &UserControl_Floor_Map::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(361, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 31);
			this->label1->TabIndex = 71;
			this->label1->Text = L"Floor Map";
			// 
			// UserControl_Floor_Map
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->label2);
			this->Name = L"UserControl_Floor_Map";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Floor_Map::UserControl_Floor_Map_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Floor_Map::mouseentermy);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		cliext::vector<String^> bookedToday;
		String ^temp;
		static int n = 0;
		String^ bookingDetailsOfRoom(String^ room){

			String ^ res="";
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			String ^ getBookedData = "Select * from [Booking_Request] where [Approved]='YES';";

			OleDbCommand ^ cmd2 = gcnew OleDbCommand(getBookedData, DB_Connection);
			OleDbDataReader ^ booked_data = cmd2->ExecuteReader();

			String^ temp;
			String^ datefrom;
			String ^dateto;
			int datefrom_int;
			int dateto_int;
			int datetoday_int;

			String ^datetoday = System::DateTime().Now.ToString("yyyyMMdd");
			datetoday_int = System::Convert::ToInt32(datetoday);

			String ^timenow = System::DateTime().Now.ToString("hhmm");
			int timenow_int = System::Convert::ToInt32(timenow);
			//MessageBox::Show(timenow);

			String ^ampm = System::DateTime().Now.ToString("tt");
			//MessageBox::Show(ampm);
			//MessageBox::Show(datetoday);
			while(booked_data->Read() == true)
			{
				temp = booked_data->GetString(4);
				datefrom = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
				temp = booked_data->GetString(5);
				dateto = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
				datefrom_int = System::Convert::ToInt32(datefrom);
				dateto_int = System::Convert::ToInt32(dateto);

				temp="";
				if(datefrom_int<=datetoday_int && dateto_int>=datetoday_int)
				{
					if (datefrom_int==datetoday_int && ampm=="AM")
					{
						continue;
					}

					if (dateto_int==datetoday_int && ampm=="PM")
					{
						continue;
					}

					String^ rooms = booked_data->GetString(14);
					//MessageBox::Show(rooms);
					for(int j=0;j<rooms->Length;j++)
					{
						if(rooms[j] == ',')
						{
							if(temp==room)
							{
								res+="Booking ID : " + Convert::ToString(booked_data->GetInt32(0)) + "\n";
								res+="Booked For : " + booked_data->GetString(3)+ "\n";
								res+="Booked From : " + booked_data->GetString(4)+ "\n";
								res+="Booked To : " + booked_data->GetString(5)+ "\n";

								DB_Connection->Close();
								return res;
							}
							temp = "";
						}
						else
							temp = temp + rooms[j];
					}
					//bookedToday.push_back();
				}
			}

			DB_Connection->Close();

		}


		void displayDetails(System::Object^  sender, System::EventArgs^  e){
			Button^ btn = gcnew Button();
			btn = static_cast<Button^>(sender);
			MessageBox::Show(Convert::ToString(btn->Tag));
		}

	private: System::Void UserControl_Floor_Map_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 String ^ getRoomData = "Select * from [Room_No]";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				 OleDbDataReader ^ room_data = cmd->ExecuteReader();

				 cliext::vector<String^> vec;
				 while(room_data->Read() == true)
				 {
					 String ^temp2 = room_data->GetString(0);
					 int flag = 0;

					 for(int i=0;i<vec.size();i++)
					 {
						 if(vec[i] == temp2)
						 {
							 flag = 1;
							 break;
						 }
					 }

					 if(flag == 0)
						 vec.push_back(temp2);
				 }
				 String ^ xyz = Convert::ToString(vec.size());
				 //MessageBox::Show(xyz);
				 for(int i=0;i<vec.size();i++)
				 {
					 Txt_Floor->Items->Add(vec[i]);
				 }

				 DB_Connection->Close();

				 /////////////////   GET TODAY BOOKED ROOMS VECTOR    //////////////
				 DB_Connection->Open();

				 String ^ getBookedData = "Select * from [Booking_Request] where [Approved]='YES';";

				 OleDbCommand ^ cmd2 = gcnew OleDbCommand(getBookedData, DB_Connection);
				 OleDbDataReader ^ booked_data = cmd2->ExecuteReader();

				 String^ temp;
				 String^ datefrom;
				 String ^dateto;
				 int datefrom_int;
				 int dateto_int;
				 int datetoday_int;

				 String ^datetoday = System::DateTime().Now.ToString("yyyyMMdd");
				 datetoday_int = System::Convert::ToInt32(datetoday);

				 String ^timenow = System::DateTime().Now.ToString("hhmm");
				 int timenow_int = System::Convert::ToInt32(timenow);
				 //MessageBox::Show(timenow);

				 String ^ampm = System::DateTime().Now.ToString("tt");
				 //MessageBox::Show(ampm);
				 //MessageBox::Show(datetoday);
				 while(booked_data->Read() == true)
				 {
					 temp = booked_data->GetString(4);
					 datefrom = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
					 temp = booked_data->GetString(5);
					 dateto = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy
					 datefrom_int = System::Convert::ToInt32(datefrom);
					 dateto_int = System::Convert::ToInt32(dateto);

					 temp="";
					 if(datefrom_int<=datetoday_int && dateto_int>=datetoday_int)
					 {
						 if (datefrom_int==datetoday_int && ampm=="AM")
						 {
							 continue;
						 }

						 if (dateto_int==datetoday_int && ampm=="PM")
						 {
							 continue;
						 }

						 String^ rooms = booked_data->GetString(14);
						 //MessageBox::Show(rooms);
						 for(int j=0;j<rooms->Length;j++)
						 {
							 if(rooms[j] == ',')
							 {
								 bookedToday.push_back(temp);
								 temp = "";
							 }
							 else
								 temp = temp + rooms[j];
						 }
						 //bookedToday.push_back();
					 }
				 }

				 DB_Connection->Close();
			 }
	private: System::Void Txt_Floor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 for (int i=0;i<n;i++)
				 {
					 Control ^temp = this->Controls["Button"+(i)];
					 Controls->Remove(temp);
				 }

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getRoomData = "Select * from [Room_No] where [Floor] = '" + Txt_Floor->Text + "';";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				 OleDbDataReader ^ room_data = cmd->ExecuteReader();

				 cliext::vector<String^> vec;
				 cliext::vector<String^> vec2;
				 n=0;
				 while(room_data->Read() == true)
				 {
					 String ^ tmp = room_data->GetString(1);
					 String ^ tmp2 = room_data->GetString(3);
					 vec.push_back(tmp);
					 vec2.push_back(tmp2);
					 n=n+1;
				 }

				 Button^ lg = gcnew Button();
				 lg->Location = System::Drawing::Point(50,150);
				 lg->Text = "Available";
				 lg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 lg->BackColor =  System::Drawing::Color::LightGreen;
				 lg->Width = 150;
				 lg->Height = 50;
				 this->Controls->Add(lg);


				 Button^ lg2 = gcnew Button();
				 lg2->Location = System::Drawing::Point(220,150);
				 lg2->Text = "Cleaning";
				 lg2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 lg2->BackColor =  System::Drawing::Color::Yellow;
				 lg2->Width = 150;
				 lg2->Height = 50;
				 this->Controls->Add(lg2);


				 Button^ lg3 = gcnew Button();
				 lg3->Location = System::Drawing::Point(390,150);
				 lg3->Text = "Construction";
				 lg3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 lg3->BackColor =  System::Drawing::Color::LightCoral;
				 lg3->Width = 150;
				 lg3->Height = 50;
				 this->Controls->Add(lg3);


				 Button^ lg4 = gcnew Button();
				 lg4->Location = System::Drawing::Point(560,150);
				 lg4->Text = "Booked";
				 lg4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 lg4->BackColor =  System::Drawing::Color::Cyan;
				 lg4->Width = 150;
				 lg4->Height = 50;
				 this->Controls->Add(lg4);

				 for(int i=0;i<vec.size();i++)
				 {
					 //Label ^ lb = gcnew Label();
					 Button ^lb = gcnew Button();
					 lb->Text = vec[i];
					 lb->Name = "Button" + i; 
					 lb->Width = 75;
					 lb->Height = 75;
					 //lb->Font = gcnew Font("Comic Sans MS", 12, FontStyle.Bold);
					 lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.00F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 lb->Location = System::Drawing::Point(120*((i%5))+100,100*(i/5+2)+20);
					 ToolTip^ toolTip1 = gcnew ToolTip();

					 if(vec2[i][0] == 'A'){
						 lb->BackColor =  System::Drawing::Color::LightGreen;
						 toolTip1->SetToolTip(lb,"Available For Booking");
					 }
					 else if(vec2[i][0] == 'C'){
						 lb->BackColor =  System::Drawing::Color::Yellow;
						 toolTip1->SetToolTip(lb,"Cleaning Going On");
					 }
					 else if(vec2[i][0] == 'U'){
						 lb->BackColor = System::Drawing::Color::LightCoral;
						 toolTip1->SetToolTip(lb,"Under Construction");
					 }
					 bool roombooked=false;
					 for(int k=0;k<bookedToday.size();k++)
					 {
						 if(bookedToday[k]==vec[i])roombooked=true;
					 }
					 if(roombooked==true){
						 lb->BackColor = System::Drawing::Color::Cyan;
						 toolTip1->SetToolTip(lb, "Booked" );
						 lb->Tag = bookingDetailsOfRoom(vec[i]);
						 lb->Click += gcnew System::EventHandler(this,&UserControl_Floor_Map::displayDetails);
					 }
					 this->Controls->Add(lb);
				 }

				 DB_Connection->Close();



			 }

	private: System::Void mouseentermy(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}