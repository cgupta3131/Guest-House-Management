#pragma once

# include <cstdlib>
# include <ctype.h>
# include <iomanip>

#using <System.dll>
#using <System.data.dll>

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
	/// Summary for UserControl_Add_Places
	/// </summary>
	public ref class UserControl_Add_Places : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label5;


	public: 
		Panel ^pn5;

		UserControl_Add_Places(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Add_Places()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Text_Place;
	private: System::Windows::Forms::TextBox^  Text_Desc;
	private: System::Windows::Forms::TextBox^  Text_Dist;
	private: System::Windows::Forms::TextBox^  Text_Trans;
	internal: System::Windows::Forms::Button^  Btn_Create;
	internal: System::Windows::Forms::Button^  Btn_Image;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Text_Place = (gcnew System::Windows::Forms::TextBox());
			this->Text_Desc = (gcnew System::Windows::Forms::TextBox());
			this->Text_Dist = (gcnew System::Windows::Forms::TextBox());
			this->Text_Trans = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->Btn_Image = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(81, 98);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Place Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label2->Location = System::Drawing::Point(81, 171);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Description";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(81, 242);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(239, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Distance from Guest House";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(81, 295);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 48);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Modes of transportation \r\navailable\r\n";
			// 
			// Text_Place
			// 
			this->Text_Place->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Text_Place->Location = System::Drawing::Point(419, 93);
			this->Text_Place->Margin = System::Windows::Forms::Padding(2);
			this->Text_Place->Name = L"Text_Place";
			this->Text_Place->Size = System::Drawing::Size(259, 29);
			this->Text_Place->TabIndex = 4;
			// 
			// Text_Desc
			// 
			this->Text_Desc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Text_Desc->Location = System::Drawing::Point(418, 155);
			this->Text_Desc->Margin = System::Windows::Forms::Padding(2);
			this->Text_Desc->Multiline = true;
			this->Text_Desc->Name = L"Text_Desc";
			this->Text_Desc->Size = System::Drawing::Size(259, 53);
			this->Text_Desc->TabIndex = 5;
			// 
			// Text_Dist
			// 
			this->Text_Dist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Text_Dist->Location = System::Drawing::Point(418, 237);
			this->Text_Dist->Margin = System::Windows::Forms::Padding(2);
			this->Text_Dist->Name = L"Text_Dist";
			this->Text_Dist->Size = System::Drawing::Size(259, 29);
			this->Text_Dist->TabIndex = 6;
			// 
			// Text_Trans
			// 
			this->Text_Trans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Text_Trans->Location = System::Drawing::Point(418, 309);
			this->Text_Trans->Margin = System::Windows::Forms::Padding(2);
			this->Text_Trans->Multiline = true;
			this->Text_Trans->Name = L"Text_Trans";
			this->Text_Trans->Size = System::Drawing::Size(259, 34);
			this->Text_Trans->TabIndex = 7;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(403, 423);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(142, 48);
			this->Btn_Create->TabIndex = 69;
			this->Btn_Create->Text = L"Add Place";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &UserControl_Add_Places::Btn_Create_Click);
			// 
			// Btn_Image
			// 
			this->Btn_Image->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Image->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Btn_Image->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Image->Location = System::Drawing::Point(149, 423);
			this->Btn_Image->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Image->Name = L"Btn_Image";
			this->Btn_Image->Size = System::Drawing::Size(142, 48);
			this->Btn_Image->TabIndex = 70;
			this->Btn_Image->Text = L"Add Image";
			this->Btn_Image->UseVisualStyleBackColor = false;
			this->Btn_Image->Click += gcnew System::EventHandler(this, &UserControl_Add_Places::Btn_Image_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(611, 377);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 71;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(284, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(236, 29);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Add Nearby Places";
			// 
			// UserControl_Add_Places
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Btn_Image);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Text_Trans);
			this->Controls->Add(this->Text_Dist);
			this->Controls->Add(this->Text_Desc);
			this->Controls->Add(this->Text_Place);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Add_Places";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Places::UserControl_Add_Places_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Add_Places::myMouseClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ place_name = Text_Place->Text;
				 String ^ place_description = Text_Desc->Text;
				 String ^ place_dist = Text_Dist->Text;
				 String ^ trans  = Text_Trans->Text;

				 if(Text_Place->Text == ""||Text_Desc->Text == ""||Text_Dist->Text == ""||Text_Trans->Text == "")
				 {
					 MessageBox::Show("All fields must be filled out","Warning");
					 return;
				 }
				 try
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ insert_places = "insert into Places_To_Visit([Place_Name],[Place_Description],[Place_Distance],[Modes_Of_Transport]) VALUES('" +place_name+ "', '" +place_description+ "', '" +place_dist+ "', '" +trans+ "' );";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(insert_places, DB_Connection);

					 cmd->Parameters->Add(gcnew OleDbParameter("@Place_Name",Convert::ToString(place_name)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Place_Description",Convert::ToString(place_description)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Place_Distance",Convert::ToString(place_dist)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Modes_Of_Transport",Convert::ToString(trans)));

					 cmd->ExecuteNonQuery();
					 DB_Connection->Close();
					 MessageBox::Show("Place added successfully","Notification");
					 this->Controls->Clear();
					 this->InitializeComponent();
					 UserControl_Add_Places_Load(sender,e);

				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
				 }
				 if(pictureBox1->Image)
				 {
					 try
					 {
						 Image ^ img = pictureBox1->Image;
						 img->Save(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\" + place_name + ".jpeg");
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message,"Warning");
					 }
				 }
			 }
	private: System::Void UserControl_Add_Places_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Btn_Image_Click(System::Object^  sender, System::EventArgs^  e) {
				 OpenFileDialog ^ dialog=gcnew OpenFileDialog;
				 dialog->Title = "Browse Picture";
				 dialog->Filter = "Image Files(*.BMP;*.JPEG,*.JPG;*.GIF;*.PNG)|*.BMP;*.JPEG;*.JPG;*.GIF;*.PNG";
				 if(dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 pictureBox1->Image = Image::FromFile(dialog->FileName);
				 }
				 // Dispose not working, may create problem later
			 }
	private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
