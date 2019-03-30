#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>

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
/// Summary for UserControl_Generate_Bill
/// </summary>
public ref class UserControl_Generate_Bill : public System::Windows::Forms::UserControl
{
public:
 UserControl_Generate_Bill(void)
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
 ~UserControl_Generate_Bill()
 {
  if (components)
  {
   delete components;
  }
 }
private: System::Windows::Forms::PictureBox^  pictureBox1;
internal: System::Windows::Forms::Label^  label_name;
internal: System::Windows::Forms::Label^  label_address;
internal: System::Windows::Forms::Label^  label_contact;
internal: System::Windows::Forms::Label^  label_email;
private: System::Windows::Forms::Label^  label1;
internal: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox1;
internal: System::Windows::Forms::Label^  label3;
private: 
internal: System::Windows::Forms::Label^  label4;
internal: System::Windows::Forms::Label^  label5;
internal: System::Windows::Forms::Label^  label6;
internal: System::Windows::Forms::Label^  label7;
internal: System::Windows::Forms::Label^  label8;
internal: System::Windows::Forms::Label^  label9;
internal: System::Windows::Forms::Label^  label10;
internal: 
private: 


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
  System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserControl_Generate_Bill::typeid));
  this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
  this->label_name = (gcnew System::Windows::Forms::Label());
  this->label_address = (gcnew System::Windows::Forms::Label());
  this->label_contact = (gcnew System::Windows::Forms::Label());
  this->label_email = (gcnew System::Windows::Forms::Label());
  this->label1 = (gcnew System::Windows::Forms::Label());
  this->label2 = (gcnew System::Windows::Forms::Label());
  this->textBox1 = (gcnew System::Windows::Forms::TextBox());
  this->label3 = (gcnew System::Windows::Forms::Label());
  this->label4 = (gcnew System::Windows::Forms::Label());
  this->label5 = (gcnew System::Windows::Forms::Label());
  this->label6 = (gcnew System::Windows::Forms::Label());
  this->label7 = (gcnew System::Windows::Forms::Label());
  this->label8 = (gcnew System::Windows::Forms::Label());
  this->label9 = (gcnew System::Windows::Forms::Label());
  this->label10 = (gcnew System::Windows::Forms::Label());
  (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
  this->SuspendLayout();
  // 
  // pictureBox1
  // 
  this->pictureBox1->Location = System::Drawing::Point(31, 24);
  this->pictureBox1->Name = L"pictureBox1";
  this->pictureBox1->Size = System::Drawing::Size(156, 120);
  this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
  this->pictureBox1->TabIndex = 0;
  this->pictureBox1->TabStop = false;
  // 
  // label_name
  // 
  this->label_name->AutoSize = true;
  this->label_name->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label_name->Location = System::Drawing::Point(272, 24);
  this->label_name->Name = L"label_name";
  this->label_name->Size = System::Drawing::Size(257, 39);
  this->label_name->TabIndex = 44;
  this->label_name->Text = L"XYZ Guest House";
  // 
  // label_address
  // 
  this->label_address->AutoSize = true;
  this->label_address->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label_address->Location = System::Drawing::Point(273, 73);
  this->label_address->Name = L"label_address";
  this->label_address->Size = System::Drawing::Size(119, 29);
  this->label_address->TabIndex = 45;
  this->label_address->Text = L"First Name";
  // 
  // label_contact
  // 
  this->label_contact->AutoSize = true;
  this->label_contact->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label_contact->Location = System::Drawing::Point(637, 24);
  this->label_contact->Name = L"label_contact";
  this->label_contact->Size = System::Drawing::Size(116, 28);
  this->label_contact->TabIndex = 46;
  this->label_contact->Text = L"First Name";
  // 
  // label_email
  // 
  this->label_email->AutoSize = true;
  this->label_email->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label_email->Location = System::Drawing::Point(637, 73);
  this->label_email->Name = L"label_email";
  this->label_email->Size = System::Drawing::Size(116, 28);
  this->label_email->TabIndex = 47;
  this->label_email->Text = L"First Name";
  // 
  // label1
  // 
  this->label1->Location = System::Drawing::Point(0, 0);
  this->label1->Name = L"label1";
  this->label1->Size = System::Drawing::Size(100, 23);
  this->label1->TabIndex = 0;
  // 
  // label2
  // 
  this->label2->AutoSize = true;
  this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label2->Location = System::Drawing::Point(26, 233);
  this->label2->Name = L"label2";
  this->label2->Size = System::Drawing::Size(116, 28);
  this->label2->TabIndex = 48;
  this->label2->Text = L"First Name";
  // 
  // textBox1
  // 
  this->textBox1->BackColor = System::Drawing::SystemColors::Control;
  this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
  this->textBox1->Location = System::Drawing::Point(31, 150);
  this->textBox1->Name = L"textBox1";
  this->textBox1->Size = System::Drawing::Size(853, 15);
  this->textBox1->TabIndex = 49;
  this->textBox1->Text = resources->GetString(L"textBox1.Text");
  // 
  // label3
  // 
  this->label3->AutoSize = true;
  this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label3->Location = System::Drawing::Point(195, 233);
  this->label3->Name = L"label3";
  this->label3->Size = System::Drawing::Size(116, 28);
  this->label3->TabIndex = 50;
  this->label3->Text = L"First Name";
  // 
  // label4
  // 
  this->label4->AutoSize = true;
  this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label4->Location = System::Drawing::Point(375, 233);
  this->label4->Name = L"label4";
  this->label4->Size = System::Drawing::Size(116, 28);
  this->label4->TabIndex = 51;
  this->label4->Text = L"First Name";
  // 
  // label5
  // 
  this->label5->AutoSize = true;
  this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label5->Location = System::Drawing::Point(560, 233);
  this->label5->Name = L"label5";
  this->label5->Size = System::Drawing::Size(116, 28);
  this->label5->TabIndex = 52;
  this->label5->Text = L"First Name";
  // 
  // label6
  // 
  this->label6->AutoSize = true;
  this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  this->label6->Location = System::Drawing::Point(313, 183);
  this->label6->Name = L"label6";
  this->label6->Size = System::Drawing::Size(147, 34);
  this->label6->TabIndex = 53;
  this->label6->Text = L"First Name";
  // 
  // label7
  // 
  this->label7->AutoSize = true;
  this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label7->Location = System::Drawing::Point(26, 277);
  this->label7->Name = L"label7";
  this->label7->Size = System::Drawing::Size(116, 28);
  this->label7->TabIndex = 54;
  this->label7->Text = L"First Name";
  // 
  // label8
  // 
  this->label8->AutoSize = true;
  this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label8->Location = System::Drawing::Point(195, 277);
  this->label8->Name = L"label8";
  this->label8->Size = System::Drawing::Size(116, 28);
  this->label8->TabIndex = 55;
  this->label8->Text = L"First Name";
  // 
  // label9
  // 
  this->label9->AutoSize = true;
  this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label9->Location = System::Drawing::Point(375, 277);
  this->label9->Name = L"label9";
  this->label9->Size = System::Drawing::Size(116, 28);
  this->label9->TabIndex = 56;
  this->label9->Text = L"First Name";
  // 
  // label10
  // 
  this->label10->AutoSize = true;
  this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  this->label10->Location = System::Drawing::Point(560, 277);
  this->label10->Name = L"label10";
  this->label10->Size = System::Drawing::Size(116, 28);
  this->label10->TabIndex = 57;
  this->label10->Text = L"First Name";
  // 
  // UserControl_Generate_Bill
  // 
  this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->AutoScroll = true;
  this->Controls->Add(this->label10);
  this->Controls->Add(this->label9);
  this->Controls->Add(this->label8);
  this->Controls->Add(this->label7);
  this->Controls->Add(this->label6);
  this->Controls->Add(this->label5);
  this->Controls->Add(this->label4);
  this->Controls->Add(this->label3);
  this->Controls->Add(this->textBox1);
  this->Controls->Add(this->label2);
  this->Controls->Add(this->label_email);
  this->Controls->Add(this->label_contact);
  this->Controls->Add(this->label_address);
  this->Controls->Add(this->label_name);
  this->Controls->Add(this->pictureBox1);
  this->Margin = System::Windows::Forms::Padding(4);
  this->Name = L"UserControl_Generate_Bill";
  this->Size = System::Drawing::Size(909, 681);
  this->Load += gcnew System::EventHandler(this, &UserControl_Generate_Bill::UserControl_Generate_Bill_Load);
  (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
  this->ResumeLayout(false);
  this->PerformLayout();

 }
#pragma endregion
 void approve_button_click(System::Object^  sender, System::EventArgs^  e)
 {
  Button^ btn = gcnew Button();
  btn = static_cast<Button^>(sender);
  int x = static_cast<int>(btn->Tag);

  OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
  DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

  DB_Connection->Open();
  String ^ userdata = "UPDATE Booking_Request SET [Checked_Out] = @app Where [ID] = @idNum;";
  OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(userdata, DB_Connection);
  cmd->Parameters->AddWithValue("@app", "NO");
  cmd->Parameters->AddWithValue("@idNum", x);
  cmd->ExecuteNonQuery();
  DB_Connection->Close();

  this->Controls->Clear();

  Label ^ lb1 = gcnew Label;
  lb1->AutoSize = true;
  lb1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lb1->Location = System::Drawing::Point(272, 24);
  lb1->Name = "label_name";
  lb1->TabIndex = 44;
  this->Controls->Add(lb1);

  PictureBox ^ pb1 = gcnew PictureBox;
  pb1->Location = System::Drawing::Point(31, 24);
  pb1->Name = "pictureBox1";
  pb1->Size = System::Drawing::Size(156, 120);
  pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
  pb1->TabIndex = 0;
  pb1->TabStop = false;
  this->Controls->Add(pb1);
  
  Label ^ lb2 = gcnew Label;
  lb2->AutoSize = true;
  lb2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lb2->Location = System::Drawing::Point(272, 66);
  lb2->Name = "label_address";
  lb2->TabIndex = 44;
  this->Controls->Add(lb2);

  Label ^ lb3 = gcnew Label;
  lb3->AutoSize = true;
  lb3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lb3->Location = System::Drawing::Point(this->label_name->Location.X+264, this->label_name->Location.Y+10);
  lb3->Name = "label_contact";
  lb3->TabIndex = 44;
  this->Controls->Add(lb3);

  Label ^ lb4 = gcnew Label;
  lb4->AutoSize = true;
  lb4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lb4->Location = System::Drawing::Point(this->label_name->Location.X+264, this->label_address->Location.Y);
  lb4->Name = "label_email";
  lb4->TabIndex = 44;
  this->Controls->Add(lb4);

  TextBox ^ textBox1 = gcnew TextBox;
  this->textBox1->BackColor = System::Drawing::SystemColors::Control;
  this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
  this->textBox1->Location = System::Drawing::Point(31, 150);
  this->textBox1->Name = L"textBox1";
  this->textBox1->Size = System::Drawing::Size(853, 15);
  this->textBox1->TabIndex = 49;
  this->textBox1->Text = "____________________________________________________________________________________________________________________________";

  Label ^ lbl2 = gcnew Label();
  lbl2->AutoSize = true;
  lbl2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl2->Location = System::Drawing::Point(this->pictureBox1->Location.X, this->pictureBox1->Location.Y+209);
  lbl2->Name = "label_CheckinDate";
  lbl2->Text = "Check-in Date";
  lbl2->TabIndex = 44;
  this->Controls->Add(lbl2);

  int x1 = this->pictureBox1->Location.X;
  int y1 = this->pictureBox1->Location.Y+209;

  Label ^ lbl3 = gcnew Label();
  lbl3->AutoSize = true;
  lbl3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
	  static_cast<System::Byte>(0)));
  lbl3->Location = System::Drawing::Point(x1+169, y1);
  lbl3->Name = "label_CheckoutDate";
  lbl3->Text = "Check-out Date";
  lbl3->TabIndex = 44;
  this->Controls->Add(lbl3);

