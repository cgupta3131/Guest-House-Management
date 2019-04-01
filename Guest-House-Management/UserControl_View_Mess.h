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
	/// Summary for UserControl_View_Mess
	/// </summary>
	public ref class UserControl_View_Mess : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_View_Mess(void)
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
		~UserControl_View_Mess()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  Register_First_Name;
	internal: System::Windows::Forms::TextBox^  textBox1;
	internal: System::Windows::Forms::TextBox^  textBox2;

	internal: 
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Button^  Download;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: 
	private: 


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
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Register_First_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Download = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(164, 18);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(208, 18);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Current Mess Rates(Rs.)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 65);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 18);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Breakfast";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 98);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Lunch";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 131);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 18);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Dinner";
			// 
			// Register_First_Name
			// 
			this->Register_First_Name->Cursor = System::Windows::Forms::Cursors::No;
			this->Register_First_Name->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_First_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Register_First_Name->Location = System::Drawing::Point(130, 65);
			this->Register_First_Name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Register_First_Name->Name = L"Register_First_Name";
			this->Register_First_Name->ReadOnly = true;
			this->Register_First_Name->Size = System::Drawing::Size(207, 27);
			this->Register_First_Name->TabIndex = 51;
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(130, 98);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(207, 27);
			this->textBox1->TabIndex = 52;
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Location = System::Drawing::Point(130, 131);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(207, 27);
			this->textBox2->TabIndex = 53;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 212);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 18);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Click here to download mess menu";
			// 
			// Download
			// 
			this->Download->BackColor = System::Drawing::Color::OrangeRed;
			this->Download->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Download->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Download->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Download->Location = System::Drawing::Point(344, 206);
			this->Download->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Download->Name = L"Download";
			this->Download->Size = System::Drawing::Size(100, 32);
			this->Download->TabIndex = 75;
			this->Download->Text = L"Download";
			this->Download->UseVisualStyleBackColor = false;
			this->Download->Click += gcnew System::EventHandler(this, &UserControl_View_Mess::Download_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 268);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(415, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 76;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &UserControl_View_Mess::pictureBox1_Click);
			// 
			// UserControl_View_Mess
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->AutoScroll = true;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Download);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Register_First_Name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"UserControl_View_Mess";
			this->Size = System::Drawing::Size(524, 396);
			this->Load += gcnew System::EventHandler(this, &UserControl_View_Mess::UserControl_View_Mess_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_View_Mess_Load(System::Object^  sender, System::EventArgs^  e) {

				 pictureBox1->Image = Image::FromFile(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\mess.jpeg");

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getMessRates = "Select * from Mess_Rates";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(getMessRates, DB_Connection);
				 OleDbDataReader ^ mess_rates = cmd->ExecuteReader();
				 int count=0;
				 while(mess_rates->Read()==true)
				 {
					 Register_First_Name->Text = Convert::ToString(mess_rates[1]);
					 textBox1->Text = Convert::ToString(mess_rates[2]);
					 textBox2->Text = Convert::ToString(mess_rates[3]);
					 count++;
				 }
				 if(count==0)
				 {
					 this->Controls->Clear();
					 MessageBox::Show("No mess is functional right now!!","Message");
					 return ;
				 }
			 }
	private: System::Void Download_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Try to show default download name
				 SaveFileDialog ^ dialog=gcnew SaveFileDialog;
				 dialog->Title="Mess menu";
				 dialog->FileName="mess";
				 dialog->Filter = "Image Files(*.jpeg)|*.jpeg";
				 if(dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->pictureBox1->Image->Save(dialog->FileName,System::Drawing::Imaging::ImageFormat::Jpeg);
				 }
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
