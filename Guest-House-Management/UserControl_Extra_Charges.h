#pragma once

#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>
#include <regex>
#include "tosstring.h"

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Diagnostics;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;


namespace GuestHouseManagement {

/// <summary>
/// Summary for UserControl_Extra_Charges
/// </summary>
public ref class UserControl_Extra_Charges : public System::Windows::Forms::UserControl
{
public:
 Panel ^pnl;
 Panel ^pn2;
 Panel ^pn3;
 Panel ^pn4;
 Panel ^pn5;
 cliext::vector<String^> vec;

 UserControl_Extra_Charges(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
 ~UserControl_Extra_Charges()
 {
  if (components)
  {
   delete components;
  }
 }

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
	 this->SuspendLayout();
	 // 
	 // UserControl_Extra_Charges
	 // 
	 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
	 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	 this->AutoScroll = true;
	 this->BackColor = System::Drawing::Color::Transparent;
	 this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
	 this->Name = L"UserControl_Extra_Charges";
	 this->Size = System::Drawing::Size(909, 681);
	 this->Load += gcnew System::EventHandler(this, &UserControl_Extra_Charges::UserControl_Extra_Charges_Load);
	 this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Extra_Charges::myMouseClick);
	 this->ResumeLayout(false);

 }
#pragma endregion
private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
    pnl->Size = System::Drawing::Size(173, 44);
    pn2->Size = System::Drawing::Size(173, 44);
    pn3->Size = System::Drawing::Size(173, 44);
    pn4->Size = System::Drawing::Size(173, 44);
    pn5->Size = System::Drawing::Size(173, 44);
   }