/*
  Label ^ lbl4 = gcnew Label;
  lbl4->AutoSize = true;
  lbl4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl4->Location = System::Drawing::Point(this->lbl3->Location.X+169, this->lbl2->Location.Y);
  lbl4->Name = "label_BookingID";
  lbl4->Text = "Booking ID";
  lbl4->TabIndex = 44;
  this->Controls->Add(lbl4);

  Label ^ lbl5 = gcnew Label;
  lbl5->AutoSize = true;
  lbl5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl5->Location = System::Drawing::Point(this->lbl4->Location.X+169, this->lbl2->Location.Y);
  lbl5->Name = "label_TotalRooms";
  lbl5->Text = "Total Rooms";
  lbl5->TabIndex = 44;
  this->Controls->Add(lbl5);

  Label ^ lbl6 = gcnew Label;
  lbl6->AutoSize = true;
  lbl6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
  lbl6->Location = System::Drawing::Point(this->pictureBox1->Location.X+282, this->pictureBox1->Location.Y+159);
  lbl6->Name = "label_Customer";
  lbl6->TabIndex = 44;
  this->Controls->Add(lbl6);

  Label ^ lbl7 = gcnew Label;
  lbl7->AutoSize = true;
  lbl7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl7->Location = System::Drawing::Point(this->lbl2->Location.X, this->lbl2->Location.Y+44);
  lbl7->Name = "label_CheckinDate_val";
  lbl7->TabIndex = 44;
  this->Controls->Add(lbl7);

  Label ^ lbl8 = gcnew Label;
  lbl8->AutoSize = true;
  lbl8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl8->Location = System::Drawing::Point(this->lbl3->Location.X, this->lbl7->Location.Y);
  lbl8->Name = "label_CheckOutDate_val";
  lbl8->TabIndex = 44;
  this->Controls->Add(lbl8);

  Label ^ lbl9 = gcnew Label;
  lbl9->AutoSize = true;
  lbl9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl9->Location = System::Drawing::Point(this->lbl4->Location.X, this->lbl7->Location.Y);
  lbl9->Name = "label_Booking_ID_val";
  lbl9->TabIndex = 44;
  this->Controls->Add(lbl9);

  Label ^ lbl10 = gcnew Label;
  lbl10->AutoSize = true;
  lbl10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
   static_cast<System::Byte>(0)));
  lbl10->Location = System::Drawing::Point(this->lbl5->Location.X, this->lbl7->Location.Y);
  lbl10->Name = "label_Total_rooms_val";
  lbl10->TabIndex = 44;
  this->Controls->Add(lbl10);*/
  
 }


