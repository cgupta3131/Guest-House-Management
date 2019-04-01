#pragma once

#include "UserControl_Staff_View_Details.h"
#include "UserControl_Staff_Edit_Details.h"
#include "UserControl_Staff_Record.h"

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
	private: System::Windows::Forms::Button^  Leave_Button;








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
			this->Leave_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_Edit
			// 
			this->Button_Edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Button_Edit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button_Edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_Edit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Button_Edit->Location = System::Drawing::Point(357, -1);
			this->Button_Edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_Edit->Name = L"Button_Edit";
			this->Button_Edit->Size = System::Drawing::Size(163, 75);
			this->Button_Edit->TabIndex = 0;
			this->Button_Edit->Text = L"Edit";
			this->Button_Edit->UseVisualStyleBackColor = false;
			this->Button_Edit->Click += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Button_Edit_Click);
			// 
			// Button_View
			// 
			this->Button_View->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Button_View->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button_View->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_View->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Button_View->Location = System::Drawing::Point(189, -1);
			this->Button_View->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_View->Name = L"Button_View";
			this->Button_View->Size = System::Drawing::Size(163, 75);
			this->Button_View->TabIndex = 1;
			this->Button_View->Text = L"View";
			this->Button_View->UseVisualStyleBackColor = false;
			this->Button_View->Click += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Button_View_Click);
			// 
			// Details_Panel
			// 
			this->Details_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Details_Panel->Location = System::Drawing::Point(11, 79);
			this->Details_Panel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Details_Panel->Name = L"Details_Panel";
			this->Details_Panel->Size = System::Drawing::Size(916, 535);
			this->Details_Panel->TabIndex = 2;
			this->Details_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Edit_Staff_Details::Details_Panel_Paint);
			// 
			// Leave_Button
			// 
			this->Leave_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(56)), 
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->Leave_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Leave_Button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Leave_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(253)), 
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->Leave_Button->Location = System::Drawing::Point(525, -1);
			this->Leave_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Leave_Button->Name = L"Leave_Button";
			this->Leave_Button->Size = System::Drawing::Size(163, 75);
			this->Leave_Button->TabIndex = 3;
			this->Leave_Button->Text = L"Leave Record";
			this->Leave_Button->UseVisualStyleBackColor = false;
			this->Leave_Button->Click += gcnew System::EventHandler(this, &Form_Edit_Staff_Details::Leave_Button_Click);
			// 
			// Form_Edit_Staff_Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(184)), 
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->ClientSize = System::Drawing::Size(939, 606);
			this->Controls->Add(this->Leave_Button);
			this->Controls->Add(this->Details_Panel);
			this->Controls->Add(this->Button_View);
			this->Controls->Add(this->Button_Edit);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(957, 653);
			this->MinimumSize = System::Drawing::Size(957, 653);
			this->Name = L"Form_Edit_Staff_Details";
			this->Text = L"`";
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
	private: System::Void Leave_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 Details_Panel->Controls->Clear();
				 //Panel ^pl;
				 Details_Panel->Controls->Add(gcnew UserControl_Staff_Record);
			 }
	private: System::Void Details_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	};
}
