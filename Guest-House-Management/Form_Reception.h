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
#include "UserControl_GuestHouseDetails.h"
#include "UserControl_Room_Types2.h"
#include "UserControl_User_Types.h"
#include "UserControl_Staff_Register.h"
#include "UserControl_Staff_Record.h"
#include "UserControl_Staff_Planner.h"
#include "UserControl_Staff_Edit.h"
#include "UserControl_Staff_Leave.h"
#include "UserControl_Add_Cab_Details.h"
#include "UserControl_Add_Restaurant.h"
#include "UserControl_Add_Places.h"
#include "UserControl_Add_Mess.h"
#include "UserControl_Extra_Charges.h"

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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Booking_Btn;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  Booking_Staff;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  Booking_GH_Info;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  Booking_Room;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  User_Button;
	private: System::Windows::Forms::Button^  button4;
	internal: System::Windows::Forms::Button^  Btn_Room_Types;
	private: 
	internal: System::Windows::Forms::Button^  Btn_User_Types;
	private: System::Windows::Forms::Button^  Btn_Edit_Records;
	internal: 

	internal: 
	private: System::Windows::Forms::Button^  Planner_Button;
	private: System::Windows::Forms::Button^  Leave_Button;
	private: System::Windows::Forms::Button^  Register_Button;

	private: System::Windows::Forms::Panel^  panel7;
	internal: System::Windows::Forms::Button^  button5;
	private: 
	internal: System::Windows::Forms::Button^  button7;
	internal: System::Windows::Forms::Button^  button6;
	internal: System::Windows::Forms::Button^  Btn_Create;
	private: System::Windows::Forms::Button^  Btn_Read_Feedback;
	internal: 
	private: System::Windows::Forms::Button^  Btn_Unread_Feedback;
	private: System::Windows::Forms::Button^  Btn_All_Feedback;




	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  Button_Add_Charges;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Button_Add_Charges = (gcnew System::Windows::Forms::Button());
			this->Booking_Btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Leave_Button = (gcnew System::Windows::Forms::Button());
			this->Planner_Button = (gcnew System::Windows::Forms::Button());
			this->Btn_Edit_Records = (gcnew System::Windows::Forms::Button());
			this->Booking_Staff = (gcnew System::Windows::Forms::Button());
			this->Register_Button = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Btn_Room_Types = (gcnew System::Windows::Forms::Button());
			this->Btn_User_Types = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Booking_GH_Info = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Booking_Room = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->User_Button = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->Btn_Read_Feedback = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Btn_Unread_Feedback = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Btn_All_Feedback = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// Btn_Staff_Info
			// 
			this->Btn_Staff_Info->Location = System::Drawing::Point(744, 655);
			this->Btn_Staff_Info->Name = L"Btn_Staff_Info";
			this->Btn_Staff_Info->Size = System::Drawing::Size(166, 62);
			this->Btn_Staff_Info->TabIndex = 2;
			this->Btn_Staff_Info->Text = L"Staff Info";
			this->Btn_Staff_Info->UseVisualStyleBackColor = true;
			this->Btn_Staff_Info->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Staff_Info_Click);
			// 
			// Btn_Guest_Info
			// 
			this->Btn_Guest_Info->Location = System::Drawing::Point(0, 46);
			this->Btn_Guest_Info->Name = L"Btn_Guest_Info";
			this->Btn_Guest_Info->Size = System::Drawing::Size(168, 23);
			this->Btn_Guest_Info->TabIndex = 3;
			this->Btn_Guest_Info->Text = L"Guest House Info";
			this->Btn_Guest_Info->UseVisualStyleBackColor = true;
			this->Btn_Guest_Info->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click);
			// 
			// Btn_Users_Approval
			// 
			this->Btn_Users_Approval->Location = System::Drawing::Point(0, 23);
			this->Btn_Users_Approval->Name = L"Btn_Users_Approval";
			this->Btn_Users_Approval->Size = System::Drawing::Size(168, 23);
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
			this->Output_Panel->Size = System::Drawing::Size(718, 611);
			this->Output_Panel->TabIndex = 16;
			this->Output_Panel->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::Output_Panel_MouseEnter);
			// 
			// Btn_Add_Room
			// 
			this->Btn_Add_Room->Location = System::Drawing::Point(0, 23);
			this->Btn_Add_Room->Name = L"Btn_Add_Room";
			this->Btn_Add_Room->Size = System::Drawing::Size(168, 23);
			this->Btn_Add_Room->TabIndex = 17;
			this->Btn_Add_Room->Text = L"Add Room";
			this->Btn_Add_Room->UseVisualStyleBackColor = true;
			this->Btn_Add_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Add_Room_Click);
			// 
			// Btn_Status_Room
			// 
			this->Btn_Status_Room->Location = System::Drawing::Point(0, 46);
			this->Btn_Status_Room->Name = L"Btn_Status_Room";
			this->Btn_Status_Room->Size = System::Drawing::Size(168, 23);
			this->Btn_Status_Room->TabIndex = 18;
			this->Btn_Status_Room->Text = L"Room Status";
			this->Btn_Status_Room->UseVisualStyleBackColor = true;
			this->Btn_Status_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Status_Room_Click);
			// 
			// Btn_Floor_Map
			// 
			this->Btn_Floor_Map->Location = System::Drawing::Point(0, 69);
			this->Btn_Floor_Map->Name = L"Btn_Floor_Map";
			this->Btn_Floor_Map->Size = System::Drawing::Size(168, 23);
			this->Btn_Floor_Map->TabIndex = 20;
			this->Btn_Floor_Map->Text = L"Floor Map";
			this->Btn_Floor_Map->UseVisualStyleBackColor = true;
			this->Btn_Floor_Map->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Floor_Map_Click);
			// 
			// Btn_Booking_App
			// 
			this->Btn_Booking_App->Location = System::Drawing::Point(0, 46);
			this->Btn_Booking_App->Name = L"Btn_Booking_App";
			this->Btn_Booking_App->Size = System::Drawing::Size(168, 23);
			this->Btn_Booking_App->TabIndex = 21;
			this->Btn_Booking_App->Text = L"Booking Approval";
			this->Btn_Booking_App->UseVisualStyleBackColor = true;
			this->Btn_Booking_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Booking_App_Click);
			// 
			// Btn_Customer_Feedback
			// 
			this->Btn_Customer_Feedback->Location = System::Drawing::Point(0, 69);
			this->Btn_Customer_Feedback->Name = L"Btn_Customer_Feedback";
			this->Btn_Customer_Feedback->Size = System::Drawing::Size(168, 23);
			this->Btn_Customer_Feedback->TabIndex = 22;
			this->Btn_Customer_Feedback->Text = L"Customer Feedback";
			this->Btn_Customer_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Customer_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Customer_Feedback_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Generate Bill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Reception::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(168, 23);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Display Bookings";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click_1);
			// 
			// Btn_Housekeeping_App
			// 
			this->Btn_Housekeeping_App->Location = System::Drawing::Point(0, 46);
			this->Btn_Housekeeping_App->Name = L"Btn_Housekeeping_App";
			this->Btn_Housekeeping_App->Size = System::Drawing::Size(168, 23);
			this->Btn_Housekeeping_App->TabIndex = 25;
			this->Btn_Housekeeping_App->Text = L"Housekeeping Approval";
			this->Btn_Housekeeping_App->UseVisualStyleBackColor = true;
			this->Btn_Housekeeping_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Housekeeping_App_Click);
			// 
			// Button_Logout
			// 
			this->Button_Logout->Location = System::Drawing::Point(462, 667);
			this->Button_Logout->Name = L"Button_Logout";
			this->Button_Logout->Size = System::Drawing::Size(166, 50);
			this->Button_Logout->TabIndex = 27;
			this->Button_Logout->Text = L"Logout";
			this->Button_Logout->UseVisualStyleBackColor = true;
			this->Button_Logout->Click += gcnew System::EventHandler(this, &Form_Reception::Button_Logout_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Leave Approval";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Reception::button3_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Button_Add_Charges);
			this->panel1->Controls->Add(this->Booking_Btn);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->Btn_Booking_App);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(43, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(169, 118);
			this->panel1->TabIndex = 28;
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel1_MouseLeave);
			// 
			// Button_Add_Charges
			// 
			this->Button_Add_Charges->Location = System::Drawing::Point(0, 69);
			this->Button_Add_Charges->Name = L"Button_Add_Charges";
			this->Button_Add_Charges->Size = System::Drawing::Size(168, 23);
			this->Button_Add_Charges->TabIndex = 32;
			this->Button_Add_Charges->Text = L"Add charges";
			this->Button_Add_Charges->UseVisualStyleBackColor = true;
			this->Button_Add_Charges->Click += gcnew System::EventHandler(this, &Form_Reception::Button_Add_Charges_Click);
			// 
			// Booking_Btn
			// 
			this->Booking_Btn->Location = System::Drawing::Point(1, 0);
			this->Booking_Btn->Name = L"Booking_Btn";
			this->Booking_Btn->Size = System::Drawing::Size(168, 23);
			this->Booking_Btn->TabIndex = 2;
			this->Booking_Btn->Text = L"Booking";
			this->Booking_Btn->UseVisualStyleBackColor = true;
			this->Booking_Btn->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Btn_MouseHover);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Leave_Button);
			this->panel2->Controls->Add(this->Planner_Button);
			this->panel2->Controls->Add(this->Btn_Edit_Records);
			this->panel2->Controls->Add(this->Booking_Staff);
			this->panel2->Controls->Add(this->Register_Button);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(248, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(169, 140);
			this->panel2->TabIndex = 29;
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel2_MouseLeave);
			// 
			// Leave_Button
			// 
			this->Leave_Button->Location = System::Drawing::Point(0, 92);
			this->Leave_Button->Margin = System::Windows::Forms::Padding(2);
			this->Leave_Button->Name = L"Leave_Button";
			this->Leave_Button->Size = System::Drawing::Size(168, 23);
			this->Leave_Button->TabIndex = 34;
			this->Leave_Button->Text = L"Leave Request";
			this->Leave_Button->UseVisualStyleBackColor = true;
			this->Leave_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Leave_Button_Click);
			// 
			// Planner_Button
			// 
			this->Planner_Button->Location = System::Drawing::Point(0, 69);
			this->Planner_Button->Margin = System::Windows::Forms::Padding(2);
			this->Planner_Button->Name = L"Planner_Button";
			this->Planner_Button->Size = System::Drawing::Size(168, 23);
			this->Planner_Button->TabIndex = 35;
			this->Planner_Button->Text = L"Planner";
			this->Planner_Button->UseVisualStyleBackColor = true;
			this->Planner_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Planner_Button_Click);
			// 
			// Btn_Edit_Records
			// 
			this->Btn_Edit_Records->Location = System::Drawing::Point(0, 46);
			this->Btn_Edit_Records->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Edit_Records->Name = L"Btn_Edit_Records";
			this->Btn_Edit_Records->Size = System::Drawing::Size(168, 23);
			this->Btn_Edit_Records->TabIndex = 36;
			this->Btn_Edit_Records->Text = L"Edit Records";
			this->Btn_Edit_Records->UseVisualStyleBackColor = true;
			this->Btn_Edit_Records->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Edit_Records_Click);
			// 
			// Booking_Staff
			// 
			this->Booking_Staff->Location = System::Drawing::Point(0, 0);
			this->Booking_Staff->Name = L"Booking_Staff";
			this->Booking_Staff->Size = System::Drawing::Size(168, 23);
			this->Booking_Staff->TabIndex = 27;
			this->Booking_Staff->Text = L"Staff";
			this->Booking_Staff->UseVisualStyleBackColor = true;
			this->Booking_Staff->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Staff_MouseHover);
			// 
			// Register_Button
			// 
			this->Register_Button->Location = System::Drawing::Point(0, 23);
			this->Register_Button->Margin = System::Windows::Forms::Padding(2);
			this->Register_Button->Name = L"Register_Button";
			this->Register_Button->Size = System::Drawing::Size(168, 23);
			this->Register_Button->TabIndex = 33;
			this->Register_Button->Text = L"Register";
			this->Register_Button->UseVisualStyleBackColor = true;
			this->Register_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Register_Button_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Btn_Room_Types);
			this->panel3->Controls->Add(this->Btn_Guest_Info);
			this->panel3->Controls->Add(this->Btn_User_Types);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->Booking_GH_Info);
			this->panel3->Location = System::Drawing::Point(443, 21);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(169, 118);
			this->panel3->TabIndex = 30;
			this->panel3->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel3_MouseLeave);
			// 
			// Btn_Room_Types
			// 
			this->Btn_Room_Types->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Room_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Room_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Room_Types->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Room_Types->Location = System::Drawing::Point(0, 92);
			this->Btn_Room_Types->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Room_Types->Name = L"Btn_Room_Types";
			this->Btn_Room_Types->Size = System::Drawing::Size(168, 23);
			this->Btn_Room_Types->TabIndex = 72;
			this->Btn_Room_Types->Text = L"Room Types";
			this->Btn_Room_Types->UseVisualStyleBackColor = false;
			this->Btn_Room_Types->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Room_Types_Click);
			// 
			// Btn_User_Types
			// 
			this->Btn_User_Types->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_User_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_User_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_User_Types->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_User_Types->Location = System::Drawing::Point(0, 69);
			this->Btn_User_Types->Margin = System::Windows::Forms::Padding(2);
			this->Btn_User_Types->Name = L"Btn_User_Types";
			this->Btn_User_Types->Size = System::Drawing::Size(168, 23);
			this->Btn_User_Types->TabIndex = 73;
			this->Btn_User_Types->Text = L"User Types";
			this->Btn_User_Types->UseVisualStyleBackColor = false;
			this->Btn_User_Types->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_User_Types_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 23);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Guest House Facilities";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Reception::button4_Click);
			// 
			// Booking_GH_Info
			// 
			this->Booking_GH_Info->Location = System::Drawing::Point(0, 0);
			this->Booking_GH_Info->Name = L"Booking_GH_Info";
			this->Booking_GH_Info->Size = System::Drawing::Size(168, 23);
			this->Booking_GH_Info->TabIndex = 28;
			this->Booking_GH_Info->Text = L"Guest House Info";
			this->Booking_GH_Info->UseVisualStyleBackColor = true;
			this->Booking_GH_Info->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_GH_Info_MouseHover);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Booking_Room);
			this->panel4->Controls->Add(this->Btn_Add_Room);
			this->panel4->Controls->Add(this->Btn_Status_Room);
			this->panel4->Controls->Add(this->Btn_Floor_Map);
			this->panel4->Location = System::Drawing::Point(649, 21);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(169, 92);
			this->panel4->TabIndex = 31;
			this->panel4->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel4_MouseLeave);
			// 
			// Booking_Room
			// 
			this->Booking_Room->Location = System::Drawing::Point(0, 0);
			this->Booking_Room->Name = L"Booking_Room";
			this->Booking_Room->Size = System::Drawing::Size(168, 23);
			this->Booking_Room->TabIndex = 29;
			this->Booking_Room->Text = L"Room Details";
			this->Booking_Room->UseVisualStyleBackColor = true;
			this->Booking_Room->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Room_MouseHover);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->User_Button);
			this->panel5->Controls->Add(this->Btn_Users_Approval);
			this->panel5->Controls->Add(this->Btn_Housekeeping_App);
			this->panel5->Controls->Add(this->Btn_Customer_Feedback);
			this->panel5->Location = System::Drawing::Point(827, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(169, 118);
			this->panel5->TabIndex = 31;
			this->panel5->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel5_MouseLeave);
			// 
			// User_Button
			// 
			this->User_Button->Location = System::Drawing::Point(0, 0);
			this->User_Button->Name = L"User_Button";
			this->User_Button->Size = System::Drawing::Size(170, 23);
			this->User_Button->TabIndex = 28;
			this->User_Button->Text = L"Users";
			this->User_Button->UseVisualStyleBackColor = true;
			this->User_Button->MouseHover += gcnew System::EventHandler(this, &Form_Reception::User_Button_MouseHover);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Controls->Add(this->Btn_Read_Feedback);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->Btn_Unread_Feedback);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->Btn_All_Feedback);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->Btn_Create);
			this->panel7->Location = System::Drawing::Point(12, 174);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(262, 531);
			this->panel7->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(129, 171);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 80;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form_Reception::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(129, 142);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 79;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Reception::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(129, 96);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 78;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Reception::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(129, 49);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 36;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Reception::button8_Click);
			// 
			// Btn_Read_Feedback
			// 
			this->Btn_Read_Feedback->Location = System::Drawing::Point(32, 456);
			this->Btn_Read_Feedback->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Read_Feedback->Name = L"Btn_Read_Feedback";
			this->Btn_Read_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_Read_Feedback->TabIndex = 34;
			this->Btn_Read_Feedback->Text = L"Read";
			this->Btn_Read_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Read_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Read_Feedback_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::OrangeRed;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(2, 171);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 48);
			this->button5->TabIndex = 77;
			this->button5->Text = L"Add Mess Details";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Reception::button5_Click);
			// 
			// Btn_Unread_Feedback
			// 
			this->Btn_Unread_Feedback->Location = System::Drawing::Point(32, 389);
			this->Btn_Unread_Feedback->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Unread_Feedback->Name = L"Btn_Unread_Feedback";
			this->Btn_Unread_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_Unread_Feedback->TabIndex = 33;
			this->Btn_Unread_Feedback->Text = L"Unread";
			this->Btn_Unread_Feedback->UseVisualStyleBackColor = true;
			this->Btn_Unread_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Unread_Feedback_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::OrangeRed;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(2, 96);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 48);
			this->button7->TabIndex = 75;
			this->button7->Text = L"Add Restaurant";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Reception::button7_Click);
			// 
			// Btn_All_Feedback
			// 
			this->Btn_All_Feedback->Location = System::Drawing::Point(2, 321);
			this->Btn_All_Feedback->Margin = System::Windows::Forms::Padding(2);
			this->Btn_All_Feedback->Name = L"Btn_All_Feedback";
			this->Btn_All_Feedback->Size = System::Drawing::Size(114, 52);
			this->Btn_All_Feedback->TabIndex = 32;
			this->Btn_All_Feedback->Text = L"All";
			this->Btn_All_Feedback->UseVisualStyleBackColor = true;
			this->Btn_All_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_All_Feedback_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::OrangeRed;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(2, 245);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 48);
			this->button6->TabIndex = 76;
			this->button6->Text = L"Add Tourist Places";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Reception::button6_Click);
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::OrangeRed;
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_Create->Location = System::Drawing::Point(1, 24);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(94, 48);
			this->Btn_Create->TabIndex = 74;
			this->Btn_Create->Text = L"Add Cab Services";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Create_Click);
			// 
			// Form_Reception
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Button_Logout);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Btn_Staff_Info);
			this->Name = L"Form_Reception";
			this->Text = L"Form_Reception";
			this->Load += gcnew System::EventHandler(this, &Form_Reception::Form_Reception_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::Form_Reception_MouseEnter);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Guest_House_Info(panel1,panel2,panel3,panel4,panel5));
				 //Output_Panel->BringToFront();
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
			  Output_Panel->Controls->Add(gcnew UserControl_Approve_Users(panel1,panel2,panel3,panel4,panel5));
			  
		 }
