#pragma once
#include "UserControl_Guest_House_Info.h"

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
		Form_Reception(void)
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
			this->SuspendLayout();
			// 
			// Btn_Booking_Info
			// 
			this->Btn_Booking_Info->Location = System::Drawing::Point(43, 352);
			this->Btn_Booking_Info->Name = L"Btn_Booking_Info";
			this->Btn_Booking_Info->Size = System::Drawing::Size(166, 98);
			this->Btn_Booking_Info->TabIndex = 1;
			this->Btn_Booking_Info->Text = L"Booking Info";
			this->Btn_Booking_Info->UseVisualStyleBackColor = true;
			// 
			// Btn_Staff_Info
			// 
			this->Btn_Staff_Info->Location = System::Drawing::Point(43, 208);
			this->Btn_Staff_Info->Name = L"Btn_Staff_Info";
			this->Btn_Staff_Info->Size = System::Drawing::Size(166, 98);
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
			// Form_Reception
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Btn_Users_Approval);
			this->Controls->Add(this->Btn_Guest_Info);
			this->Controls->Add(this->Btn_Staff_Info);
			this->Controls->Add(this->Btn_Booking_Info);
			this->Name = L"Form_Reception";
			this->Text = L"Form_Reception";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Guest_House_Info);
		
			 }
private: System::Void Btn_Staff_Info_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
