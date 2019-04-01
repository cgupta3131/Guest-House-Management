#pragma once

#using <System.dll>
#using <System.data.dll>
#include "UserControl_Staff_Planner_Requirements.h"
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
/// Summary for UserControl_Staff_Planner
/// </summary>
public ref class UserControl_Staff_Planner : public System::Windows::Forms::UserControl
{
public:
Panel ^pnl;
Panel ^pn2;
Panel ^pn3;
Panel ^pn4;
Panel ^pn5;
int flag;
DateTime thedate;

UserControl_Staff_Planner(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5, int temp_flag)
{
 InitializeComponent();
 pnl = testpanel1;
 pn2 = testpanel2;
 pn3 = testpanel3;
 pn4 = testpanel4;
 pn5 = testpanel5;
 flag = temp_flag;
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
protected: 
private: System::Windows::Forms::DateTimePicker^  PlannerDate;

private: System::Windows::Forms::Label^  Night_Label;





private: System::Windows::Forms::ProgressBar^  daybar;
private: System::Windows::Forms::Label^  count_lbl;
private: System::Windows::Forms::Label^  category_lbl;
private: System::Windows::Forms::ProgressBar^  nightbar;





private: System::Windows::Forms::Label^  count_lbl_n;
private: System::Windows::Forms::Label^  hover_lbl;
private: System::Windows::Forms::LinkLabel^  linkLabel1;
private: System::Windows::Forms::Label^  day_label;
private: System::Windows::Forms::Panel^  staff_req_panel;
private: System::Windows::Forms::LinkLabel^  exit_label;
















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
	 this->label1 = (gcnew System::Windows::Forms::Label());
	 this->PlannerDate = (gcnew System::Windows::Forms::DateTimePicker());
	 this->Night_Label = (gcnew System::Windows::Forms::Label());
	 this->daybar = (gcnew System::Windows::Forms::ProgressBar());
	 this->count_lbl = (gcnew System::Windows::Forms::Label());
	 this->category_lbl = (gcnew System::Windows::Forms::Label());
	 this->nightbar = (gcnew System::Windows::Forms::ProgressBar());
	 this->count_lbl_n = (gcnew System::Windows::Forms::Label());
	 this->hover_lbl = (gcnew System::Windows::Forms::Label());
	 this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
	 this->day_label = (gcnew System::Windows::Forms::Label());
	 this->staff_req_panel = (gcnew System::Windows::Forms::Panel());
	 this->exit_label = (gcnew System::Windows::Forms::LinkLabel());
	 this->SuspendLayout();
	 // 
	 // label1
	 // 
	 this->label1->AutoSize = true;
	 this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->label1->ForeColor = System::Drawing::Color::Black;
	 this->label1->Location = System::Drawing::Point(265, 16);
	 this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	 this->label1->Name = L"label1";
	 this->label1->Size = System::Drawing::Size(83, 34);
	 this->label1->TabIndex = 0;
	 this->label1->Text = L"Date";
	 this->label1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label1_Click);
	 // 
	 // PlannerDate
	 // 
	 this->PlannerDate->Enabled = false;
	 this->PlannerDate->Location = System::Drawing::Point(364, 16);
	 this->PlannerDate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	 this->PlannerDate->Name = L"PlannerDate";
	 this->PlannerDate->Size = System::Drawing::Size(258, 30);
	 this->PlannerDate->TabIndex = 1;
	 this->PlannerDate->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Planner::PlannerDate_ValueChanged);
	 // 
	 // Night_Label
	 // 
	 this->Night_Label->AutoSize = true;
	 this->Night_Label->BackColor = System::Drawing::Color::Black;
	 this->Night_Label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
	 this->Night_Label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->Night_Label->ForeColor = System::Drawing::Color::White;
	 this->Night_Label->Location = System::Drawing::Point(619, 125);
	 this->Night_Label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	 this->Night_Label->Name = L"Night_Label";
	 this->Night_Label->Size = System::Drawing::Size(98, 36);
	 this->Night_Label->TabIndex = 3;
	 this->Night_Label->Text = L"NIGHT";
	 this->Night_Label->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label3_Click);
	 // 
	 // daybar
	 // 
	 this->daybar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(192)));
	 this->daybar->ForeColor = System::Drawing::Color::Red;
	 this->daybar->Location = System::Drawing::Point(43, 160);
	 this->daybar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	 this->daybar->Name = L"daybar";
	 this->daybar->Size = System::Drawing::Size(222, 51);
	 this->daybar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
	 this->daybar->TabIndex = 9;
	 this->daybar->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::daybar_Click);
	 // 
	 // count_lbl
	 // 
	 this->count_lbl->AutoSize = true;
	 this->count_lbl->BackColor = System::Drawing::Color::Black;
	 this->count_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->count_lbl->ForeColor = System::Drawing::Color::White;
	 this->count_lbl->Location = System::Drawing::Point(107, 218);
	 this->count_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	 this->count_lbl->Name = L"count_lbl";
	 this->count_lbl->Size = System::Drawing::Size(89, 36);
	 this->count_lbl->TabIndex = 10;
	 this->count_lbl->Text = L"count";
	 // 
	 // category_lbl
	 // 
	 this->category_lbl->AutoSize = true;
	 this->category_lbl->Cursor = System::Windows::Forms::Cursors::Default;
	 this->category_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->category_lbl->ForeColor = System::Drawing::Color::Black;
	 this->category_lbl->Location = System::Drawing::Point(5, 54);
	 this->category_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	 this->category_lbl->Name = L"category_lbl";
	 this->category_lbl->Size = System::Drawing::Size(96, 40);
	 this->category_lbl->TabIndex = 11;
	 this->category_lbl->Text = L"Date";
	 this->category_lbl->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::category_lbl_Click);
	 // 
	 // nightbar
	 // 
	 this->nightbar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(192)));
	 this->nightbar->ForeColor = System::Drawing::Color::Red;
	 this->nightbar->Location = System::Drawing::Point(558, 166);
	 this->nightbar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	 this->nightbar->Name = L"nightbar";
	 this->nightbar->Size = System::Drawing::Size(222, 51);
	 this->nightbar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
	 this->nightbar->TabIndex = 12;
	 this->nightbar->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::progressBar1_Click);
	 // 
	 // count_lbl_n
	 // 
	 this->count_lbl_n->AutoSize = true;
	 this->count_lbl_n->BackColor = System::Drawing::Color::Black;
	 this->count_lbl_n->Location = System::Drawing::Point(634, 222);
	 this->count_lbl_n->Name = L"count_lbl_n";
	 this->count_lbl_n->Size = System::Drawing::Size(64, 25);
	 this->count_lbl_n->TabIndex = 16;
	 this->count_lbl_n->Text = L"label6";
	 // 
	 // hover_lbl
	 // 
	 this->hover_lbl->AutoSize = true;
	 this->hover_lbl->BackColor = System::Drawing::Color::Transparent;
	 this->hover_lbl->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
	 this->hover_lbl->Location = System::Drawing::Point(380, 269);
	 this->hover_lbl->Name = L"hover_lbl";
	 this->hover_lbl->Size = System::Drawing::Size(0, 25);
	 this->hover_lbl->TabIndex = 17;
	 this->hover_lbl->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label6_Click_1);
	 // 
	 // linkLabel1
	 // 
	 this->linkLabel1->Location = System::Drawing::Point(651, 16);
	 this->linkLabel1->Name = L"linkLabel1";
	 this->linkLabel1->Size = System::Drawing::Size(196, 23);
	 this->linkLabel1->TabIndex = 0;
	 this->linkLabel1->TabStop = true;
	 this->linkLabel1->Text = L"Edit Staff Requirements";
	 this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserControl_Staff_Planner::linkLabel1_LinkClicked);
	 // 
	 // day_label
	 // 
	 this->day_label->AutoSize = true;
	 this->day_label->BackColor = System::Drawing::Color::Black;
	 this->day_label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->day_label->ForeColor = System::Drawing::Color::White;
	 this->day_label->Location = System::Drawing::Point(107, 121);
	 this->day_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
	 this->day_label->Name = L"day_label";
	 this->day_label->Size = System::Drawing::Size(75, 34);
	 this->day_label->TabIndex = 2;
	 this->day_label->Text = L"DAY";
	 this->day_label->Click += gcnew System::EventHandler(this, &UserControl_Staff_Planner::label2_Click_1);
	 // 
	 // staff_req_panel
	 // 
	 this->staff_req_panel->AutoSize = true;
	 this->staff_req_panel->Location = System::Drawing::Point(222, 343);
	 this->staff_req_panel->Name = L"staff_req_panel";
	 this->staff_req_panel->Size = System::Drawing::Size(391, 137);
	 this->staff_req_panel->TabIndex = 18;
	 // 
	 // exit_label
	 // 
	 this->exit_label->AutoSize = true;
	 this->exit_label->Location = System::Drawing::Point(229, 101);
	 this->exit_label->Name = L"exit_label";
	 this->exit_label->Size = System::Drawing::Size(44, 25);
	 this->exit_label->TabIndex = 19;
	 this->exit_label->TabStop = true;
	 this->exit_label->Text = L"Exit";
	 this->exit_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserControl_Staff_Planner::linkLabel2_LinkClicked);
	 // 
	 // UserControl_Staff_Planner
	 // 
	 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
	 this->AutoScroll = true;
	 this->BackColor = System::Drawing::Color::Transparent;
	 this->Controls->Add(this->exit_label);
	 this->Controls->Add(this->staff_req_panel);
	 this->Controls->Add(this->linkLabel1);
	 this->Controls->Add(this->hover_lbl);
	 this->Controls->Add(this->count_lbl_n);
	 this->Controls->Add(this->nightbar);
	 this->Controls->Add(this->category_lbl);
	 this->Controls->Add(this->count_lbl);
	 this->Controls->Add(this->daybar);
	 this->Controls->Add(this->Night_Label);
	 this->Controls->Add(this->day_label);
	 this->Controls->Add(this->PlannerDate);
	 this->Controls->Add(this->label1);
	 this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	 this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
	 this->Name = L"UserControl_Staff_Planner";
	 this->Size = System::Drawing::Size(868, 553);
	 this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Planner::UserControl_Staff_Planner_Load);
	 this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Planner::myouseneter);
	 this->ResumeLayout(false);
	 this->PerformLayout();

 }
