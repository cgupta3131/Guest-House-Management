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
/// Summary for UserControl_Customer_Feedback
/// </summary>
public ref class UserControl_Customer_Feedback : public System::Windows::Forms::UserControl
{
public:
 Panel ^pnl;
 Panel ^pn2;
 Panel ^pn3;
 Panel ^pn4;
 Panel ^pn5;
 int flaggi;

 UserControl_Customer_Feedback(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5, int temp_flag)
 {
  InitializeComponent();
  pnl = testpanel1;
  pn2 = testpanel2;
  pn3 = testpanel3;
  pn4 = testpanel4;
  pn5 = testpanel5;
  flaggi = temp_flag;
  //TODO: Add the constructor code here
  //
 }

protected:
 /// <summary>
 /// Clean up any resources being used.
 /// </summary>
 ~UserControl_Customer_Feedback()
 {
  if (components)
  {
   delete components;
  }
 }
private: System::Windows::Forms::Button^  Btn_All_Feedback;
protected: 

private: System::Windows::Forms::Button^  Btn_Unread_Feedback;
private: System::Windows::Forms::Button^  Btn_Read_Feedback;
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
	 this->Btn_All_Feedback = (gcnew System::Windows::Forms::Button());
	 this->Btn_Unread_Feedback = (gcnew System::Windows::Forms::Button());
	 this->Btn_Read_Feedback = (gcnew System::Windows::Forms::Button());
	 this->SuspendLayout();
	 // 
	 // Btn_All_Feedback
	 // 
	 this->Btn_All_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(87)));
	 this->Btn_All_Feedback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->Btn_All_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
	 this->Btn_All_Feedback->Location = System::Drawing::Point(84, 34);
	 this->Btn_All_Feedback->Margin = System::Windows::Forms::Padding(2);
	 this->Btn_All_Feedback->Name = L"Btn_All_Feedback";
	 this->Btn_All_Feedback->Size = System::Drawing::Size(114, 52);
	 this->Btn_All_Feedback->TabIndex = 0;
	 this->Btn_All_Feedback->Text = L"All";
	 this->Btn_All_Feedback->UseVisualStyleBackColor = false;
	 this->Btn_All_Feedback->Visible = false;
	 this->Btn_All_Feedback->Click += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::Btn_All_Feedback_Click_1);
	 // 
	 // Btn_Unread_Feedback
	 // 
	 this->Btn_Unread_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
	 this->Btn_Unread_Feedback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
		 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	 this->Btn_Unread_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
	 this->Btn_Unread_Feedback->Location = System::Drawing::Point(272, 34);
	 this->Btn_Unread_Feedback->Margin = System::Windows::Forms::Padding(2);
	 this->Btn_Unread_Feedback->Name = L"Btn_Unread_Feedback";
	 this->Btn_Unread_Feedback->Size = System::Drawing::Size(114, 52);
	 this->Btn_Unread_Feedback->TabIndex = 1;
	 this->Btn_Unread_Feedback->Text = L"Unread";
	 this->Btn_Unread_Feedback->UseVisualStyleBackColor = false;
	 this->Btn_Unread_Feedback->Visible = false;
	 // 
	 // Btn_Read_Feedback
	 // 
	 this->Btn_Read_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
	 this->Btn_Read_Feedback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		 static_cast<System::Byte>(0)));
	 this->Btn_Read_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
		 static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
	 this->Btn_Read_Feedback->Location = System::Drawing::Point(469, 34);
	 this->Btn_Read_Feedback->Margin = System::Windows::Forms::Padding(2);
	 this->Btn_Read_Feedback->Name = L"Btn_Read_Feedback";
	 this->Btn_Read_Feedback->Size = System::Drawing::Size(114, 52);
	 this->Btn_Read_Feedback->TabIndex = 2;
	 this->Btn_Read_Feedback->Text = L"Read";
	 this->Btn_Read_Feedback->UseVisualStyleBackColor = false;
	 this->Btn_Read_Feedback->Visible = false;
	 // 
	 // UserControl_Customer_Feedback
	 // 
	 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
	 this->AutoScroll = true;
	 this->BackColor = System::Drawing::Color::Transparent;
	 this->Controls->Add(this->Btn_Read_Feedback);
	 this->Controls->Add(this->Btn_Unread_Feedback);
	 this->Controls->Add(this->Btn_All_Feedback);
	 this->Margin = System::Windows::Forms::Padding(2);
	 this->Name = L"UserControl_Customer_Feedback";
	 this->Size = System::Drawing::Size(868, 553);
	 this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::UserControl_Customer_Feedback_Load);
	 this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::eneterm);
	 this->ResumeLayout(false);

 }
