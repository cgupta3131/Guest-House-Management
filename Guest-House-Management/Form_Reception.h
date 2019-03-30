#pragma once
#include "stdafx.h"
#include "UserControl_Guest_House_Info.h"
#include "UserControl_Add_Room.h"
#include "UserControl_Status_Room.h"
#include "UserControl_Approve_Users.h"
#include "UserControl_Floor_Map.h"
#include "UserControl_Booking_Approval.h"
#include "UserControl_Customer_Feedback.h"
#include "UserControl_Generate_Bill.h"
#include "UserControl_Staff_Housekeeping_Approval.h"
#include "UserControl_Staff_Booking_Display.h"
#include "UserControl_User_Types.h"
#include "UserControl_Staff_Leave_Approval.h"


namespace GuestHouseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Reception
	/// </summary>
	public ref class Form_Reception : public System::Windows::Forms::Form
	{
	public:
		Form ^ gf;
	private: System::Windows::Forms::Button^  Button_Logout;
	private: System::Windows::Forms::Button^  button3;
	public: 
		Form ^ gf2;
		Form_Reception(){

		}
		Form_Reception(Form ^ f1)
		{
			InitializeComponent();

			gf = f1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Reception()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Booking_Info;
	protected: 

	private: System::Windows::Forms::Button^  Btn_Staff_Info;
	protected: 

	private: System::Windows::Forms::Button^  Btn_Guest_Info;
	private: System::Windows::Forms::Button^  Btn_Users_Approval;


	internal: System::Windows::Forms::Panel^  Output_Panel;
	private: System::Windows::Forms::Button^  Btn_Add_Room;
	private: System::Windows::Forms::Button^  Btn_Status_Room;
	private: System::Windows::Forms::Button^  Btn_Floor_Map;
	private: System::Windows::Forms::Button^  Btn_Booking_App;
	private: System::Windows::Forms::Button^  Btn_Customer_Feedback;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  Btn_Housekeeping_App;

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
			this->Btn_Booking_Info = (gcnew System::Windows::Forms::Button());
			this->Btn_Staff_Info = (gcnew System::Windows::Forms::Button());
			this->Btn_Guest_Info = (gcnew System::Windows::Forms::Button());
			this->Btn_Users_Approval = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->Btn_Add_Room = (gcnew System::Windows::Forms::Button());
			this->Btn_Status_Room = (gcnew System::Windows::Forms::Button());
			this->Btn_Floor_Map = (gcnew System::Windows::Forms::Button());
			this->Btn_Booking_App = (gcnew System::Windows::Forms::Button());
			this->Btn_Customer_Feedback = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Btn_Housekeeping_App = (gcnew System::Windows::Forms::Button());
			this->Button_Logout = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Booking_Info
			// 
			this->Btn_Booking_Info->Location = System::Drawing::Point(43, 312);
			this->Btn_Booking_Info->Name = L"Btn_Booking_Info";
			this->Btn_Booking_Info->Size = System::Drawing::Size(166, 98);
			this->Btn_Booking_Info->TabIndex = 1;
			this->Btn_Booking_Info->Text = L"Booking Info";
			this->Btn_Booking_Info->UseVisualStyleBackColor = true;
			// 
			// Btn_Staff_Info
			// 
			this->Btn_Staff_Info->Location = System::Drawing::Point(43, 234);
			this->Btn_Staff_Info->Name = L"Btn_Staff_Info";
			this->Btn_Staff_Info->Size = System::Drawing::Size(166, 62);
			this->Btn_Staff_Info->TabIndex = 2;
			this->Btn_Staff_Info->Text = L"Staff Info";
			this->Btn_Staff_Info->UseVisualStyleBackColor = true;
			this->Btn_Staff_Info->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Staff_Info_Click);
			// 
			// Btn_Guest_Info
			// 
			this->Btn_Guest_Info->Location = System::Drawing::Point(43, 71);
			this->Btn_Guest_Info->Name = L"Btn_Guest_Info";
			this->Btn_Guest_Info->Size = System::Drawing::Size(166, 98);
			this->Btn_Guest_Info->TabIndex = 3;
			this->Btn_Guest_Info->Text = L"Guest House Info";
			this->Btn_Guest_Info->UseVisualStyleBackColor = true;
			this->Btn_Guest_Info->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click);
			// 
			// Btn_Users_Approval
			// 
			this->Btn_Users_Approval->Location = System::Drawing::Point(43, 486);
			this->Btn_Users_Approval->Name = L"Btn_Users_Approval";
			this->Btn_Users_Approval->Size = System::Drawing::Size(166, 98);
			this->Btn_Users_Approval->TabIndex = 4;
			this->Btn_Users_Approval->Text = L"Users Approval";
			this->Btn_Users_Approval->UseVisualStyleBackColor = true;
			this->Btn_Users_Approval->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Users_Approval_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Output_Panel->Location = System::Drawing::Point(279, 71);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(682, 553);
			this->Output_Panel->TabIndex = 16;
			// 
			// Btn_Add_Room
			// 
			this->Btn_Add_Room->Location = System::Drawing::Point(43, 619);
			this->Btn_Add_Room->Name = L"Btn_Add_Room";
			this->Btn_Add_Room->Size = System::Drawing::Size(166, 98);
			this->Btn_Add_Room->TabIndex = 17;
			this->Btn_Add_Room->Text = L"Add Room";
			this->Btn_Add_Room->UseVisualStyleBackColor = true;
			this->Btn_Add_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Add_Room_Click);
			// 
			// Btn_Status_Room
			// 
			this->Btn_Status_Room->Location = System::Drawing::Point(279, 629);
			this->Btn_Status_Room->Name = L"Btn_Status_Room";
			this->Btn_Status_Room->Size = System::Drawing::Size(166, 98);
			this->Btn_Status_Room->TabIndex = 18;
			this->Btn_Status_Room->Text = L"Room Status";
			this->Btn_Status_Room->UseVisualStyleBackColor = true;
			this->Btn_Status_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Status_Room_Click);
			// 
			// Btn_Floor_Map
			// 
			this->Btn_Floor_Map->Location = System::Drawing::Point(509, 629);
			this->Btn_Floor_Map->Name = L"Btn_Floor_Map";
			this->Btn_Floor_Map->Size = System::Drawing::Size(166, 98);
			this->Btn_Floor_Map->TabIndex = 20;
			this->Btn_Floor_Map->Text = L"Floor Map";
			this->Btn_Floor_Map->UseVisualStyleBackColor = true;
			this->Btn_Floor_Map->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Floor_Map_Click);
			// 
			// Btn_Booking_App
			// 
			this->Btn_Booking_App->Location = System::Drawing::Point(742, 629);
			this->Btn_Booking_App->Name = L"Btn_Booking_App";
			this->Btn_Booking_App->Size = System::Drawing::Size(166, 98);
			this->Btn_Booking_App->TabIndex = 21;
			this->Btn_Booking_App->Text = L"Booking Approval";
			this->Btn_Booking_App->UseVisualStyleBackColor = true;
			this->Btn_Booking_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Booking_App_Click);
			// 
			// Btn_Customer_Feedback
			// 
			this->Btn_Customer_Feedback->Location = System::Drawing::Point(155, 22);
			this->Btn_Customer_Feedback->Name = L"Btn_Customer_Feedback";
			this->Btn_Customer_Feedback->Size = System::Drawing::Size(164, 43);
			this->Btn_Customer_Feedback->TabIndex = 22;
			this->Btn_Customer_Feedback->Text = L"Customer Feedback";
			this->Btn_Customer_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Customer_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Customer_Feedback_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(371, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 43);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Generate Bill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Reception::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(812, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 54);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Display Bookings";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click_1);
			// 
			// Btn_Housekeeping_App
			// 
			this->Btn_Housekeeping_App->Location = System::Drawing::Point(594, 6);
			this->Btn_Housekeeping_App->Name = L"Btn_Housekeeping_App";
			this->Btn_Housekeeping_App->Size = System::Drawing::Size(166, 54);
			this->Btn_Housekeeping_App->TabIndex = 25;
			this->Btn_Housekeeping_App->Text = L"Housekeeping Approval";
			this->Btn_Housekeeping_App->UseVisualStyleBackColor = true;
			this->Btn_Housekeeping_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Housekeeping_App_Click);
			// 
			// Button_Logout
			// 
			this->Button_Logout->Location = System::Drawing::Point(43, 430);
			this->Button_Logout->Name = L"Button_Logout";
			this->Button_Logout->Size = System::Drawing::Size(166, 50);
			this->Button_Logout->TabIndex = 27;
			this->Button_Logout->Text = L"Logout";
			this->Button_Logout->UseVisualStyleBackColor = true;
			this->Button_Logout->Click += gcnew System::EventHandler(this, &Form_Reception::Button_Logout_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(43, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 50);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Leave Approval";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Reception::button3_Click_1);
			// 
			// Form_Reception
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Button_Logout);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Btn_Housekeeping_App);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_Customer_Feedback);
			this->Controls->Add(this->Btn_Booking_App);
			this->Controls->Add(this->Btn_Floor_Map);
			this->Controls->Add(this->Btn_Status_Room);
			this->Controls->Add(this->Btn_Add_Room);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Btn_Users_Approval);
			this->Controls->Add(this->Btn_Guest_Info);
			this->Controls->Add(this->Btn_Staff_Info);
			this->Controls->Add(this->Btn_Booking_Info);
			this->Name = L"Form_Reception";
			this->Text = L"Form_Reception";
			this->Load += gcnew System::EventHandler(this, &Form_Reception::Form_Reception_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Guest_House_Info);
		
			 }
private: System::Void Btn_Staff_Info_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff);
		 }
private: System::Void Form_Reception_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->ControlBox = false;
			 gf->Hide();
		 }
private: System::Void Btn_Users_Approval_Click(System::Object^  sender, System::EventArgs^  e) {
			  Output_Panel->Controls->Clear();
			  Output_Panel->Controls->Add(gcnew UserControl_Approve_Users);
			  
		 }
private: System::Void Btn_Add_Room_Click(System::Object^  sender, System::EventArgs^  e) {

			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Add_Room1);
		 }
private: System::Void Btn_Status_Room_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Status_Room);
		 }
private: System::Void Btn_Floor_Map_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Floor_Map);
		 }
public: System::Void Btn_Booking_App_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Booking_Approval);
		 }
private: System::Void Btn_Customer_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback);
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Generate_Bill);
		 }
private: System::Void Btn_Housekeeping_App_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Housekeeping_Approval);
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Booking_Display);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->Owner == nullptr)
				 return;

			 this->Owner->Show();
			 this->Hide();
		 }
private: System::Void Button_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 //gf->Close();
			 //gf->ShowDialog();

			 this->Close();
			 gf->Show();
			 gf->Close();
			 Application::Restart();
		 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Leave_Approval);
		 }
};
}
