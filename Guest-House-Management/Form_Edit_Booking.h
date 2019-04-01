#pragma once

#include <cliext/queue>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>
namespace GuestHouseManagement {


	using namespace std;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form_Edit_Booking
	/// </summary>
	public ref class Form_Edit_Booking : public System::Windows::Forms::Form
	{
	public:
		String ^ id_for_deletion;
	internal: System::Windows::Forms::TextBox^  RoomTypeFinder;
	internal: System::Windows::Forms::TextBox^  TextBox_Username;

	internal: System::Windows::Forms::Label^  label6;
	public: 
		int check;
		Form_Edit_Booking(String ^ id,int checker)
		{
			id_for_deletion = id;
			check=checker;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Edit_Booking()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	protected: 
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;

	internal: System::Windows::Forms::TextBox^  Textbox_id;
	internal: System::Windows::Forms::TextBox^  Textbox_name;
	internal: System::Windows::Forms::TextBox^  Textbox_Email;








	internal: 


	private: 
	internal: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::TextBox^  textBox1;
	internal: System::Windows::Forms::TextBox^  textBox2;
	internal: System::Windows::Forms::TextBox^  textBox3;

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
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Textbox_id = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_name = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Email = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->RoomTypeFinder = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(43, 35);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(111, 23);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Booking ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 23);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Booking For";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 23);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Booking From";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 23);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Booking Upto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(43, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 23);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Room Details";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 23);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Email";
			// 
			// Textbox_id
			// 
			this->Textbox_id->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_id->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_id->Location = System::Drawing::Point(236, 33);
			this->Textbox_id->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_id->Name = L"Textbox_id";
			this->Textbox_id->ReadOnly = true;
			this->Textbox_id->Size = System::Drawing::Size(355, 30);
			this->Textbox_id->TabIndex = 51;
			// 
			// Textbox_name
			// 
			this->Textbox_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_name->Location = System::Drawing::Point(236, 151);
			this->Textbox_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_name->Name = L"Textbox_name";
			this->Textbox_name->ReadOnly = true;
			this->Textbox_name->Size = System::Drawing::Size(355, 30);
			this->Textbox_name->TabIndex = 52;
			// 
			// Textbox_Email
			// 
			this->Textbox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Email->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Email->Location = System::Drawing::Point(236, 294);
			this->Textbox_Email->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_Email->Name = L"Textbox_Email";
			this->Textbox_Email->ReadOnly = true;
			this->Textbox_Email->Size = System::Drawing::Size(355, 30);
			this->Textbox_Email->TabIndex = 53;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(214, 460);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 59);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Cancel Booking";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Edit_Booking::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 23);
			this->label7->TabIndex = 75;
			this->label7->Text = L"Approval Status";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(236, 103);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(355, 30);
			this->textBox1->TabIndex = 76;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Location = System::Drawing::Point(236, 199);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(355, 30);
			this->textBox2->TabIndex = 77;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Location = System::Drawing::Point(236, 245);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(355, 30);
			this->textBox3->TabIndex = 78;
			// 
			// RoomTypeFinder
			// 
			this->RoomTypeFinder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RoomTypeFinder->ForeColor = System::Drawing::SystemColors::MenuText;
			this->RoomTypeFinder->Location = System::Drawing::Point(236, 340);
			this->RoomTypeFinder->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RoomTypeFinder->Multiline = true;
			this->RoomTypeFinder->Name = L"RoomTypeFinder";
			this->RoomTypeFinder->ReadOnly = true;
			this->RoomTypeFinder->Size = System::Drawing::Size(355, 96);
			this->RoomTypeFinder->TabIndex = 79;
			// 
			// TextBox_Username
			// 
			this->TextBox_Username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TextBox_Username->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TextBox_Username->Location = System::Drawing::Point(236, 67);
			this->TextBox_Username->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBox_Username->Name = L"TextBox_Username";
			this->TextBox_Username->ReadOnly = true;
			this->TextBox_Username->Size = System::Drawing::Size(355, 30);
			this->TextBox_Username->TabIndex = 80;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 23);
			this->label6->TabIndex = 81;
			this->label6->Text = L"Username";
			// 
			// Form_Edit_Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 545);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TextBox_Username);
			this->Controls->Add(this->RoomTypeFinder);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Textbox_Email);
			this->Controls->Add(this->Textbox_name);
			this->Controls->Add(this->Textbox_id);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Name = L"Form_Edit_Booking";
			this->Text = L"Booking Details";
			this->Load += gcnew System::EventHandler(this, &Form_Edit_Booking::Form_Edit_Booking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Edit_Booking_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 int ^ id_for_deletion2 = Convert::ToInt32(id_for_deletion);

				 String ^ getUserData = "Select * from Booking_Request where [ID] = " + id_for_deletion2 + ";" ;

				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();
				 RoomTypeFinder->Text="Not Applicable";

				 while(user_data->Read()==true)
				 {
					 int temp_number = user_data->GetInt32(0);
					 Textbox_id->Text = Convert::ToString(temp_number);
					 /*MessageBox::Show(Textbox_id->Text);*/
					 TextBox_Username->Text = user_data->GetString(1);
					 Textbox_name->Text = user_data->GetString(3);
					 Textbox_Email->Text = user_data->GetString(8);
					 textBox1->Text = user_data->GetString(9);
					 textBox2->Text = user_data->GetString(4);
					 textBox3->Text = user_data->GetString(5);

					 if(textBox1->Text == "YES")
					 {
						 String^ rooms_nums = user_data->GetString(14);

						 cliext::vector<String^> room_num_data;

						 String ^temp = "";
						 for(int j=0;j<rooms_nums->Length;j++)
						 {
							 if(rooms_nums[j] == ',')
							 {
								 room_num_data.push_back(temp);
								 temp = "";
							 }
							 else
								 temp = temp + rooms_nums[j];
						 }

						 /*for(int j=0;j<room_num_data.size();j++)
							 MessageBox::Show(room_num_data[j]);*/

						 
						 String^ full_rooms = user_data->GetString(6);
						 cliext::vector<String^> room_full_data;

						 for(int j=0;j<full_rooms->Length;j++)
						 {
							 if(full_rooms[j] == ',')
							 {
								 room_full_data.push_back(temp);
								 temp = "";
							 }
							 else
								 temp = temp + full_rooms[j];
						 }

						 int global_count = 0;
						 String ^str = ""; 

						 for(int j=0;j<room_full_data.size();j++)
						 {

							 int len = room_full_data[j]->Length;
							 str = str + room_full_data[j] + "  --  ";
							 int no_of_rooms = Convert::ToInt32(room_full_data[j]->Substring(len-1,1));

							 for(int i=0;i<no_of_rooms;i++)
							 {
								 str = str + room_num_data[global_count] + " , ";
								 global_count++;
							 }

							 str = str->Substring(0,str->Length-2);
							 str = str + " ; ";

						 }
						 RoomTypeFinder->Text = str;
					 }	 

				 }
				 DB_Connection->Close();

				 if(check==1) 
				 {
					 // Don't allow to change room type also

					 this->button1->Visible=false;
					 this->ClientSize= System::Drawing::Size(648, 400);
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {		 
				 try
				 {
					 int ^ id_for_deletion2 = Convert::ToInt32(id_for_deletion);
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ delete_booking = "delete from Booking_Request where [ID] = @nso";
					 OleDbCommand ^ cmdDel = gcnew OleDbCommand(delete_booking, DB_Connection);
					 cmdDel->Parameters->Add(gcnew OleDbParameter("@nso",id_for_deletion2));
					 OleDbDataReader ^ remove_booking = cmdDel->ExecuteReader();
					 DB_Connection->Close();
					 MessageBox::Show("Your booking request was deleted successfully!","Notification");
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 this->Close();
			 }
	};
}