private: System::Void UserControl_Extra_Charges_Load(System::Object^  sender, System::EventArgs^  e) {
   
    Label ^ lbl1 = gcnew Label();
    //this->SuspendLayout();
    // 
    // label1
    // 
    lbl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
     static_cast<System::Byte>(0)));
    lbl1->Location = System::Drawing::Point(280, 34);
    lbl1->Name = L"lbl1";
    lbl1->Size = System::Drawing::Size(342, 37);
    lbl1->TabIndex = 0;
    lbl1->Text = L"Extra Charges";

    this->Controls->Add(lbl1);

    OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
    DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
    DB_Connection->Open();

    String ^ getUsers = "Select * from Booking_Request where [Approved] = 'YES' AND [Checked_Out] = 'NO'";
    OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
    OleDbDataReader ^ users_data = cmd->ExecuteReader();

    int i=0, j=0;
    while(users_data->Read() == true)
    {


    String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");
    String ^temp=users_data->GetString(4);
    String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

    temp=users_data->GetString(5);
    String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

    int str1_int = System::Convert::ToInt32(str1);
    int str2_int = System::Convert::ToInt32(str2);
    int datetoday_int = System::Convert::ToInt32(today_date);


    int diff1 = str1_int - datetoday_int;
    int diff2 = str2_int - datetoday_int;
  
    if(diff1 <=0 && diff2 >=0)
    {
     i=i+1;
     TextBox ^tb = gcnew TextBox();
     tb->Text = "Name : " + users_data->GetString(3) + "\r\n" + 
				"Check-in : " + users_data->GetString(4) + "\r\n" +
				"Room Nos. : " + users_data->GetString(14) + "\r\n" + 
				"Contact No. : " + users_data->GetString(7);
     //MessageBox::Show(tb->Text);
     tb->Location = System::Drawing::Point(25 ,100*(i-1)+120);
     tb->Width = 300;
     tb->Height = 100;
     tb->Name = "TextBox" + i;
     tb->Multiline = true;
     tb->ReadOnly = true;
     //tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
     tb->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
     tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     this->Controls->Add(tb);

     Button ^bt_breakfast = gcnew Button();
     bt_breakfast->Text="Add breakfast";
     bt_breakfast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
      static_cast<System::Int32>(static_cast<System::Byte>(87)));
     bt_breakfast->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
     bt_breakfast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     bt_breakfast->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
      static_cast<System::Int32>(static_cast<System::Byte>(247)));
     bt_breakfast->Location=System::Drawing::Point(350 ,100*(i-1)+120);
     bt_breakfast->Width=150;
     bt_breakfast->Height=30;
     bt_breakfast->Name="Button_Breakfast"+i;
     this->Controls->Add(bt_breakfast);
     bt_breakfast->Click+=gcnew EventHandler(this,&UserControl_Extra_Charges::bt_breakfast_Click);

     Button ^bt_lunch = gcnew Button();
     bt_lunch->Text="Add lunch";
     bt_lunch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
      static_cast<System::Int32>(static_cast<System::Byte>(87)));
     bt_lunch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
     bt_lunch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     bt_lunch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
      static_cast<System::Int32>(static_cast<System::Byte>(247)));
     bt_lunch->Location=System::Drawing::Point(350 ,100*(i-1)+153);
     bt_lunch->Width=150;
     bt_lunch->Height=30;
     bt_lunch->Name="Button_Lunch"+i;
     this->Controls->Add(bt_lunch);
     bt_lunch->Click+=gcnew EventHandler(this,&UserControl_Extra_Charges::bt_lunch_Click);      

     Button ^bt_dinner = gcnew Button();
     bt_dinner->Text="Add dinner";
     bt_dinner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
      static_cast<System::Int32>(static_cast<System::Byte>(87)));
     bt_dinner->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
     bt_dinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     bt_dinner->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
      static_cast<System::Int32>(static_cast<System::Byte>(247)));
     bt_dinner->Location=System::Drawing::Point(350 ,100*(i-1)+187);
     bt_dinner->Width=150;
     bt_dinner->Height=30;
     bt_dinner->Name="Button_Dinner"+i;
     this->Controls->Add(bt_dinner);
     bt_dinner->Click+=gcnew EventHandler(this,&UserControl_Extra_Charges::bt_dinner_Click);

     Label ^lb=gcnew Label();
     lb->Text="Other charges";
     lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     lb->Location = System::Drawing::Point(520 ,100*(i-1)+120);
     lb->Width = 150;
     lb->Height = 30;
     this->Controls->Add(lb);

     Label ^lb1=gcnew Label();
     lb1->Text="Total";
     lb1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     lb1->Location = System::Drawing::Point(520 ,100*(i-1)+153);
     lb1->Width = 50;
     lb1->Height = 30;
     this->Controls->Add(lb1);

     TextBox ^tb_rate = gcnew TextBox();
     tb_rate->Location = System::Drawing::Point(675 ,100*(i-1)+120);
     tb_rate->Width = 100;
     tb_rate->Height = 30;
     tb_rate->Name = "TextRate" + i;
     tb_rate->Multiline = true;
     tb_rate->ReadOnly = false;
     tb_rate->Text="0";
     this->Controls->Add(tb_rate);

     TextBox ^tb_total = gcnew TextBox();
     tb_total->Text=Convert::ToString(users_data->GetInt32(18));
     tb_total->Location = System::Drawing::Point(675 ,100*(i-1)+153);
     tb_total->Width = 100;
     tb_total->Height = 30;
     tb_total->Name = "TextTotal" + i;
     tb_total->Multiline = true;
     tb_total->ReadOnly = true;
     //tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
     this->Controls->Add(tb_total);

     Button ^bt = gcnew Button();
     bt->Text="Add charges";
     bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
      static_cast<System::Int32>(static_cast<System::Byte>(87)));
     bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
     bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     bt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
      static_cast<System::Int32>(static_cast<System::Byte>(247)));
     bt->Location=System::Drawing::Point(650 ,100*(i-1)+187);
     bt->Width=50;
     bt->Height=30;
     bt->Name="Button"+i;
     this->Controls->Add(bt);
     bt->Click+=gcnew EventHandler(this,&UserControl_Extra_Charges::bt_Click);
     vec.push_back(Convert::ToString(users_data->GetInt32(0)));
    }
    else
    {
     continue;
    }
    
    }
    if (i==0)
    {
     MessageBox::Show("No present booking");
     return;
    }
    DB_Connection->Close();
   }
   
   public: System::Void bt_Click(System::Object^  sender, System::EventArgs^  e)
     
     {
      Button ^ bt=(System::Windows::Forms::Button^) sender;
      String ^str1=bt->Name;
      str1=str1->Substring(6,str1->Length-6);
      Control ^temp = this->Controls["TextRate" + str1]; 
      Control ^temp1 = this->Controls["TextTotal" + str1];
      //MessageBox::Show("TextRate" + str1 + "TextTotal" + str1);

      String ^ str = temp->Text;
      //MessageBox::Show(str);
      string sstr = tosstring(str);
      regex rx("^[0-9]+[.]{0,1}[0-9]*$");
      if(!regex_match(sstr.cbegin(), sstr.cend(), rx)){
       MessageBox::Show("Enter Decimal Number [left of decimal cannot be empty]");
       goto ErrExit;
      }
      for(int i=0;i<str->Length;i++)
      {
       if(isdigit(str[i])||str[i]=='.')
       {
        continue;
       }
       MessageBox::Show("Rates can contain only digits","Warning");
       return; 
      }
     
      if(str->Length>8) 
      {
       MessageBox::Show("Can't enter more than 8 characters for rates","Warning");
       return;
      }
      
      try
      {
       OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
       DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
       DB_Connection->Open();

       String ^ getUserData = "Select * From [Booking_Request] where [ID] like " + Convert::ToInt32(vec[Convert::ToInt32(str1)-1]);
       OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);

       int sum=Convert::ToDouble(temp1->Text);
       sum+=Convert::ToDouble(temp->Text);
       cmdUpdate->CommandText = "UPDATE [Booking_Request] SET [Other_Charges] = " + sum +  " WHERE [ID] = " + Convert::ToInt32(vec[Convert::ToInt32(str1)-1]) +";";
       cmdUpdate->ExecuteNonQuery();
       MessageBox::Show("Added charges");
       DB_Connection->Close();

      temp1->Text=Convert::ToString(sum);
      }
      catch(Exception ^ ex)
      {
       MessageBox::Show(ex->Message,"Warning");
      }
      temp->Text="0";
