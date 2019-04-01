#pragma once
#include <vector>
#include <string>
#include <regex>
#include "tosstring.h"
//#include <msclr\marshal_cppstd.h>
#include <cliext/vector>
//#include <msclr\marshal.h>
// #include "UserControl_Guest_House_Info.h"

using namespace cliext;
using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;


namespace GuestHouseManagement {

/// <summary>
/// Summary for UserControl_User_Types
/// </summary>
public ref class UserControl_User_Types : public System::Windows::Forms::UserControl
{
public:
 Panel ^pnl;
 Panel ^pn2;
 Panel ^pn3;
 Panel ^pn4;
private: System::Windows::Forms::Label^  label1;
public: 
 Panel ^pn5;

 UserControl_User_Types(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
 ~UserControl_User_Types()
 {
  if (components)
  {
   delete components;
  }
 }
private: System::Windows::Forms::Button^  Btn_Add;
protected: 
private: System::Windows::Forms::TextBox^  Txt_User_Type;



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
	 this->Btn_Add = (gcnew System::Windows::Forms::Button());
	 this->Txt_User_Type = (gcnew System::Windows::Forms::TextBox());
	 this->label1 = (gcnew System::Windows::Forms::Label());
	 this->SuspendLayout();
	 // 
	 // Btn_Add
	 // 
	 this->Btn_Add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(87)));
	 this->Btn_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->Btn_Add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(247)));
	 this->Btn_Add->Location = System::Drawing::Point(508, 116);
	 this->Btn_Add->Name = L"Btn_Add";
	 this->Btn_Add->Size = System::Drawing::Size(112, 41);
	 this->Btn_Add->TabIndex = 3;
	 this->Btn_Add->Text = L"Add";
	 this->Btn_Add->UseVisualStyleBackColor = false;
	 this->Btn_Add->Click += gcnew System::EventHandler(this, &UserControl_User_Types::Btn_Add_Click);
	 // 
	 // Txt_User_Type
	 // 
	 this->Txt_User_Type->Location = System::Drawing::Point(256, 130);
	 this->Txt_User_Type->Name = L"Txt_User_Type";
	 this->Txt_User_Type->Size = System::Drawing::Size(174, 20);
	 this->Txt_User_Type->TabIndex = 2;
	 // 
	 // label1
	 // 
	 this->label1->AutoSize = true;
	 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->label1->Location = System::Drawing::Point(61, 124);
	 this->label1->Name = L"label1";
	 this->label1->Size = System::Drawing::Size(168, 25);
	 this->label1->TabIndex = 4;
	 this->label1->Text = L"Enter User Type";
	 // 
	 // UserControl_User_Types
	 // 
	 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
	 this->AutoScroll = true;
	 this->BackColor = System::Drawing::Color::Transparent;
	 this->Controls->Add(this->label1);
	 this->Controls->Add(this->Btn_Add);
	 this->Controls->Add(this->Txt_User_Type);
	 this->Name = L"UserControl_User_Types";
	 this->Size = System::Drawing::Size(868, 553);
	 this->Load += gcnew System::EventHandler(this, &UserControl_User_Types::UserControl_User_Types_Load);
	 this->MouseEnter += gcnew System::EventHandler(this, &UserControl_User_Types::mymouseenter);
	 this->ResumeLayout(false);
	 this->PerformLayout();

 }
#pragma endregion

cliext::vector<String^> vec;
String ^ user;
void button_click(System::Object^  sender, System::EventArgs^  e)
{
 int f = 0;
 for(int i=0;i<vec.size();i++)
 {

  TextBox ^tb = (TextBox^)this->Controls["TextBox" + (i)];
  String ^str = tb->Text;

  string sstr = tosstring(str);
  remove_if(sstr.begin(), sstr.end(), isspace);
  if(tb->Text == "")
  {
   f=1;
   MessageBox::Show("Price field can't be empty");
   goto ErrExit;
  }

  regex rx("^[0-9]+$");
  if(!regex_match(sstr.cbegin(), sstr.cend(), rx))
  {
   MessageBox::Show("Enter prices in digits[0-9]");
   goto ErrExit;
  }
  //MessageBox::Show(str);
  
 }

 if(f == 0)
 {
  for(int i=0;i<vec.size();i++)
  {
   TextBox ^tb = (TextBox^)this->Controls["TextBox" + (i)];
   String ^str = tb->Text;

   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();
   String ^ insertString = "insert into User_Room_Price([User_Types],[Room_Types],[Price]) VALUES('" +user+ "', '" +vec[i]+ "', '" +str+ "' );";

   OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);

   cmd->Parameters->Add(gcnew OleDbParameter("@User_Types",Convert::ToString(user)));
   cmd->Parameters->Add(gcnew OleDbParameter("@Room_Types",Convert::ToString(vec[i])));
   cmd->Parameters->Add(gcnew OleDbParameter("@Price",Convert::ToString(str)));

   cmd->ExecuteNonQuery();
   DB_Connection->Close();
  }

  OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
  DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
  DB_Connection->Open();
  String ^ insertString = "insert into User_Types([User_Type]) VALUES('" +user+ "' );";
  OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
  cmd->Parameters->Add(gcnew OleDbParameter("@User_Type",Convert::ToString(user)));
  cmd->ExecuteNonQuery();
  DB_Connection->Close();

  //To Refresh User Control
  this->Controls->Clear();
  this->InitializeComponent();
ErrExit:
  ;

 }

 
}

