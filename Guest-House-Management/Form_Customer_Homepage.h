#pragma once
#include <string>
#include "UserControl_Customer_Booking.h"
//#include "UserControl_User_Feedback.h"
//#include "UserControl_My_Bookings.h"
#include "UserControl_Customer_Book_Edit.h"
#include "UserControl_Customer_Housekeeping.h"
#include "UserControl_GuestHouseDetails.h"
#include "UserControl_In_Stay_Facilities.h"
#include "UserControl_Password_Change.h"
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


	/// <summary>
	/// Summary for Form_Customer_Homepage
	/// </summary>
	public ref class Form_Customer_Homepage : public System::Windows::Forms::Form
	{
	public:
		String ^username_info;
	private: System::Windows::Forms::Button^  Button_Logout;
	private: System::Windows::Forms::Button^  button1;
	public: 
		Form ^ gf;
		Form_Customer_Homepage(String ^user, Form ^ f1)
		{
			InitializeComponent();
			gf = f1;
			this->label1->Text="Welcome " + "\n" + user;
			username_info=user;
			//String ^username_info;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Customer_Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Book;

	private: System::Windows::Forms::Button^  Button_Guest_House_Facilities;

	internal: System::Windows::Forms::Panel^  Output_Panel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Button_My_Bookings;
	private: System::Windows::Forms::Button^  Button_House_Keeping;
	internal: 
	private: 
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Customer_Homepage::typeid));
			this->Button_Book = (gcnew System::Windows::Forms::Button());
			this->Button_Guest_House_Facilities = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Button_My_Bookings = (gcnew System::Windows::Forms::Button());
			this->Button_House_Keeping = (gcnew System::Windows::Forms::Button());
			this->Button_Logout = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_Book
			// 
			this->Button_Book->BackColor = System::Drawing::Color::DarkOrange;
			this->Button_Book->FlatAppearance->BorderSize = 0;
			this->Button_Book->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Azure;
			this->Button_Book->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->Button_Book->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Book->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_Book->Location = System::Drawing::Point(237, 16);
			this->Button_Book->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_Book->Name = L"Button_Book";
			this->Button_Book->Size = System::Drawing::Size(227, 79);
			this->Button_Book->TabIndex = 0;
			this->Button_Book->Text = L"New Booking";
			this->Button_Book->UseVisualStyleBackColor = false;
			this->Button_Book->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Book_Click);
			// 
			// Button_Guest_House_Facilities
			// 
			this->Button_Guest_House_Facilities->BackColor = System::Drawing::Color::DarkOrange;
			this->Button_Guest_House_Facilities->FlatAppearance->BorderSize = 0;
			this->Button_Guest_House_Facilities->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Azure;
			this->Button_Guest_House_Facilities->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->Button_Guest_House_Facilities->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Guest_House_Facilities->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Button_Guest_House_Facilities->Location = System::Drawing::Point(467, 16);
			this->Button_Guest_House_Facilities->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_Guest_House_Facilities->Name = L"Button_Guest_House_Facilities";
			this->Button_Guest_House_Facilities->Size = System::Drawing::Size(227, 79);
			this->Button_Guest_House_Facilities->TabIndex = 2;
			this->Button_Guest_House_Facilities->Text = L"Guest House Facilities";
			this->Button_Guest_House_Facilities->UseVisualStyleBackColor = false;
			this->Button_Guest_House_Facilities->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Guest_House_Facilities_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Output_Panel->Location = System::Drawing::Point(237, 95);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(995, 534);
			this->Output_Panel->TabIndex = 16;
			this->Output_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Customer_Homepage::Output_Panel_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(25, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 29);
			this->label1->TabIndex = 17;
			this->label1->Text = L"label1";
			// 
			// Button_My_Bookings
			// 
			this->Button_My_Bookings->BackColor = System::Drawing::Color::DarkOrange;
			this->Button_My_Bookings->FlatAppearance->BorderSize = 0;
			this->Button_My_Bookings->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Azure;
			this->Button_My_Bookings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->Button_My_Bookings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_My_Bookings->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_My_Bookings->Location = System::Drawing::Point(696, 16);
			this->Button_My_Bookings->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_My_Bookings->Name = L"Button_My_Bookings";
			this->Button_My_Bookings->Size = System::Drawing::Size(227, 79);
			this->Button_My_Bookings->TabIndex = 18;
			this->Button_My_Bookings->Text = L"My Bookings";
			this->Button_My_Bookings->UseVisualStyleBackColor = false;
			this->Button_My_Bookings->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_My_Bookings_Click);
			// 
			// Button_House_Keeping
			// 
			this->Button_House_Keeping->BackColor = System::Drawing::Color::DarkOrange;
			this->Button_House_Keeping->FlatAppearance->BorderSize = 0;
			this->Button_House_Keeping->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Azure;
			this->Button_House_Keeping->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->Button_House_Keeping->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_House_Keeping->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_House_Keeping->Location = System::Drawing::Point(925, 16);
			this->Button_House_Keeping->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Button_House_Keeping->Name = L"Button_House_Keeping";
			this->Button_House_Keeping->Size = System::Drawing::Size(227, 79);
			this->Button_House_Keeping->TabIndex = 19;
			this->Button_House_Keeping->Text = L"House Keeping";
			this->Button_House_Keeping->UseVisualStyleBackColor = false;
			this->Button_House_Keeping->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_House_Keeping_Click);
			// 
			// Button_Logout
			// 
			this->Button_Logout->BackColor = System::Drawing::Color::Transparent;
			this->Button_Logout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button_Logout.BackgroundImage")));
			this->Button_Logout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->Button_Logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button_Logout->Location = System::Drawing::Point(1153, 17);
			this->Button_Logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_Logout->Name = L"Button_Logout";
			this->Button_Logout->Size = System::Drawing::Size(79, 79);
			this->Button_Logout->TabIndex = 21;
			this->Button_Logout->UseVisualStyleBackColor = false;
			this->Button_Logout->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Logout_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Azure;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(15, 550);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 79);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::button1_Click);
			// 
			// Form_Customer_Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1255, 654);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Button_Logout);
			this->Controls->Add(this->Button_House_Keeping);
			this->Controls->Add(this->Button_My_Bookings);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Button_Guest_House_Facilities);
			this->Controls->Add(this->Button_Book);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form_Customer_Homepage";
			this->Text = L"Customer Homepage";
			this->Load += gcnew System::EventHandler(this, &Form_Customer_Homepage::Form_Customer_Homepage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Customer_Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->ControlBox = false;
				 //this->Button_Logout->Parent = Form_Customer_Homepage;
				 gf->Hide();
			 }
	private: System::Void Output_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Button_Book_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Button_House_Keeping->BackColor = System::Drawing::Color::DarkOrange;
				 this->Button_My_Bookings->BackColor = System::Drawing::Color::DarkOrange;
				 this->Button_Book->BackColor = System::Drawing::Color::WhiteSmoke;
				 this->Button_Guest_House_Facilities->BackColor = System::Drawing::Color::DarkOrange;
				 //this->Button_Book->BackColor = System::Drawing::Color::WhiteSmoke;
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Customer_Booking(username_info));
				 /*Form_Customer_Homepage ^form_custom = gcnew Form_Customer_Homepage(username);
				 form_custom->ShowDialog();*/
			 }
	private: System::Void Button_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Output_Panel->Controls->Clear();
				 //Output_Panel->Controls->Add(gcnew UserControl_User_Feedback);
			 }
private: System::Void Button_My_Bookings_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Button_House_Keeping->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_My_Bookings->BackColor = System::Drawing::Color::WhiteSmoke;
			 this->Button_Book->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_Guest_House_Facilities->BackColor = System::Drawing::Color::DarkOrange;
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Customer_Book_Edit(username_info));
				// Debug::WriteLine(Convert::ToDateTime("3-12-2019"));
		 }

private: System::Void Button_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Book_Edit(username_info));
		 }
private: System::Void Button_House_Keeping_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Button_House_Keeping->BackColor = System::Drawing::Color::WhiteSmoke;
			 this->Button_My_Bookings->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_Book->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_Guest_House_Facilities->BackColor = System::Drawing::Color::DarkOrange;
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Housekeeping(username_info));
		 }
private: System::Void Button_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 gf->Close();
			 Application::Restart();
		 }
private: System::Void Button_Guest_House_Facilities_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Button_House_Keeping->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_My_Bookings->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_Book->BackColor = System::Drawing::Color::DarkOrange;
			 this->Button_Guest_House_Facilities->BackColor = System::Drawing::Color::WhiteSmoke;
			 
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_In_Stay_Facilities);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Password_Change(username_info));
		 }
};
}
