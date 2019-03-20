#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Customer_Homepage
	/// </summary>
	public ref class UserControl_Customer_Homepage : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Customer_Homepage(void)
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
		~UserControl_Customer_Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Book;
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
			this->Button_Book = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_Book
			// 
			this->Button_Book->Location = System::Drawing::Point(19, 30);
			this->Button_Book->Name = L"Button_Book";
			this->Button_Book->Size = System::Drawing::Size(194, 95);
			this->Button_Book->TabIndex = 0;
			this->Button_Book->Text = L"New Booking";
			this->Button_Book->UseVisualStyleBackColor = true;
			// 
			// UserControl_Customer_Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Button_Book);
			this->Name = L"UserControl_Customer_Homepage";
			this->Size = System::Drawing::Size(694, 491);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
