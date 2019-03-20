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
		UserControl_Floor_Map(void)
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
			this->SuspendLayout();
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->FormattingEnabled = true;
			this->Txt_Floor->Location = System::Drawing::Point(268, 51);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(238, 25);
			this->Txt_Floor->TabIndex = 70;
			this->Txt_Floor->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Floor_Map::Txt_Floor_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(83, 47);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 24);
			this->label2->TabIndex = 69;
			this->label2->Text = L"Floor";
			this->label2->Click += gcnew System::EventHandler(this, &UserControl_Floor_Map::label2_Click);
			// 
			// UserControl_Floor_Map
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->label2);
			this->Name = L"UserControl_Floor_Map";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Floor_Map::UserControl_Floor_Map_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String ^temp;
		static int n = 0;
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

				 for (int i=0;i<n;i++)
				 {
					 Control ^temp = this->Controls["Label"+(i)];
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

				 for(int i=0;i<vec.size();i++)
				 {
					 Label ^ lb = gcnew Label();
					 lb->Text = vec[i];
					 lb->Name = "Label" + i; 
					 lb->Location = System::Drawing::Point(20,140*(i+1));
					 if(vec2[i][0] == 'A')
						lb->BackColor =  System::Drawing::Color::Green;
					 else if(vec2[i][0] == 'C')
						lb->BackColor =  System::Drawing::Color::Yellow;
					 else if(vec2[i][0] == 'U')
						lb->BackColor = System::Drawing::Color::Red;
					
					 this->Controls->Add(lb);
				 }

				 DB_Connection->Close();



			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