private: System::Void Btn_Add_Room_Click(System::Object^  sender, System::EventArgs^  e) {

			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Add_Room1(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Btn_Status_Room_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Status_Room(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Btn_Floor_Map_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Floor_Map(panel1,panel2,panel3,panel4,panel5));
		 }
public: System::Void Btn_Booking_App_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Booking_Approval);
		 }
private: System::Void Btn_Customer_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback(panel1,panel2,panel3,panel4,panel5,0));
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Generate_Bill);
		 }
private: System::Void Btn_Housekeeping_App_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Housekeeping_Approval(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Booking_Display);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_GuestHouseDetails(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Btn_User_Types_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_User_Types(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Btn_Room_Types_Click(System::Object^  sender, System::EventArgs^  e) {
			Output_Panel->Controls->Clear();
			Output_Panel->Controls->Add(gcnew UserControl_Room_Types2(panel1,panel2,panel3,panel4,panel5));
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
			 //Output_Panel->Controls->Add(gcnew UserControl_Staff_Leave_Approval(panel1,panel2,panel3,panel4,panel5));
		 }


//UserControl_Guest_House_Info->UC_MouseEnter += gcnew System::EventHandler(this, &Form_Reception::UserControl_ButtonClick);
private: System::Void UserControl_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("3");
		 }

private: System::Void Form_Reception_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(168, 23);
				 this->panel2->Size = System::Drawing::Size(168, 23);
				 this->panel3->Size = System::Drawing::Size(168, 23);
				 this->panel4->Size = System::Drawing::Size(168, 23);
				 this->panel5->Size = System::Drawing::Size(168, 23);
			 }
