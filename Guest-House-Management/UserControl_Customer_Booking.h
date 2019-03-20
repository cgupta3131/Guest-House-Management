#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for Booking_Request
	/// </summary>
	public ref class Booking_Request : public System::Windows::Forms::UserControl
	{
	public:
		Booking_Request(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~Booking_Request()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: 
	private: System::Windows::Forms::Label^  label2;


	internal: System::Windows::Forms::TextBox^  Register_First_Name;
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::TextBox^  Textbox_name;

	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::TextBox^  Textbox_contact;
	internal: System::Windows::Forms::TextBox^  TextBox_Email;






	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::ComboBox^  User_Type_Box;
	private: 

	internal: System::Windows::Forms::ComboBox^  RoomTypeBox;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	internal: 
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: 
	internal: 
	private: 

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Register_First_Name = (gcnew System::Windows::Forms::TextBox());
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Textbox_name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Textbox_contact = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Email = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->User_Type_Box = (gcnew System::Windows::Forms::ComboBox());
			this->RoomTypeBox = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 1;
			// 
			// Register_First_Name
			// 
			this->Register_First_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_First_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Register_First_Name->Location = System::Drawing::Point(192, 54);
			this->Register_First_Name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Register_First_Name->Name = L"Register_First_Name";
			this->Register_First_Name->ReadOnly = true;
			this->Register_First_Name->Size = System::Drawing::Size(355, 30);
			this->Register_First_Name->TabIndex = 51;
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(21, 54);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(108, 23);
			this->Lbl_Register_Name->TabIndex = 52;
			this->Lbl_Register_Name->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 326);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 23);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Room Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 23);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Booking Upto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 23);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Booking From";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 23);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Customer Type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 23);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Booking For";
			// 
			// Textbox_name
			// 
			this->Textbox_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_name->Location = System::Drawing::Point(192, 114);
			this->Textbox_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_name->Name = L"Textbox_name";
			this->Textbox_name->Size = System::Drawing::Size(355, 30);
			this->Textbox_name->TabIndex = 58;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 23);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Booking Contact";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 428);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 23);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Email";
			// 
			// Textbox_contact
			// 
			this->Textbox_contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_contact->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_contact->Location = System::Drawing::Point(192, 368);
			this->Textbox_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_contact->Name = L"Textbox_contact";
			this->Textbox_contact->Size = System::Drawing::Size(355, 30);
			this->Textbox_contact->TabIndex = 65;
			// 
			// TextBox_Email
			// 
			this->TextBox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TextBox_Email->ForeColor = System::Drawing::SystemColors::MenuText;
			this->TextBox_Email->Location = System::Drawing::Point(192, 421);
			this->TextBox_Email->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->TextBox_Email->Name = L"TextBox_Email";
			this->TextBox_Email->Size = System::Drawing::Size(355, 30);
			this->TextBox_Email->TabIndex = 66;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(270, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 37);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Submit ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// User_Type_Box
			// 
			this->User_Type_Box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->User_Type_Box->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->User_Type_Box->FormattingEnabled = true;
			this->User_Type_Box->Location = System::Drawing::Point(192, 179);
			this->User_Type_Box->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->User_Type_Box->Name = L"User_Type_Box";
			this->User_Type_Box->Size = System::Drawing::Size(355, 29);
			this->User_Type_Box->TabIndex = 68;
			// 
			// RoomTypeBox
			// 
			this->RoomTypeBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RoomTypeBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RoomTypeBox->FormattingEnabled = true;
			this->RoomTypeBox->Location = System::Drawing::Point(192, 326);
			this->RoomTypeBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RoomTypeBox->Name = L"RoomTypeBox";
			this->RoomTypeBox->Size = System::Drawing::Size(355, 29);
			this->RoomTypeBox->TabIndex = 69;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(192, 230);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(355, 22);
			this->dateTimePicker1->TabIndex = 70;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Booking_Request::dateTimePicker1_ValueChanged);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(192, 277);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(355, 22);
			this->dateTimePicker2->TabIndex = 71;
			// 
			// Booking_Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->RoomTypeBox);
			this->Controls->Add(this->User_Type_Box);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TextBox_Email);
			this->Controls->Add(this->Textbox_contact);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Textbox_name);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Controls->Add(this->Register_First_Name);
			this->Controls->Add(this->label2);
			this->Name = L"Booking_Request";
			this->Size = System::Drawing::Size(994, 534);
			this->Load += gcnew System::EventHandler(this, &Booking_Request::Booking_Request_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Booking_Request_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern String username_info;

				 this->dateTimePicker1->MinDate=System::DateTime().Now;
				 this->dateTimePicker2->MinDate=System::DateTime().Now;
				 this->dateTimePicker2->Enabled=false;

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getRoomTypes = "Select * from Room_Types";
				 OleDbCommand ^ cmdRoomType = gcnew OleDbCommand(getRoomTypes, DB_Connection);
				 OleDbDataReader ^ room_data = cmdRoomType->ExecuteReader();

				 while(room_data->Read() == true)
				 {
					 RoomTypeBox->Items->Add(room_data->GetString(1));
				 }

				 String ^ getUserTypes = "Select * from User_Types";
				 OleDbCommand ^ cmdUserType = gcnew OleDbCommand(getUserTypes, DB_Connection);
				 OleDbDataReader ^ UserType_data = cmdUserType->ExecuteReader();

				 while(UserType_data->Read() == true)
				 {
					 User_Type_Box->Items->Add(UserType_data->GetString(1));
				 }

				 String ^ getUserData = "Select * From User_Table where Username like '%" + username_info + "%'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();

				 while(user_data->Read()==true)
				 {
					 Register_First_Name->Text = user_data->GetString(1);
					 Textbox_contact->Text = user_data->GetString(3);
					 TextBox_Email->Text = user_data->GetString(8);
				 }

				 String customer_username = username_info;
				 String customer_type = User_Type_Box->Text;
				 String customer_name = Textbox_name->Text;
				 String start_date = dateTimePicker1->Text->ToString("dd-mm-yyyy");
				 String end_date = dateTimePicker2->Text->ToString("dd-mm-yyyy");
				 String room_type = RoomTypeBox->Text;
				 String customer_contact = Textbox_contact->Text;
				 String customer_email = TextBox_Email->Text;
				 
				 String ^ insert_booking = "insert into Booking_Request([Customer_Username],[Customer_Type],[Customer_Name],[Date_From],[Date_Upto],[Room_Type],[Contact_Number],[Email],[Approved]) VALUES('" +customer_username+ "', " +customer_type+ ", '" +customer_name+ "', '" +start_date+ "', '" +end_date+ "', " +room_type+ "', " +customer_contact+ "', " +customer_email+ " );";
				 OleDbCommand ^ cmdInsert = gcnew OleDbCommand(insert_booking, DB_Connection);

				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Username",Convert::ToString(customer_username)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Type",customer_type));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Customer_Name",Convert::ToString(customer_name)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Date_From",Convert::ToString(start_date)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Date_Upto",Convert::ToString(end_date)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Room_Type",Convert::ToString(room_type)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Contact_Number",Convert::ToString(customer_contact)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Email",Convert::ToString(customer_email)));
				 cmdInsert->Parameters->Add(gcnew OleDbParameter("@Approved",Convert::ToString("NO")));

				 cmdInsert->ExecuteNonQuery();
				 DB_Connection->Close();
			 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->dateTimePicker2->Enabled=true;
			 this->dateTimePicker2->MinDate=this->dateTimePicker1->Value;
		 }
};
}
