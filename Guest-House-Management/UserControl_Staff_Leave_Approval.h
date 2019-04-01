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
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Staff_Leave_Approval(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(310, 32);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pending Requests";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Moccasin;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), 
				static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->ColumnHeadersHeight = 60;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column1, 
				this->Column0, this->Column2, this->Column3, this->Column4, this->Column7, this->Column5});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::SandyBrown;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(48, 86);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(768, 437);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserControl_Staff_Leave_Approval::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->FillWeight = 52.79188F;
			this->Column1->HeaderText = L"Request ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
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
			this->Column2->FillWeight = 75;
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
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Moccasin;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Verdana", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle7->NullValue = nullptr;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::CornflowerBlue;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Column5->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column5->FillWeight = 56.06498F;
			this->Column5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Column5->HeaderText = L"Options";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Text = L"Click here";
			this->Column5->ToolTipText = L"Click to Select";
			this->Column5->UseColumnTextForButtonValue = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(706, 37);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Reload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Leave_Approval::button1_Click);
			// 
			// UserControl_Staff_Leave_Approval
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Staff_Leave_Approval";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Leave_Approval::UserControl_Staff_Leave_Approval_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Leave_Approval::mymouseclick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

		void loadDataGrid()
		{

			dataGridView1->Rows->Clear();
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			String ^ getLeaveRequest = "Select * From Staff_Leave where [Approved] = 'Pending';";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getLeaveRequest, DB_Connection);
			OleDbDataReader ^ user_leave = cmd->ExecuteReader();
			//MessageBox:Show("2");
			while(user_leave->Read()==true)
			{

				dataGridView1->RowTemplate->Height = 40;
				//String ^ Emp_name = Convert::ToString(user_leave->GetInt32(1));
				String ^ Emp_name = user_leave->GetString(1);
				String ^ leave_id = Convert::ToString(user_leave->GetInt32(0));
				String ^ emp_desig = user_leave->GetString(3);
				String ^ leave_from = user_leave->GetString(4);
				String ^ leave_upto = user_leave->GetString(5);

				String ^ temp =  user_leave->GetString(4);
				String ^ totalDays = Convert::ToString(user_leave->GetInt32(6));
				String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

				String ^datefrom = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

				int datefrom_int = System::Convert::ToInt32(datefrom);
				int datetoday_int = System::Convert::ToInt32(today_date);

				if(datetoday_int > datefrom_int)
					continue;

				dataGridView1->Rows->Add(leave_id,Emp_name,emp_desig,leave_from,leave_upto,totalDays);
			}
			DB_Connection->Close();
		}


	private: System::Void UserControl_Staff_Leave_Approval_Load(System::Object^  sender, System::EventArgs^  e) {
				 loadDataGrid();

			 }
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
			 {
				 String ^ name = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
				 System::Windows::Forms::DialogResult ^ opt = gcnew System::Windows::Forms::DialogResult;
				 opt = MessageBox::Show("Approve "+ name + "'s leave?", "Approval", MessageBoxButtons::YesNoCancel,MessageBoxIcon::Question);
				 String ^str_choice = Convert::ToString(opt);
				 if(str_choice == "Yes")
				 {
					 
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();
					 int ser_num = Convert::ToInt32(dataGridView1->CurrentRow->Cells[0]->Value);
					 String ^ getUserData = "Select * From Staff_Leave where [ID] = "+ ser_num + ";";
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
					 //MessageBox::Show(Convert::ToString(ser_num));
					 cmdUpdate->CommandText = "UPDATE Staff_Leave SET Approved = 'Approved' WHERE ID = " + ser_num + ";";
					 cmdUpdate->ExecuteNonQuery();

					 DB_Connection->Close();
					 MessageBox::Show("Leave Approved");
					 loadDataGrid();

				 }
				 else if(str_choice == "No")
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();
					 int ser_num = Convert::ToInt32(dataGridView1->CurrentRow->Cells[0]->Value);
					 String ^ getUserData = "Select * From Staff_Leave where [ID] like " + ser_num ;
					 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
					 cmdUpdate->CommandText = "UPDATE Staff_Leave SET Approved = 'Not Approved' WHERE [ID] = " + ser_num + ";";
					 cmdUpdate->ExecuteNonQuery();

					 DB_Connection->Close();
					 MessageBox::Show("Leave Not Approved");
					 loadDataGrid();
				 }
				 //MessageBox::Show("1");

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 loadDataGrid();
			 }
	private: System::Void mymouseclick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
};
}