ErrExit:
      ;
     }

  public: System::Void bt_breakfast_Click(System::Object^  sender, System::EventArgs^  e)

    {
     Button ^ bt=(System::Windows::Forms::Button^) sender;
     String ^str=bt->Name;
     str=str->Substring(16,str->Length-16);
     Control ^temp1 = this->Controls["TextTotal" + str];
     try
     {
  System::Windows::Forms::DialogResult ^ opt = gcnew System::Windows::Forms::DialogResult;
  opt = MessageBox::Show("Add 1 breakfast?","Confirm", MessageBoxButtons::YesNoCancel,MessageBoxIcon::Question);

  if(Convert::ToString(opt)=="Yes")
  {
   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();

   String ^ getUserData = "Select * From Mess_Rates where ID like 1";
   OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);

   OleDbDataReader ^ user_data = cmdUpdate->ExecuteReader();
   int sum=Convert::ToInt32(temp1->Text);
   while(user_data->Read() == true)
   {
    sum+=user_data->GetInt32(1);
   }
   DB_Connection->Close();
   temp1->Text=Convert::ToString(sum);

  }
      
     }
     catch(Exception ^ ex)
     {
      MessageBox::Show(ex->Message,"Warning");
     }
    }

  public: System::Void bt_lunch_Click(System::Object^  sender, System::EventArgs^  e)

    {
     Button ^ bt=(System::Windows::Forms::Button^) sender;
     String ^str=bt->Name;
     str=str->Substring(12,str->Length-12);
     Control ^temp1 = this->Controls["TextTotal" + str];
     try
     {
  System::Windows::Forms::DialogResult ^ opt = gcnew System::Windows::Forms::DialogResult;
  opt = MessageBox::Show("Add 1 lunch?","Confirm", MessageBoxButtons::YesNoCancel,MessageBoxIcon::Question);

  if(Convert::ToString(opt)=="Yes")
  {
   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();

   String ^ getUserData = "Select * From Mess_Rates where ID like 1";
   OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);

   OleDbDataReader ^ user_data = cmdUpdate->ExecuteReader();
   int sum=Convert::ToInt32(temp1->Text);
   while(user_data->Read() == true)
   {
    sum+=user_data->GetInt32(2);
   }
   DB_Connection->Close();
   temp1->Text=Convert::ToString(sum);

  }
     }
     catch(Exception ^ ex)
     {
      MessageBox::Show(ex->Message,"Warning");
     }
    }
  public: System::Void bt_dinner_Click(System::Object^  sender, System::EventArgs^  e)

    {
     Button ^ bt=(System::Windows::Forms::Button^) sender;
     String ^str=bt->Name;
     str=str->Substring(13,str->Length-13);
     Control ^temp1 = this->Controls["TextTotal" + str];
     try
     {
  System::Windows::Forms::DialogResult ^ opt = gcnew System::Windows::Forms::DialogResult;
  opt = MessageBox::Show("Add 1 dinner?","Confirm", MessageBoxButtons::YesNoCancel,MessageBoxIcon::Question);

  if(Convert::ToString(opt)=="Yes")
  {
   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();

   String ^ getUserData = "Select * From Mess_Rates where ID like 1";
   OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);

   OleDbDataReader ^ user_data = cmdUpdate->ExecuteReader();
   int sum=Convert::ToInt32(temp1->Text);
   while(user_data->Read() == true)
   {
    sum+=user_data->GetInt32(3);
   }
   DB_Connection->Close();
   temp1->Text=Convert::ToString(sum);

  }
     }
     catch(Exception ^ ex)
     {
      MessageBox::Show(ex->Message,"Warning");
     }
    }
  
};
}