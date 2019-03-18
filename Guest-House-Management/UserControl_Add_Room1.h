#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Add_Room1
	/// </summary>
	public ref class UserControl_Add_Room1 : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Add_Room1(void)
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
		~UserControl_Add_Room1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Ind;
	protected: 
	private: System::Windows::Forms::Button^  Btn_Range;


	internal: System::Windows::Forms::Label^  Lbl_username;
	internal: System::Windows::Forms::TextBox^  Txt_Floor;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::TextBox^  Txt_Room;
	internal: System::Windows::Forms::ComboBox^  Register_Category;
	internal: System::Windows::Forms::Label^  label2;

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
			this->Btn_Ind = (gcnew System::Windows::Forms::Button());
			this->Btn_Range = (gcnew System::Windows::Forms::Button());
			this->Lbl_username = (gcnew System::Windows::Forms::Label());
			this->Txt_Floor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txt_Room = (gcnew System::Windows::Forms::TextBox());
			this->Register_Category = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Btn_Ind
			// 
			this->Btn_Ind->Location = System::Drawing::Point(113, 76);
			this->Btn_Ind->Name = L"Btn_Ind";
			this->Btn_Ind->Size = System::Drawing::Size(75, 23);
			this->Btn_Ind->TabIndex = 0;
			this->Btn_Ind->Text = L"Individual";
			this->Btn_Ind->UseVisualStyleBackColor = true;
			// 
			// Btn_Range
			// 
			this->Btn_Range->Location = System::Drawing::Point(334, 76);
			this->Btn_Range->Name = L"Btn_Range";
			this->Btn_Range->Size = System::Drawing::Size(75, 23);
			this->Btn_Range->TabIndex = 1;
			this->Btn_Range->Text = L"Range";
			this->Btn_Range->UseVisualStyleBackColor = true;
			// 
			// Lbl_username
			// 
			this->Lbl_username->AutoSize = true;
			this->Lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_username->Location = System::Drawing::Point(124, 164);
			this->Lbl_username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_username->Name = L"Lbl_username";
			this->Lbl_username->Size = System::Drawing::Size(59, 24);
			this->Lbl_username->TabIndex = 37;
			this->Lbl_username->Text = L"Floor";
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->Location = System::Drawing::Point(255, 164);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(170, 27);
			this->Txt_Floor->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(124, 238);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 24);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Room No.";
			// 
			// Txt_Room
			// 
			this->Txt_Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room->Location = System::Drawing::Point(255, 238);
			this->Txt_Room->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room->Name = L"Txt_Room";
			this->Txt_Room->Size = System::Drawing::Size(170, 27);
			this->Txt_Room->TabIndex = 40;
			// 
			// Register_Category
			// 
			this->Register_Category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Register_Category->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Category->FormattingEnabled = true;
			this->Register_Category->Location = System::Drawing::Point(255, 318);
			this->Register_Category->Margin = System::Windows::Forms::Padding(2);
			this->Register_Category->Name = L"Register_Category";
			this->Register_Category->Size = System::Drawing::Size(267, 25);
			this->Register_Category->TabIndex = 59;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(124, 318);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 24);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Category";
			// 
			// UserControl_Add_Room1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Register_Category);
			this->Controls->Add(this->Txt_Room);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->Lbl_username);
			this->Controls->Add(this->Btn_Range);
			this->Controls->Add(this->Btn_Ind);
			this->Name = L"UserControl_Add_Room1";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Room1::UserControl_Add_Room1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Add_Room1_Load(System::Object^  sender, System::EventArgs^  e) {

				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				DB_Connection->Open();
				String ^ getRoomData = "Select * from Room_Types";

				OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				OleDbDataReader ^ room_data = cmd->ExecuteReader();
			
				while(room_data->Read() == true)
					Register_Category->Items->Add(room_data->GetString(1));

				DB_Connection->Close();
			 }
};
}
