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
	/// Summary for UserControl_Status_Room
	/// </summary>
	public ref class UserControl_Status_Room : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Status_Room(void)
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
			this->SuspendLayout();
			// 
			// Btn_Status_Change
			// 
			this->Btn_Status_Change->Location = System::Drawing::Point(232, 296);
			this->Btn_Status_Change->Name = L"Btn_Status_Change";
			this->Btn_Status_Change->Size = System::Drawing::Size(159, 43);
			this->Btn_Status_Change->TabIndex = 64;
			this->Btn_Status_Change->Text = L"Change Status";
			this->Btn_Status_Change->UseVisualStyleBackColor = true;
			this->Btn_Status_Change->Click += gcnew System::EventHandler(this, &UserControl_Status_Room::Btn_Status_Change_Click);
			// 
			// Lbl_Category
			// 
			this->Lbl_Category->AutoSize = true;
			this->Lbl_Category->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Category->Location = System::Drawing::Point(75, 117);
			this->Lbl_Category->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Category->Name = L"Lbl_Category";
			this->Lbl_Category->Size = System::Drawing::Size(113, 24);
			this->Lbl_Category->TabIndex = 63;
			this->Lbl_Category->Text = L"Room No.";
			// 
			// Txt_Room
			// 
			this->Txt_Room->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room->FormattingEnabled = true;
			this->Txt_Room->Location = System::Drawing::Point(260, 121);
			this->Txt_Room->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room->Name = L"Txt_Room";
			this->Txt_Room->Size = System::Drawing::Size(238, 25);
			this->Txt_Room->TabIndex = 62;
			this->Txt_Room->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Status_Room::Txt_Room_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(75, 184);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Status";
			// 
			// Txt_Status
			// 
			this->Txt_Status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Status->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Status->FormattingEnabled = true;
			this->Txt_Status->Location = System::Drawing::Point(260, 188);
			this->Txt_Status->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Status->Name = L"Txt_Status";
			this->Txt_Status->Size = System::Drawing::Size(238, 25);
			this->Txt_Status->TabIndex = 66;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 53);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 24);
			this->label2->TabIndex = 67;
			this->label2->Text = L"Floor";
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->FormattingEnabled = true;
			this->Txt_Floor->Location = System::Drawing::Point(260, 57);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(238, 25);
			this->Txt_Floor->TabIndex = 68;
			this->Txt_Floor->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Status_Room::Txt_Floor_SelectedIndexChanged);
			// 
			// UserControl_Status_Room
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Txt_Status);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Btn_Status_Change);
			this->Controls->Add(this->Lbl_Category);
			this->Controls->Add(this->Txt_Room);
			this->Name = L"UserControl_Status_Room";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Status_Room::UserControl_Status_Room_Load);
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
				MessageBox::Show(xyz);
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

				String ^ room = Txt_Room->Text;
				String ^ status = Txt_Status->Text;
				
				String ^ insertString = "UPDATE Room_No SET [Status] = '" +status+ "' WHERE [Room_No] = '" +room+ "';";

				DB_Connection->Open();
				OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				cmd->ExecuteNonQuery();
				DB_Connection->Close();

		 }
};
}