#pragma endregion
static int n=0;
void markAsRead_button_click(System::Object^  sender, System::EventArgs^  e){
 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
 DB_Connection->Open();

 for (int i=0;i<n;i++)
 {
  CheckBox ^temp = (CheckBox^)this->Controls["Checkbox"+(i)];
  int x = static_cast<int>(temp->Tag);
  if(temp->Checked == false)continue;
  String ^ updateMarked = "UPDATE [Booking_Request] SET [Status_Feedback] = 'Read' Where [ID]=" + x +";";
  OleDbCommand ^ cmd = gcnew OleDbCommand(updateMarked, DB_Connection);

  cmd->ExecuteNonQuery();
 }
 DB_Connection->Close();
 Btn_Unread_Feedback_Click(sender,e);
}
 
private: System::Void UserControl_Customer_Feedback_Load(System::Object^  sender, System::EventArgs^  e) {
   
    if(flaggi == 0)
    Btn_Unread_Feedback_Click(sender,e);
    else if(flaggi == 1)
     Btn_Read_Feedback_Click(sender,e);
    else if(flaggi == 2)
     Btn_All_Feedback_Click(sender,e);
    
   }
private: System::Void Btn_Read_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
    this->Controls->Clear();
    this->InitializeComponent();
    OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
    DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
    DB_Connection->Open();
    String ^ getFeedbackData = "Select * from [Booking_Request] Where [Status_Feedback]='Read' AND [Approved]='YES' ORDER BY [Date_Upto] DESC";

    OleDbCommand ^ cmd = gcnew OleDbCommand(getFeedbackData, DB_Connection);
    OleDbDataReader ^ feedback_data = cmd->ExecuteReader();

    Label ^ lbl3 = gcnew Label();
    //this->SuspendLayout();
    // 
    // label3
    // 
    lbl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
     static_cast<System::Byte>(0)));
    lbl3->Location = System::Drawing::Point(280, 34);
    lbl3->Name = L"lbl3";
    lbl3->Size = System::Drawing::Size(342, 37);
    lbl3->TabIndex = 0;
    lbl3->Text = L"Read Messages";

    this->Controls->Add(lbl3);

    int i=0;
    //MessageBox::Show("1");
    while(feedback_data->Read() == true)
    {
     String ^name = feedback_data->GetString(3);
     String ^room = feedback_data->GetString(14);
     String ^feed = feedback_data->GetString(13);
     String ^date_from = feedback_data->GetString(4);
     String ^date_to = feedback_data->GetString(5);

     TextBox ^tb = gcnew TextBox();
     tb->Text = "  Name : " + name + "\r\n" + 
      "  Room No. : " + room + "\r\n" + 
      "  Check-in : " + date_from + "\r\n" + 
      "  Check-out : " + date_to + "\r\n" + 
      "  Mess : " + Convert::ToString(feedback_data->GetInt32(10)) + "/5 , " + "Cleanliness : " + Convert::ToString(feedback_data->GetInt32(11)) + "/5 , " + "Service : " + Convert::ToString(feedback_data->GetInt32(12)) + "/5" + "\r\n" +
      "  Feedback : " + feed;
     tb->Location = System::Drawing::Point(20,140*(i)+100);
     tb->Width = 400;
     tb->Height = 120;
     tb->Name = "Label" + i;
     tb->Multiline = true;
     tb->ReadOnly = true;
     tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
     tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
      static_cast<System::Byte>(0)));
     this->Controls->Add(tb);
     i=i+1;
    }
    if (i==0)
    {
     lbl3->Text = "No read messages";
    }

    DB_Connection->Close();
   }
