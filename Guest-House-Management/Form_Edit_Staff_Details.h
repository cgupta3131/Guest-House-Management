#pragma once

#include "UserControl_Staff_View_Details.h"
#include "UserControl_Staff_Edit_Details.h"

namespace GuestHouseManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Edit_Staff_Details
	/// </summary>
	public ref class Form_Edit_Staff_Details : public System::Windows::Forms::Form
	{
	public:
		Form_Edit_Staff_Details(void)
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
		~Form_Edit_Staff_Details()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Edit;
	protected: 
	private: System::Windows::Forms::Button^  Button_View;
	private: System::Windows::Forms::Panel^  Details_Panel;








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
			this->Button_Edit = (gcnew System::Windows::Forms::Button());
			this->Button_View = (gcnew System::Windows::Forms::Button());
			this->Details_Panel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Button_Edit
			// 
			this->Button_Edit->Location = System::Drawing::Point(27, 232);
			this->Button_Edit->Name = L"Button_Edit";
			this->Button_Edit->Size = System::Drawing::Size(110, 54);
			this->Button_Edit->TabIndex = 0;
			this->Button_Edit->Text = L"Edit";
			this->Button_Edit->UseVisualStyleBackColor = true;
			this->Button_Edit->Click += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Button_Edit_Click);
			// 
			// Button_View
			// 
			this->Button_View->Location = System::Drawing::Point(27, 104);
			this->Button_View->Name = L"Button_View";
			this->Button_View->Size = System::Drawing::Size(110, 54);
			this->Button_View->TabIndex = 1;
			this->Button_View->Text = L"View";
			this->Button_View->UseVisualStyleBackColor = true;
			this->Button_View->Click += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Button_View_Click);
			// 
			// Details_Panel
			// 
			this->Details_Panel->Location = System::Drawing::Point(193, 24);
			this->Details_Panel->Name = L"Details_Panel";
			this->Details_Panel->Size = System::Drawing::Size(658, 502);
			this->Details_Panel->TabIndex = 2;
			// 
			// Form_Edit_Staff_Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 567);
			this->Controls->Add(this->Details_Panel);
			this->Controls->Add(this->Button_View);
			this->Controls->Add(this->Button_Edit);
			this->Name = L"Form_Edit_Staff_Details";
			this->Text = L"Form_Edit_Staff_Details";
			this->Load += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Form_Edit_Staff_Details_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Edit_Staff_Details_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern int S_ID;
				 
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Button_View_Click(System::Object^  sender, System::EventArgs^  e) {
				 Details_Panel->Controls->Clear();
				Details_Panel->Controls->Add(gcnew UserControl_Staff_View_Details);
			 }
	private: System::Void Button_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
				  Details_Panel->Controls->Clear();
				Details_Panel->Controls->Add(gcnew UserControl_Staff_Edit_Details);
			 }
};
}
