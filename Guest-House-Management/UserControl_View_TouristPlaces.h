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
	/// Summary for UserControl_View_TouristPlaces
	/// </summary>
	public ref class UserControl_View_TouristPlaces : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_View_TouristPlaces(void)
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
		~UserControl_View_TouristPlaces()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: 
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(19, 21);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Text";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(327, 21);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// UserControl_View_TouristPlaces
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_View_TouristPlaces";
			this->Size = System::Drawing::Size(524, 396);
			this->Load += gcnew System::EventHandler(this, &UserControl_View_TouristPlaces::UserControl_View_TouristPlaces_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_View_TouristPlaces_Load(System::Object^  sender, System::EventArgs^  e) {
				try
				{
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getTouData = "Select * from Places_To_Visit";
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getTouData, DB_Connection);
				 OleDbDataReader ^ tou_data = cmd->ExecuteReader();
				 int count=0;
					 while(tou_data->Read()==true)
					 {
						 count+=1;
						 String ^ tou_string = "";
						 /*tou_string::Concat("Driver Name: "+tou_data[1]+Envirnoment::NewLine);
						 tou_string::Concat("Vehicle Type: "+tou_data[2]+Envirnoment::NewLine);
						 tou_string::Concat("Description: "+tou_data[3]+Envirnoment::NewLine);
						 tou_string::Concat("Vehicle Number: "+tou_data[4]+Envirnoment::NewLine);
						 tou_string::Concat("Driver Contact: "+tou_data[5]+Envirnoment::NewLine);*/
						 String ^ save_name = Convert::ToString(tou_data[0]);
						 tou_string = tou_string + "Place: "+tou_data[1]+"\r\n";
						 tou_string = tou_string + "Details: "+tou_data[2]+"\r\n";
						 tou_string = tou_string + "Distance: "+tou_data[3]+"\r\n";
						 tou_string = tou_string + "Transport: "+tou_data[4]+"\r\n";
						 

						 if(count==1)
						 {
							 label1->Text = tou_string;
							try
							{
								if(System::IO::File::Exists(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\"+save_name+".jpeg"))
								{
									pictureBox1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\"+save_name+".jpeg");							
								}
								else
								{
									pictureBox1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\not_found.png");
								}

							}
							catch (Exception ^ ex)
							{
								MessageBox::Show("Image does not exist");
							}
						 }
						 else if(count>1)
						 {
							 PictureBox ^ pb1 = gcnew PictureBox;
							 Label ^ lb1 = gcnew Label;
							 lb1->Name = "label"+Convert::ToString(count);
							 lb1->Text = tou_string;
							 lb1->AutoSize=true;
							 lb1->ForeColor = System::Drawing::Color::Black;
							 lb1->BackColor = System::Drawing::Color::Lavender;
							 lb1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
							 lb1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
								 static_cast<System::Byte>(0)));
							 this->Controls->Add(lb1);
							 lb1->Location = System::Drawing::Point(this->label1->Location.X, this->label1->Location.Y+150*(count-1));

							 pb1->Location = System::Drawing::Point(this->pictureBox1->Location.X,this->pictureBox1->Location.Y+150*(count-1));
							 try
							 {
								 if(System::IO::File::Exists(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\"+save_name+".jpeg"))
								 {
									 pb1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\"+save_name+".jpeg");							
								 }
								 else
								 {
									 pb1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\not_found.png");
								 }

							 }
							 catch (Exception ^ ex)
							 {
								 MessageBox::Show("Image does not exist");
							 }
							 //pb1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\"+save_name+".jpeg");
							 pb1->Name = "pictureBox"+Convert::ToString(count);
							 pb1->TabIndex = 46;
							 pb1->TabStop = false;
							 pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
							 pb1->Size = System::Drawing::Size(150, 102);
							 this->Controls->Add(pb1);
						 }
					 }
					 if(count==0)
					 {
						 label1->Visible = false;
						 MessageBox::Show("No tourist services has been added till now!","Sorry!");
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
