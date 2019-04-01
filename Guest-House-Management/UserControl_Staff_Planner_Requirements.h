#pragma once
# include <ctype.h>
#using <System.dll>
#using <System.data.dll>
//#include "Win/PluginWindowWin.h"
using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Planner_Requirements
	/// </summary>
	public ref class UserControl_Staff_Planner_Requirements : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Planner_Requirements(void)
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
		~UserControl_Staff_Planner_Requirements()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  hk_tb1;
	private: System::Windows::Forms::TextBox^  s_tb1;
	private: System::Windows::Forms::TextBox^  r_tb1;




	private: System::Windows::Forms::TextBox^  rs_tb1;


	private: System::Windows::Forms::TextBox^  hk_tb2;
	private: System::Windows::Forms::TextBox^  rs_tb2;
	private: System::Windows::Forms::TextBox^  r_tb2;
	private: System::Windows::Forms::TextBox^  s_tb2;








	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  update;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->hk_tb1 = (gcnew System::Windows::Forms::TextBox());
			this->s_tb1 = (gcnew System::Windows::Forms::TextBox());
			this->r_tb1 = (gcnew System::Windows::Forms::TextBox());
			this->rs_tb1 = (gcnew System::Windows::Forms::TextBox());
			this->hk_tb2 = (gcnew System::Windows::Forms::TextBox());
			this->rs_tb2 = (gcnew System::Windows::Forms::TextBox());
			this->r_tb2 = (gcnew System::Windows::Forms::TextBox());
			this->s_tb2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(46, 30);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Housekeeping";
			this->label1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner_Requirements::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(55, 135);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Security";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(46, 65);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Room Service";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(46, 100);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Receptionist";
			// 
			// hk_tb1
			// 
			this->hk_tb1->Location = System::Drawing::Point(174, 35);
			this->hk_tb1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->hk_tb1->Name = L"hk_tb1";
			this->hk_tb1->Size = System::Drawing::Size(81, 20);
			this->hk_tb1->TabIndex = 4;
			this->hk_tb1->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Planner_Requirements::hk_tb1_TextChanged);
			// 
			// s_tb1
			// 
			this->s_tb1->Location = System::Drawing::Point(174, 145);
			this->s_tb1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s_tb1->Name = L"s_tb1";
			this->s_tb1->Size = System::Drawing::Size(81, 20);
			this->s_tb1->TabIndex = 5;
			// 
			// r_tb1
			// 
			this->r_tb1->Location = System::Drawing::Point(174, 108);
			this->r_tb1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->r_tb1->Name = L"r_tb1";
			this->r_tb1->Size = System::Drawing::Size(81, 20);
			this->r_tb1->TabIndex = 6;
			// 
			// rs_tb1
			// 
			this->rs_tb1->Location = System::Drawing::Point(174, 72);
			this->rs_tb1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rs_tb1->Name = L"rs_tb1";
			this->rs_tb1->Size = System::Drawing::Size(81, 20);
			this->rs_tb1->TabIndex = 7;
			// 
			// hk_tb2
			// 
			this->hk_tb2->Location = System::Drawing::Point(281, 35);
			this->hk_tb2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->hk_tb2->Name = L"hk_tb2";
			this->hk_tb2->Size = System::Drawing::Size(81, 20);
			this->hk_tb2->TabIndex = 8;
			// 
			// rs_tb2
			// 
			this->rs_tb2->Location = System::Drawing::Point(281, 72);
			this->rs_tb2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rs_tb2->Name = L"rs_tb2";
			this->rs_tb2->Size = System::Drawing::Size(81, 20);
			this->rs_tb2->TabIndex = 9;
			// 
			// r_tb2
			// 
			this->r_tb2->Location = System::Drawing::Point(281, 110);
			this->r_tb2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->r_tb2->Name = L"r_tb2";
			this->r_tb2->Size = System::Drawing::Size(81, 20);
			this->r_tb2->TabIndex = 10;
			// 
			// s_tb2
			// 
			this->s_tb2->Location = System::Drawing::Point(281, 147);
			this->s_tb2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->s_tb2->Name = L"s_tb2";
			this->s_tb2->Size = System::Drawing::Size(81, 20);
			this->s_tb2->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(194, 15);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Day";
			this->label5->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner_Requirements::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(312, 15);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Night";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 248);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(334, 15);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Edit your maxinum employee requirements in each category";
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->update->Location = System::Drawing::Point(158, 183);
			this->update->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(106, 41);
			this->update->TabIndex = 15;
			this->update->Text = L"Update ";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner_Requirements::update_Click);
			// 
			// UserControl_Staff_Planner_Requirements
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Controls->Add(this->update);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->s_tb2);
			this->Controls->Add(this->r_tb2);
			this->Controls->Add(this->rs_tb2);
			this->Controls->Add(this->hk_tb2);
			this->Controls->Add(this->rs_tb1);
			this->Controls->Add(this->r_tb1);
			this->Controls->Add(this->s_tb1);
			this->Controls->Add(this->hk_tb1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_Staff_Planner_Requirements";
			this->Size = System::Drawing::Size(405, 321);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Planner_Requirements::UserControl_Staff_Planner_Requirements_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void UserControl_Staff_Planner_Requirements_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 String ^ getUserData = "Select * from Mess_Rates where [ID] = 1;";
				 String ^ dhk,^ drs,^ dr,^ ds;
				 String ^ nhk,^ nrs,^ nr,^ ns;
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
				 try{ 

					 OleDbDataReader ^ e_data = cmd->ExecuteReader();
					 while(e_data->Read()==true){
						 dhk=Convert::ToString(e_data->GetValue(4));
						 drs=Convert::ToString(e_data->GetValue(5));
						 dr=Convert::ToString(e_data->GetValue(6));
						 ds=Convert::ToString(e_data->GetValue(7));
						 nhk=Convert::ToString(e_data->GetValue(8));
						 nrs=Convert::ToString(e_data->GetValue(9));
						 nr=Convert::ToString(e_data->GetValue(10));
						 ns=Convert::ToString(e_data->GetValue(11));
					 }


				 }
				 catch(Exception ^ ex){
					 //MessageBox::Show(ex);
					 MessageBox::Show("erroro"+ex);
				 }
				 DB_Connection->Close();
				 hk_tb1->Text=dhk;
				 hk_tb2->Text=nhk;

				 rs_tb1->Text=drs;
				 rs_tb2->Text=nrs;

				 r_tb1->Text=dr;
				 r_tb2->Text=nr;

				 s_tb1->Text=ds;
				 s_tb2->Text=ns;

			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void hk_tb1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	public : bool check_if_valid(String ^ S){
				 int len=S->Length;
				 int i;
				 for(i=0;i<len;i++){
					 if(!isdigit(S[i])){
						 // MessageBox::Show("a non digit at"+i);
						 return false;

					 }
				 }

				 int val=Convert::ToInt32(S);
				 if(val<=0){
					 // MessageBox::Show("out of bounds");
					 return false;
				 }
				 return true;
			 }
	private: System::Void update_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand("",DB_Connection);
				 // String ^ txt_input=hk_tb1->Text;

				 if( !( check_if_valid(hk_tb1->Text) && check_if_valid(hk_tb2->Text) && check_if_valid(rs_tb1->Text) && check_if_valid(rs_tb2->Text) && check_if_valid(r_tb1->Text) && check_if_valid(r_tb2->Text) && check_if_valid(s_tb1->Text) && check_if_valid(s_tb2->Text) ) ){
					 MessageBox::Show("Invalid input");
					 UserControl_Staff_Planner_Requirements_Load(this,e);
					 return;

				 }
				 cmdUpdate->CommandText ="UPDATE Mess_Rates SET [dhousekeeping]= " + hk_tb1->Text + ",[droomservice]="+rs_tb1->Text+",[dreceptionist]="+r_tb1->Text+ ",[dsecurity]="+s_tb1->Text+",[nhousekeeping]="+hk_tb2->Text+",[nroomservice]="+rs_tb2->Text+",[nreceptionist]="+r_tb2->Text+",[nsecurity]="+s_tb2->Text+" WHERE [ID]=1;";
				 try{
					 cmdUpdate->ExecuteNonQuery();
					 MessageBox::Show("Updated Sucessfully");

				 }
				 catch(Exception ^ ex){
					 MessageBox::Show("error in click"+ex);
				 }
				 DB_Connection->Close();
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

			 }
	};
}