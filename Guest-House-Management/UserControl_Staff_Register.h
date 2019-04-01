#pragma once
# include <cstdlib>
# include <ctype.h>
# include <iomanip>
# include <regex>
# include <msclr\marshal_cppstd.h>

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
	/// Summary for UserControl_Staff_Register
	/// </summary>
	public ref class UserControl_Staff_Register : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;

	public: 
		Panel ^pn5;

		UserControl_Staff_Register(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_Staff_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  Text_Name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Text_Add;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Text_Contact;


	private: System::Windows::Forms::Label^  Designation;
	private: System::Windows::Forms::ComboBox^  Text_Designation;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  Date_Join;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  Text_Gender;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  Date_Birth;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Text_Id;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  Text_Email;
	internal: System::Windows::Forms::Button^  Button_Register;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  Text_DN;
	private: System::Windows::Forms::Label^  label10;
	internal: 
	private: 





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
			this->Text_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Text_Add = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Text_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Designation = (gcnew System::Windows::Forms::Label());
			this->Text_Designation = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Date_Join = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Text_Gender = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Date_Birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Text_Id = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Text_Email = (gcnew System::Windows::Forms::TextBox());
			this->Button_Register = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Text_DN = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 53);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Employee Name*";
			this->label1->Click += gcnew System::EventHandler(this, &UserControl_Staff_Register::label1_Click);
			// 
			// Text_Name
			// 
			this->Text_Name->Location = System::Drawing::Point(374, 46);
			this->Text_Name->Margin = System::Windows::Forms::Padding(2);
			this->Text_Name->Name = L"Text_Name";
			this->Text_Name->Size = System::Drawing::Size(267, 20);
			this->Text_Name->TabIndex = 1;
			this->Text_Name->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Name_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 305);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Address*";
			// 
			// Text_Add
			// 
			this->Text_Add->Location = System::Drawing::Point(375, 297);
			this->Text_Add->Margin = System::Windows::Forms::Padding(2);
			this->Text_Add->Name = L"Text_Add";
			this->Text_Add->Size = System::Drawing::Size(267, 20);
			this->Text_Add->TabIndex = 3;
			this->Text_Add->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Add_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(195, 347);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Contact*";
			// 
			// Text_Contact
			// 
			this->Text_Contact->Location = System::Drawing::Point(376, 339);
			this->Text_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Text_Contact->Name = L"Text_Contact";
			this->Text_Contact->Size = System::Drawing::Size(267, 20);
			this->Text_Contact->TabIndex = 5;
			this->Text_Contact->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Contact_TextChanged);
			// 
			// Designation
			// 
			this->Designation->AutoSize = true;
			this->Designation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Designation->Location = System::Drawing::Point(195, 95);
			this->Designation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Designation->Name = L"Designation";
			this->Designation->Size = System::Drawing::Size(104, 18);
			this->Designation->TabIndex = 8;
			this->Designation->Text = L"Designation*";
			this->Designation->Click += gcnew System::EventHandler(this, &UserControl_Staff_Register::Designation_Click);
			// 
			// Text_Designation
			// 
			this->Text_Designation->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Text_Designation->FormattingEnabled = true;
			this->Text_Designation->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Receptionist", L"Room Service", L"House Keeping", 
				L"Watchman"});
			this->Text_Designation->Location = System::Drawing::Point(375, 90);
			this->Text_Designation->Margin = System::Windows::Forms::Padding(2);
			this->Text_Designation->Name = L"Text_Designation";
			this->Text_Designation->Size = System::Drawing::Size(267, 21);
			this->Text_Designation->TabIndex = 10;
			this->Text_Designation->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Designation_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(197, 137);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date of Joining*";
			// 
			// Date_Join
			// 
			this->Date_Join->CustomFormat = L"dd-MM-yyyy";
			this->Date_Join->Enabled = false;
			this->Date_Join->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Date_Join->Location = System::Drawing::Point(377, 135);
			this->Date_Join->Margin = System::Windows::Forms::Padding(2);
			this->Date_Join->Name = L"Date_Join";
			this->Date_Join->Size = System::Drawing::Size(267, 20);
			this->Date_Join->TabIndex = 12;
			this->Date_Join->Value = System::DateTime(2019, 3, 17, 0, 0, 0, 0);
			this->Date_Join->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Date_Join_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(195, 179);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 18);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Gender*";
			// 
			// Text_Gender
			// 
			this->Text_Gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Text_Gender->FormattingEnabled = true;
			this->Text_Gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Other"});
			this->Text_Gender->Location = System::Drawing::Point(375, 174);
			this->Text_Gender->Margin = System::Windows::Forms::Padding(2);
			this->Text_Gender->Name = L"Text_Gender";
			this->Text_Gender->Size = System::Drawing::Size(267, 21);
			this->Text_Gender->TabIndex = 14;
			this->Text_Gender->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Gender_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(195, 221);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 18);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Date of Birth*";
			// 
			// Date_Birth
			// 
			this->Date_Birth->CustomFormat = L"dd-MM-yyyy";
			this->Date_Birth->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Date_Birth->Location = System::Drawing::Point(376, 217);
			this->Date_Birth->Margin = System::Windows::Forms::Padding(2);
			this->Date_Birth->Name = L"Date_Birth";
			this->Date_Birth->Size = System::Drawing::Size(267, 20);
			this->Date_Birth->TabIndex = 0;
			this->Date_Birth->ValueChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Date_Birth_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(195, 263);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 18);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Id Proof*";
			// 
			// Text_Id
			// 
			this->Text_Id->Location = System::Drawing::Point(376, 257);
			this->Text_Id->Margin = System::Windows::Forms::Padding(2);
			this->Text_Id->Name = L"Text_Id";
			this->Text_Id->Size = System::Drawing::Size(267, 20);
			this->Text_Id->TabIndex = 17;
			this->Text_Id->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Id_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(195, 389);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Email*";
			// 
			// Text_Email
			// 
			this->Text_Email->Location = System::Drawing::Point(374, 389);
			this->Text_Email->Margin = System::Windows::Forms::Padding(2);
			this->Text_Email->Name = L"Text_Email";
			this->Text_Email->Size = System::Drawing::Size(267, 20);
			this->Text_Email->TabIndex = 19;
			this->Text_Email->TextChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_Email_TextChanged);
			// 
			// Button_Register
			// 
			this->Button_Register->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Button_Register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_Register->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Button_Register->Location = System::Drawing::Point(283, 481);
			this->Button_Register->Margin = System::Windows::Forms::Padding(2);
			this->Button_Register->Name = L"Button_Register";
			this->Button_Register->Size = System::Drawing::Size(153, 67);
			this->Button_Register->TabIndex = 20;
			this->Button_Register->Text = L"Register!";
			this->Button_Register->UseVisualStyleBackColor = false;
			this->Button_Register->Click += gcnew System::EventHandler(this, &UserControl_Staff_Register::Button_Register_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(579, 481);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"* marked fields are required";
			// 
			// Text_DN
			// 
			this->Text_DN->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Text_DN->FormattingEnabled = true;
			this->Text_DN->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Day", L"Night"});
			this->Text_DN->Location = System::Drawing::Point(375, 431);
			this->Text_DN->Margin = System::Windows::Forms::Padding(2);
			this->Text_DN->Name = L"Text_DN";
			this->Text_DN->Size = System::Drawing::Size(267, 21);
			this->Text_DN->TabIndex = 25;
			this->Text_DN->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Register::Text_DN_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(198, 431);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Day/Night";
			// 
			// UserControl_Staff_Register
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->Text_DN);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Button_Register);
			this->Controls->Add(this->Text_Email);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Text_Id);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Date_Birth);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Text_Gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Date_Join);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Text_Designation);
			this->Controls->Add(this->Designation);
			this->Controls->Add(this->Text_Contact);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Text_Add);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Text_Name);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Staff_Register";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Register::UserControl_Staff_Register_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Register::myMouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Designation_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void Button_Register_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Checking if all the required fields are filled or not 
				 if(Text_Name->Text==""||Text_Designation->Text==""||Date_Join->Text==""||Text_Gender->Text==""||Text_Gender->Text==""||Date_Birth->Text==""||Text_Id->Text==""||Text_Add->Text==""||Text_Contact->Text=="")
				 {
					 MessageBox::Show("Can't leave any required field empty","Required");
					 return;
				 }

				 if(Text_Name->Text->Length>50) 
				 {
					 MessageBox::Show("Employee Name can't be more than 50 characters long");
					 return;
				 }

				 string sname = msclr::interop::marshal_as<std::string>(Text_Name->Text);
				 remove_if(sname.begin(), sname.end(), isspace);
				 string semail = msclr::interop::marshal_as<std::string>(Text_Email->Text);
				 remove_if(semail.begin(), semail.end(), isspace);

				 regex rx("^[A-Z|a-z|.|']+$");
				 if(!regex_match(sname.cbegin(), sname.cend(), rx)){
					 MessageBox::Show("Employee Name can't contain any special characters or digits");
					 goto ErrExit;
				 }

				 String ^ str = Text_Name->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(str[i]>='a'||str[i]<='z'||str[i]>='A'||str[i]<='Z'||str[i]==' '||str[i]=='.') 
					 {
						 continue;
					 }
					 else
					 {
						 MessageBox::Show("Employee Name can't contain any special characters or digits");
						 return;
					 }

				 }
				 if(Text_Add->Text->Length>100) 
				 {
					 MessageBox::Show("Employee Address can't be more than 100 characters long");
					 return;
				 }
				 if(Text_Email->Text->Length>50) 
				 {
					 MessageBox::Show("Email Address can't be more than 50 characters long");
					 return;
				 }

				 rx = "^[^@|,|;]+@[^@|,|;]+$";
				 if(!regex_match(semail.cbegin(), semail.cend(), rx)){
					 MessageBox::Show("Enter email address(in form ID@domain). Must not contain ',;\" or any such characters");
					 goto ErrExit;
				 }

				 //Checking if the contact number contains only digits
				 str = Text_Contact->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(!isdigit(str[i])) 
					 {
						 MessageBox::Show("Contact Number can contain only digits");
						 return; 
					 }

				 }

				 //Checking if the contact number contains exactly 10 digits
				 if(Text_Contact->Text->Length!=10) 
				 {
					 MessageBox::Show("Contact Number should be exactly 10 digits long");
					 return;
				 }

				 try{
					 //Setting up the database connection
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

					 String ^ employee_name = Text_Name->Text;
					 String ^ designation = Text_Designation->Text;
					 String ^ doj = Date_Join->Text;
					 String ^ gender = Text_Gender->Text;
					 String ^ dob = Date_Birth->Text;
					 String ^ id = Text_Id->Text;
					 String ^ address = Text_Add->Text;
					 String ^ contact = Text_Contact->Text;
					 String ^ email = Text_Email->Text;
					 String ^ dn = Text_DN->Text;

					 //Just for debugging 
					 Debug::WriteLine(employee_name);
					 Debug::WriteLine("\n\n\n");

					 //Inserting into Staff_register table
					 String ^ insertString = "insert into Staff_Register([Employee_Name],[Designation],[Date_of_joining],[Gender],[Date_of_birth],[Identity_proof],[Address],[Contact_Number],[Email],[Day_Night0]) VALUES('" +employee_name+ "', '" +designation+ "', '" +doj+ "', '" +gender+ "', '" +dob+ "', '" +id+ "', '" +address+ "', '" +contact+ "', '" +email+ "', '" +dn+ "' );";

					 //What else will debug be for :)
					 Debug::WriteLine(insertString);
					 Debug::WriteLine("\n\n\n");

					 //OleDbDataReader ^ dr;
					 DB_Connection->Open();

					 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);

					 cmd->Parameters->Add(gcnew OleDbParameter("@Employee_Name",Convert::ToString(employee_name)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Designation",Convert::ToString(designation)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Date_of_joining",Convert::ToString(doj)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Gender",Convert::ToString(gender)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Date_of_birth",Convert::ToString(dob)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Identity_proof",Convert::ToString(id)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Address",Convert::ToString(address)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Contact_Number",Convert::ToString(contact)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Email",Convert::ToString(email)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Day_Night0",Convert::ToString(dn)));

					 cmd->ExecuteNonQuery();
					 // add d/n option while registering
					 //Retrieving generated Employee ID and displaying in message box
					 OleDbCommand ^ cmdNewID = gcnew OleDbCommand("SELECT @@IDENTITY",DB_Connection);
					 MessageBox::Show("The Employee Id is " + Convert::ToString(cmdNewID->ExecuteScalar()),"Registered Successfully");

					 DB_Connection->Close();

				 }

				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
ErrExit:
				 ;
			 }
	private: System::Void Text_Name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void UserControl_Staff_Register_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Setting Date of Joining to Current Date(it is unchangable) 
				 this->Text_DN->SelectedItem="Day";
				 this->Date_Join->Value=System::DateTime().Now;
				 this->Date_Birth->MaxDate=System::DateTime().Now.AddYears(-18);
				 this->Date_Birth->MinDate=System::DateTime().Now.AddYears(-125);
			 }
	private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void Text_DN_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Email_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Contact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Add_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Id_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Date_Birth_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Designation_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Date_Join_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Text_Gender_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}