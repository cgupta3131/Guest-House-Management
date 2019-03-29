#pragma once

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
	/// Summary for UserControl_Customer_Admin_Feedback
	/// </summary>
	public ref class UserControl_Customer_Admin_Feedback : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Customer_Admin_Feedback(void)
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
		~UserControl_Customer_Admin_Feedback()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::TextBox^  textbox1;
	internal: System::Windows::Forms::TextBox^  textbox2;
	internal: System::Windows::Forms::TextBox^  textbox3;
	protected: 

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(200, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(403, 37);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Average Customer Ratings";
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(72, 165);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(163, 23);
			this->Lbl_Register_Name->TabIndex = 49;
			this->Lbl_Register_Name->Text = L"Mess Feedback";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 23);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Cleanliness Feedback";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 303);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 23);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Service Feedback";
			// 
			// textbox1
			// 
			this->textbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textbox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textbox1->Location = System::Drawing::Point(359, 165);
			this->textbox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textbox1->Multiline = true;
			this->textbox1->Name = L"textbox1";
			this->textbox1->ReadOnly = true;
			this->textbox1->Size = System::Drawing::Size(165, 31);
			this->textbox1->TabIndex = 52;
			// 
			// textbox2
			// 
			this->textbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textbox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textbox2->Location = System::Drawing::Point(359, 232);
			this->textbox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textbox2->Multiline = true;
			this->textbox2->Name = L"textbox2";
			this->textbox2->ReadOnly = true;
			this->textbox2->Size = System::Drawing::Size(165, 33);
			this->textbox2->TabIndex = 53;
			// 
			// textbox3
			// 
			this->textbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textbox3->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textbox3->Location = System::Drawing::Point(359, 303);
			this->textbox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textbox3->Multiline = true;
			this->textbox3->Name = L"textbox3";
			this->textbox3->ReadOnly = true;
			this->textbox3->Size = System::Drawing::Size(165, 32);
			this->textbox3->TabIndex = 54;
			// 
			// UserControl_Customer_Admin_Feedback
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textbox3);
			this->Controls->Add(this->textbox2);
			this->Controls->Add(this->textbox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Controls->Add(this->label3);
			this->Name = L"UserControl_Customer_Admin_Feedback";
			this->Size = System::Drawing::Size(909, 861);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Admin_Feedback::UserControl_Customer_Admin_Feedback_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Customer_Admin_Feedback_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getFeedback = "Select * from Booking_Request";
				 OleDbCommand ^ cmdFeedback = gcnew OleDbCommand(getFeedback, DB_Connection);
				 OleDbDataReader ^ feedback_data = cmdFeedback->ExecuteReader();

				 Decimal f1=0;
				 Decimal f2=0;
				 Decimal f3=0;
				 Decimal count=0;

				 Decimal ^ feedback1;
				 Decimal ^ feedback2;
				 Decimal ^ feedback3;

				 while(feedback_data->Read() == true)
				 {
					 count = count + 1;
					 f1 = f1 + Convert::ToDecimal(feedback_data->GetInt32(10));
					 f2 = f2 + Convert::ToDecimal(feedback_data->GetInt32(11));
					 f3 = f3 + Convert::ToDecimal(feedback_data->GetInt32(12));
				 }
				 if(count==0)
				 {
					 MessageBox::Show("No feedback as of now","Notification");
					 return ;
				 }
				 else
				 {
					 feedback1 = f1/count;
					 feedback2 = f2/count;
					 feedback3 = f3/count;
				 }
				 textbox1->Text = Convert::ToString(feedback1);
				 textbox2->Text = Convert::ToString(feedback2);
				 textbox3->Text = Convert::ToString(feedback3);
			 }
	};
}