private: System::Void Output_Panel_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(168, 23);
				 this->panel2->Size = System::Drawing::Size(168, 23);
				 this->panel3->Size = System::Drawing::Size(168, 23);
				 this->panel4->Size = System::Drawing::Size(168, 23);
				 this->panel5->Size = System::Drawing::Size(168, 23);
			 }
//Booking
private: System::Void Booking_Btn_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Size = System::Drawing::Size(169, 92);
			 this->panel1->BringToFront();
		 }
private: System::Void panel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Size = System::Drawing::Size(168, 23);
		 }

//Room Details 
private: System::Void Booking_Room_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 this->panel4->Size = System::Drawing::Size(169, 92);
			 this->panel4->BringToFront();
		 }
private: System::Void panel4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->panel4->Size = System::Drawing::Size(168, 23);
		 }

//Users
private: System::Void User_Button_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 this->panel5->Size = System::Drawing::Size(169, 92);
			 this->panel5->BringToFront();
		 }
private: System::Void panel5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->panel5->Size = System::Drawing::Size(168, 23);
		 }
// Guest House Info
private: System::Void Booking_GH_Info_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 this->panel3->Size = System::Drawing::Size(169, 115);
			 this->panel3->BringToFront();
		 }
private: System::Void panel3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->panel3->Size = System::Drawing::Size(168, 23);
		 }