#pragma endregion
 
  int dhousekeepingnumber,droomservicenumber,dmess_staffnumber,dsecuritynumber,drecieptionistnumber;
  int nhousekeepingnumber,nroomservicenumber,nmess_staffnumber,nrecieptionistnumber,nsecuritynumber;
 void  update_planner(int e_category){
  daybar->Value=0;
  nightbar->Value=0;
  count_lbl->Text="0";
  count_lbl_n->Text="0";
  
  OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
  DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
  DB_Connection->Open();
  String ^ getUserData = "Select * from Mess_Rates where [ID] = 1;";
  String ^ dhk,^ drs,^ dr,^ ds;
  String ^ nhk,^ nrs,^ nr,^ ns;
  OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
  try{ 

   OleDbDataReader ^ e_data = cmd->ExecuteReader();
   while(e_data->Read()==true)
   {
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


  
  if(e_category==0){
   category_lbl->Text="House Keeping";
   daybar->Maximum=Convert::ToInt32(dhk);
   nightbar->Maximum=Convert::ToInt32(nhk);
  }

  if(e_category==1){
   category_lbl->Text="Room Service";
   daybar->Maximum=Convert::ToInt32(drs);
   nightbar->Maximum=Convert::ToInt32(nrs);
  }

  if(e_category==2){
   category_lbl->Text="Receptionist";
   daybar->Maximum=Convert::ToInt32(dr);
   nightbar->Maximum=Convert::ToInt32(nr);
  }

  if(e_category==3){
   category_lbl->Text="Watchman";
   daybar->Maximum=Convert::ToInt32(ds);
   nightbar->Maximum=Convert::ToInt32(ns);
  }
  
  dhousekeepingnumber=droomservicenumber=dmess_staffnumber=dsecuritynumber=drecieptionistnumber=0;
  
  nhousekeepingnumber=nroomservicenumber=nmess_staffnumber=nsecuritynumber=nrecieptionistnumber=0;
  String ^ employee_id="1";
  String ^ employee_name;
  bool is_working=false;
  String ^ designation;
  String ^ name;
  String ^ resignation_date;
  String ^ employee_shift;
  /*label2->Location = System::Drawing::Point(48,106+50*housekeepingnumber);
  label3->Location = System::Drawing::Point(48,106+50*(1+housekeepingnumber+roomservicenumber));
  label4->Location = System::Drawing::Point(48,106+50*(2+housekeepingnumber+roomservicenumber+recieptionistnumber));
  label5->Location = System::Drawing::Point(48,106+50*(3+housekeepingnumber+roomservicenumber+recieptionistnumber+securitynumber));
  //MessageBox::Show("working");*/
  try{
   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();
   //String ^ getUserData = "Select * from Staff_Register where [Employee_Id]=? ;" ;
   String ^ getUserData = "Select * from Staff_Register;";
   OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
   //MessageBox::Show(getUserData);
   //cmd->Parameters->AddWithValue("[Employee_Id]", "1");
   OleDbDataReader ^ e_data = cmd->ExecuteReader();
   while(e_data->Read() == true)
   {  
    is_working=false;
    //MessageBox::Show("eid1oia " +employee_id);
    employee_id=Convert::ToString(e_data->GetValue(0));
    employee_name=e_data->GetString(1);
    Control ^temp2 = this->Controls[employee_id];
    Controls->Remove(temp2);
  /*  if(this->Controls->Contains(employee_id)){
     //this.newPanelButton->Click -= new System.EventHandler(this.);  
     this->Controls->Remove(employee_id);  
     //newPanelButton.Dispose();  
    }*/
    //MessageBox::Show("eid " +employee_id);
    try{
     OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
     DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
     DB_Connection->Open();


     String ^ getUserData = "Select * from Staff_Register where [Employee_Id] = " + employee_id + ";";



     OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
     OleDbDataReader ^ e_data = cmd->ExecuteReader();

     while(e_data->Read() == true)
     {
      //name=e_data->GetString(1);
      designation=e_data->GetString(2);
      resignation_date=e_data->GetString(10);
      employee_name=e_data->GetString(1);
      //MessageBox::Show(employee_name);
      if(resignation_date==""){
       is_working=true;
      }
      employee_shift=e_data->GetString(11);


     }
     DB_Connection->Close();

    }



    catch(Exception ^ ex1){
     MessageBox::Show("register error"+ex1->Message);
    }

    if(is_working){
     DateTime  leave_start;
     DateTime  leave_end;
     try{
      OleDb::OleDbConnection ^ DB_Connection1 = gcnew OleDb::OleDbConnection();
      DB_Connection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
      DB_Connection1->Open();
      String ^ getUserData1 = "Select * from Staff_Leave where [EID] =" + employee_id + ";";
      OleDb::OleDbCommand ^ cmd1 = gcnew OleDbCommand(getUserData1, DB_Connection1);
      OleDbDataReader ^ e_data1 = cmd1->ExecuteReader();
      //MessageBox::Show("About to Reading");
      while(e_data1->Read() == true)
      {
       //MessageBox::Show("Reading");
   String ^next_day_date = System::DateTime().Now.AddDays(1).ToString("yyyyMMdd");

   String ^temp=e_data1->GetString(4);
   String ^leave_start = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

   temp=e_data1->GetString(4);
   String ^leave_end = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

   int str1_int = System::Convert::ToInt32(leave_start);
   int str2_int = System::Convert::ToInt32(leave_end);
   int next_day_date_int = System::Convert::ToInt32(next_day_date);


       //leave_start=Convert::ToDateTime(e_data1->GetString(4));
       //leave_end=Convert::ToDateTime(e_data1->GetString(5));
       String ^ approval= e_data1->GetString(7);
       DateTime subjectdate=PlannerDate->Value;

 int diff1= next_day_date_int - str1_int;
 int diff2 = str2_int - next_day_date_int;

       if( diff1 > 0 && diff2 >0 ){
        is_working=false;
       }



      }
      DB_Connection1->Close();        
     }
     catch(Exception ^ ex2){
      MessageBox::Show("Errorrr in Staff Leave fetch"+ex2->Message);
     }
    }

    
    if(is_working ){
     if(designation=="House Keeping" && e_category==0){
      
      Label ^ lb = gcnew Label();
      lb->Text=employee_name;
      lb->Name=employee_id;
      lb->MouseHover+=gcnew EventHandler(this,&UserControl_Staff_Planner::hover);
      lb->MouseLeave+=gcnew EventHandler(this,&UserControl_Staff_Planner::mouseoff);
      category_lbl->Text="HouseKeeping Employees Available";
      if(dhousekeepingnumber==0){
       //Label lbl=label2;
      // Label ^ label2=gcnew Label();
      // label2->Text="House Keeping";
      // label2->Name="House Keeping";
      // label2->Location = System::Drawing::Point(48,106+50*dhousekeepingnumber);
      // this->Controls->Add(label2);
      }
      lb->DoubleClick+=gcnew EventHandler(this,&UserControl_Staff_Planner::eventcombo);
      this->Controls->Add(lb);
      //housekeepingnumber++;
      if(employee_shift=="D"){
       lb->Location = System::Drawing::Point(107,350+50*dhousekeepingnumber);
       dhousekeepingnumber++;
       daybar->ForeColor=Color::Red;
       
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       //lb->Font->Size=16;
       if(dhousekeepingnumber<=Convert::ToInt32(dhk)){
        this->daybar->Value=dhousekeepingnumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(dhk);
       }

       if(nhousekeepingnumber<=Convert::ToInt32(nhk)){
        this->nightbar->Value=nhousekeepingnumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nhk);
       }
       this->count_lbl->Text=Convert::ToString(dhousekeepingnumber);
       this->count_lbl_n->Text=Convert::ToString(nhousekeepingnumber);
      }
      else{
       lb->Location = System::Drawing::Point(619,350+50*nhousekeepingnumber);
       nhousekeepingnumber++;
       daybar->ForeColor=Color::Red;
       
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       if(dhousekeepingnumber<=Convert::ToInt32(dhk)){
        this->daybar->Value=dhousekeepingnumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(dhk);
       }

       if(nhousekeepingnumber<=Convert::ToInt32(nhk)){
        this->nightbar->Value=nhousekeepingnumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nhk);
       }
       this->count_lbl->Text=Convert::ToString(dhousekeepingnumber);
       this->count_lbl_n->Text=Convert::ToString(nhousekeepingnumber);
      }
     }


     if(designation=="Room Service" && e_category==1){
      Label ^ lb = gcnew Label();
      lb->Text=employee_name;
      lb->Name=employee_id;
      category_lbl->Text="Room Service Employees Available";
      lb->MouseHover+=gcnew EventHandler(this,&UserControl_Staff_Planner::hover);
      lb->MouseLeave+=gcnew EventHandler(this,&UserControl_Staff_Planner::mouseoff);
      /*ComboBox ^ cbx=gcnew ComboBox();
      cbx->Items->Add("Day");
      cbx->Items->Add("Night");
      cbx->Location = System::Drawing::Point(300,106+50*(1+housekeepingnumber+roomservicenumber));
      cbx->Click+=gcnew EventHandler(eventcombo);*/
      
      //eventcontrol1->AttachTo(cbx);
      //this->Controls->Add(cbx);
      if(droomservicenumber==0){
       //Label lbl=label3;
       //Control ^ temp=this->Controls["Room Service"];
       //Controls->Remove(temp);
       //Label ^ label3=gcnew Label();
       //lb->Name=employee_name;
       //label3->Text="Room Service";
       //label3->Name="Room Service";
       //label3->Location = System::Drawing::Point(48,106+50*(1+droomservicenumber));
       //this->Controls->Add(label3);
      }
      lb->DoubleClick+=gcnew EventHandler(this,&UserControl_Staff_Planner::eventcombo);
      this->Controls->Add(lb);
      if(employee_shift=="D"){
       lb->Location = System::Drawing::Point(107,350+50*(droomservicenumber));
       droomservicenumber++;
       
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       if(droomservicenumber<=Convert::ToInt32(drs)){
        this->daybar->Value=droomservicenumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(drs);
       }

       if(nroomservicenumber<=Convert::ToInt32(nrs)){
        this->nightbar->Value=nroomservicenumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nrs);
       }
       this->count_lbl->Text=Convert::ToString(droomservicenumber);
       this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
      }
      else{
       lb->Location = System::Drawing::Point(619,350+50*(nroomservicenumber));
       nroomservicenumber++;
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       
       if(droomservicenumber<=Convert::ToInt32(drs)){
        this->daybar->Value=droomservicenumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(drs);
       }

       if(nroomservicenumber<=Convert::ToInt32(nrs)){
        this->nightbar->Value=nroomservicenumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nrs);
       }
       this->count_lbl->Text=Convert::ToString(droomservicenumber);
       this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
      }
      //roomservicenumber++;
     }

     
     
     if(designation=="Receptionist" && e_category==2){
      Label ^ lb = gcnew Label();
      lb->Text=employee_name;
      lb->Name=employee_id;
      lb->MouseHover+=gcnew EventHandler(this,&UserControl_Staff_Planner::hover);
      lb->MouseLeave+=gcnew EventHandler(this,&UserControl_Staff_Planner::mouseoff);
      category_lbl->Text="Reception Employees Available";
      //MessageBox::Show(employee_name+" adding " + (2+nhousekeepingnumber+nroomservicenumber+nrecieptionistnumber) );
      if(drecieptionistnumber==0){
       //Label lbl=label4;
       //Control ^ temp=this->Controls["Receptionist"];
       //Controls->Remove(temp);
       //Label ^ label4=gcnew Label();
       //label4->Text="Receptionist";
       //label4->Name="Receptionist";
      // label4->Location = System::Drawing::Point(48,106+50*(2+drecieptionistnumber));
       //this->Controls->Add(label4);
      }
      lb->DoubleClick+=gcnew EventHandler(this,&UserControl_Staff_Planner::eventcombo);
      this->Controls->Add(lb);
      //recieptionistnumber++;
      if(employee_shift=="D"){
       lb->Location = System::Drawing::Point(107,350+50*(drecieptionistnumber));
       drecieptionistnumber++;
       
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       if(drecieptionistnumber<=Convert::ToInt32(dr)){
        this->daybar->Value=drecieptionistnumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(dr);
       }

       if(nrecieptionistnumber<=Convert::ToInt32(nr)){
        this->nightbar->Value=nrecieptionistnumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nr);
       }
       this->count_lbl->Text=Convert::ToString(drecieptionistnumber);
       this->count_lbl_n->Text=Convert::ToString(nrecieptionistnumber);
      }
      else{
       lb->Location = System::Drawing::Point(619,350+50*(nrecieptionistnumber));
       nrecieptionistnumber++;
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       
       if(drecieptionistnumber<=Convert::ToInt32(dr)){
        this->daybar->Value=drecieptionistnumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(dr);
       }

       if(nrecieptionistnumber<=Convert::ToInt32(nr)){
        this->nightbar->Value=nrecieptionistnumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(nr);
       }
       this->count_lbl->Text=Convert::ToString(drecieptionistnumber);
       this->count_lbl_n->Text=Convert::ToString(nrecieptionistnumber);
      }
     }

     if(designation=="Watchman" && e_category==3){
      Label ^ lb = gcnew Label();
      //MessageBox::Show("adding to list"+employee_name+"Number"+ (3+housekeepingnumber+roomservicenumber+recieptionistnumber+securitynumber));
      lb->Text=employee_name;
      lb->Name=employee_id;
      lb->MouseHover+=gcnew EventHandler(this,&UserControl_Staff_Planner::hover);
      lb->MouseLeave+=gcnew EventHandler(this,&UserControl_Staff_Planner::mouseoff);
      category_lbl->Text="Security Employees Available";
      if(dsecuritynumber==0){
       //Label lbl=label5;
       //label5->Text="The Watchmen";
       //Control ^ temp=this->Controls["Security"];
       //Controls->Remove(temp);
       //Label ^ label5=gcnew Label();
       //label5->Text="Security";
       //label5->Name="Security";

       //label5->Location = System::Drawing::Point(48,106+50*(3));
       //this->Controls->Add(label5);
       //MessageBox::Show("added security");
      }
      lb->DoubleClick+=gcnew EventHandler(this,&UserControl_Staff_Planner::eventcombo);
      /*ComboBox ^ cbx=gcnew ComboBox();
      cbx->Items->Add("Day");
      cbx->Items->Add("Night");
      cbx->Location = System::Drawing::Point(300,106+50*(3+housekeepingnumber+roomservicenumber+recieptionistnumber+securitynumber));
      cbx->SelectedIndexChanged+=gcnew EventHandler(eventcombo);
      cbx->Name=employee_name;
      this->Controls->Add(cbx);*/
      this->Controls->Add(lb);

      //securitynumber++;
      if(employee_shift=="D"){
       lb->Location = System::Drawing::Point(107,350+50*(dsecuritynumber));
       dsecuritynumber++;
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       
       if(dsecuritynumber<=Convert::ToInt32(ds)){
        this->daybar->Value=dsecuritynumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(ds);
       }

       if(nsecuritynumber<=Convert::ToInt32(ns)){
        this->nightbar->Value=nsecuritynumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(ns);
       }
       this->count_lbl->Text=Convert::ToString(dsecuritynumber);
       this->count_lbl_n->Text=Convert::ToString(nsecuritynumber);
      }
      else{
       lb->Location = System::Drawing::Point(619,350+50*(nsecuritynumber));
       nsecuritynumber++;
       lb->BackColor=Color::FromArgb(96,202,212);
       lb->ForeColor=Color::FromArgb(0,0,0);
       
       if(dsecuritynumber<=Convert::ToInt32(ds)){
        this->daybar->Value=dsecuritynumber;
       }
       else{
        this->daybar->Value=Convert::ToInt32(ds);
       }

       if(nsecuritynumber<=Convert::ToInt32(ns)){
        this->nightbar->Value=nsecuritynumber;
       }
       else{
        this->nightbar->Value=Convert::ToInt32(ns);
       }
       this->count_lbl->Text=Convert::ToString(dsecuritynumber);
       this->count_lbl_n->Text=Convert::ToString(nsecuritynumber);
      }
      

     }
    }
    else{
     if(e_category==0){
      category_lbl->Text="House Keeping";
     }

     if(e_category==1){
      category_lbl->Text="Room Service";
     }

     if(e_category==2){
      category_lbl->Text="Receptionist";
     }

     if(e_category==3){
      category_lbl->Text="Watchman";
     }
    }
   }

   
  }
  catch(Exception ^ ex){
   MessageBox::Show("errorrrrrr"+ex->Message);
  }

  //MessageBox::Show(Convert::ToString(securitynumber));

  /*planner_housekeeping_lbl->Text=Convert::ToString(housekeepingnumber);
  planner_roomservice_lbl->Text=Convert::ToString(roomservicenumber);
  planner_mess_lbl->Text=Convert::ToString(mess_staffnumber);
  planner_security_lbl->Text=Convert::ToString(securitynumber);*/
 }
  




  public: System::Void hover(System::Object^  sender, System::EventArgs^  e){
    hover_lbl->Text="Double Click to change shift";
    }
  public: System::Void mouseoff(System::Object^  sender, System::EventArgs^  e){
    hover_lbl->Text="";
   }
  public: System::Void eventcombo(System::Object^  sender, System::EventArgs^  e){
     //MessageBox::Show(sender->Object->Name);
     Label ^ lbl=(System::Windows::Forms::Label^) sender;
     //MessageBox::Show(lbl->Text);
     OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
     DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
     DB_Connection->Open();
     String ^ employee_id=lbl->Name;

     String ^ getUserData = "Select * from Staff_Register where [Employee_Id] = " + employee_id + ";";
    

     String ^ designation;
     try{
      OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
      OleDbDataReader ^ e_data = cmd->ExecuteReader();
      String ^ currentshift;
      while(e_data->Read()==true){
       currentshift=e_data->GetString(11);
       designation=e_data->GetString(2);
      }
      DB_Connection->Close();
      OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
      //"UPDATE Staff_Leave SET Approved = 'Approved' WHERE Serial_Number = " + ser_num + ";";
      DB_Connection->Open();

      if(currentshift=="D"){
       cmdUpdate->CommandText ="UPDATE Staff_Register SET [Day_Night0]= 'N' WHERE Employee_ID = " +employee_id + ";";
       if(designation=="Watchman"){
        dsecuritynumber--;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        lbl->Location=System::Drawing::Point(619,350+50*(nsecuritynumber));
        nsecuritynumber++;
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
        
       /* daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=dsecuritynumber;*/

       }

       else if(designation=="House Keeping"){
        MessageBox::Show("before decrement"+dhousekeepingnumber);
        dhousekeepingnumber--;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        lbl->Location=System::Drawing::Point(619,350+50*(nhousekeepingnumber));
        nhousekeepingnumber++;

        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
       // MessageBox::Show("decremented"+dhousekeepingnumber);
       /* daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=dhousekeepingnumber;*/
       }

       else if(designation=="Receptionist"){
        drecieptionistnumber--;

        lbl->Location=System::Drawing::Point(619,350+50*(nrecieptionistnumber));
        nrecieptionistnumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
        /*daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=drecieptionistnumber;*/
       }

       else{
        droomservicenumber--;

        lbl->Location=System::Drawing::Point(619,350+50*(nroomservicenumber));
        nroomservicenumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
       /* daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=droomservicenumber;*/
       }

      }
      else{
       cmdUpdate->CommandText="UPDATE Staff_Register SET [Day_Night0] ='D' WHERE Employee_ID = " +employee_id + ";";
       //  lbl->Location=System::Drawing::Point(450,106+50*(dsecuritynumber));

       if(designation=="Watchman"){
        nsecuritynumber--;

        lbl->Location=System::Drawing::Point(107,350+50*(dsecuritynumber));
        dsecuritynumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
        // Image^ NewImage=gcnew Image->FromFile("D:\\sem4\\20mar5pm\\Guest-House-Management\\Guest-House-Management\\labeld.png");
        //lbl->Image = NewImage;
        /*daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=dsecuritynumber;*/
       }

       else if(designation=="House Keeping"){
        nhousekeepingnumber--;

        lbl->Location=System::Drawing::Point(107,350+50*(dhousekeepingnumber));
        dhousekeepingnumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
       /* daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=dhousekeepingnumber;*/
       }

       else if(designation=="Receptionist"){
        nrecieptionistnumber--;

        lbl->Location=System::Drawing::Point(107,350+50*(drecieptionistnumber));
        drecieptionistnumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        this->daybar->Value=droomservicenumber;
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
       /* daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=drecieptionistnumber;*/
       }

       else{
        nroomservicenumber--;

        lbl->Location=System::Drawing::Point(107,350+50*(droomservicenumber));
        droomservicenumber++;
        lbl->BackColor=Color::FromArgb(96,202,212);
        lbl->ForeColor=Color::FromArgb(0,0,0);
        /*if(droomservicenumber<=Convert::ToInt32(drs)){
         this->daybar->Value=droomservicenumber;
        }
        else{
         this->daybar->Value=Convert::ToInt32(drs);
        }

        if(nroomservicenumber<=Convert::ToInt32(nrs)){
         this->nightbar->Value=nroomservicenumber;
        }
        else{
         this->nightbar->Value=Convert::ToInt32(nrs);
        }*/
        this->nightbar->Value=nroomservicenumber;
        this->count_lbl->Text=Convert::ToString(droomservicenumber);
        this->count_lbl_n->Text=Convert::ToString(nroomservicenumber);
        /*daybar->Maximum=10;
        daybar->Minimum=0;
        daybar->Value=droomservicenumber;*/
       }
      }
      cmdUpdate->ExecuteNonQuery();
      DB_Connection->Close();

      if(designation=="Watchman"){
       update_planner(3);
     }
      else if(designation=="Receptionist"){
       update_planner(2);
      }
      else if(designation=="House Keeping"){
       update_planner(0);
      }
      else{
       update_planner(1);
      }
    }
     catch(Exception ^ ex){
      MessageBox::Show("Error in ec"+ex);
     }
    


    }

 void day_shift(){

 }

 void night_shift(){

 }