private: System::Void UserControl_Generate_Bill_Load(System::Object^  sender, System::EventArgs^  e) {

    String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");
    //MessageBox::Show(today_date);

    OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
    DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
    DB_Connection->Open();

    String ^ getUsers = "Select * from Booking_Request where [Checked_Out] = 'NO' AND [Approved] = 'YES' ";
    OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
    OleDbDataReader ^ users_data = cmd->ExecuteReader();

    /* code snippet added by me */
    String ^ getGuestHouseName = "Select * from Guest_House_Info";
    OleDb::OleDbCommand ^ cmdGuestHouse = gcnew OleDbCommand(getGuestHouseName, DB_Connection);
    OleDbDataReader ^ guestHouse_info = cmdGuestHouse->ExecuteReader();

    pictureBox1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\guest_house.jpg");

    while(guestHouse_info->Read()==true)
    {
     label_name->Text = Convert::ToString(guestHouse_info[1]);
     label_address->Text = Convert::ToString(guestHouse_info[2]);
     label_contact->Text = Convert::ToString(guestHouse_info[3]);
     label_email->Text = Convert::ToString(guestHouse_info[4]);
    }
    /*         */

    //MessageBox::Show(today_date);
    
    int i=0;
    while(users_data->Read() == true)
    {
     String ^temp = users_data->GetString(5);
     String ^dateto = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +               Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy
     temp = users_data->GetString(4);
     String ^datefrom = Convert::ToString(temp[9]) + Convert::ToString(temp[8]) + Convert::ToString(temp[7]) + Convert::ToString(temp[6]) + Convert::ToString(temp[4]) +               Convert::ToString(temp[3]) + Convert::ToString(temp[1]) + Convert::ToString(temp[0]); //dd-mm-yyyy
    
     int datefrom_int = System::Convert::ToInt32(datefrom);
     int dateto_int = System::Convert::ToInt32(dateto);
     int today_date_int = System::Convert::ToInt32(today_date);
     if(today_date_int <= dateto_int)
     {
      i=i+1;
      TextBox ^ tb = gcnew TextBox();
      tb->Text = "Username : " + users_data->GetString(1) + "\r\n" + 
        "Name : " + users_data->GetString(3) + "\r\n" + 
        "Check-in : " + users_data->GetString(4) + "\r\n" +
        "Check-out : " + users_data->GetString(5) + "\r\n";

      tb->Location = System::Drawing::Point(20,140*i);
      tb->Width = 300;
      tb->Height = 100;
      tb->Multiline = true;
      tb->ReadOnly = true;
      tb->Name = "TextBox" + i;
      tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
       static_cast<System::Byte>(0)));
      this->Controls->Add(tb);

      Button ^ btnCheckout = gcnew Button();
      btnCheckout->Width = 120;
      btnCheckout->Height = 30;
      btnCheckout->Tag = users_data->GetInt32(0);
      btnCheckout->Text = "Checkout";
      btnCheckout->Location = System::Drawing::Point(350,140*i);
      btnCheckout->Click += gcnew System::EventHandler(this,&UserControl_Generate_Bill::approve_button_click);
      this->Controls->Add(btnCheckout);
     }
    }
    DB_Connection->Close();

   }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
   }
};
}
