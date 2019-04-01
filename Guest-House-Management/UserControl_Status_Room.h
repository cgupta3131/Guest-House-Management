#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include "tosstring.h"

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
	/// Summary for UserControl_Status_Room
	/// </summary>
	public ref class UserControl_Status_Room : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label3;
	public: 
		Panel ^pn5;

		UserControl_Status_Room(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_Status_Room()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Status_Change;
	protected: 
	internal: System::Windows::Forms::Label^  Lbl_Category;
	private: 
	internal: System::Windows::Forms::ComboBox^  Txt_Room;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::ComboBox^  Txt_Status;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::ComboBox^  Txt_Floor;

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
			this->Btn_Status_Change = (gcnew System::Windows::Forms::Button());
			this->Lbl_Category = (gcnew System::Windows::Forms::Label());
			this->Txt_Room = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txt_Status = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txt_Floor = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Status_Change
			// 
			this->Btn_Status_Change->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Status_Change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Status_Change->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Status_Change->Location = System::Drawing::Point(304, 361);
			this->Btn_Status_Change->Name = L"Btn_Status_Change";
			this->Btn_Status_Change->Size = System::Drawing::Size(223, 65);
			this->Btn_Status_Change->TabIndex = 64;
			this->Btn_Status_Change->Text = L"Change Status";
			this->Btn_Status_Change->UseVisualStyleBackColor = false;
			this->Btn_Status_Change->Click += gcnew System::EventHandler(this, &UserControl_Status_Room::Btn_Status_Change_Click);
			// 
			// Lbl_Category
			// 
			this->Lbl_Category->AutoSize = true;
			this->Lbl_Category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Category->Location = System::Drawing::Point(151, 193);
			this->Lbl_Category->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Category->Name = L"Lbl_Category";
			this->Lbl_Category->Size = System::Drawing::Size(107, 25);
			this->Lbl_Category->TabIndex = 63;
			this->Lbl_Category->Text = L"Room No.";
			// 
			// Txt_Room
			// 
			this->Txt_Room->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Room->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room->FormattingEnabled = true;
			this->Txt_Room->Location = System::Drawing::Point(403, 185);
			this->Txt_Room->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room->Name = L"Txt_Room";
			this->Txt_Room->Size = System::Drawing::Size(238, 33);
			this->Txt_Room->TabIndex = 62;
			this->Txt_Room->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Status_Room::Txt_Room_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 267);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 25);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Status";
			// 
			// Txt_Status
			// 
			this->Txt_Status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Status->FormattingEnabled = true;
			this->Txt_Status->Location = System::Drawing::Point(403, 264);
			this->Txt_Status->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Status->Name = L"Txt_Status";
			this->Txt_Status->Size = System::Drawing::Size(238, 33);
			this->Txt_Status->TabIndex = 66;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(151, 122);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 25);
			this->label2->TabIndex = 67;
			this->label2->Text = L"Floor";
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->FormattingEnabled = true;
			this->Txt_Floor->Location = System::Drawing::Point(403, 114);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(238, 33);
			this->Txt_Floor->TabIndex = 68;
			this->Txt_Floor->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Status_Room::Txt_Floor_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(254, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(273, 29);
			this->label3->TabIndex = 69;
			this->label3->Text = L"Change Room Status";
			this->label3->Click += gcnew System::EventHandler(this, &UserControl_Status_Room::label3_Click);
			// 
			// UserControl_Status_Room
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Txt_Status);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Btn_Status_Change);
			this->Controls->Add(this->Lbl_Category);
			this->Controls->Add(this->Txt_Room);
			this->Name = L"UserControl_Status_Room";
			this->Size = System::Drawing::Size(869, 554);
			this->Load += gcnew System::EventHandler(this, &UserControl_Status_Room::UserControl_Status_Room_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Status_Room::sdvsdv);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Status_Room_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 String ^ getRoomData = "Select * from [Room_No]";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				 OleDbDataReader ^ room_data = cmd->ExecuteReader();

				 cliext::vector<String^> vec;
				 while(room_data->Read() == true)
				 {
					 String ^temp = room_data->GetString(0);
					 int flag = 0;

					 for(int i=0;i<vec.size();i++)
					 {
						 if(vec[i] == temp)
						 {
							 flag = 1;
							 break;
						 }
					 }

					 if(flag == 0)
						 vec.push_back(temp);
				 }
				 String ^ xyz = Convert::ToString(vec.size());
				 //MessageBox::Show(xyz);
				 for(int i=0;i<vec.size();i++)
				 {
					 Txt_Floor->Items->Add(vec[i]);
				 }


				 DB_Connection->Close();
			 }
	private: System::Void Txt_Floor_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {


				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getRoomData = "Select * from [Room_No] where [Floor] = '" + Txt_Floor->Text + "';";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				 OleDbDataReader ^ room_data = cmd->ExecuteReader();
				 Txt_Room->Items->Clear();

				 cliext::vector<String^> vec;

				 while(room_data->Read() == true)
					 Txt_Room->Items->Add(room_data->GetString(1));

				 DB_Connection->Close();

			 }
	private: System::Void Txt_Room_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 Txt_Status->Items->Add("Available");
				 Txt_Status->Items->Add("Cleaning in Progress");
				 Txt_Status->Items->Add("Unavailable");
			 } 
	private: System::Void Btn_Status_Change_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

				 string sfloor = tosstring(Txt_Floor->Text);
				 string sroom = tosstring(Txt_Room->Text);
				 string sstatus = tosstring(Txt_Status->Text);

				 if(sfloor.compare("") == 0){
					 MessageBox::Show("No Floor Item is Selected");
					 goto ErrExit;
				 }

				 if(sroom.compare("") == 0){
					 MessageBox::Show("No Room Item is Selected");
					 goto ErrExit;
				 }

				 if(sstatus.compare("") == 0){
					 MessageBox::Show("No Item is Selected");
					 goto ErrExit;
				 }

				 String ^ room = Txt_Room->Text;
				 String ^ status = Txt_Status->Text;

				 String ^ insertString = "UPDATE Room_No SET [Status] = '" +status+ "' WHERE [Room_No] = '" +room+ "';";

				 DB_Connection->Open();
				 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				 cmd->ExecuteNonQuery();
				 DB_Connection->Close();
				 MessageBox::Show("Room Status changed", "Notification");
				 this->Controls->Clear();
				 this->InitializeComponent();
				 UserControl_Status_Room_Load(sender,e);
ErrExit:
				 ;
			 }
			 //private: System::Void .ctor() {
			 //   this->InitializeComponent();
			 // }
	private: System::Void sdvsdv(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
