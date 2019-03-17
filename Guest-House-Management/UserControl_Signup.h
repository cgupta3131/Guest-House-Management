#pragma once
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
	/// Summary for UserControl_Signup
	/// </summary>
	public ref class UserControl_Signup : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Signup(void)
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
		~UserControl_Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Label^  Lbl_Register_Name;
	protected: 
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::TextBox^  Register_First_Name;
	internal: System::Windows::Forms::TextBox^  Register_Password;


	internal: System::Windows::Forms::TextBox^  Register_Email;

	internal: System::Windows::Forms::TextBox^  Register_Last_Name;
	internal: System::Windows::Forms::TextBox^  Register_Confirm;
	internal: System::Windows::Forms::TextBox^  Register_Contact;
	internal: System::Windows::Forms::ComboBox^  Register_Category;









	internal: System::Windows::Forms::Button^  Btn_Create;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Register_First_Name = (gcnew System::Windows::Forms::TextBox());
			this->Register_Password = (gcnew System::Windows::Forms::TextBox());
			this->Register_Email = (gcnew System::Windows::Forms::TextBox());
			this->Register_Last_Name = (gcnew System::Windows::Forms::TextBox());
			this->Register_Confirm = (gcnew System::Windows::Forms::TextBox());
			this->Register_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Register_Category = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(101, 59);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(91, 21);
			this->Lbl_Register_Name->TabIndex = 43;
			this->Lbl_Register_Name->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 247);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 21);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Confirm Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 200);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 149);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 21);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Email Id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(101, 106);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 21);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Last Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(101, 298);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 21);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Contact Number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(101, 357);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Category";
			// 
			// Register_First_Name
			// 
			this->Register_First_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_First_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Register_First_Name->Location = System::Drawing::Point(261, 59);
			this->Register_First_Name->Margin = System::Windows::Forms::Padding(2);
			this->Register_First_Name->Name = L"Register_First_Name";
			this->Register_First_Name->Size = System::Drawing::Size(267, 26);
			this->Register_First_Name->TabIndex = 50;
			// 
			// Register_Password
			// 
			this->Register_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Password->Location = System::Drawing::Point(261, 198);
			this->Register_Password->Margin = System::Windows::Forms::Padding(2);
			this->Register_Password->Name = L"Register_Password";
			this->Register_Password->Size = System::Drawing::Size(267, 26);
			this->Register_Password->TabIndex = 51;
			// 
			// Register_Email
			// 
			this->Register_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Email->Location = System::Drawing::Point(261, 147);
			this->Register_Email->Margin = System::Windows::Forms::Padding(2);
			this->Register_Email->Name = L"Register_Email";
			this->Register_Email->Size = System::Drawing::Size(267, 26);
			this->Register_Email->TabIndex = 52;
			// 
			// Register_Last_Name
			// 
			this->Register_Last_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Last_Name->Location = System::Drawing::Point(261, 106);
			this->Register_Last_Name->Margin = System::Windows::Forms::Padding(2);
			this->Register_Last_Name->Name = L"Register_Last_Name";
			this->Register_Last_Name->Size = System::Drawing::Size(267, 26);
			this->Register_Last_Name->TabIndex = 53;
			// 
			// Register_Confirm
			// 
			this->Register_Confirm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Confirm->Location = System::Drawing::Point(261, 247);
			this->Register_Confirm->Margin = System::Windows::Forms::Padding(2);
			this->Register_Confirm->Name = L"Register_Confirm";
			this->Register_Confirm->Size = System::Drawing::Size(267, 26);
			this->Register_Confirm->TabIndex = 54;
			// 
			// Register_Contact
			// 
			this->Register_Contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Contact->Location = System::Drawing::Point(261, 296);
			this->Register_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Register_Contact->Name = L"Register_Contact";
			this->Register_Contact->Size = System::Drawing::Size(267, 26);
			this->Register_Contact->TabIndex = 56;
			// 
			// Register_Category
			// 
			this->Register_Category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Register_Category->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Category->FormattingEnabled = true;
			this->Register_Category->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Student", L"Faculty", L"Parent"});
			this->Register_Category->Location = System::Drawing::Point(261, 353);
			this->Register_Category->Margin = System::Windows::Forms::Padding(2);
			this->Register_Category->Name = L"Register_Category";
			this->Register_Category->Size = System::Drawing::Size(267, 25);
			this->Register_Category->TabIndex = 57;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(376, 435);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(142, 48);
			this->Btn_Create->TabIndex = 67;
			this->Btn_Create->Text = L"Create Account";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &UserControl_Signup::Btn_Create_Click);
			// 
			// UserControl_Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Register_Category);
			this->Controls->Add(this->Register_Contact);
			this->Controls->Add(this->Register_Confirm);
			this->Controls->Add(this->Register_Last_Name);
			this->Controls->Add(this->Register_Email);
			this->Controls->Add(this->Register_Password);
			this->Controls->Add(this->Register_First_Name);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Name = L"UserControl_Signup";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Signup::UserControl_Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			try{
			OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

			String ^ firstname = Register_First_Name->Text;
			String ^ lastname = Register_Last_Name->Text;
			String ^ email = Register_Email->Text;
			String ^ password = Register_Password->Text;
			String ^ confirm_password = Register_Confirm->Text;
			String ^ contact = Register_Contact->Text;
			String ^ category = Register_Category->Text;
			String ^ approved = "NO";

			Debug::WriteLine(firstname);
			Debug::WriteLine("\n\n\n");
		
			
			String ^ insertString = "insert into User_Table([Email],[Password],[Contact_Number],[Approved],[First_Name],[Last_Name],[Category]) VALUES('" +email+ "', '" +password+ "', '" +contact+ "', '" +approved+ "', '" +firstname+ "', '" +lastname+ "', '" +category+ "' );";
			//String ^ insertString = "insert into User([Email],[Password],[Contact_Number],[Approved],[First_Name],[Last_Name],[Category]) values(@email,@password,@contact,@approved,@firstname,@lastname,@category);";
			//String ^ insertString = "insert into [User] values('" +email+ "', '" +password+ "', '" +contact+ "', '" +approved+ "', '" +firstname+ "', '" +lastname+ "', '" +category+ "' );";
			Debug::WriteLine(insertString);
			Debug::WriteLine("\n\n\n");

			//OleDbDataReader ^ dr;
			DB_Connection->Open();

			OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
			//dr = cmd->ExecuteReader();
			//cmd->ExecuteNonQuery();
			cmd->Parameters->Add(gcnew OleDbParameter("@Email",Convert::ToString(email)));
			cmd->Parameters->Add(gcnew OleDbParameter("@Password",Convert::ToString(password)));
			cmd->Parameters->Add(gcnew OleDbParameter("@Contact_Number",Convert::ToString(contact)));
			cmd->Parameters->Add(gcnew OleDbParameter("@Approved",Convert::ToString(approved)));
			cmd->Parameters->Add(gcnew OleDbParameter("@First_Name",Convert::ToString(firstname)));
			cmd->Parameters->Add(gcnew OleDbParameter("@Last_Name",Convert::ToString(lastname)));
			cmd->Parameters->Add(gcnew OleDbParameter("@Category",Convert::ToString(category)));

			//cmd->Parameters->AddWithValue("@email",Register_Email->Text);
			//cmd->Parameters->AddWithValue("@password",Register_Password->Text);
			//cmd->Parameters->AddWithValue("@contact",Register_Contact->Text);
			//cmd->Parameters->AddWithValue("@approved","NO");
			//cmd->Parameters->AddWithValue("@firstname",Register_First_Name->Text);
			//cmd->Parameters->AddWithValue("@lastname",Register_Last_Name->Text);
			//cmd->Parameters->AddWithValue("@category",Register_Category->Text);
			
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}


	}


private: System::Void UserControl_Signup_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}