#pragma once

#include "UserControl_View_Cab.h"
#include "UserControl_View_Restaurants.h"
#include "UserControl_View_Mess.h"
#include "UserControl_View_TouristPlaces.h"
namespace GuestHouseManagement {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Show_Guest_House_Facilities
	/// </summary>
	public ref class Form_Show_Guest_House_Facilities : public System::Windows::Forms::Form
	{
	public:
		Form_Show_Guest_House_Facilities(void)
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
		~Form_Show_Guest_House_Facilities()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Output_Panel;
	protected: 
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Output_Panel
			// 
			this->Output_Panel->Location = System::Drawing::Point(252, -1);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(699, 487);
			this->Output_Panel->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OrangeRed;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->button4->Location = System::Drawing::Point(17, 332);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(223, 49);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Restaurants";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form_Show_Guest_House_Facilities::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OrangeRed;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->button3->Location = System::Drawing::Point(17, 239);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(223, 49);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Tourist HotSpots ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form_Show_Guest_House_Facilities::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->button2->Location = System::Drawing::Point(17, 150);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(223, 49);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Mess Details";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form_Show_Guest_House_Facilities::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->button1->Location = System::Drawing::Point(17, 65);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 49);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Cab Details";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form_Show_Guest_House_Facilities::button1_Click);
			// 
			// Form_Show_Guest_House_Facilities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(976, 487);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form_Show_Guest_House_Facilities";
			this->Text = L"Guest House Facilities";
			this->Load += gcnew System::EventHandler(this, &Form_Show_Guest_House_Facilities::Form_Show_Guest_House_Facilities_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_View_Cab);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_View_Mess);
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_View_TouristPlaces);
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_View_Restaurants);
			 }
	private: System::Void Form_Show_Guest_House_Facilities_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