private: System::Void Btn_Unread_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
   this->Controls->Clear();
   this->InitializeComponent();
   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();
   String ^ getFeedbackData = "Select * from [Booking_Request] Where [Status_Feedback]='Unread'  AND [Approved]='YES' ORDER BY [Date_Upto] DESC";

   OleDbCommand ^ cmd = gcnew OleDbCommand(getFeedbackData, DB_Connection);
   OleDbDataReader ^ feedback_data = cmd->ExecuteReader();

   Label ^ lbl2 = gcnew Label();
   //this->SuspendLayout();
   // 
   // label2
   // 
   lbl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
    static_cast<System::Byte>(0)));
   lbl2->Location = System::Drawing::Point(280, 34);
   lbl2->Name = L"lbl2";
   lbl2->Size = System::Drawing::Size(342, 37);
   lbl2->TabIndex = 0;
   lbl2->Text = L"Unread Messages";

   this->Controls->Add(lbl2);

   int i=0;
   while(feedback_data->Read() == true)
   {
    String ^name = feedback_data->GetString(3);
    String ^room = feedback_data->GetString(14);
    String ^feed = feedback_data->GetString(13);
    String ^date_from = feedback_data->GetString(4);
    String ^date_to = feedback_data->GetString(5);

    /*Label ^ lb = gcnew Label();
    lb->Text = name + "\n" + room + "\n" + date_from + "\n" + date_to + "\n" + feed;
    lb->Name = "Label" + i; 
    lb->Location = System::Drawing::Point(20,100*(i+1));
    this->Controls->Add(lb);*/

    TextBox ^tb = gcnew TextBox();
    tb->Text = "  Name : " + name + "\r\n" + 
      "  Room No. : " + room + "\r\n" + 
      "  Check-in : " + date_from + "\r\n" + 
      "  Check-out : " + date_to + "\r\n" + 
      "  Mess : " + Convert::ToString(feedback_data->GetInt32(10)) + "/5 , " + "Cleanliness : " + Convert::ToString(feedback_data->GetInt32(11)) + "/5 , " + "Service : " + Convert::ToString(feedback_data->GetInt32(12)) + "/5" + "\r\n" +
      "  Feedback : " + feed;
    tb->Location = System::Drawing::Point(20,140*(i)+100);
    tb->Width = 400;
    tb->Height = 120;
    tb->Name = "Label" + i;
    tb->Multiline = true;
    tb->ReadOnly = true;
    tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
    tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
    static_cast<System::Byte>(0)));
    this->Controls->Add(tb);

    CheckBox ^ box = gcnew CheckBox();
    box->Checked = false;
    box->Location = System::Drawing::Point(480,140*(i)+140);
    box->Name = "Checkbox" + i;
    box->Tag = feedback_data->GetInt32(0);
    this->Controls->Add(box);

    i=i+1;
   }
   
   n=i;

   Button ^ btn = gcnew Button();
   btn->Height = 50;
   btn->Width = 150;
   btn->Location = System::Drawing::Point(40,140*(i)+100);
   btn->Name = "Btn_Mark_As_Read";
   btn->Text="Mark As Read";  
   btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
    static_cast<System::Int32>(static_cast<System::Byte>(87)));
   btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
   btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
    static_cast<System::Byte>(0)));
   btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
    static_cast<System::Int32>(static_cast<System::Byte>(247)));
   btn->Click += gcnew System::EventHandler(this,&UserControl_Customer_Feedback::markAsRead_button_click);
   this->Controls->Add(btn);
   if (i==0)
   {
    lbl2->Text = "No Unread Messages";
    btn->Visible = false;
   }

   DB_Connection->Close();
  }
private: System::Void Btn_All_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
   this->Controls->Clear();
   this->InitializeComponent();

   OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
   DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
   DB_Connection->Open();
   String ^ getFeedbackData = "Select * from [Booking_Request] Where [Approved]='YES' ORDER BY [Date_Upto] DESC";
   OleDbCommand ^ cmd = gcnew OleDbCommand(getFeedbackData, DB_Connection);
   OleDbDataReader ^ feedback_data = cmd->ExecuteReader();

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
   lbl1->Text = L"All Messages";

   this->Controls->Add(lbl1);

   int i=0;
   while(feedback_data->Read() == true)
   {
    String ^name = feedback_data->GetString(3);
    String ^room = feedback_data->GetString(14);
    String ^feed = feedback_data->GetString(13);
    String ^date_from = feedback_data->GetString(4);
    String ^date_to = feedback_data->GetString(5);

    TextBox ^tb = gcnew TextBox();
    tb->Text = "  Name : " + name + "\r\n" + 
     "  Room No. : " + room + "\r\n" + 
     "  Check-in : " + date_from + "\r\n" + 
     "  Check-out : " + date_to + "\r\n" + 
     "  Mess : " + Convert::ToString(feedback_data->GetInt32(10)) + "/5 , " + "Cleanliness : " + Convert::ToString(feedback_data->GetInt32(11)) + "/5 , " + "Service : " + Convert::ToString(feedback_data->GetInt32(12)) + "/5" + "\r\n" +
     "  Feedback : " + feed;
    tb->Location = System::Drawing::Point(20,140*(i)+100);
    tb->Width = 400;
    tb->Height = 120;
    tb->Name = "Label" + i;
    tb->Multiline = true;
    tb->ReadOnly = true;
    tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
    tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
     static_cast<System::Byte>(0)));
    this->Controls->Add(tb);
    i = i+1;
   }
   if (i==0)
   {
    lbl1->Text = "Nothing to show";
   }

   DB_Connection->Close();
  }
private: System::Void eneterm(System::Object^  sender, System::EventArgs^  e) {
   pnl->Size = System::Drawing::Size(173, 44);
   pn2->Size = System::Drawing::Size(173, 44);
   pn3->Size = System::Drawing::Size(173, 44);
   pn4->Size = System::Drawing::Size(173, 44);
   pn5->Size = System::Drawing::Size(173, 44);
  }
private: System::Void Btn_All_Feedback_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
