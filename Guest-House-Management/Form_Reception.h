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
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  sub_lbl;
	private: System::Windows::Forms::Button^  Button_Logout;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Reception::typeid));
			this->Button_Logout = (gcnew System::Windows::Forms::Button());
			this->Btn_Guest_Info = (gcnew System::Windows::Forms::Button());
			this->Btn_Users_Approval = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->Btn_Read_Feedback = (gcnew System::Windows::Forms::Button());
			this->Btn_Unread_Feedback = (gcnew System::Windows::Forms::Button());
			this->Btn_All_Feedback = (gcnew System::Windows::Forms::Button());
			this->Btn_Add_Room = (gcnew System::Windows::Forms::Button());
			this->Btn_Status_Room = (gcnew System::Windows::Forms::Button());
			this->Btn_Floor_Map = (gcnew System::Windows::Forms::Button());
			this->Btn_Booking_App = (gcnew System::Windows::Forms::Button());
			this->Btn_Customer_Feedback = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Btn_Housekeeping_App = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->Booking_Btn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Leave_Button = (gcnew System::Windows::Forms::Button());
			this->Booking_Staff = (gcnew System::Windows::Forms::Button());
			this->Planner_Button = (gcnew System::Windows::Forms::Button());
			this->Btn_Edit_Records = (gcnew System::Windows::Forms::Button());
			this->Register_Button = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Btn_Room_Types = (gcnew System::Windows::Forms::Button());
			this->Booking_GH_Info = (gcnew System::Windows::Forms::Button());
			this->Btn_User_Types = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Booking_Room = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->User_Button = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->sub_lbl = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Btn_Create = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// Button_Logout
			// 
			this->Button_Logout->BackColor = System::Drawing::Color::Transparent;
			this->Button_Logout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Button_Logout->FlatAppearance->BorderSize = 0;
			this->Button_Logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button_Logout->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_Logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Button_Logout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button_Logout.Image")));
			this->Button_Logout->Location = System::Drawing::Point(-1, 646);
			this->Button_Logout->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Button_Logout->Name = L"Button_Logout";
			this->Button_Logout->Size = System::Drawing::Size(211, 63);
			this->Button_Logout->TabIndex = 27;
			this->Button_Logout->UseVisualStyleBackColor = false;
			this->Button_Logout->Click += gcnew System::EventHandler(this, &Form_Reception::Button_Logout_Click);
			// 
			// Btn_Guest_Info
			// 
			this->Btn_Guest_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Guest_Info->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Guest_Info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Guest_Info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Guest_Info->Location = System::Drawing::Point(0, 108);
			this->Btn_Guest_Info->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Guest_Info->Name = L"Btn_Guest_Info";
			this->Btn_Guest_Info->Size = System::Drawing::Size(231, 54);
			this->Btn_Guest_Info->TabIndex = 3;
			this->Btn_Guest_Info->Text = L"Details";
			this->Btn_Guest_Info->UseVisualStyleBackColor = false;
			this->Btn_Guest_Info->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click);
			// 
			// Btn_Users_Approval
			// 
			this->Btn_Users_Approval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Users_Approval->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Users_Approval->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Users_Approval->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Users_Approval->Location = System::Drawing::Point(0, 54);
			this->Btn_Users_Approval->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Users_Approval->Name = L"Btn_Users_Approval";
			this->Btn_Users_Approval->Size = System::Drawing::Size(231, 54);
			this->Btn_Users_Approval->TabIndex = 4;
			this->Btn_Users_Approval->Text = L"Users Approval";
			this->Btn_Users_Approval->UseVisualStyleBackColor = false;
			this->Btn_Users_Approval->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Users_Approval_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->AutoScroll = true;
			this->Output_Panel->AutoSize = true;
			this->Output_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(229)), 
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->Output_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Output_Panel.BackgroundImage")));
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Output_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Output_Panel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Output_Panel->Location = System::Drawing::Point(216, 54);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(0);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(1158, 681);
			this->Output_Panel->TabIndex = 16;
			this->Output_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Reception::Output_Panel_Paint);
			this->Output_Panel->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::Output_Panel_MouseEnter);
			// 
			// Btn_Read_Feedback
			// 
			this->Btn_Read_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Read_Feedback->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Read_Feedback->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Btn_Read_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Read_Feedback->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Btn_Read_Feedback.Image")));
			this->Btn_Read_Feedback->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Read_Feedback->Location = System::Drawing::Point(-1, 252);
			this->Btn_Read_Feedback->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Read_Feedback->Name = L"Btn_Read_Feedback";
			this->Btn_Read_Feedback->Size = System::Drawing::Size(211, 87);
			this->Btn_Read_Feedback->TabIndex = 34;
			this->Btn_Read_Feedback->Text = L"Read";
			this->Btn_Read_Feedback->UseVisualStyleBackColor = false;
			this->Btn_Read_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Read_Feedback_Click);
			// 
			// Btn_Unread_Feedback
			// 
			this->Btn_Unread_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Unread_Feedback->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Unread_Feedback->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->Btn_Unread_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Unread_Feedback->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Btn_Unread_Feedback.Image")));
			this->Btn_Unread_Feedback->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Unread_Feedback->Location = System::Drawing::Point(0, 165);
			this->Btn_Unread_Feedback->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Unread_Feedback->Name = L"Btn_Unread_Feedback";
			this->Btn_Unread_Feedback->Size = System::Drawing::Size(211, 87);
			this->Btn_Unread_Feedback->TabIndex = 33;
			this->Btn_Unread_Feedback->Text = L"Unread";
			this->Btn_Unread_Feedback->UseVisualStyleBackColor = false;
			this->Btn_Unread_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Unread_Feedback_Click);
			this->Btn_Unread_Feedback->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::okkie2);
			// 
			// Btn_All_Feedback
			// 
			this->Btn_All_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_All_Feedback->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_All_Feedback->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_All_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_All_Feedback->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Btn_All_Feedback.Image")));
			this->Btn_All_Feedback->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_All_Feedback->Location = System::Drawing::Point(0, 340);
			this->Btn_All_Feedback->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_All_Feedback->Name = L"Btn_All_Feedback";
			this->Btn_All_Feedback->Size = System::Drawing::Size(211, 87);
			this->Btn_All_Feedback->TabIndex = 32;
			this->Btn_All_Feedback->Text = L"All";
			this->Btn_All_Feedback->UseVisualStyleBackColor = false;
			this->Btn_All_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_All_Feedback_Click);
			// 
			// Btn_Add_Room
			// 
			this->Btn_Add_Room->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Add_Room->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Add_Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Add_Room->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Add_Room->Location = System::Drawing::Point(0, 54);
			this->Btn_Add_Room->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Add_Room->Name = L"Btn_Add_Room";
			this->Btn_Add_Room->Size = System::Drawing::Size(231, 54);
			this->Btn_Add_Room->TabIndex = 17;
			this->Btn_Add_Room->Text = L"Add Room";
			this->Btn_Add_Room->UseVisualStyleBackColor = false;
			this->Btn_Add_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Add_Room_Click);
			// 
			// Btn_Status_Room
			// 
			this->Btn_Status_Room->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Status_Room->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Status_Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Status_Room->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Status_Room->Location = System::Drawing::Point(0, 108);
			this->Btn_Status_Room->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Status_Room->Name = L"Btn_Status_Room";
			this->Btn_Status_Room->Size = System::Drawing::Size(231, 54);
			this->Btn_Status_Room->TabIndex = 18;
			this->Btn_Status_Room->Text = L"Room Status";
			this->Btn_Status_Room->UseVisualStyleBackColor = false;
			this->Btn_Status_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Status_Room_Click);
			// 
			// Btn_Floor_Map
			// 
			this->Btn_Floor_Map->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Floor_Map->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Floor_Map->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Floor_Map->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Floor_Map->Location = System::Drawing::Point(0, 162);
			this->Btn_Floor_Map->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Floor_Map->Name = L"Btn_Floor_Map";
			this->Btn_Floor_Map->Size = System::Drawing::Size(231, 54);
			this->Btn_Floor_Map->TabIndex = 20;
			this->Btn_Floor_Map->Text = L"Floor Map";
			this->Btn_Floor_Map->UseVisualStyleBackColor = false;
			this->Btn_Floor_Map->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Floor_Map_Click);
			// 
			// Btn_Booking_App
			// 
			this->Btn_Booking_App->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Booking_App->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Booking_App->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Booking_App->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Booking_App->Location = System::Drawing::Point(0, 108);
			this->Btn_Booking_App->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Booking_App->Name = L"Btn_Booking_App";
			this->Btn_Booking_App->Size = System::Drawing::Size(231, 54);
			this->Btn_Booking_App->TabIndex = 21;
			this->Btn_Booking_App->Text = L"Booking Approval";
			this->Btn_Booking_App->UseVisualStyleBackColor = false;
			this->Btn_Booking_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Booking_App_Click);
			// 
			// Btn_Customer_Feedback
			// 
			this->Btn_Customer_Feedback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Customer_Feedback->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Customer_Feedback->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Customer_Feedback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Customer_Feedback->Location = System::Drawing::Point(0, 162);
			this->Btn_Customer_Feedback->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Customer_Feedback->Name = L"Btn_Customer_Feedback";
			this->Btn_Customer_Feedback->Size = System::Drawing::Size(231, 54);
			this->Btn_Customer_Feedback->TabIndex = 22;
			this->Btn_Customer_Feedback->Text = L"Feedback";
			this->Btn_Customer_Feedback->UseVisualStyleBackColor = false;
			this->Btn_Customer_Feedback->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Customer_Feedback_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button1->Location = System::Drawing::Point(0, 217);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 54);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Generate Bill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Reception::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button2->Location = System::Drawing::Point(0, 54);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 54);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Display Bookings";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Reception::button2_Click_1);
			// 
			// Btn_Housekeeping_App
			// 
			this->Btn_Housekeeping_App->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Housekeeping_App->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Housekeeping_App->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Housekeeping_App->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Housekeeping_App->Location = System::Drawing::Point(0, 108);
			this->Btn_Housekeeping_App->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Btn_Housekeeping_App->Name = L"Btn_Housekeeping_App";
			this->Btn_Housekeeping_App->Size = System::Drawing::Size(231, 54);
			this->Btn_Housekeeping_App->TabIndex = 25;
			this->Btn_Housekeeping_App->Text = L"Housekeeping";
			this->Btn_Housekeeping_App->UseVisualStyleBackColor = false;
			this->Btn_Housekeeping_App->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Housekeeping_App_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button3->Location = System::Drawing::Point(0, 271);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 54);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Leave Approval";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Reception::button3_Click_1);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->Booking_Btn);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->Btn_Booking_App);
			this->panel1->Location = System::Drawing::Point(448, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(231, 271);
			this->panel1->TabIndex = 28;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Reception::panel1_Paint);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel1_MouseLeave);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button12->Location = System::Drawing::Point(0, 162);
			this->button12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(231, 54);
			this->button12->TabIndex = 27;
			this->button12->Text = L"Extra Charges";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form_Reception::button12_Click);
			// 
			// Booking_Btn
			// 
			this->Booking_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Booking_Btn->FlatAppearance->BorderSize = 0;
			this->Booking_Btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Booking_Btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Booking_Btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Booking_Btn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Booking_Btn.Image")));
			this->Booking_Btn->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Booking_Btn->Location = System::Drawing::Point(0, 0);
			this->Booking_Btn->Margin = System::Windows::Forms::Padding(0);
			this->Booking_Btn->Name = L"Booking_Btn";
			this->Booking_Btn->Size = System::Drawing::Size(231, 54);
			this->Booking_Btn->TabIndex = 2;
			this->Booking_Btn->Text = L"Booking";
			this->Booking_Btn->UseVisualStyleBackColor = false;
			this->Booking_Btn->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Btn_MouseHover);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Leave_Button);
			this->panel2->Controls->Add(this->Booking_Staff);
			this->panel2->Controls->Add(this->Planner_Button);
			this->panel2->Controls->Add(this->Btn_Edit_Records);
			this->panel2->Controls->Add(this->Register_Button);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(680, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(231, 325);
			this->panel2->TabIndex = 29;
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel2_MouseLeave);
			// 
			// Leave_Button
			// 
			this->Leave_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Leave_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Leave_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Leave_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Leave_Button->Location = System::Drawing::Point(0, 217);
			this->Leave_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Leave_Button->Name = L"Leave_Button";
			this->Leave_Button->Size = System::Drawing::Size(231, 54);
			this->Leave_Button->TabIndex = 34;
			this->Leave_Button->Text = L"Leave Request";
			this->Leave_Button->UseVisualStyleBackColor = false;
			this->Leave_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Leave_Button_Click);
			// 
			// Booking_Staff
			// 
			this->Booking_Staff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Booking_Staff->FlatAppearance->BorderSize = 0;
			this->Booking_Staff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Booking_Staff->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Booking_Staff->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Booking_Staff->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Booking_Staff.Image")));
			this->Booking_Staff->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Booking_Staff->Location = System::Drawing::Point(0, 0);
			this->Booking_Staff->Margin = System::Windows::Forms::Padding(0);
			this->Booking_Staff->Name = L"Booking_Staff";
			this->Booking_Staff->Size = System::Drawing::Size(231, 54);
			this->Booking_Staff->TabIndex = 27;
			this->Booking_Staff->Text = L"Staff";
			this->Booking_Staff->UseVisualStyleBackColor = false;
			this->Booking_Staff->Click += gcnew System::EventHandler(this, &Form_Reception::Booking_Staff_Click);
			this->Booking_Staff->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Staff_MouseHover);
			// 
			// Planner_Button
			// 
			this->Planner_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Planner_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Planner_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Planner_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Planner_Button->Location = System::Drawing::Point(0, 162);
			this->Planner_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Planner_Button->Name = L"Planner_Button";
			this->Planner_Button->Size = System::Drawing::Size(231, 54);
			this->Planner_Button->TabIndex = 35;
			this->Planner_Button->Text = L"Planner";
			this->Planner_Button->UseVisualStyleBackColor = false;
			this->Planner_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Planner_Button_Click);
			// 
			// Btn_Edit_Records
			// 
			this->Btn_Edit_Records->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Edit_Records->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Edit_Records->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Edit_Records->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), 
				static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Edit_Records->Location = System::Drawing::Point(0, 108);
			this->Btn_Edit_Records->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Edit_Records->Name = L"Btn_Edit_Records";
			this->Btn_Edit_Records->Size = System::Drawing::Size(231, 54);
			this->Btn_Edit_Records->TabIndex = 36;
			this->Btn_Edit_Records->Text = L"Edit Records";
			this->Btn_Edit_Records->UseVisualStyleBackColor = false;
			this->Btn_Edit_Records->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Edit_Records_Click);
			// 
			// Register_Button
			// 
			this->Register_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Register_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Register_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Register_Button->Location = System::Drawing::Point(0, 54);
			this->Register_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Register_Button->Name = L"Register_Button";
			this->Register_Button->Size = System::Drawing::Size(231, 58);
			this->Register_Button->TabIndex = 33;
			this->Register_Button->Text = L"Register";
			this->Register_Button->UseVisualStyleBackColor = false;
			this->Register_Button->Click += gcnew System::EventHandler(this, &Form_Reception::Register_Button_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Btn_Room_Types);
			this->panel3->Controls->Add(this->Booking_GH_Info);
			this->panel3->Controls->Add(this->Btn_Guest_Info);
			this->panel3->Controls->Add(this->Btn_User_Types);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Location = System::Drawing::Point(912, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(231, 271);
			this->panel3->TabIndex = 30;
			this->panel3->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel3_MouseLeave);
			// 
			// Btn_Room_Types
			// 
			this->Btn_Room_Types->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Room_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Room_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Room_Types->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Room_Types->Location = System::Drawing::Point(0, 217);
			this->Btn_Room_Types->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Room_Types->Name = L"Btn_Room_Types";
			this->Btn_Room_Types->Size = System::Drawing::Size(231, 54);
			this->Btn_Room_Types->TabIndex = 72;
			this->Btn_Room_Types->Text = L"Room Types";
			this->Btn_Room_Types->UseVisualStyleBackColor = false;
			this->Btn_Room_Types->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Room_Types_Click);
			// 
			// Booking_GH_Info
			// 
			this->Booking_GH_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Booking_GH_Info->FlatAppearance->BorderSize = 0;
			this->Booking_GH_Info->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Booking_GH_Info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Booking_GH_Info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Booking_GH_Info->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Booking_GH_Info.Image")));
			this->Booking_GH_Info->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Booking_GH_Info->Location = System::Drawing::Point(0, 0);
			this->Booking_GH_Info->Margin = System::Windows::Forms::Padding(0);
			this->Booking_GH_Info->Name = L"Booking_GH_Info";
			this->Booking_GH_Info->Size = System::Drawing::Size(231, 54);
			this->Booking_GH_Info->TabIndex = 28;
			this->Booking_GH_Info->Text = L"GuestHouse Info";
			this->Booking_GH_Info->UseVisualStyleBackColor = false;
			this->Booking_GH_Info->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_GH_Info_MouseHover);
			// 
			// Btn_User_Types
			// 
			this->Btn_User_Types->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_User_Types->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_User_Types->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_User_Types->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_User_Types->Location = System::Drawing::Point(0, 162);
			this->Btn_User_Types->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_User_Types->Name = L"Btn_User_Types";
			this->Btn_User_Types->Size = System::Drawing::Size(231, 54);
			this->Btn_User_Types->TabIndex = 73;
			this->Btn_User_Types->Text = L"User Types";
			this->Btn_User_Types->UseVisualStyleBackColor = false;
			this->Btn_User_Types->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_User_Types_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button4->Location = System::Drawing::Point(0, 54);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(231, 54);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Facilities";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Reception::button4_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Booking_Room);
			this->panel4->Controls->Add(this->Btn_Add_Room);
			this->panel4->Controls->Add(this->Btn_Status_Room);
			this->panel4->Controls->Add(this->Btn_Floor_Map);
			this->panel4->Location = System::Drawing::Point(1141, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(231, 217);
			this->panel4->TabIndex = 31;
			this->panel4->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel4_MouseLeave);
			// 
			// Booking_Room
			// 
			this->Booking_Room->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Booking_Room->FlatAppearance->BorderSize = 0;
			this->Booking_Room->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Booking_Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Booking_Room->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Booking_Room->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Booking_Room.Image")));
			this->Booking_Room->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Booking_Room->Location = System::Drawing::Point(0, 0);
			this->Booking_Room->Margin = System::Windows::Forms::Padding(0);
			this->Booking_Room->Name = L"Booking_Room";
			this->Booking_Room->Size = System::Drawing::Size(231, 54);
			this->Booking_Room->TabIndex = 29;
			this->Booking_Room->Text = L"Room Details";
			this->Booking_Room->UseVisualStyleBackColor = false;
			this->Booking_Room->Click += gcnew System::EventHandler(this, &Form_Reception::Booking_Room_Click);
			this->Booking_Room->MouseHover += gcnew System::EventHandler(this, &Form_Reception::Booking_Room_MouseHover);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->User_Button);
			this->panel5->Controls->Add(this->Btn_Users_Approval);
			this->panel5->Controls->Add(this->Btn_Housekeeping_App);
			this->panel5->Controls->Add(this->Btn_Customer_Feedback);
			this->panel5->Location = System::Drawing::Point(216, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(231, 217);
			this->panel5->TabIndex = 31;
			this->panel5->MouseLeave += gcnew System::EventHandler(this, &Form_Reception::panel5_MouseLeave);
			// 
			// User_Button
			// 
			this->User_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->User_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->User_Button->FlatAppearance->BorderSize = 0;
			this->User_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->User_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->User_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->User_Button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"User_Button.Image")));
			this->User_Button->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->User_Button->Location = System::Drawing::Point(0, 0);
			this->User_Button->Margin = System::Windows::Forms::Padding(0);
			this->User_Button->Name = L"User_Button";
			this->User_Button->Size = System::Drawing::Size(231, 54);
			this->User_Button->TabIndex = 28;
			this->User_Button->Text = L"Users";
			this->User_Button->UseVisualStyleBackColor = false;
			this->User_Button->Click += gcnew System::EventHandler(this, &Form_Reception::User_Button_Click);
			this->User_Button->MouseHover += gcnew System::EventHandler(this, &Form_Reception::User_Button_MouseHover);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->button8);
			this->panel7->Controls->Add(this->sub_lbl);
			this->panel7->Controls->Add(this->Button_Logout);
			this->panel7->Controls->Add(this->Btn_All_Feedback);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->Btn_Unread_Feedback);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->Btn_Read_Feedback);
			this->panel7->Controls->Add(this->Btn_Create);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Location = System::Drawing::Point(3, 0);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(212, 734);
			this->panel7->TabIndex = 0;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Reception::panel7_Paint);
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::okkies);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button11.Image")));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->Location = System::Drawing::Point(0, 427);
			this->button11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(211, 87);
			this->button11->TabIndex = 80;
			this->button11->Text = L"Security";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form_Reception::button11_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->Location = System::Drawing::Point(0, 252);
			this->button9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(211, 87);
			this->button9->TabIndex = 78;
			this->button9->Text = L"RoomService";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form_Reception::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->Location = System::Drawing::Point(0, 340);
			this->button10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(211, 87);
			this->button10->TabIndex = 79;
			this->button10->Text = L"Receptionist";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form_Reception::button10_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->Location = System::Drawing::Point(0, 165);
			this->button8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(211, 87);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Housekeeping";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form_Reception::button8_Click);
			// 
			// sub_lbl
			// 
			this->sub_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(39)), 
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->sub_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sub_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->sub_lbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sub_lbl.Image")));
			this->sub_lbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sub_lbl->Location = System::Drawing::Point(-3, 4);
			this->sub_lbl->Name = L"sub_lbl";
			this->sub_lbl->Size = System::Drawing::Size(212, 54);
			this->sub_lbl->TabIndex = 81;
			this->sub_lbl->Text = L"      Admin";
			this->sub_lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(0, 340);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(211, 87);
			this->button5->TabIndex = 77;
			this->button5->Text = L"Mess Details";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form_Reception::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->Location = System::Drawing::Point(0, 252);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(211, 87);
			this->button7->TabIndex = 75;
			this->button7->Text = L"Restaurant";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form_Reception::button7_Click);
			// 
			// Btn_Create
			// 
			this->Btn_Create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Btn_Create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Create->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btn_Create->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Btn_Create->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Btn_Create.Image")));
			this->Btn_Create->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Create->Location = System::Drawing::Point(0, 165);
			this->Btn_Create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Create->Name = L"Btn_Create";
			this->Btn_Create->Size = System::Drawing::Size(211, 87);
			this->Btn_Create->TabIndex = 74;
			this->Btn_Create->Text = L"Cab Services";
			this->Btn_Create->UseVisualStyleBackColor = false;
			this->Btn_Create->Click += gcnew System::EventHandler(this, &Form_Reception::Btn_Create_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(0, 427);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(211, 87);
			this->button6->TabIndex = 76;
			this->button6->Text = L"Tourist Places";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form_Reception::button6_Click);
			// 
			// Form_Reception
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(1373, 726);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Output_Panel);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1391, 773);
			this->MinimumSize = System::Drawing::Size(1391, 773);
			this->Name = L"Form_Reception";
			this->Text = L"Reception";
			this->Load += gcnew System::EventHandler(this, &Form_Reception::Form_Reception_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &Form_Reception::Form_Reception_MouseEnter);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void button_hides()
			{
				Btn_Create->Hide();
				button5->Hide();
				button6->Hide();
				button7->Hide();
				Btn_All_Feedback->Hide();
				Btn_Read_Feedback->Hide();
				Btn_Unread_Feedback->Hide();
				button8->Hide();
				button9->Hide();
				button10->Hide();
				button11->Hide();
			}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Guest_House_Info(panel1,panel2,panel3,panel4,panel5));
				 //Output_Panel->BringToFront();
			 }
	private: System::Void Btn_Staff_Info_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff);
			 }
	private: System::Void Form_Reception_Load(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
				 this->ControlBox = false;
				 button_hides();
				 gf->Hide();
			 }
	private: System::Void Btn_Users_Approval_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Approve_Users(panel1,panel2,panel3,panel4,panel5));


			 }
	private: System::Void Btn_Add_Room_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Add_Room1(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_Status_Room_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Status_Room(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_Floor_Map_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Floor_Map(panel1,panel2,panel3,panel4,panel5));
			 }
	public: System::Void Btn_Booking_App_Click(System::Object^  sender, System::EventArgs^  e) {
				Output_Panel->Controls->Clear();
				button_hides();
				Output_Panel->Controls->Add(gcnew UserControl_Booking_Approval(panel1,panel2,panel3,panel4,panel5));
			}
	private: System::Void Btn_Customer_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Btn_All_Feedback->Show();
				 Btn_Read_Feedback->Show();
				 Btn_Unread_Feedback->Show();
				 Btn_Create->Hide();
				 button5->Hide();
				 button6->Hide();
				 button7->Hide();
				 button8->Hide();
				 button9->Hide();
				 button10->Hide();
				 button11->Hide();
				 Output_Panel->Controls->Add(gcnew UserControl_Customer_Feedback(panel1,panel2,panel3,panel4,panel5,0));
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 //Output_Panel->Controls->Add(gcnew UserControl_Generate_Bill);
				 Output_Panel->Controls->Add(gcnew UserControl_Generate_Bill(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_Housekeeping_App_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Housekeeping_Approval(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Booking_Display(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Btn_Create->Show();
				 button5->Show();
				 button6->Show();
				 button7->Show();
				 Btn_All_Feedback->Hide();
				 Btn_Read_Feedback->Hide();
				 Btn_Unread_Feedback->Hide();
				 button8->Hide();
				 button9->Hide();
				 button10->Hide();
				 button11->Hide();
				 Output_Panel->Controls->Add(gcnew UserControl_Add_Cab_Details(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_User_Types_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_User_Types(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_Room_Types_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
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
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Leave_Approval(panel1,panel2,panel3,panel4,panel5));
			 }


			 //UserControl_Guest_House_Info->UC_MouseEnter += gcnew System::EventHandler(this, &Form_Reception::UserControl_ButtonClick);
	private: System::Void UserControl_ButtonClick(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("3");
			 }

	private: System::Void Form_Reception_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(173, 44);
				 this->panel2->Size = System::Drawing::Size(173, 44);
				 this->panel3->Size = System::Drawing::Size(173, 44);
				 this->panel4->Size = System::Drawing::Size(173, 44);
				 this->panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void Output_Panel_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(173, 44);
				 this->panel2->Size = System::Drawing::Size(173, 44);
				 this->panel3->Size = System::Drawing::Size(173, 44);
				 this->panel4->Size = System::Drawing::Size(173, 44);
				 this->panel5->Size = System::Drawing::Size(173, 44);
			 }
			 //Booking
	private: System::Void Booking_Btn_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(173, 220);
				 this->panel1->BringToFront();

				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void panel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->panel1->Size = System::Drawing::Size(173, 44);
			 }

			 //Room Details 
	private: System::Void Booking_Room_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 this->panel4->Size = System::Drawing::Size(173, 176);
				 this->panel4->BringToFront();
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);

				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void panel4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->panel4->Size = System::Drawing::Size(173, 44);
			 }

			 //Users
	private: System::Void User_Button_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 this->panel5->Size = System::Drawing::Size(173, 176);
				 this->panel5->BringToFront();
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);

			 }
	private: System::Void panel5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->panel5->Size = System::Drawing::Size(173, 44);
			 }
			 // Guest House Info
	private: System::Void Booking_GH_Info_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 this->panel3->Size = System::Drawing::Size(173, 220);
				 this->panel3->BringToFront();
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);

				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void panel3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->panel3->Size = System::Drawing::Size(173, 44);
			 }
			 //Staff
	private: System::Void Booking_Staff_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 this->panel2->Size = System::Drawing::Size(173, 264);
				 this->panel2->BringToFront();
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void panel2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 this->panel2->Size = System::Drawing::Size(173, 44);
			 }


	private: System::Void Planner_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 button8->Show();
				 button9->Show();
				 button10->Show();
				 button11->Show();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Planner(panel1,panel2,panel3,panel4,panel5,0));
			 }
	private: System::Void Leave_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Leave(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Btn_Edit_Records_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Staff_Edit(panel1,panel2,panel3,panel4,panel5));
			 }
	private: System::Void Register_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 button_hides();
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
	private: System::Void Booking_Staff_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void User_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void panel7_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

			 }
	private: System::Void okkies(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void okkie2(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Size = System::Drawing::Size(173, 44);
				 panel2->Size = System::Drawing::Size(173, 44);
				 panel3->Size = System::Drawing::Size(173, 44);
				 panel4->Size = System::Drawing::Size(173, 44);
				 panel5->Size = System::Drawing::Size(173, 44);
			 }
	private: System::Void Output_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Booking_Room_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Output_Panel->Controls->Clear();
				 button_hides();
				 Output_Panel->Controls->Add(gcnew UserControl_Extra_Charges(panel1,panel2,panel3,panel4,panel5));
			 }

	};
}