public: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
   update_planner(0);

   }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
   }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
   }
private: System::Void UserControl_Staff_Planner_Load(System::Object^  sender, System::EventArgs^  e) {
   // PlannerDate->Value=System::DateTime().Now;
    //planner=gcnew UserControl_Staff_Planner;
   // MessageBox::Show("load was called");
    //Graphics^ g = this->Graphics;
         Application::EnableVisualStyles();
    Pen^ redPen = gcnew Pen(Color::Red);

    redPen->Width = 4;

    //this->Controls->Add(redPen, 0,0,1,10);
    exit_label->Hide();
    thedate=System::DateTime().Now.AddDays(1);
    update_planner(flag);
    staff_req_panel->Size=System::Drawing::Size(0, 0);
   }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
  }


private: System::Void 
   planner_housekeeping_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
  }
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) { 
  
  }
private: System::Void splitContainer2_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
  }
private: System::Void PlannerDate_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
   update_planner(0);
  }
private: System::Void static On_paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  pe) {

   Graphics^ g = pe->Graphics;
   Pen^ redPen = gcnew Pen(Color::FromArgb(96,202,212));

   redPen->Width = 4;

   g->DrawLine(redPen, 836,140,836,1000);
    
  }
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void label2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
     update_planner(0);
  
  // MessageBox::Show("Clicked");
  }
