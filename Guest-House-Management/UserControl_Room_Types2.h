#pragma once
#include <vector>
#include <string>
//#include <msclr\marshal_cppstd.h>
#include <cliext/vector>
//#include <msclr\marshal.h>


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
	/// Summary for UserControl_Room_Types
	/// </summary>
	public ref class UserControl_Room_Types2 : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Room_Types2(void)
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
		~UserControl_Room_Types2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Txt_Room_Type;
	protected: 
	private: System::Windows::Forms::Button^  Btn_Add;
	private: System::Windows::Forms::TextBox^  Txt_Occupancy;

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
			this->Txt_Room_Type = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Add = (gcnew System::Windows::Forms::Button());
			this->Txt_Occupancy = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Txt_Room_Type
			// 
			this->Txt_Room_Type->BackColor = System::Drawing::SystemColors::Window;
			this->Txt_Room_Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room_Type->ForeColor = System::Drawing::Color::Black;
			this->Txt_Room_Type->Location = System::Drawing::Point(109, 106);
			this->Txt_Room_Type->Name = L"Txt_Room_Type";
			this->Txt_Room_Type->Size = System::Drawing::Size(113, 20);
			this->Txt_Room_Type->TabIndex = 0;
			this->Txt_Room_Type->TextChanged += gcnew System::EventHandler(this, &UserControl_Room_Types2::Txt_Room_Type_TextChanged);
			// 
			// Btn_Add
			// 
			this->Btn_Add->Location = System::Drawing::Point(373, 104);
			this->Btn_Add->Name = L"Btn_Add";
			this->Btn_Add->Size = System::Drawing::Size(75, 23);
			this->Btn_Add->TabIndex = 1;
			this->Btn_Add->Text = L"Add";
			this->Btn_Add->UseVisualStyleBackColor = true;
			this->Btn_Add->Click += gcnew System::EventHandler(this, &UserControl_Room_Types2::Btn_Add_Click);
			// 
			// Txt_Occupancy
			// 
			this->Txt_Occupancy->Location = System::Drawing::Point(242, 107);
			this->Txt_Occupancy->Name = L"Txt_Occupancy";
			this->Txt_Occupancy->Size = System::Drawing::Size(113, 20);
			this->Txt_Occupancy->TabIndex = 2;
			// 
			// UserControl_Room_Types2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->Txt_Occupancy);
			this->Controls->Add(this->Btn_Add);
			this->Controls->Add(this->Txt_Room_Type);
			this->Name = L"UserControl_Room_Types2";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Room_Types2::UserControl_Room_Types_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		cliext::vector<String^> vec;
		String ^ room;

		void button_click(System::Object^  sender, System::EventArgs^  e)
		{
			int f = 0;
			for(int i=0;i<vec.size();i++)
			{
				TextBox ^tb = (TextBox^)this->Controls["TextBox" + (i)];
				String ^str = tb->Text;
				if(tb->Text == "")
				{
					f=1;
					MessageBox::Show("Price field can't be empty");
					break;
				}
					
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
					String ^ insertString = "insert into User_Room_Price([User_Types],[Room_Types],[Price]) VALUES('" +vec[i]+ "', '" +room+ "', '" +str+ "' );";

					OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);

					cmd->Parameters->Add(gcnew OleDbParameter("@User_Types",Convert::ToString(vec[i])));
					cmd->Parameters->Add(gcnew OleDbParameter("@Room_Types",Convert::ToString(room)));
					cmd->Parameters->Add(gcnew OleDbParameter("@Price",Convert::ToString(str)));

					cmd->ExecuteNonQuery();
					DB_Connection->Close();

				}

				String ^str2 = Txt_Occupancy->Text;
				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				DB_Connection->Open();
				String ^ insertString = "insert into Room_Types([Room_Type], [Occupancy]) VALUES('" +room+ "', '" +str2+ "' );";
				OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				cmd->Parameters->Add(gcnew OleDbParameter("@Room_Type",Convert::ToString(room)));
				cmd->ExecuteNonQuery();
				DB_Connection->Close();

				MessageBox::Show("Room has been successfully Added");
				this->Controls->Clear();
				this->InitializeComponent();
			}
		}

		void back_button_click(System::Object^  sender, System::EventArgs^  e)
		{
			this->Controls->Clear();
			this->InitializeComponent();
		}



	public: System::Void UserControl_Room_Types_Load(System::Object^  sender, System::EventArgs^  e) {

					
			}

	private: System::Void Btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {

				 try{
					 
					 if(Txt_Room_Type->Text == "")
					 {
						 MessageBox::Show("Room-Type can't be empty");
						 return;
					 }

					 if(Txt_Occupancy->Text == "")
					 {
						 MessageBox::Show("Occupancy can't be empty");
						 return;
					 }

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 room = Txt_Room_Type->Text;
					 String ^ getRoomData = "Select * from Room_Types where [Room_Type] = '" + room + "';";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
					 OleDbDataReader ^ room_data = cmd->ExecuteReader();

					 if(room_data->Read() == true)
					 {
						 MessageBox::Show("Room Type Already Exists");
						 DB_Connection->Close();
					 }
					 else
					 {
						 DB_Connection->Close();
						 Btn_Add->Visible = false;
						 Txt_Room_Type->Visible = false;
						 Txt_Occupancy->Visible = false;
						 if(String::IsNullOrWhiteSpace(room))
							 MessageBox::Show("Please Enter Some Room Type");
						 else
						 {
							 DB_Connection->Open();

							 String ^ getUserData = "Select * from User_Types";
							 cmd = gcnew OleDbCommand(getUserData, DB_Connection);

							 OleDbDataReader ^ user_data = cmd->ExecuteReader();

							 int n = 0;
							 while(user_data->Read() == true)
							 {
								 String ^ tmp = user_data->GetString(1);
								 vec.push_back(tmp);
								 n=n+1;
							 }

							 for(int i=0;i<vec.size();i++)
							 {

								 Label ^ lb = gcnew Label();
								 lb->Text = vec[i];
								 lb->Location = System::Drawing::Point(20,50*(i+1));
								 lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
									 static_cast<System::Byte>(0)));

								 this->Controls->Add(lb);

								 TextBox ^ tb = gcnew TextBox();
								 tb->Name = "TextBox" + i;
								 tb->Width = 100;
								 tb->Height = 50;
								 tb->Location = System::Drawing::Point(120,50*(i+1));
								 tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
									 static_cast<System::Byte>(0)));
								 this->Controls->Add(tb);
							 }

							 Button ^ btn = gcnew Button();
							 btn->Text = "Submit";
							 btn->Name = "Btn_Submit";

							 btn->ForeColor = System::Drawing::SystemColors::WindowText;
							 btn->Location = System::Drawing::Point(473, 104);
							 btn->Click += gcnew System::EventHandler(this,&UserControl_Room_Types2::button_click);
							 this->Controls->Add(btn);

							 Button ^ btn2 = gcnew Button();
							 btn2->Text = "Go Back";
							 btn2->Name = "Btn_Back";

							 btn2->ForeColor = System::Drawing::SystemColors::WindowText;
							 btn2->Location = System::Drawing::Point(473, 204);
							 btn2->Click += gcnew System::EventHandler(this,&UserControl_Room_Types2::back_button_click);
							 this->Controls->Add(btn2);

							 DB_Connection->Close();

						 }
					 }

				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void Txt_Room_Type_TextChanged(System::Object^  sender, System::EventArgs^  e) {


			 }
	private: System::Void Txt_Room_Type_Enter(System::Object^  sender, System::EventArgs^  e) {

				 if(Txt_Room_Type->Text == "Enter some text here")
					 Txt_Room_Type->Text = "";
			 }
	
};


}
