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
	/// Summary for UserControl_Add_Cab_Details
	/// </summary>
	public ref class UserControl_Add_Cab_Details : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
	private: System::Windows::Forms::Label^  label5;
	public: 
		Panel ^pn5;

		UserControl_Add_Cab_Details(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_Add_Cab_Details()
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
	internal: System::Windows::Forms::TextBox^  Textbox_Driver_Name;
	internal: System::Windows::Forms::TextBox^  Textbox_Vehicle_Name;
	internal: System::Windows::Forms::TextBox^  Textbox_Vehicle_Number;
	internal: System::Windows::Forms::TextBox^  Textbox_Vehicle_Description;
	internal: System::Windows::Forms::TextBox^  Textbox_Contact;





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
			this->Textbox_Driver_Name = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Vehicle_Name = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Vehicle_Number = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Vehicle_Description = (gcnew System::Windows::Forms::TextBox());
			this->Textbox_Contact = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Lbl_Register_Name
			// 
			this->Lbl_Register_Name->AutoSize = true;
			this->Lbl_Register_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Lbl_Register_Name->Location = System::Drawing::Point(125, 87);
			this->Lbl_Register_Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Register_Name->Name = L"Lbl_Register_Name";
			this->Lbl_Register_Name->Size = System::Drawing::Size(115, 24);
			this->Lbl_Register_Name->TabIndex = 44;
			this->Lbl_Register_Name->Text = L"Driver Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(125, 145);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 24);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Vehicle Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 206);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 24);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Vehicle Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(125, 280);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 24);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Vehicle Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(125, 352);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 24);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Driver Contact";
			// 
			// Textbox_Driver_Name
			// 
			this->Textbox_Driver_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Driver_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Driver_Name->Location = System::Drawing::Point(416, 82);
			this->Textbox_Driver_Name->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Driver_Name->Name = L"Textbox_Driver_Name";
			this->Textbox_Driver_Name->Size = System::Drawing::Size(292, 26);
			this->Textbox_Driver_Name->TabIndex = 51;
			// 
			// Textbox_Vehicle_Name
			// 
			this->Textbox_Vehicle_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Vehicle_Name->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Vehicle_Name->Location = System::Drawing::Point(416, 140);
			this->Textbox_Vehicle_Name->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Vehicle_Name->Name = L"Textbox_Vehicle_Name";
			this->Textbox_Vehicle_Name->Size = System::Drawing::Size(292, 26);
			this->Textbox_Vehicle_Name->TabIndex = 52;
			// 
			// Textbox_Vehicle_Number
			// 
			this->Textbox_Vehicle_Number->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Textbox_Vehicle_Number->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Vehicle_Number->Location = System::Drawing::Point(416, 201);
			this->Textbox_Vehicle_Number->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Vehicle_Number->Name = L"Textbox_Vehicle_Number";
			this->Textbox_Vehicle_Number->Size = System::Drawing::Size(292, 26);
			this->Textbox_Vehicle_Number->TabIndex = 53;
			// 
			// Textbox_Vehicle_Description
			// 
			this->Textbox_Vehicle_Description->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Textbox_Vehicle_Description->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Vehicle_Description->Location = System::Drawing::Point(416, 264);
			this->Textbox_Vehicle_Description->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Vehicle_Description->Multiline = true;
			this->Textbox_Vehicle_Description->Name = L"Textbox_Vehicle_Description";
			this->Textbox_Vehicle_Description->Size = System::Drawing::Size(292, 40);
			this->Textbox_Vehicle_Description->TabIndex = 54;
			// 
			// Textbox_Contact
			// 
			this->Textbox_Contact->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Textbox_Contact->ForeColor = System::Drawing::SystemColors::MenuText;
			this->Textbox_Contact->Location = System::Drawing::Point(416, 350);
			this->Textbox_Contact->Margin = System::Windows::Forms::Padding(2);
			this->Textbox_Contact->Name = L"Textbox_Contact";
			this->Textbox_Contact->Size = System::Drawing::Size(292, 26);
			this->Textbox_Contact->TabIndex = 55;
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(245, 418);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(203, 64);
			this->Btn_Create->TabIndex = 68;
			this->Btn_Create->Text = L"Add Cab Service";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &UserControl_Add_Cab_Details::Btn_Create_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(288, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 29);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Add Cab Details";
			// 
			// UserControl_Add_Cab_Details
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Btn_Create);
			this->Controls->Add(this->Textbox_Contact);
			this->Controls->Add(this->Textbox_Vehicle_Description);
			this->Controls->Add(this->Textbox_Vehicle_Number);
			this->Controls->Add(this->Textbox_Vehicle_Name);
			this->Controls->Add(this->Textbox_Driver_Name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Lbl_Register_Name);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_Add_Cab_Details";
			this->Size = System::Drawing::Size(868, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Cab_Details::UserControl_Add_Cab_Details_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Add_Cab_Details::myMouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ driver_name = Textbox_Driver_Name->Text;
				 String ^ vehicle_name = Textbox_Vehicle_Name->Text;
				 String ^ vehicle_description = Textbox_Vehicle_Description->Text;
				 String ^ vehicle_number = Textbox_Vehicle_Number->Text;
				 String ^ driver_number = Textbox_Contact->Text;

				 String ^ str = Textbox_Contact->Text;
				 for(int i=0;i<str->Length;i++)
				 {
					 if(!isdigit(str[i])) 
					 {
						 MessageBox::Show("Contact Number can contain only digits","Warning");
						 return; 
					 }
				 }
				 if(Textbox_Contact->Text->Length!=10) 
				 {
					 MessageBox::Show("Contact Number should be exactly 10 digits long","Warning");
					 return;
				 }
				 if(Textbox_Driver_Name->Text == ""||Textbox_Contact->Text == ""||Textbox_Vehicle_Description->Text == ""||Textbox_Vehicle_Name->Text == ""||Textbox_Vehicle_Number->Text == "")
				 {
					 MessageBox::Show("All fields must be filled out","Warning");
					 return;
				 }
				 try
				 {
					 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
					 DB_Connection->Open();

					 String ^ insert_cabs = "insert into Cab_Details([Driver_Name],[Vehicle_Name],[Vehicle_Details],[Vehicle_Number],[Driver_Contact]) VALUES('" +driver_name+ "', '" +vehicle_name+ "', '" +vehicle_description+ "', '" +vehicle_number+ "', '" +driver_number+ "' );";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(insert_cabs, DB_Connection);

					 cmd->Parameters->Add(gcnew OleDbParameter("@Driver_Name",Convert::ToString(driver_name)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Vehicle_Name",Convert::ToString(vehicle_name)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Vehicle_Details",Convert::ToString(vehicle_description)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Vehicle_Number",Convert::ToString(vehicle_number)));
					 cmd->Parameters->Add(gcnew OleDbParameter("@Driver_Contact",Convert::ToString(driver_number)));

					 cmd->ExecuteNonQuery();
					 DB_Connection->Close();
					 MessageBox::Show("Cab added successfully","Notification");
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message,"Warning");
				 }
			 }
	private: System::Void UserControl_Add_Cab_Details_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);
			 }
	};
}
