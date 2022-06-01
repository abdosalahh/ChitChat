#pragma once
#include "Contacts.h"

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
		}

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^ tbPnumber;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;



	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->tbPnumber = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbPnumber
			// 
			this->tbPnumber->BackColor = System::Drawing::Color::SlateGray;
			this->tbPnumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPnumber->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPnumber->ForeColor = System::Drawing::Color::White;
			this->tbPnumber->Location = System::Drawing::Point(16, 12);
			this->tbPnumber->Name = L"tbPnumber";
			this->tbPnumber->Size = System::Drawing::Size(306, 34);
			this->tbPnumber->TabIndex = 3;
			this->tbPnumber->Text = L"+01";
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::SlateGray;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::White;
			this->tbPassword->Location = System::Drawing::Point(16, 14);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(306, 34);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Orange;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSubmit->Location = System::Drawing::Point(98, 364);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(376, 51);
			this->btnSubmit->TabIndex = 5;
			this->btnSubmit->Text = L"Log in";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &LoginForm::btnSubmit_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->BackColor = System::Drawing::Color::Orange;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->llRegister->LinkColor = System::Drawing::Color::Black;
			this->llRegister->Location = System::Drawing::Point(94, 498);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(102, 36);
			this->llRegister->TabIndex = 18;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Sign up";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btnSubmit);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(332, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(550, 603);
			this->panel1->TabIndex = 19;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(16, 459);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(47, 51);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(46, 458);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(248, 52);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Do you know\?";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 510);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(489, 90);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Messages and calls are fully encrypted between the two parties. So that no one ou"
				L"tside this chat, not even ChitChat itself, can read or listen to it.";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SlateGray;
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->tbPassword);
			this->panel4->Location = System::Drawing::Point(98, 298);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(376, 57);
			this->panel4->TabIndex = 25;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(326, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(47, 51);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->tbPnumber);
			this->panel3->Location = System::Drawing::Point(98, 235);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(376, 57);
			this->panel3->TabIndex = 24;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(326, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(47, 51);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(93, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(293, 93);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Chitchat will send SMS message to verify your phone number.";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Small", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(125, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 101);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Login";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->llRegister);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(326, 603);
			this->panel2->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(26, 440);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 48);
			this->label3->TabIndex = 22;
			this->label3->Text = L"don’t have an Account\?";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Small", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 319);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(296, 96);
			this->label2->TabIndex = 21;
			this->label2->Text = L"It’s about Thinking not Typing.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(22, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 52);
			this->label1->TabIndex = 20;
			this->label1->Text = L"CHITCHAT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(24, 78);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(882, 603);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Urdu Typesetting", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(9, 15, 9, 15);
			this->Name = L"LoginForm";
			this->Text = L"LogIn";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: static Contacts^ cont = nullptr;

	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Pnumber = this->tbPnumber->Text;
		String^ Password = this->tbPassword->Text;

		if (Pnumber->Length == 0 || Password->Length == 0) {
			MessageBox::Show("Please enter phone number and password");
			return;
		}

		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Contacts WHERE Pnumber=@Pnumber AND Password=@Password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Pnumber", Pnumber);
			command.Parameters->AddWithValue("@Password", Password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				cont = gcnew Contacts;
				cont->Id = reader->GetInt32(0);
				cont->Fname = reader->GetString(1);
				cont->Lname = reader->GetString(2);
				cont->Pnumber = reader->GetString(3);
				cont->Password = reader->GetString(4);
				cont->LastSeen = reader->GetString(5);

				sqlConn.Close();
				this->Close();
			}
			else {
				MessageBox::Show("Phone number or Password is incorrect");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to Connect to database");
		}
	}

	public:bool switchToRegister = false;
	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
	};
}
