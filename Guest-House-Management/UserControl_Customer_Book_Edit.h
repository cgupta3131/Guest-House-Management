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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(397, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 23);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Booking History";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(92, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 23);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Booking ID";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(324, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 23);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Booking for";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(563, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 23);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Start Date";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(790, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 23);
			this->label5->TabIndex = 48;
			this->label5->Text = L"End Date";
			this->label5->Visible = false;
			// 
			// UserControl_Customer_Book_Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Customer_Book_Edit";
			this->Size = System::Drawing::Size(994, 534);
			this->Load += gcnew System::EventHandler(this, &UserControl_Customer_Book_Edit::UserControl_Customer_Book_Edit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Customer_Book_Edit_Load(System::Object^  sender, System::EventArgs^  e) {
				
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

					Button ^ bt1 = gcnew Button;
					Button ^ bt2 = gcnew Button;
					Button ^ bt3 = gcnew Button;
					Button ^ bt4 = gcnew Button;

					vec_id.push_back(book_id);
					v1.push_back(book_date);
					v2.push_back(book_upto);
					
					bt1->Text = book_id;
					bt2->Text = book_name;
					bt3->Text = book_date;
					bt4->Text = book_upto;
					
					bt1->Size = System::Drawing::Size(170,30);
					bt1->Location = System::Drawing::Point(30,140 + 30*i);
					bt2->Size = System::Drawing::Size(170,30);
					bt2->Location = System::Drawing::Point(200,140 + 30*i);
					bt3->Size = System::Drawing::Size(170,30);
					bt3->Location = System::Drawing::Point(370,140 + 30*i);
					bt4->Size = System::Drawing::Size(170,30);
					bt4->Location = System::Drawing::Point(540,140 + 30*i);

					this->Controls->Add(bt1);
					bt1->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt1_Click);

					this->Controls->Add(bt2);
					bt2->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt2_Click);

					this->Controls->Add(bt3);
					bt3->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt3_Click);

					this->Controls->Add(bt4);
					bt4->Click+=gcnew EventHandler(this,&UserControl_Customer_Book_Edit::bt4_Click);


					i++;
					
					//dataGridView1->Rows->Add(book_id,book_name,book_date,book_upto);
				 }
				 if(i!=0)
				 {
					 label2->Visible=true;
					 label3->Visible=true;
					 label4->Visible=true;
					 label5->Visible=true;
				 }
				 /*	 for(int i=0;i<vec_id.size();i++)
				 {

				 MessageBox::Show(vec_id[i]);
				 }*/
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

			String ^temp=v1[pos];
			String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			temp=v2[pos];
			String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			int str1_int = System::Convert::ToInt32(str1);
			int str2_int = System::Convert::ToInt32(str2);
			int datetoday_int = System::Convert::ToInt32(today_date);

			//MessageBox::Show(str_id + " " + str1 + " " + str2);
			/*DateTime dt1=Convert::ToDateTime(str1);
			DateTime dt2=Convert::ToDateTime(str2);
			TimeSpan span1=dt1-System::DateTime().Now.Date;
			TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			int diff1 = str1_int - datetoday_int;
			int diff2 = str2_int - datetoday_int;
			//MessageBox::Show("1");
			if(diff1 > 0)
			{
				//MessageBox::Show("2");
				Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
				f2->ShowDialog();
			}
			else if(diff1 <=0 && diff2 >=0)
			{
					/*Add code to go to in stay facilities*/
					 //MessageBox::Show("3");
					if(diff2==0)
					{
						Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
						form3->ShowDialog();
					}
					Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
					f1->ShowDialog();
			}
			else
			{
				//MessageBox::Show("4");
				/* Add code to check if feedback already submitted 
					Also see that feedback is asked for on the last day of stay
					Also allow to remove from history */ 
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					DB_Connection->Open();

					int str_temp = Convert::ToInt32(str_id);
					String ^ getPastBookings = "Select * From Booking_Request where [ID] = " + str_temp + ";";
					OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
					OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
					/*while(user_booking->Read()==true)
					{
					List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
					}*/

					if(user_booking->Read()==true)
					{
						if(user_booking->GetInt32(10) == 0)
						{
							Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
							form3->ShowDialog();
						}
						//MessageBox::Show("7");
						// add code to close this form
						Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
						f2->ShowDialog();
					}
					DB_Connection->Close();
			}

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

			String ^temp=v1[pos];
			String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			temp=v2[pos];
			String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			int str1_int = System::Convert::ToInt32(str1);
			int str2_int = System::Convert::ToInt32(str2);
			int datetoday_int = System::Convert::ToInt32(today_date);

			/*DateTime dt1=Convert::ToDateTime(str1);
			DateTime dt2=Convert::ToDateTime(str2);
			TimeSpan span1=dt1-System::DateTime().Now.Date;
			TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			int diff1 = str1_int - datetoday_int;
			int diff2 = str2_int - datetoday_int;
			if(diff1 > 0)
			{
				Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
				f2->ShowDialog();
			}
			else if(diff1 <=0 && diff2 >=0)
			{
					/*Add code to go to in stay facilities*/
					if(diff2==0)
					{
						Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
						form3->ShowDialog();
					}
					Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
					f1->ShowDialog();
			}
			else
			{
				/* Add code to check if feedback already submitted 
					Also see that feedback is asked for on the last day of stay
					Also allow to remove from history */ 
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					DB_Connection->Open();

					String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
					OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
					OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
					/*while(user_booking->Read()==true)
					{
					List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
					}*/

					if(user_booking->Read()==true)
					{
						// add check that show only booking requests that are more than the current date
						if(user_booking->GetInt32(10)==0)
						{
							Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
							form3->ShowDialog();
						}
						// add code to close this form

						Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
						f2->ShowDialog();
					}
					DB_Connection->Close();
			}
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

			String ^temp=v1[pos];
			String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			temp=v2[pos];
			String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			int str1_int = System::Convert::ToInt32(str1);
			int str2_int = System::Convert::ToInt32(str2);
			int datetoday_int = System::Convert::ToInt32(today_date);

			/*DateTime dt1=Convert::ToDateTime(str1);
			DateTime dt2=Convert::ToDateTime(str2);
			TimeSpan span1=dt1-System::DateTime().Now.Date;
			TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			int diff1 = str1_int - datetoday_int;
			int diff2 = str2_int - datetoday_int;
			if(diff1 > 0)
			{
				Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
				f2->ShowDialog();
			}
			else if(diff1 <=0 && diff2 >=0)
			{
					/*Add code to go to in stay facilities*/
					if(diff2==0)
					{
						Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
						form3->ShowDialog();
					}
					Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
					f1->ShowDialog();
			}
			else
			{
				/* Add code to check if feedback already submitted 
					Also see that feedback is asked for on the last day of stay
					Also allow to remove from history */ 
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					DB_Connection->Open();

					String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
					OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
					OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
					/*while(user_booking->Read()==true)
					{
					List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
					}*/

					if(user_booking->Read()==true)
					{
						// add check that show only booking requests that are more than the current date
						if(user_booking->GetInt32(10)==0)
						{
							Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
							form3->ShowDialog();
						}
						// add code to close this form

						Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
						f2->ShowDialog();
					}
					DB_Connection->Close();
			}
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

			String ^temp=v1[pos];
			String ^str1 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			temp=v2[pos];
			String ^str2 = Convert::ToString(temp[6]) + Convert::ToString(temp[7]) + Convert::ToString(temp[8]) + Convert::ToString(temp[9]) + Convert::ToString(temp[3]) + Convert::ToString(temp[4]) + Convert::ToString(temp[0]) + Convert::ToString(temp[1]); //dd-mm-yyyy converted to yyyyMMdd

			int str1_int = System::Convert::ToInt32(str1);
			int str2_int = System::Convert::ToInt32(str2);
			int datetoday_int = System::Convert::ToInt32(today_date);

			/*DateTime dt1=Convert::ToDateTime(str1);
			DateTime dt2=Convert::ToDateTime(str2);
			TimeSpan span1=dt1-System::DateTime().Now.Date;
			TimeSpan span2=dt2-System::DateTime().Now.Date;*/

			int diff1 = str1_int - datetoday_int;
			int diff2 = str2_int - datetoday_int;
			if(diff1 > 0)
			{
				Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,0);
				f2->ShowDialog();
			}
			else if(diff1 <=0 && diff2 >=0)
			{
					/*Add code to go to in stay facilities*/
					if(diff2==0)
					{
						Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
						form3->ShowDialog();
					}
					Form_Show_Guest_House_Facilities ^f1 = gcnew Form_Show_Guest_House_Facilities;
					f1->ShowDialog();
			}
			else
			{
				/* Add code to check if feedback already submitted 
					Also see that feedback is asked for on the last day of stay
					Also allow to remove from history */ 
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					DB_Connection->Open();

					String ^ getPastBookings = "Select * From Booking_Request where ID like " + Convert::ToInt32(str_id);
					OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getPastBookings, DB_Connection);
					OleDbDataReader ^ user_booking = cmd->ExecuteReader();
				 
					/*while(user_booking->Read()==true)
					{
					List_Search->Items->Add("Booking ID: " + user_booking->GetValue(0) + "/ " + "Booking Date: " + user_booking->GetString(4) + " in the name of " + user_booking->GetString(3));
					}*/

					if(user_booking->Read()==true)
					{
						// add check that show only booking requests that are more than the current date
						if(user_booking->GetInt32(10)==0)
						{
							Form_Feedback ^form3 = gcnew Form_Feedback(str_id);
							form3->ShowDialog();
						}
						// add code to close this form

						Form_Edit_Booking ^ f2 = gcnew Form_Edit_Booking(str_id,1);
						f2->ShowDialog();
					}
					DB_Connection->Close();
			}
		}
};
}




