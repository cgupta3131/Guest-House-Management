#pragma once
#include "Form_Edit_Booking.h"
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

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Customer_Book_Edit
	/// </summary>
	public ref class UserControl_Customer_Book_Edit : public System::Windows::Forms::UserControl
	{
	public:
		String ^username_info;
		UserControl_Customer_Book_Edit(String ^ user)
		{
			InitializeComponent();
			username_info = user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Customer_Book_Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	internal: System::Windows::Forms::Label^  label1;

	internal: 



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column3;









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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->column1, 
				this->column2, this->column3});
			this->dataGridView1->Location = System::Drawing::Point(41, 115);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(877, 346);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserControl_Customer_Book_Edit::dataGridView1_CellContentClick);
			// 
			// column1
			// 
			this->column1->HeaderText = L"Booking ID";
			this->column1->Name = L"column1";
			this->column1->ReadOnly = true;
			this->column1->Width = 140;
			// 
			// column2
			// 
			this->column2->HeaderText = L"Booking For";
			this->column2->Name = L"column2";
			this->column2->ReadOnly = true;
			this->column2->Width = 150;
			// 
			// column3
			// 
			this->column3->HeaderText = L"Booking From";
			this->column3->Name = L"column3";
			this->column3->ReadOnly = true;
			this->column3->Width = 170;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(323, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 23);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Past Booking History";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(741, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 49);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Reload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Customer_Book_Edit::button1_Click);
			// 
			// UserControl_Customer_Book_Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"UserControl_Customer_Book_Edit";
			this->Size = System::Drawing::Size(994, 534);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Book_Edit::UserControl_Customer_Book_Edit_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Customer_Book_Edit_Load(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->Rows->Clear();
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getPastBookings = "Select * From Booking_Request where Customer_Username like '%" + username_info + "%'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
				 OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 

				 /*while(user_booking->Read()==true)
				 {
				 List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
				 }*/

				 while(user_booking->Read()==true)
				 {
					 // add check that show only booking requests that are more than the current date
					dataGridView1->RowTemplate->Height = 80;
					String ^ book_id = Convert::ToString(user_booking->GetValue(0));
					String ^ book_name = user_booking->GetString(3);
					String ^ book_date = user_booking->GetString(4);
					dataGridView1->Rows->Add(book_id,book_name,book_date);
				 }
				 DB_Connection->Close();
			 }
	private: System::Void List_Search_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 //Console::WriteLine(dataGridView1->CurrentRow->Cells[0]->ToString());
				String ^str=dataGridView1->CurrentRow->Cells[2]->Value->ToString();
				//MessageBox::Show(str);
				DateTime dt=Convert::ToDateTime(str);
				TimeSpan span=dt-System::DateTime().Now.Date;
				String ^ booking_id = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
				MessageBox::Show(Convert::ToString(span.TotalDays));
				if(span.TotalDays>0)
				{
					/*Modify code to allow edit only if not in any */
					Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(booking_id);
					f2->ShowDialog();
				}
				else if(span.TotalDays<0)
				{
					/* Add code to check if feedback already submitted 
					   Also see that feedback is asked for on the last day of stay*/ 
					
					Form_Feedback ^form3 = gcnew Form_Feedback(booking_id);
					form3->ShowDialog();
				}
				else
				{
					 /*Add code to go to in stay facilities*/
				}
				
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			     dataGridView1->Rows->Clear();
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getPastBookings = "Select * From Booking_Request where Customer_Username like '%" + username_info + "%'";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
				 OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
				 /*while(user_booking->Read()==true)
				 {
				 List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
				 }*/

				 while(user_booking->Read()==true)
				 {
					 // add check that show only booking requests that are more than the current date
					dataGridView1->RowTemplate->Height = 80;
					String ^ book_id = Convert::ToString(user_booking->GetValue(0));
					String ^ book_name = user_booking->GetString(3);
					String ^ book_date = user_booking->GetString(4);
					dataGridView1->Rows->Add(book_id,book_name,book_date);
				 }
				 DB_Connection->Close();
		 }
};
}
