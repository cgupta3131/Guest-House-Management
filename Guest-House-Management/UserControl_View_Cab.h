#pragma once

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
	/// Summary for UserControl_View_Cab
	/// </summary>
	public ref class UserControl_View_Cab : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_View_Cab(void)
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
		~UserControl_View_Cab()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  label1;
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Lavender;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(21, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Text";
			// 
			// UserControl_View_Cab
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_View_Cab";
			this->Size = System::Drawing::Size(524, 396);
			this->Load += gcnew System::EventHandler(this, &UserControl_View_Cab::UserControl_View_Cab_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_View_Cab_Load(System::Object^  sender, System::EventArgs^  e) {
				try
				{
					OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getCabData = "Select * from Cab_Details";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getCabData, DB_Connection);
				 OleDbDataReader ^ cab_data = cmd->ExecuteReader();
				 int count=0;

					 while(cab_data->Read()==true)
					 {
						 count+=1;
						 String ^ cab_string = "";
						 /*cab_string::Concat("Driver Name: "+cab_data[1]+Envirnoment::NewLine);
						 cab_string::Concat("Vehicle Type: "+cab_data[2]+Envirnoment::NewLine);
						 cab_string::Concat("Description: "+cab_data[3]+Envirnoment::NewLine);
						 cab_string::Concat("Vehicle Number: "+cab_data[4]+Envirnoment::NewLine);
						 cab_string::Concat("Driver Contact: "+cab_data[5]+Envirnoment::NewLine);*/
						 cab_string = cab_string + "Driver Name: "+cab_data[1]+"\r\n";
						 cab_string = cab_string + "Vehicle Type: "+cab_data[2]+"\r\n";
						 cab_string = cab_string + "Description: "+cab_data[3]+"\r\n";
						 cab_string = cab_string + "Vehicle Number: "+cab_data[4]+"\r\n";
						 cab_string = cab_string + "Driver Contact: "+cab_data[5]+"\r\n";

						 if(count==1)
						 {
							 label1->Text = cab_string;
						 }
						 else if(count>1)
						 {
							 Label ^ lb1 = gcnew Label;
							 lb1->Name = "label"+Convert::ToString(count);
							 lb1->Text = cab_string;
							 lb1->AutoSize=true;
							 lb1->BackColor = System::Drawing::Color::Lavender;
							 lb1->ForeColor = System::Drawing::Color::Black;
							 lb1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
							 lb1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
								 static_cast<System::Byte>(0)));
							 this->Controls->Add(lb1);
							 lb1->Location = System::Drawing::Point(this->label1->Location.X, this->label1->Location.Y+120*(count-1));
						 }
					 }

					 if(count==0)
					 {
						 label1->Visible = false;
						 MessageBox::Show("No cab services has been added till now!");
						 return ;
					 }
				}
				catch (Exception ^ex)
				{
					MessageBox::Show(ex->Message,"Warning!");
				}
				 
			 }
	};
}
