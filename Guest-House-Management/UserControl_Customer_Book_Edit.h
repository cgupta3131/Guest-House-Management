#pragma once
#include "Form_Edit_Booking.h"
#include "Form_Feedback.h"
#include "Form_Show_Guest_House_Facilities.h"
#include<string>
#include <iomanip>
#include <cliext/vector>

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
	/// Summary for UserControl_Customer_Book_Edit
	/// </summary>
	public ref class UserControl_Customer_Book_Edit : public System::Windows::Forms::UserControl
	{
	public:
		String ^username_info;
		cliext::vector<String^> vec_id;
		cliext::vector<String^> v1;
	internal: System::Windows::Forms::Label^  label2;
	public: 
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::Label^  label8;
			  cliext::vector<String^> v2;
		UserControl_Customer_Book_Edit(String ^ user)
		{
			InitializeComponent();
			username_info = user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Customer_Book_Edit()
		{
			if (components)
			{
				delete components;
			}
		}

	internal: System::Windows::Forms::Label^  label1;

	internal: 


























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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(251, 38);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 28);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Booking History";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(39, 90);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 19);
			this->label2->TabIndex = 45;
			this->label2->Text = L"ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(117, 90);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 19);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Booking for";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(267, 90);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 19);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Start Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(377, 90);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 19);
			this->label5->TabIndex = 48;
			this->label5->Text = L"End Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(472, 90);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 19);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Approval Status";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(627, 90);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 19);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Options";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(2, 0);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(253, 17);
			this->label8->TabIndex = 51;
			this->label8->Text = L"* Click on the booking to view details";
			// 
			// UserControl_Customer_Book_Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Customer_Book_Edit";
			this->Size = System::Drawing::Size(746, 434);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Book_Edit::UserControl_Customer_Book_Edit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void clear_form(System::Object^  sender, System::EventArgs^  e)
		{
			this->Controls->Clear();
			this->InitializeComponent();
			UserControl_Customer_Book_Edit_Load(sender,e);
		}
	private: System::Void UserControl_Customer_Book_Edit_Load(System::Object^  sender, System::EventArgs^  e) {
				
				 //this->Controls->Clear();
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getPastBookings = "Select * From Booking_Request where Customer_Username like '" + username_info + "' ORDER BY ID DESC";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
				 OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
				 int i = 0;
				 while(user_booking->Read()==true)
				 {
					 // add check that show only booking requests that are more than the current date
					

					String ^ book_id = Convert::ToString(user_booking->GetInt32(0));
					String ^ book_name = user_booking->GetString(3);
					String ^ book_date = user_booking->GetString(4);
					String ^ book_upto = user_booking->GetString(5);
					String ^ book_approved = user_booking->GetString(9);
					//MessageBox::Show("2");
					Button ^ bt1 = gcnew Button;
					Button ^ bt2 = gcnew Button;
					Button ^ bt3 = gcnew Button;
					Button ^ bt4 = gcnew Button;
					Button ^ bt5 = gcnew Button;
					Button ^ bt6 = gcnew Button;

					vec_id.push_back(book_id);
					v1.push_back(book_date);
					v2.push_back(book_upto);

					String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

					String ^str_id=book_id;

					String ^temp=book_date;
					String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

					temp=book_upto;
					String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

					int str1_int = System::Convert::ToInt32(str1);
					int str2_int = System::Convert::ToInt32(str2);
					int datetoday_int = System::Convert::ToInt32(today_date);

					int diff1 = str1_int - datetoday_int;
					int diff2 = str2_int - datetoday_int;
			
					String ^ appr=user_booking->GetString(9);
					int feed=user_booking->GetInt32(10);

					if(diff1 > 0)
					{
						bt6->Text="Cancel Booking";
					}
					else if(diff1<=0 && diff2>=0)
					{
						
						if(diff2==0)
						{
							if(appr!="YES"|| feed!= 0)
							{
								bt6->Text="View Booking";
							}
							else
							{
								bt6->Text="View Facilities";
							}
						}
						
						else 
						{
							bt6->Text="View Facilities";
						}
					}
					else
					{
						if(appr!="YES"|| feed!= 0)
						{
							bt6->Text="View Booking";
						}
						else
						{
							bt6->Text="Give Feedback";
						}
					}
					bt1->Text = book_id;
					bt2->Text = book_name;
					bt3->Text = book_date;
					bt4->Text = book_upto;
					bt5->Text = book_approved;

					bt1->Size = System::Drawing::Size(40,30);
					bt1->Location = System::Drawing::Point(30,140 + 30*i);
					bt2->Size = System::Drawing::Size(200,30);
					bt2->Location = System::Drawing::Point(70,140 + 30*i);
					bt3->Size = System::Drawing::Size(100,30);
					bt3->Location = System::Drawing::Point(270,140 + 30*i);
					bt4->Size = System::Drawing::Size(100,30);
					bt4->Location = System::Drawing::Point(370,140 + 30*i);
					bt5->Size = System::Drawing::Size(140,30);
					bt5->Location = System::Drawing::Point(470,140 + 30*i);
					bt6->Size = System::Drawing::Size(100,30);
					bt6->Location = System::Drawing::Point(610,140 + 30*i);
					bt6->BackColor = System::Drawing::Color::OrangeRed;
					bt6->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
						static_cast<System::Byte>(0)));
					bt6->ForeColor = System::Drawing::Color::White;
					bt6->FlatAppearance->BorderSize = 0;
					bt6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;

					this->Controls->Add(bt1);
					bt1->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt1_Click);

					this->Controls->Add(bt2);
					bt2->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt2_Click);

					this->Controls->Add(bt3);
					bt3->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt3_Click);

					this->Controls->Add(bt4);
					bt4->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt4_Click);

					this->Controls->Add(bt5);
					bt5->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt5_Click);

					this->Controls->Add(bt6);
					bt6->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt6_Click);

					i++;
					
					//dataGridView1->Rows->Add(book_id,book_name,book_date,book_upto);
				 }

				 if(i==0)
				 {
					 label2->Visible=false;
					 label3->Visible=false;
					 label4->Visible=false;
					 label5->Visible=false;
					 label6->Visible=false;
					 label7->Visible=false;
				 }
			
				 DB_Connection->Close();
				
				 
			 }
	private: System::Void List_Search_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

		public: System::Void bt1_Click(System::Object^  sender, System::EventArgs^  e)
		{

			Button ^ bt1=(System::Windows::Forms::Button^) sender;
			int loc=bt1->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			//MessageBox::Show(Convert::ToString(loc));
			String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			String ^str_id=vec_id[pos];
			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			f2->ShowDialog();
			clear_form(sender,e);
		}

		public: System::Void bt2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Button ^ bt2=(System::Windows::Forms::Button^) sender;
			int loc=bt2->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			
			//MessageBox::Show(Convert::ToString(loc));
			String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			String ^str_id=vec_id[pos];
			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			f2->ShowDialog();
			clear_form(sender,e);

			//String ^temp=v1[pos];
			//String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//temp=v2[pos];
			//String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//int str1_int = System::Convert::ToInt32(str1);
			//int str2_int = System::Convert::ToInt32(str2);
			//int datetoday_int = System::Convert::ToInt32(today_date);

			///*DateTime dt1=Convert::ToDateTime(str1);
			//DateTime dt2=Convert::ToDateTime(str2);
			//TimeSpan span1=dt1-System::DateTime().Now.Date;
			//TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			//int diff1 = str1_int - datetoday_int;
			//int diff2 = str2_int - datetoday_int;
			//if(diff1 > 0)
			//{
			//	Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
			//	f2->ShowDialog();
			//}
			//else if(diff1 <=0 && diff2 >=0)
			//{
			//		/*Add code to go to in stay facilities*/
			//		if(diff2==0)
			//		{
			//			Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//			form3->ShowDialog();
			//		}
			//		Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
			//		f1->ShowDialog();
			//}
			//else
			//{
			//	/* Add code to check if feedback already submitted 
			//		Also see that feedback is asked for on the last day of stay
			//		Also allow to remove from history */ 
			//		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			//		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			//		DB_Connection->Open();

			//		String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
			//		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
			//		OleDbDataReader ^ user_booking = cmd->ExecuteReader();
			//	 
			//		/*while(user_booking->Read()==true)
			//		{
			//		List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
			//		}*/

			//		if(user_booking->Read()==true)
			//		{
			//			// add check that show only booking requests that are more than the current date
			//			if(user_booking->GetInt32(10)==0)
			//			{
			//				Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//				form3->ShowDialog();
			//			}
			//			// add code to close this form

			//			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			//			f2->ShowDialog();
			//		}
			//		DB_Connection->Close();
			//}
		}


		public: System::Void bt3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Button ^ bt3=(System::Windows::Forms::Button^) sender;
			int loc=bt3->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			//MessageBox::Show(Convert::ToString(loc));
			String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			String ^str_id=vec_id[pos];
			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			f2->ShowDialog();
			clear_form(sender,e);

			//String ^temp=v1[pos];
			//String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//temp=v2[pos];
			//String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//int str1_int = System::Convert::ToInt32(str1);
			//int str2_int = System::Convert::ToInt32(str2);
			//int datetoday_int = System::Convert::ToInt32(today_date);

			///*DateTime dt1=Convert::ToDateTime(str1);
			//DateTime dt2=Convert::ToDateTime(str2);
			//TimeSpan span1=dt1-System::DateTime().Now.Date;
			//TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			//int diff1 = str1_int - datetoday_int;
			//int diff2 = str2_int - datetoday_int;
			//if(diff1 > 0)
			//{
			//	Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
			//	f2->ShowDialog();
			//}
			//else if(diff1 <=0 && diff2 >=0)
			//{
			//		/*Add code to go to in stay facilities*/
			//		if(diff2==0)
			//		{
			//			Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//			form3->ShowDialog();
			//		}
			//		Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
			//		f1->ShowDialog();
			//}
			//else
			//{
			//	/* Add code to check if feedback already submitted 
			//		Also see that feedback is asked for on the last day of stay
			//		Also allow to remove from history */ 
			//		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			//		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			//		DB_Connection->Open();

			//		String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
			//		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
			//		OleDbDataReader ^ user_booking = cmd->ExecuteReader();
			//	 
			//		/*while(user_booking->Read()==true)
			//		{
			//		List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
			//		}*/

			//		if(user_booking->Read()==true)
			//		{
			//			// add check that show only booking requests that are more than the current date
			//			if(user_booking->GetInt32(10)==0)
			//			{
			//				Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//				form3->ShowDialog();
			//			}
			//			// add code to close this form

			//			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			//			f2->ShowDialog();
			//		}
			//		DB_Connection->Close();
			//}
		}

		public: System::Void bt4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Button ^ bt4=(System::Windows::Forms::Button^) sender;
			int loc=bt4->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			//MessageBox::Show(Convert::ToString(loc));
			String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			String ^str_id=vec_id[pos];
			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			f2->ShowDialog();
			clear_form(sender,e);

			//String ^temp=v1[pos];
			//String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//temp=v2[pos];
			//String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//int str1_int = System::Convert::ToInt32(str1);
			//int str2_int = System::Convert::ToInt32(str2);
			//int datetoday_int = System::Convert::ToInt32(today_date);

			///*DateTime dt1=Convert::ToDateTime(str1);
			//DateTime dt2=Convert::ToDateTime(str2);
			//TimeSpan span1=dt1-System::DateTime().Now.Date;
			//TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			//int diff1 = str1_int - datetoday_int;
			//int diff2 = str2_int - datetoday_int;
			//if(diff1 > 0)
			//{
			//	Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
			//	f2->ShowDialog();
			//}
			//else if(diff1 <=0 && diff2 >=0)
			//{
			//		/*Add code to go to in stay facilities*/
			//		if(diff2==0)
			//		{
			//			Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//			form3->ShowDialog();
			//		}
			//		Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
			//		f1->ShowDialog();
			//}
			//else
			//{
			//	/* Add code to check if feedback already submitted 
			//		Also see that feedback is asked for on the last day of stay
			//		Also allow to remove from history */ 
			//		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			//		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			//		DB_Connection->Open();

			//		String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
			//		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
			//		OleDbDataReader ^ user_booking = cmd->ExecuteReader();
			//	 
			//		/*while(user_booking->Read()==true)
			//		{
			//		List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
			//		}*/

			//		if(user_booking->Read()==true)
			//		{
			//			// add check that show only booking requests that are more than the current date
			//			if(user_booking->GetInt32(10)==0)
			//			{
			//				Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//				form3->ShowDialog();
			//			}
			//			// add code to close this form

			//			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			//			f2->ShowDialog();
			//		}
			//		DB_Connection->Close();
			//}
		}
		public: System::Void bt5_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Button ^ bt5=(System::Windows::Forms::Button^) sender;
			int loc=bt5->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			//MessageBox::Show(Convert::ToString(loc));
			String ^str_id=vec_id[pos];

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			DB_Connection->Open();

			int str_temp = Convert::ToInt32(str_id);
			String ^ getPastBookings = "Select * From Booking_Request where [ID] = " + str_temp + ";";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
			OleDbDataReader ^ user_booking = cmd->ExecuteReader();

			String ^ appr;
			while(user_booking->Read())
			{
				appr=user_booking->GetString(9);
			}
			bt5->Text=appr;
			DB_Connection->Close();
			//String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			//String ^str_id=vec_id[pos];

			//String ^temp=v1[pos];
			//String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//temp=v2[pos];
			//String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			//int str1_int = System::Convert::ToInt32(str1);
			//int str2_int = System::Convert::ToInt32(str2);
			//int datetoday_int = System::Convert::ToInt32(today_date);

			////MessageBox::Show(str_id + " " + str1 + " " + str2);
			///*DateTime dt1=Convert::ToDateTime(str1);
			//DateTime dt2=Convert::ToDateTime(str2);
			//TimeSpan span1=dt1-System::DateTime().Now.Date;
			//TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			//int diff1 = str1_int - datetoday_int;
			//int diff2 = str2_int - datetoday_int;
			////MessageBox::Show("1");
			//if(diff1 > 0)
			//{
			//	//MessageBox::Show("2");
			//	Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
			//	f2->ShowDialog();
			//}
			//else if(diff1 <=0 && diff2 >=0)
			//{
			//		/*Add code to go to in stay facilities*/
			//		 //MessageBox::Show("3");
			//		if(diff2==0)
			//		{
			//			Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//			form3->ShowDialog();
			//		}
			//		Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
			//		f1->ShowDialog();
			//}
			//else
			//{
			//	//MessageBox::Show("4");
			//	/* Add code to check if feedback already submitted 
			//		Also see that feedback is asked for on the last day of stay
			//		Also allow to remove from history */ 
			//		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			//		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
			//		DB_Connection->Open();

			//		int str_temp = Convert::ToInt32(str_id);
			//		String ^ getPastBookings = "Select * From Booking_Request where [ID] = " + str_temp + ";";
			//		OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
			//		OleDbDataReader ^ user_booking = cmd->ExecuteReader();
			//	 
			//		/*while(user_booking->Read()==true)
			//		{
			//		List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
			//		}*/

			//		if(user_booking->Read()==true)
			//		{
			//			if(user_booking->GetInt32(10) == 0)
			//			{
			//				Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
			//				form3->ShowDialog();
			//			}
			//			//MessageBox::Show("7");
			//			// add code to close this form
			//			Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
			//			f2->ShowDialog();
			//		}
			//		DB_Connection->Close();
			//}

		}

		public: System::Void bt6_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Button ^ bt6=(System::Windows::Forms::Button^) sender;
			int loc=bt6->Location.Y;

			// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
			int scr=this->AutoScrollPosition.Y;
			//MessageBox::Show("scr=" + Convert::ToString(scr));
			int pos=(loc-140-scr)/30;
			//MessageBox::Show(Convert::ToString(loc));
			String ^today_date = System::DateTime().Now.ToString("yyyyMMdd");

			String ^str_id=vec_id[pos];

			String ^temp=v1[pos];
			String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			temp=v2[pos];
			String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			int str1_int = System::Convert::ToInt32(str1);
			int str2_int = System::Convert::ToInt32(str2);
			int datetoday_int = System::Convert::ToInt32(today_date);


			int diff1 = str1_int - datetoday_int;
			int diff2 = str2_int - datetoday_int;
			//MessageBox::Show("1");

			if(diff1 > 0)
			{
				Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
				f2->ShowDialog();
				clear_form(sender,e);
				
			}

			else if(diff1 <=0 && diff2 >=0)
			{
					/*Add code to go to in stay facilities*/
					 //MessageBox::Show("3");
				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				DB_Connection->Open();

				int str_temp = Convert::ToInt32(str_id);
				String ^ getPastBookings = "Select * From Booking_Request where [ID] = " + str_temp + ";";
				OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
				OleDbDataReader ^ user_booking = cmd->ExecuteReader();

				String ^ appr;
				int feed;
				while(user_booking->Read())
				{
					appr=user_booking->GetString(9);
					feed=user_booking->GetInt32(10);
				}
				DB_Connection->Close();
				if(appr!="YES"|| feed!= 0)
				{
					//bt6->Text="View Booking";
					Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
					f2->ShowDialog();
					clear_form(sender,e);

					return;
				}

				//bt6->Text="View Facilities";
				if(diff2==0 && feed == 0)
				{
					Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
					form3->ShowDialog();
				}
				Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
				f1->ShowDialog();
				clear_form(sender,e);
			}
			else
			{
				
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					DB_Connection->Open();

					int str_temp = Convert::ToInt32(str_id);
					String ^ getPastBookings = "Select * From Booking_Request where [ID] = " + str_temp + ";";
					OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
					OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
					String ^ appr;
					int feed;
					while(user_booking->Read())
					{
						appr=user_booking->GetString(9);
						feed=user_booking->GetInt32(10);
					}
					DB_Connection->Close();
					
						if(appr!="YES"||feed != 0)
							{
								//bt6->Text="View Booking";
								Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
								f2->ShowDialog();
								 clear_form(sender,e);
								return;
							}
						//bt6->Text="Give Feedback";
						if(feed == 0)
						{
						Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
						form3->ShowDialog();
						clear_form(sender,e);
						}
						
						
					}
					
			}
};
}




