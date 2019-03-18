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
	public ref class UserControl_Room_Types : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Room_Types(void)
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
		~UserControl_Room_Types()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Txt_Room_Type;
	protected: 
	private: System::Windows::Forms::Button^  Btn_Add;

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
			this->SuspendLayout();
			// 
			// Txt_Room_Type
			// 
			this->Txt_Room_Type->Location = System::Drawing::Point(109, 106);
			this->Txt_Room_Type->Name = L"Txt_Room_Type";
			this->Txt_Room_Type->Size = System::Drawing::Size(113, 20);
			this->Txt_Room_Type->TabIndex = 0;
			// 
			// Btn_Add
			// 
			this->Btn_Add->Location = System::Drawing::Point(304, 102);
			this->Btn_Add->Name = L"Btn_Add";
			this->Btn_Add->Size = System::Drawing::Size(75, 23);
			this->Btn_Add->TabIndex = 1;
			this->Btn_Add->Text = L"Add";
			this->Btn_Add->UseVisualStyleBackColor = true;
			this->Btn_Add->Click += gcnew System::EventHandler(this, &UserControl_Room_Types::Btn_Add_Click);
			// 
			// UserControl_Room_Types
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Btn_Add);
			this->Controls->Add(this->Txt_Room_Type);
			this->Name = L"UserControl_Room_Types";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Room_Types::UserControl_Room_Types_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	cliext::vector<String^> vec;
	String ^ room;
	
	void button_click(System::Object^  sender, System::EventArgs^  e)
	{
		for(int i=0;i<vec.size();i++)
		{

			RichTextBox ^tb = (RichTextBox^)this->Controls["TextBox" + (i)];
			String ^str = tb->Text;

			//MessageBox::Show(str);
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

		OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
		DB_Connection->Open();
		String ^ insertString = "insert into Room_Types([Room_Type]) VALUES('" +room+ "' );";
		OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
		cmd->Parameters->Add(gcnew OleDbParameter("@Room_Type",Convert::ToString(room)));
		cmd->ExecuteNonQuery();
		DB_Connection->Close();

		this->Controls->Clear();
		this->InitializeComponent();
	}


	public: System::Void UserControl_Room_Types_Load(System::Object^  sender, System::EventArgs^  e) {
				
				
			 }
	
	private: System::Void Btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {

			try{

			Btn_Add->Visible = false;
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
				MessageBox::Show(room);
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
					lb->Location = System::Drawing::Point(20,140*i);

					this->Controls->Add(lb);

					RichTextBox ^ tb = gcnew RichTextBox();

					tb->Name = "TextBox" + i;
					//tb->Enabled = true;
					//tb->ReadOnly = false;
					//tb->Text = Convert::ToString(i);
					tb->Width = 270;
					tb->Height = 50;
					tb->Location = System::Drawing::Point(60,140*i);
					this->Controls->Add(tb);
				}

				Button ^ btn = gcnew Button();
				Button ^btn2 = gcnew Button();
				btn->Text = "Submit";
				btn->Name = "Btn_Submit";

				btn->ForeColor = System::Drawing::SystemColors::WindowText;
				btn->Location = System::Drawing::Point(40,30*n+30);
				btn->Click += gcnew System::EventHandler(this,&UserControl_Room_Types::button_click);
				//btn2->Click += gcnew System::EventHandler(this, &UserControl_Room_Types::UserControl_Room_Types_Load);
				this->Controls->Add(btn);

				DB_Connection->Close();

				}
			}
			
			

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
			 }
	};

	
}
