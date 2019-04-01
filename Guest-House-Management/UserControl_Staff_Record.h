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
	/// Summary for UserControl_Staff_Record
	/// </summary>
	public ref class UserControl_Staff_Record : public System::Windows::Forms::UserControl
	{
	public:
		

		UserControl_Staff_Record()
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Staff_Record()
		{
			if (components)
			{
				delete components;
			}
		}

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
			// UserControl_Staff_Record
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UserControl_Staff_Record";
			this->Size = System::Drawing::Size(916, 535);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Record::UserControl_Staff_Record_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UserControl_Staff_Record_Load(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 extern int S_ID;
					 //Text_ID->Text = Convert::ToString(S_ID);
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ getUserData = "Select * From Staff_Leave where EID like '" + Convert::ToString(S_ID) + "'";
					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUserData, DB_Connection);

					 OleDbDataReader ^ user_data = cmd->ExecuteReader();

					 int i = 0;
					 int count=0;

					 while(user_data->Read() == true)
					 {
						 String ^ name = user_data->GetString(1);
						 String ^ ID = Convert::ToString(S_ID);
						 //Text_Desig->Text = user_data->GetString(2);
						 String ^ Desig = user_data->GetString(3);
						 String ^ Lfrom = user_data->GetString(4);
						 String ^ Lto = user_data->GetString(5);
						 //String ^ num = user_data->GetString(6);
						 String ^ Status = user_data->GetString(7);
						 MessageBox::Show(Convert::ToString(ID));
						 String ^ fin = "ID: "+ID+"\r\n"+"Name: "+name+"\r\n"+"Leave From: "+Lfrom+"\r\n"+"Leave To: "+Lto+"\r\n"+"Status: "+Status+"\r\n";
						 count+=1;
						 //Button ^ bt1 = gcnew Button;
						 //Button ^ bt2 = gcnew Button;
						 //Button ^ bt3 = gcnew Button;
						 //Button ^ bt4 = gcnew Button;
						 ////Button ^ bt5 = gcnew Button;
						 //Button ^ bt6 = gcnew Button;

						 //bt1->Text = ID;
						 //bt2->Text = name;
						 //bt3->Text = Lfrom;
						 //bt4->Text = Lto;
						 ////bt5->Text = num;
						 //bt6->Text = Status;

						 //bt1->Size = System::Drawing::Size(30,20);
						 //bt1->Location = System::Drawing::Point(30,140 + 30*i);
						 //bt2->Size = System::Drawing::Size(170,20);
						 //bt2->Location = System::Drawing::Point(60,140 + 30*i);
						 //bt3->Size = System::Drawing::Size(80,20);
						 //bt3->Location = System::Drawing::Point(230,140 + 30*i);
						 //bt4->Size = System::Drawing::Size(80,20);
						 //bt4->Location = System::Drawing::Point(310,140 + 30*i);
						 ////bt5->Size = System::Drawing::Size(30,20);
						 ////bt5->Location = System::Drawing::Point(390,140 + 30*i);
						 //bt6->Size = System::Drawing::Size(80,20);
						 //bt6->Location = System::Drawing::Point(390,140 + 30*i);

						 //this->Controls->Add(bt1);
						 //this->Controls->Add(bt2);
						 //this->Controls->Add(bt3);
						 //this->Controls->Add(bt4);
						 ////this->Controls->Add(bt5);
						 //this->Controls->Add(bt6);

						 Label ^ lb1 = gcnew Label;
						 lb1->Name = "label"+Convert::ToString(count);
						 lb1->Text = fin;
						 lb1->Width = 150;
						 lb1->AutoSize=true;
						 lb1->BackColor = System::Drawing::Color::Lavender;
						 lb1->ForeColor = System::Drawing::Color::Black;
						 lb1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
						 lb1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
							 static_cast<System::Byte>(0)));
						 lb1->Location = System::Drawing::Point(80, 120+150*(count-1));
						 this->Controls->Add(lb1);
					 }
					 if(count==0)
					 {
						 MessageBox::Show("No leave record found","Warning");
						 return;
					 }
					 //cmd->ExecuteNonQuery();
					 DB_Connection->Close();
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
					 return;
				 }
				 

			 }
	
};
}
