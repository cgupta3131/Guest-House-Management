#pragma once
#include "UserControl_Add_Cab_Details.h"
#include "UserControl_Add_Restaurant.h"
#include "UserControl_Add_Places.h"
#include "UserControl_Add_Mess.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_GuestHouseDetails
	/// </summary>
	public ref class UserControl_GuestHouseDetails : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;
		UserControl_GuestHouseDetails(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
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
		~UserControl_GuestHouseDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Panel^  panel1;



	private: 
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(23, 92);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(670, 325);
			this->panel1->TabIndex = 71;
			// 
			// UserControl_GuestHouseDetails
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->Controls->Add(this->panel1);
			this->Location = System::Drawing::Point(31, 111);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserControl_GuestHouseDetails";
			this->Size = System::Drawing::Size(746, 434);
			this->Load += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::UserControl_GuestHouseDetails_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_GuestHouseDetails::mymousenter);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_Create_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 //panel1->Controls->Add(gcnew UserControl_Add_Cab_Details);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 //panel1->Controls->Add(gcnew UserControl_Add_Places);
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				 //panel1->Controls->Add(gcnew UserControl_Add_Restaurant);
			 }
	
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Controls->Clear();
				//panel1->Controls->Add(gcnew UserControl_Add_Mess);
			 }
	private: System::Void UserControl_GuestHouseDetails_Load(System::Object^  sender, System::EventArgs^  e) {
				 //(gcnew UserControl_Add_Cab_Details(panel1,panel2,panel3,panel4,panel5));
			 }
			 
	private: System::Void mymousenter(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(173, 44);
				 pn2->Size = System::Drawing::Size(173, 44);
				 pn3->Size = System::Drawing::Size(173, 44);
				 pn4->Size = System::Drawing::Size(173, 44);
				 pn5->Size = System::Drawing::Size(173, 44);

			 }
};
}