private: System::Void label3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(1);
  }
private: System::Void label4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(2);
  }
private: System::Void label5_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(3);
  }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
   update_planner(0);
   update_planner(1);
   update_planner(2);
   update_planner(3);
   
  }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void daybar_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void category_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void label3_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(1);
  }
private: System::Void label4_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(2);
  }
private: System::Void label5_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   update_planner(3);
  }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void label6_Click_1(System::Object^  sender, System::EventArgs^  e) {
  }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   staff_req_panel->Location=System::Drawing::Point(234, 129);
   staff_req_panel->Size=System::Drawing::Size(540, 395);
   staff_req_panel->Controls->Clear();
   staff_req_panel->Controls->Add(gcnew UserControl_Staff_Planner_Requirements);
   exit_label->Show();
  }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
   staff_req_panel->Controls->Clear();
   staff_req_panel->Size=System::Drawing::Size(0, 0);
   exit_label->Hide();
   
   update_planner(0);
  }
private: System::Void myouseneter(System::Object^  sender, System::EventArgs^  e) {
   pnl->Size = System::Drawing::Size(168, 23);
   pn2->Size = System::Drawing::Size(168, 23);
   pn3->Size = System::Drawing::Size(168, 23);
   pn4->Size = System::Drawing::Size(168, 23);
   pn5->Size = System::Drawing::Size(168, 23);
  }
};
}

/*
1. When no employee, labels dont change
*/