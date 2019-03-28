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
		UserControl_Customer_Feedback(void)
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
			this->Btn_All_Feedback->Location = System::Drawing::Point(84, 34);
			this->Btn_All_Feedback->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_All_Feedback->Name = L"Btn_All_Feedback";
			this->Btn_All_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_All_Feedback->TabIndex = 0;
			this->Btn_All_Feedback->Text = L"All";
			this->Btn_All_Feedback->UseVisualStyleBackColor = true;
			this->Btn_All_Feedback->Click += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::Btn_All_Feedback_Click);
			// 
			// Btn_Unread_Feedback
			// 
			this->Btn_Unread_Feedback->Location = System::Drawing::Point(272, 34);
			this->Btn_Unread_Feedback->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Unread_Feedback->Name = L"Btn_Unread_Feedback";
			this->Btn_Unread_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_Unread_Feedback->TabIndex = 1;
			this->Btn_Unread_Feedback->Text = L"Unread";
			this->Btn_Unread_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Unread_Feedback->Click += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::Btn_Unread_Feedback_Click);
			// 
			// Btn_Read_Feedback
			// 
			this->Btn_Read_Feedback->Location = System::Drawing::Point(469, 34);
			this->Btn_Read_Feedback->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Read_Feedback->Name = L"Btn_Read_Feedback";
			this->Btn_Read_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_Read_Feedback->TabIndex = 2;
			this->Btn_Read_Feedback->Text = L"Read";
			this->Btn_Read_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Read_Feedback->Click += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::Btn_Read_Feedback_Click);
			// 
			// UserControl_Customer_Feedback
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->Btn_Read_Feedback);
			this->Controls->Add(this->Btn_Unread_Feedback);
			this->Controls->Add(this->Btn_All_Feedback);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_Customer_Feedback";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Feedback::UserControl_Customer_Feedback_Load);
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
				 /*OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 String ^ getFeedbackData = "Select * from [Booking_Request] Where [Status_Feedback]='Unread'";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(getFeedbackData, DB_Connection);
				 OleDbDataReader ^ feedback_data = cmd->ExecuteReader();

				 int i=0;
				 while(feedback_data->Read() == true)
				 {
					 String ^name = feedback_data->GetString(3);
					 String ^room = feedback_data->GetString(10);
					 String ^feed = feedback_data->GetString(11);
					 String ^date_from = feedback_data->GetString(4);
					 String ^date_to = feedback_data->GetString(5);
					
					 Label ^ lb = gcnew Label();
					 lb->Text = name + "\n" + room + "\n" + date_from + "\n" + date_to + "\n" + feed;
					 lb->Name = "Label" + i; 
					 lb->Location = System::Drawing::Point(20,100*(i+1));
					 i=i+1;
					 this->Controls->Add(lb);
				 }

				 DB_Connection->Close();*/
				 Btn_Unread_Feedback_Click(sender,e);
				 
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
					 tb->Text = "Name : " + name + "\r\n" + 
						 "Room No. : " + room + "\r\n" + 
						 "Check-in : " + date_from + "\r\n" + 
						 "Check-out : " + date_to + "\r\n" + 
						 "Feedback : " + feed;
					 tb->Location = System::Drawing::Point(20,140*(i+1));
					 tb->Width = 250;
					 tb->Height = 120;
					 tb->Name = "Label" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						 static_cast<System::Byte>(0)));
					 this->Controls->Add(tb);
					 i=i+1;
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
				 tb->Text = "Name : " + name + "\r\n" + 
							"Room No. : " + room + "\r\n" + 
							"Check-in : " + date_from + "\r\n" + 
							"Check-out : " + date_to + "\r\n" + 
							"Feedback : " + feed;
				 tb->Location = System::Drawing::Point(20,140*(i+1));
				 tb->Width = 250;
				 tb->Height = 120;
				 tb->Name = "Label" + i;
				 tb->Multiline = true;
				 tb->ReadOnly = true;
				 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					static_cast<System::Byte>(0)));
				 this->Controls->Add(tb);

				 CheckBox ^ box = gcnew CheckBox();
				 box->Checked = false;
				 box->Location = System::Drawing::Point(300,140*(i+1)+40);
				 box->Name = "Checkbox" + i;
				 box->Tag = feedback_data->GetInt32(0);
				 this->Controls->Add(box);

				 i=i+1;
			 }
			 n=i;

			 Button ^ btn = gcnew Button();
			 btn->Location = System::Drawing::Point(40,140*(i+1));
			 btn->Name = "Btn_Mark_As_Read";
			 btn->Text="Mark As Read";  
			 btn->Click += gcnew System::EventHandler(this,&UserControl_Customer_Feedback::markAsRead_button_click);
			 this->Controls->Add(btn);

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
			 int i=0;
			 while(feedback_data->Read() == true)
			 {
				 String ^name = feedback_data->GetString(3);
				 String ^room = feedback_data->GetString(14);
				 String ^feed = feedback_data->GetString(13);
				 String ^date_from = feedback_data->GetString(4);
				 String ^date_to = feedback_data->GetString(5);

				 TextBox ^tb = gcnew TextBox();
				 tb->Text = "Name : " + name + "\r\n" + 
					 "Room No. : " + room + "\r\n" + 
					 "Check-in : " + date_from + "\r\n" + 
					 "Check-out : " + date_to + "\r\n" + 
					 "Feedback : " + feed;
				 tb->Location = System::Drawing::Point(20,140*(i+1));
				 tb->Width = 250;
				 tb->Height = 120;
				 tb->Name = "Label" + i;
				 tb->Multiline = true;
				 tb->ReadOnly = true;
				 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->Controls->Add(tb);
				 i = i+1;
			 }

			 DB_Connection->Close();
		 }
};
}
