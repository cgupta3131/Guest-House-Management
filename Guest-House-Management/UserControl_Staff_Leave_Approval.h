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
	/// Summary for UserControl_Staff_Leave_Approval
	/// </summary>
	public ref class UserControl_Staff_Leave_Approval : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Leave_Approval(void)
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
		~UserControl_Staff_Leave_Approval()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column5;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(292, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pending Requests";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column1, 
				this->Column0, this->Column2, this->Column3, this->Column4, this->Column7, this->Column5});
			this->dataGridView1->Location = System::Drawing::Point(35, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(844, 538);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserControl_Staff_Leave_Approval::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(804, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Reload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Leave_Approval::button1_Click);
			// 
			// Column1
			// 
			this->Column1->FillWeight = 52.79188F;
			this->Column1->HeaderText = L"Request ID";
			this->Column1->Name = L"Column1";
			// 
			// Column0
			// 
			this->Column0->FillWeight = 93.44163F;
			this->Column0->HeaderText = L"Name";
			this->Column0->Name = L"Column0";
			this->Column0->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 74.7533F;
			this->Column2->HeaderText = L"Designation";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 74.7533F;
			this->Column3->HeaderText = L"Leave From";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 74.7533F;
			this->Column4->HeaderText = L"Leave Upto";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->FillWeight = 93.44163F;
			this->Column7->HeaderText = L"Total No. of Days";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->FillWeight = 56.06498F;
			this->Column5->HeaderText = L"Approve/Disapprove";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// UserControl_Staff_Leave_Approval
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Staff_Leave_Approval";
			this->Size = System::Drawing::Size(909, 681);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Leave_Approval::UserControl_Staff_Leave_Approval_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool validDates(String ^ leaveFrom)
		{
			DateTime oDate = Convert::ToDateTime(leaveFrom);
			//MessageBox::Show(Convert::ToString(oDate));
			TimeSpan span = oDate - System::DateTime().Now.Date;
			if(span.TotalDays<0) return false;

			return true;
		}


		void loadDataGrid()
		{

			dataGridView1->Rows->Clear();
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			String ^ getLeaveRequest = "Select * From Staff_Leave;";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getLeaveRequest, DB_Connection);
			OleDbDataReader ^ user_leave = cmd->ExecuteReader();

			while(user_leave->Read()==true)
			{

				dataGridView1->RowTemplate->Height = 40;
				String ^ Emp_name = Convert::ToString(user_leave->GetValue(1));
				String ^ leave_id = Convert::ToString(user_leave->GetValue(0));
				String ^ emp_desig = user_leave->GetString(3);
				String ^ leave_from = user_leave->GetString(4);
				if(!validDates(leave_from) || user_leave->GetString(7)!="Pending") continue;
				String ^ leave_upto = user_leave->GetString(5);
				String ^ totalDays = Convert::ToString(user_leave->GetValue(6));
				dataGridView1->Rows->Add(leave_id,Emp_name,emp_desig,leave_from,leave_upto,totalDays);
			}
			DB_Connection->Close();
		}


	private: System::Void UserControl_Staff_Leave_Approval_Load(System::Object^  sender, System::EventArgs^  e) {
				 loadDataGrid();
			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 String ^ name = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
				 if(MessageBox::Show("Approve "+ name + "'s leave?", "Approval", MessageBoxButtons::YesNo,MessageBoxIcon::Question)
					 == System::Windows::Forms::DialogResult::Yes)
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();
					 int ser_num = Convert::ToInt32(dataGridView1->CurrentRow->Cells[0]->Value);
					 String ^ getUserData = "Select * From Staff_Leave where Serial_Number like " + ser_num ;
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
					 cmdUpdate->CommandText = "UPDATE Staff_Leave SET Approved = 'Approved' WHERE Serial_Number = " + ser_num + ";";
					 cmdUpdate->ExecuteNonQuery();


					 DB_Connection->Close();
					 MessageBox::Show("Leave Approved");
					 loadDataGrid();

				 }
				 else
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();
					 int ser_num = Convert::ToInt32(dataGridView1->CurrentRow->Cells[0]->Value);
					 String ^ getUserData = "Select * From Staff_Leave where Serial_Number like " + ser_num ;
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
					 cmdUpdate->CommandText = "UPDATE Staff_Leave SET Approved = 'Not Approved' WHERE Serial_Number = " + ser_num + ";";
					 cmdUpdate->ExecuteNonQuery();


					 DB_Connection->Close();
					 MessageBox::Show("Leave Not Approved");
					 loadDataGrid();
				 }

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 loadDataGrid();
			 }
	};
}