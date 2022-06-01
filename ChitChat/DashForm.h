#pragma once
#include "Contacts.h"

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashForm
	/// </summary>
	public ref class DashForm : public System::Windows::Forms::Form
	{
	public:
		DashForm(Contacts^ cont)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			lbContactsInfo->Text = "ID = " + cont->Id + "  , Name = " + cont->Fname + " " + cont->Lname +
				"  , Phone number = " + cont->Pnumber + "  ,Password = " + cont->Password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbContactsInfo;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbContactsInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1192, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome To Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbContactsInfo
			// 
			this->lbContactsInfo->AutoSize = true;
			this->lbContactsInfo->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbContactsInfo->Location = System::Drawing::Point(18, 108);
			this->lbContactsInfo->Name = L"lbContactsInfo";
			this->lbContactsInfo->Size = System::Drawing::Size(87, 30);
			this->lbContactsInfo->TabIndex = 1;
			this->lbContactsInfo->Text = L"label2";
			// 
			// DashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(30, 62);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1216, 643);
			this->Controls->Add(this->lbContactsInfo);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(11, 12, 11, 12);
			this->Name = L"DashForm";
			this->Text = L"ChitChat";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
