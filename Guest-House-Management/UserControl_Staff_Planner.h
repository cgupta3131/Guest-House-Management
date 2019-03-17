#pragma once
#using <System.dll>
#using <System.data.dll>

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
	/// Summary for UserControl_Staff_Planner
	/// </summary>
	public ref class UserControl_Staff_Planner : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Planner(void)
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
		~UserControl_Staff_Planner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  PlannerDate;
	protected: 

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

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
			this->PlannerDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date";
			// 
			// PlannerDate
			// 
			this->PlannerDate->Location = System::Drawing::Point(320, 12);
			this->PlannerDate->Name = L"PlannerDate";
			this->PlannerDate->Size = System::Drawing::Size(200, 22);
			this->PlannerDate->TabIndex = 1;
			this->PlannerDate->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Planner::dateTimePicker1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Housekeeping";
			this->label2->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"RoomService";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Mess Staff";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 307);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Security";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(246, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(246, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(246, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(246, 307);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// UserControl_Staff_Planner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PlannerDate);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Staff_Planner";
			this->Size = System::Drawing::Size(719, 389);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					String ^ date= PlannerDate->Text;
					int housekeepingnumber,roomservicenumber,mess_staffnumber,securitynumber;
					housekeepingnumber=roomservicenumber=mess_staffnumber=securitynumber=0;
					String ^ employee_id="1";
					bool is_working=false;
					try{
						OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
						DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
						DB_Connection->Open();
						

						String ^ getUserData = "Select * from Staff_Register where [Employee_Id] = " + employee_id + ";";

						String ^ designation;
						String ^ name;
						String ^ resignation_date;
						
						OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
						OleDbDataReader ^ e_data = cmd->ExecuteReader();
			
						while(e_data->Read() == true)
						{
							name=e_data->GetString(1);
							designation=e_data->GetString(2);
							
							try{
								resignation_date=e_data->GetString(10);
								//MessageBox::Show("Employee has left service");
							}
							catch(Exception ^ ex){
								is_working=true;
								//MessageBox::Show("Employee hasnt left service");
							}	
							
						}
						DB_Connection->Close();
						
					}


					
					catch(Exception ^ ex1){
						MessageBox::Show(ex1->Message);
					}

					if(is_working){
							String ^ leave_start;
							String ^ leave_end;
							try{
								OleDb::OleDbConnection ^ DB_Connection1 = gcnew OleDb::OleDbConnection();
								DB_Connection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
								DB_Connection1->Open();
								String ^ getUserData1 = "Select * from Staff_Leave where [EID] =" + employee_id + ";";
								OleDb::OleDbCommand ^ cmd1 = gcnew OleDbCommand(getUserData1, DB_Connection1);
								OleDbDataReader ^ e_data1 = cmd1->ExecuteReader();
								
								while(e_data1->Read() == true)
								{
									
									leave_start=e_data1->GetString(4);
									leave_end=e_data1->GetString(5);
									MessageBox::Show("Fetching Leave" + leave_end);
							
							
								}
								DB_Connection1->Close();								
							}
							catch(Exception ^ ex2){
								MessageBox::Show("Errorrr"+ex2->Message);
							}
				  }
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
