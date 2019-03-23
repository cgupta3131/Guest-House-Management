#pragma once

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
		Form_Edit_Booking(String ^ user)
		{
			id_for_deletion = user;
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
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::TextBox^  Textbox_id;
	internal: System::Windows::Forms::TextBox^  Textbox_name;
	internal: System::Windows::Forms::TextBox^  Textbox_Email;
	internal: System::Windows::Forms::TextBox^  Textbox_Contact;




	internal: System::Windows::Forms::ComboBox^  RoomTypeFinder;


	internal: 

	internal: System::Windows::Forms::Button^  Btn_Create;
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Textbox_id = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_name = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Email = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Contact = (gcnew System::Windows::Forms::TextBox());
			this->RoomTypeFinder = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(43, 83);
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
			this->label2->Location = System::Drawing::Point(43, 127);
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
			this->label3->Location = System::Drawing::Point(43, 173);
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
			this->label4->Location = System::Drawing::Point(43, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 23);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Room Type";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 23);
			this->label5->TabIndex = 49;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(43, 314);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(163, 23);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Contact Details";
			// 
			// Textbox_id
			// 
			this->Textbox_id->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_id->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_id->Location = System::Drawing::Point(236, 35);
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
			this->Textbox_name->Location = System::Drawing::Point(236, 83);
			this->Textbox_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_name->Name = L"Textbox_name";
			this->Textbox_name->Size = System::Drawing::Size(355, 30);
			this->Textbox_name->TabIndex = 52;
			// 
			// Textbox_Email
			// 
			this->Textbox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Email->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Email->Location = System::Drawing::Point(236, 267);
			this->Textbox_Email->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_Email->Name = L"Textbox_Email";
			this->Textbox_Email->Size = System::Drawing::Size(355, 30);
			this->Textbox_Email->TabIndex = 53;
			// 
			// Textbox_Contact
			// 
			this->Textbox_Contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Contact->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Contact->Location = System::Drawing::Point(236, 314);
			this->Textbox_Contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_Contact->Name = L"Textbox_Contact";
			this->Textbox_Contact->Size = System::Drawing::Size(355, 30);
			this->Textbox_Contact->TabIndex = 54;
			// 
			// RoomTypeFinder
			// 
			this->RoomTypeFinder->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RoomTypeFinder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RoomTypeFinder->FormattingEnabled = true;
			this->RoomTypeFinder->Location = System::Drawing::Point(236, 220);
			this->RoomTypeFinder->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RoomTypeFinder->Name = L"RoomTypeFinder";
			this->RoomTypeFinder->Size = System::Drawing::Size(355, 29);
			this->RoomTypeFinder->TabIndex = 58;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(99, 440);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(189, 59);
			this->Btn_Create->TabIndex = 73;
			this->Btn_Create->Text = L"Save Changes";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &Form_Edit_Booking::Btn_Create_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(363, 440);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 59);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Delete Booking";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Edit_Booking::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(43, 377);
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
			this->textBox1->Location = System::Drawing::Point(236, 377);
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
			this->textBox2->Location = System::Drawing::Point(236, 127);
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
			this->textBox3->Location = System::Drawing::Point(236, 173);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(355, 30);
			this->textBox3->TabIndex = 78;
			// 
			// Form_Edit_Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(648, 545);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->RoomTypeFinder);
			this->Controls->Add(this->Textbox_Contact);
			this->Controls->Add(this->Textbox_Email);
			this->Controls->Add(this->Textbox_name);
			this->Controls->Add(this->Textbox_id);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Name = L"Form_Edit_Booking";
			this->Text = L"Form_Edit_Booking";
			this->Load += gcnew System::EventHandler(this, &Form_Edit_Booking::Form_Edit_Booking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Edit_Booking_Load(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getRoomTypes = "Select * from Room_Types";
				 OleDbCommand ^ cmdRoomType = gcnew OleDbCommand(getRoomTypes, DB_Connection);
				 OleDbDataReader ^ room_data = cmdRoomType->ExecuteReader();

				 while(room_data->Read() == true)
				 {
					 RoomTypeFinder->Items->Add(room_data->GetString(1));
				 }

				 int ^ id_for_deletion2 = Convert::ToInt32(id_for_deletion);

				 String ^ getUserData = "Select * from Booking_Request where Serial_Number like '%" + id_for_deletion2 + "%'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 OleDbDataReader ^ user_data = cmd->ExecuteReader();

				 while(user_data->Read()==true)
				 {
					 Textbox_id->Text = user_data->GetValue(0)->ToString();
					 Textbox_name->Text = user_data->GetString(3);
					 Textbox_Contact->Text = user_data->GetString(7);
					 Textbox_Email->Text = user_data->GetString(8);
					 textBox1->Text = user_data->GetString(9);
					 RoomTypeFinder->Text = user_data->GetString(6);
					 textBox2->Text = user_data->GetString(4);
					 textBox3->Text = user_data->GetString(5);
				 }
				 DB_Connection->Close();
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {		 
				 try
				 {
					 int ^ id_for_deletion2 = Convert::ToInt32(id_for_deletion);
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ delete_booking = "delete from Booking_Request where Serial_Number=@nso";
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
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 int ^ book_id = Convert::ToInt32(id_for_deletion);
					 String ^ book_name = Textbox_name->Text;
					 String ^ book_email = Textbox_Email->Text;
					 String ^ book_contact = Textbox_Contact->Text;

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getBookData = "Select * From Booking_Request where Serial_Number like '%" + book_id + "%'";
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getBookData, DB_Connection);
					 cmdUpdate->CommandText = "UPDATE Booking_Request SET Customer_Name = '" + book_name + "' , Email = '" + book_email + "' , Contact_Number = '" + book_contact + "'WHERE Serial_Number = " + book_id + ";";
					 cmdUpdate->ExecuteNonQuery();
					 DB_Connection->Close();
					 MessageBox::Show("Booking request updated Successfully","Notification");
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				 this->Close();
			 }
	};
}
