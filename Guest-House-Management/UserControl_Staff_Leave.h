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
	/// Summary for UserControl_Staff_Leave
	/// </summary>
	public ref class UserControl_Staff_Leave : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Staff_Leave(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Staff_Leave()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Button^  btn_submit;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 112);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(371, 109);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(165, 28);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Leave::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(201, 187);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"From";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(371, 191);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(165, 26);
			this->dateTimePicker1->TabIndex = 3;
			this->dateTimePicker1->Value = System::DateTime(2019, 3, 17, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Leave::dateTimePicker1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(201, 269);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"To";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd-MM-yyyy";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(371, 273);
			this->dateTimePicker2->Margin = System::Windows::Forms::Padding(2);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(165, 26);
			this->dateTimePicker2->TabIndex = 5;
			this->dateTimePicker2->Value = System::DateTime(2019, 3, 17, 15, 46, 10, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Leave::dateTimePicker2_ValueChanged);
			// 
			// btn_submit
			// 
			this->btn_submit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btn_submit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_submit->Location = System::Drawing::Point(264, 367);
			this->btn_submit->Margin = System::Windows::Forms::Padding(2);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(153, 67);
			this->btn_submit->TabIndex = 6;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = false;
			this->btn_submit->Click += gcnew System::EventHandler(this, &UserControl_Staff_Leave::btn_submit_Click);
			// 
			// UserControl_Staff_Leave
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Staff_Leave";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Leave::UserControl_Staff_Leave_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Leave::mymouseenter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Staff_Leave_Load(System::Object^  sender, System::EventArgs^  e) {
				 Fillcombo();
				 this->dateTimePicker1->MinDate=System::DateTime().Now;
				 this->dateTimePicker2->MinDate=System::DateTime().Now.AddDays(1);
				 //this->dateTimePicker2->Enabled=false;
			 }


			 void Fillcombo()
			 {
				 try{

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getUserData = "Select * from Staff_Register;";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);

					 OleDbDataReader ^ user_data = cmd->ExecuteReader();

					 while(user_data->Read() == true)
					 {
						 String ^ newEntry = "ID: "+ user_data->GetInt32(0) + " - " + user_data->GetString(1); //Id - Name
						 //MessageBox::Show(newEntry);
						 if(user_data->GetString(10) != "")
							 continue;
						 comboBox1->Items->Add(newEntry);
					 }

					 //cmd->ExecuteNonQuery();
					 DB_Connection->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
			 //validating dates
			 bool validDates()
			 {
				 TimeSpan span = dateTimePicker1->Value - System::DateTime().Now;
				 if(span.TotalDays<0) return false;
				 span = dateTimePicker2->Value - dateTimePicker1->Value;
				 if(span.TotalDays<0) return false;

				 return true;
			 }
	private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {

				 //Getting details of selected Person
				 if(comboBox1->Text=="")
				 {
					 if(comboBox1->Text=="")
						 MessageBox::Show("Please select a valid Employee!");
					 else
						 MessageBox::Show("Please enter valid Dates!");
				 }
				 else
				 {

					 String ^ selected = comboBox1->Text;
					 //MessageBox::Show(selected);



					 String ^ employeeName="default";

					 int e_id=Convert::ToInt32(selected->ToString()->Split(' ')[1]);
					 //MessageBox::Show(employeeName +" " + e_id);

					 String ^ designation="default";

					 String ^ leaveFrom = dateTimePicker1->Text;
					 String ^ leaveUpto = dateTimePicker2->Text;
					 //MessageBox::Show(leaveFrom+" "+leaveUpto);
					 //calculating total number of days for leave using sustem variables and saving into totalDays
					 TimeSpan span = dateTimePicker2->Value - dateTimePicker1->Value;
					 int totalDays = Convert::ToInt32(span.TotalDays) + 1;

					 try{

						 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
						 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
						 DB_Connection->Open();

						 String ^ getUserData = "Select * from Staff_Register where [Employee_ID] = "+e_id+";";

						 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);

						 OleDbDataReader ^ user_data = cmd->ExecuteReader();

						 while(user_data->Read() == true)
						 {
							 employeeName = user_data->GetString(1);
							 designation = user_data->GetString(2);
						 }
						 //cmd->ExecuteNonQuery();
						 DB_Connection->Close();
						 if(employeeName=="default"||designation=="default")
						 {
							 MessageBox::Show("Employee Name or Designation not stored! Please try again or contact administrator");
						 }
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }

					 //MessageBox::Show(e_id+" "+employeeName+" "+designation+" "+totalDays);
					 //writing into Staff_Leave table
					 try{
						 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
						 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb;";



						 Debug::WriteLine(employeeName);
						 Debug::WriteLine("\n\n\n");


						 String ^ insertString = "insert into Staff_Leave([Employee_Name],[EID],[Designation],[Leave_from],[Leave_upto],[Total_Number_of_days]) VALUES('" +employeeName+ "', " +e_id+ ", '" +designation+ "', '" +leaveFrom+ "', '" +leaveUpto+ "', " +totalDays+ " );";

						 Debug::WriteLine(insertString);
						 Debug::WriteLine("\n\n\n");

						 //OleDbDataReader ^ dr;
						 DB_Connection->Open();

						 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);


						 cmd->Parameters->Add(gcnew OleDbParameter("@Employee_Name",Convert::ToString(employeeName)));
						 cmd->Parameters->Add(gcnew OleDbParameter("@EID",e_id));
						 cmd->Parameters->Add(gcnew OleDbParameter("@Designation",Convert::ToString(designation)));
						 cmd->Parameters->Add(gcnew OleDbParameter("@Leave_from",Convert::ToString(leaveFrom)));
						 cmd->Parameters->Add(gcnew OleDbParameter("@Leave_upto",Convert::ToString(leaveUpto)));
						 cmd->Parameters->Add(gcnew OleDbParameter("@Total_Number_of_days",totalDays));




						 cmd->ExecuteNonQuery();
						 DB_Connection->Close();

					 }

					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
					 }
					 MessageBox::Show("You leave request has been sent for approval, "+employeeName);
				 }
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 //this->dateTimePicker2->Enabled=true;
				 this->dateTimePicker2->MinDate=this->dateTimePicker1->Value.AddDays(1);

			 }
	private: System::Void mymouseenter(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void dateTimePicker2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}