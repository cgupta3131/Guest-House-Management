#pragma once

namespace GuestHouseManagement {

	using namespace std;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Media;
	/// <summary>
	/// Summary for Form_Feedback
	/// </summary>
	public ref class Form_Feedback : public System::Windows::Forms::Form
	{
	public:
		int count1;
		int count2;
		int count3;
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	internal: 
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	internal: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	internal: 
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	internal: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	internal: 
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	internal: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Text_Desc;
	internal: System::Windows::Forms::Button^  Btn_Create;
	private: 
	internal: 
	private: 
	private: 
	private: 
	public: 
		int ser_num;
		Form_Feedback(String ^booking_id)
		{
			InitializeComponent();
			ser_num=Convert::ToInt32(booking_id);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Feedback()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Lbl_Register_Name = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_Desc = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(316, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(44, 38);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox1_Click_1);
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(34, 51);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(123, 23);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Mess Rating";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(382, 51);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 38);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(444, 51);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(44, 38);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 46;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(503, 51);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 38);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 47;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox4_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Location = System::Drawing::Point(560, 51);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(44, 38);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 48;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox5_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 23);
			this->label1->TabIndex = 49;
			this->label1->Text = L"Cleanliness Rating";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox6->Location = System::Drawing::Point(316, 135);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(44, 38);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 50;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Location = System::Drawing::Point(382, 135);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(44, 38);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 51;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox7_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox8->Location = System::Drawing::Point(444, 135);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(44, 38);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 52;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox8_Click_1);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox9->Location = System::Drawing::Point(503, 135);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(44, 38);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 53;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox9_Click_1);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox10->Location = System::Drawing::Point(560, 135);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(44, 38);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 54;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox10_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 23);
			this->label2->TabIndex = 55;
			this->label2->Text = L"Service Rating";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox11->Location = System::Drawing::Point(316, 228);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(44, 38);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 56;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox11_Click_1);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox12->Location = System::Drawing::Point(382, 228);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(44, 38);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 57;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox12_Click_1);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox13->Location = System::Drawing::Point(444, 228);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(44, 38);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 58;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox13_Click_1);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox14->Location = System::Drawing::Point(503, 228);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(44, 38);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 59;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox14_Click_1);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox15->Location = System::Drawing::Point(560, 228);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(44, 38);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 60;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Form_Feedback::pictureBox15_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 23);
			this->label3->TabIndex = 61;
			this->label3->Text = L"Comments";
			// 
			// Text_Desc
			// 
			this->Text_Desc->Location = System::Drawing::Point(316, 308);
			this->Text_Desc->Multiline = true;
			this->Text_Desc->Name = L"Text_Desc";
			this->Text_Desc->Size = System::Drawing::Size(344, 88);
			this->Text_Desc->TabIndex = 62;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(316, 417);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(189, 59);
			this->Btn_Create->TabIndex = 68;
			this->Btn_Create->Text = L"Save Changes";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &Form_Feedback::Btn_Create_Click);
			// 
			// Form_Feedback
			// 
			this->AcceptButton = this->Btn_Create;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(976, 487);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Text_Desc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form_Feedback";
			this->Text = L"Submit Feedback";
			this->Load += gcnew System::EventHandler(this, &Form_Feedback::Form_Feedback_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form_Feedback_Load(System::Object^  sender, System::EventArgs^  e) {
			 count1=0;
			 this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 count2=0;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 count3=0;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
		
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count1=1;
			 this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			count1=2;
			this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 count1=3;
			 this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count1=4;
			 this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count1=5;
			 this->pictureBox1->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox2->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox3->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox4->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox5->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 count2=1;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count2=2;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox8_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count2=3;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count2=4;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox10_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count2=5;
			 this->pictureBox6->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox7->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox8->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox9->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox10->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
		 }
private: System::Void pictureBox11_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count3=1;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox12_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count3=2;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox13_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count3=3;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox14_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count3=4;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\blank.png";
		 }
private: System::Void pictureBox15_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 count3=5;
			 this->pictureBox11->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox12->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox13->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox14->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
			 this->pictureBox15->ImageLocation = System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\yellow.png";
		 }
private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
			 // add the feature that customer who had submitted the feedback can't submit again
			 
			 if(count1==0||count2==0||count3==0)
			 {
				 MessageBox::Show("Please enter all entries of feedback","Warning!");
				 return;
			 }
			 String ^ comments = "";
			 comments = Text_Desc->Text;
			 try
			 {
				 /*
				 This is for one feedback question, if more are to be added, add new columns in the database
				 Also this user_control should be called from my bookings->current booking, and change the ser_num accordingly
				 by inheriting value of booking serial number
				 */
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 //int ser_num=1;
				 String ^ getUserData = "Select * From Booking_Request where [ID] like " + ser_num;
				 OleDb::OleDbCommand ^ cmdUpdate = gcnew OleDbCommand(getUserData, DB_Connection);
				 cmdUpdate->CommandText = "UPDATE [Booking_Request] SET [Mess_Feedback] = " + count1 + " , [Cleanliness_Feedback] = " + count2 + " , [Service_Feedback] = " + count3 + " , [Comments_Feedback] = '" + comments + "' WHERE [ID] = " + ser_num + ";";

				 cmdUpdate->ExecuteNonQuery();
				 DB_Connection->Close();
				 MessageBox::Show("Feedback Submitted","Thank You");
			 }
			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message,"Warning!");
			 }
		 }
};
}
