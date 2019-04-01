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
	/// Summary for UserControl_Add_Restaurant
	/// </summary>
	public ref class UserControl_Add_Restaurant : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label5;
	public: 
		Panel ^pn5;

		UserControl_Add_Restaurant(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_Add_Restaurant()
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
	internal: System::Windows::Forms::TextBox^  Textbox_Restaurant_Name;
	internal: System::Windows::Forms::TextBox^  Textbox_Restaurant_Address;
	internal: System::Windows::Forms::TextBox^  Textbox_Contact;
	internal: System::Windows::Forms::TextBox^  Textbox_Description;





	internal: System::Windows::Forms::Button^  Btn_Create;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	internal: 

	internal: 

	private: 
	internal: 

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
			this->Textbox_Restaurant_Name = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Restaurant_Address = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Description = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Lbl_Register_Name->Location = System::Drawing::Point(110, 80);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(155, 24);
			this->Lbl_Register_Name->TabIndex = 45;
			this->Lbl_Register_Name->Text = L"Restaurant Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->Location = System::Drawing::Point(110, 139);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 24);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Restaurant Address";
			this->label1->Click += gcnew System::EventHandler(this, &UserControl_Add_Restaurant::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label2->Location = System::Drawing::Point(110, 207);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 24);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Restaurant Contact";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(109, 268);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(198, 24);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Restaurant Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(109, 325);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 24);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Guest House Delivery";
			// 
			// Textbox_Restaurant_Name
			// 
			this->Textbox_Restaurant_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Textbox_Restaurant_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Restaurant_Name->Location = System::Drawing::Point(436, 80);
			this->Textbox_Restaurant_Name->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Restaurant_Name->Name = L"Textbox_Restaurant_Name";
			this->Textbox_Restaurant_Name->Size = System::Drawing::Size(267, 26);
			this->Textbox_Restaurant_Name->TabIndex = 52;
			// 
			// Textbox_Restaurant_Address
			// 
			this->Textbox_Restaurant_Address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Textbox_Restaurant_Address->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Restaurant_Address->Location = System::Drawing::Point(436, 137);
			this->Textbox_Restaurant_Address->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Restaurant_Address->Name = L"Textbox_Restaurant_Address";
			this->Textbox_Restaurant_Address->Size = System::Drawing::Size(267, 26);
			this->Textbox_Restaurant_Address->TabIndex = 53;
			// 
			// Textbox_Contact
			// 
			this->Textbox_Contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Contact->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Contact->Location = System::Drawing::Point(436, 205);
			this->Textbox_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Contact->Name = L"Textbox_Contact";
			this->Textbox_Contact->Size = System::Drawing::Size(267, 26);
			this->Textbox_Contact->TabIndex = 54;
			this->Textbox_Contact->TextChanged += gcnew System::EventHandler(this, &UserControl_Add_Restaurant::Textbox_Contact_TextChanged);
			// 
			// Textbox_Description
			// 
			this->Textbox_Description->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Textbox_Description->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Description->Location = System::Drawing::Point(436, 266);
			this->Textbox_Description->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Description->Name = L"Textbox_Description";
			this->Textbox_Description->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Textbox_Description->Size = System::Drawing::Size(267, 26);
			this->Textbox_Description->TabIndex = 55;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(272, 405);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(223, 65);
			this->Btn_Create->TabIndex = 69;
			this->Btn_Create->Text = L"Add Restaurant";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &UserControl_Add_Restaurant::Btn_Create_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"YES", L"NO"});
			this->comboBox1->Location = System::Drawing::Point(436, 321);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(267, 28);
			this->comboBox1->TabIndex = 70;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(272, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(279, 29);
			this->label5->TabIndex = 79;
			this->label5->Text = L"Add Restuarnat Details";
			// 
			// UserControl_Add_Restaurant
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Textbox_Description);
			this->Controls->Add(this->Textbox_Contact);
			this->Controls->Add(this->Textbox_Restaurant_Address);
			this->Controls->Add(this->Textbox_Restaurant_Name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Add_Restaurant";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Restaurant::UserControl_Add_Restaurant_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Add_Restaurant::myMouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ restaurant_name = Textbox_Restaurant_Name->Text;
				 String ^ restaurant_address = Textbox_Restaurant_Address->Text;
				 String ^ restaurant_contact = Textbox_Contact->Text;
				 String ^ restaurant_descrip = Textbox_Description->Text;
				 String ^ home_del = comboBox1->Text;

				 String ^ str = Textbox_Contact->Text;
				 
				 for(int i=0;i<str->Length;i++)
				 {
					 if(!isdigit(str[i])) 
					 {
						 MessageBox::Show("Contact Number can contain only digits","Warning");
						 return; 
					 }
				 }
				 /*
				 if(Textbox_Contact->Text->Length!=10) 
				 {
					 MessageBox::Show("Contact Number should be exactly 10 digits long","Warning");
					 return;
				 }
				 */
				 if(Textbox_Restaurant_Name->Text == ""||Textbox_Restaurant_Address->Text == ""||Textbox_Description->Text == ""||Textbox_Contact->Text == ""||comboBox1->Text == "")
				 {
					 MessageBox::Show("All fields must be filled out","Warning");
					 return;
				 }
				 
				 try
				 {

					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ insert_restaurant = "insert into Restaurant_Details([Restaurant_Name],[Restaurant_Address],[Restaurant_Contact],[Restaurant_Description],[Home_Delivery]) VALUES('" +restaurant_name+ "', '" +restaurant_address+ "', '" +restaurant_contact+ "', '" +restaurant_descrip+ "', '" +home_del+ "' );";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(insert_restaurant, DB_Connection);

					 cmd->Parameters->Add(gcnew OleDbParameter("@Restaurant_Name",Convert::ToString(restaurant_name)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Restaurant_Address",Convert::ToString(restaurant_address)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Restaurant_Contact",Convert::ToString(restaurant_contact)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Restaurant_Description",Convert::ToString(restaurant_descrip)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Home_Delivery",Convert::ToString(home_del)));

					 cmd->ExecuteNonQuery();
					 DB_Connection->Close();
					 MessageBox::Show("Restaurant added successfully","Notification");
					 this->Controls->Clear();
					 this->InitializeComponent();
					 UserControl_Add_Restaurant_Load(sender,e);
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
				 }
			 }
	private: System::Void UserControl_Add_Restaurant_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Textbox_Contact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