//Staff
private: System::Void Booking_Staff_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 this->panel2->Size = System::Drawing::Size(169, 138);
			 this->panel2->BringToFront();
		 }
private: System::Void panel2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 this->panel2->Size = System::Drawing::Size(168, 23);
		 }


private: System::Void Planner_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,0));
		 }
private: System::Void Leave_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 //Output_Panel->Controls->Add(gcnew UserControl_Staff_Leave(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Btn_Edit_Records_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Record(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void Register_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Register(panel1,panel2,panel3,panel4,panel5));
		 }

private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Add_Cab_Details(panel1,panel2,panel3,panel4,panel5));
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Add_Restaurant(panel1,panel2,panel3,panel4,panel5));
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Add_Mess(panel1,panel2,panel3,panel4,panel5));
			 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Add_Places(panel1,panel2,panel3,panel4,panel5));
			 }
private: System::Void Btn_All_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback(panel1,panel2,panel3,panel4,panel5,2));
		 }
private: System::Void Btn_Unread_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback(panel1,panel2,panel3,panel4,panel5,0));
		 }
private: System::Void Btn_Read_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback(panel1,panel2,panel3,panel4,panel5,1));
		 }

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,0));
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,1));
		 }

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,2));
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,3));
		 }
private: System::Void Button_Add_Charges_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Extra_Charges(panel1,panel2,panel3,panel4,panel5));
		 }
};
}