private: System::Void UserControl_User_Types_Load(System::Object^  sender, System::EventArgs^  e) {
     
   }
private: System::Void Btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {
   

     string sname = tosstring(Txt_User_Type->Text);
     remove_if(sname.begin(), sname.end(), isspace);

     regex rx("^[A-Z|a-z|.|0-9|_']+$");
     if(!regex_match(sname.cbegin(), sname.cend(), rx)){
      MessageBox::Show("Enter UserType in Alphanumeric characters");
      goto ErrExit;
     }

     Btn_Add->Visible = false;
     label1->Visible = false;
     OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
     DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
     DB_Connection->Open();

     user = Txt_User_Type->Text;
     String ^ getUserData = "Select * from User_Types where [User_Type] = '" + user + "';";

     OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);
     OleDbDataReader ^ user_data = cmd->ExecuteReader();

     if(user_data->Read() == true)
     {
      MessageBox::Show("User Type Already Exists");
      DB_Connection->Close();
     }
     else
     {
      DB_Connection->Close();
      if(String::IsNullOrWhiteSpace(user))
       MessageBox::Show("Please Enter Some User Type");
      else
      {
       Txt_User_Type->Visible = false;
       Btn_Add->Visible = false;
       DB_Connection->Open();

       String ^ getRoomData = "Select * from Room_Types";
       cmd = gcnew OleDbCommand(getRoomData, DB_Connection);

       OleDbDataReader ^ room_data = cmd->ExecuteReader();

       int n = 0;
       while(room_data->Read() == true)
       {
        String ^ tmp = room_data->GetString(1);
        vec.push_back(tmp);
        n=n+1;
       }

       Label ^ lb2 = gcnew Label();
       lb2->Text = "Enter Price for the Room Type specified";
       lb2->AutoSize = true;
       lb2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
       lb2->Location = System::Drawing::Point(200, 17);
       lb2->Size = System::Drawing::Size(273, 29);

       this->Controls->Add(lb2);

       for(int i=0;i<vec.size();i++)
       { 
        int j = i%2;
        Label ^lb = gcnew Label();
        lb->Text = vec[i];
        lb->Location = System::Drawing::Point(20 + 300*j,70*((i/2)+1)+10);
        lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
         static_cast<System::Byte>(0)));
        this->Controls->Add(lb);
      
        TextBox ^tb = gcnew TextBox();
        //tb->Text = Convert::ToString(i);
        tb->Location = System::Drawing::Point(125 + 300*j,70*((i/2)+1)+10);
        tb->Width = 150;
        tb->Height = 20;
        tb->Name = "TextBox" + i;
        //tb->Multiline = true;
        tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
        this->Controls->Add(tb);
       }

       Button ^ btn = gcnew Button();
       btn->Text = "Submit";
       btn->Name = "Btn_Submit";

       btn->Height = 60;
       btn->Width = 150;
       btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
        static_cast<System::Int32>(static_cast<System::Byte>(87)));
       btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
       btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
        static_cast<System::Byte>(0)));
       btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
        static_cast<System::Int32>(static_cast<System::Byte>(247)));
       btn->Location = System::Drawing::Point(400,35*n+100);
       btn->Click += gcnew System::EventHandler(this,&UserControl_User_Types::button_click);
       this->Controls->Add(btn);

       DB_Connection->Close();

      }
     }


    /*catch(Exception ^ ex)
    {
     MessageBox::Show(ex->Message);
    }*/
ErrExit:
     ;
   }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
   }
private: System::Void mymouseenter(System::Object^  sender, System::EventArgs^  e) {
   pnl->Size = System::Drawing::Size(173, 44);
   pn2->Size = System::Drawing::Size(173, 44);
   pn3->Size = System::Drawing::Size(173, 44);
   pn4->Size = System::Drawing::Size(173, 44);
   pn5->Size = System::Drawing::Size(173, 44);
  }
};
}