#pragma once

#include "LoginForm.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;

	public ref class CreateGroup : public System::Windows::Forms::Form
	{
	public:

		CreateGroup(void)
		{
			InitializeComponent();
		}

	protected:

		~CreateGroup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_top;

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ pnl_gname;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_gname;
	private: System::Windows::Forms::Panel^ pnl_container;
	private: System::Windows::Forms::Button^ btn_create;
	private: System::Windows::Forms::Panel^ chatBlock;
	private: System::Windows::Forms::PictureBox^ profilePic;
	private: System::Windows::Forms::PictureBox^ groupIMG;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btn_browse;
	private: System::Windows::Forms::Label^ lbl_chooseParticipants;
	private: System::Windows::Forms::Panel^ pnl_titleChoose;
	private: System::Windows::Forms::Button^ btn_finish;
	private: System::Windows::Forms::Label^ lbl_name;
	protected:

	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateGroup::typeid));
			this->pnl_top = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_gname = (gcnew System::Windows::Forms::Panel());
			this->btn_finish = (gcnew System::Windows::Forms::Button());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->groupIMG = (gcnew System::Windows::Forms::PictureBox());
			this->btn_create = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_gname = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pnl_container = (gcnew System::Windows::Forms::Panel());
			this->chatBlock = (gcnew System::Windows::Forms::Panel());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->profilePic = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_chooseParticipants = (gcnew System::Windows::Forms::Label());
			this->pnl_titleChoose = (gcnew System::Windows::Forms::Panel());
			this->pnl_top->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_gname->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupIMG))->BeginInit();
			this->chatBlock->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profilePic))->BeginInit();
			this->SuspendLayout();
			// 
			// pnl_top
			// 
			this->pnl_top->BackColor = System::Drawing::Color::Black;
			this->pnl_top->Controls->Add(this->label1);
			this->pnl_top->Controls->Add(this->label8);
			this->pnl_top->Controls->Add(this->label7);
			this->pnl_top->Controls->Add(this->label6);
			this->pnl_top->Controls->Add(this->label5);
			this->pnl_top->Controls->Add(this->label4);
			this->pnl_top->Controls->Add(this->label3);
			this->pnl_top->Controls->Add(this->label2);
			this->pnl_top->Controls->Add(this->pictureBox1);
			this->pnl_top->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_top->Location = System::Drawing::Point(0, 0);
			this->pnl_top->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_top->Name = L"pnl_top";
			this->pnl_top->Size = System::Drawing::Size(740, 182);
			this->pnl_top->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Fuchsia;
			this->label1->Location = System::Drawing::Point(56, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"N";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::Fuchsia;
			this->label8->Location = System::Drawing::Point(621, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 54);
			this->label8->TabIndex = 1;
			this->label8->Text = L"P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Fuchsia;
			this->label7->Location = System::Drawing::Point(647, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 54);
			this->label7->TabIndex = 1;
			this->label7->Text = L"U";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Fuchsia;
			this->label6->Location = System::Drawing::Point(621, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 54);
			this->label6->TabIndex = 1;
			this->label6->Text = L"O";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Fuchsia;
			this->label5->Location = System::Drawing::Point(647, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 54);
			this->label5->TabIndex = 1;
			this->label5->Text = L"R";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Fuchsia;
			this->label4->Location = System::Drawing::Point(621, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 54);
			this->label4->TabIndex = 1;
			this->label4->Text = L"G";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Fuchsia;
			this->label3->Location = System::Drawing::Point(56, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 54);
			this->label3->TabIndex = 1;
			this->label3->Text = L"W";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Fuchsia;
			this->label2->Location = System::Drawing::Point(56, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"E";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(740, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pnl_gname
			// 
			this->pnl_gname->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnl_gname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnl_gname->Controls->Add(this->btn_finish);
			this->pnl_gname->Controls->Add(this->btn_browse);
			this->pnl_gname->Controls->Add(this->groupIMG);
			this->pnl_gname->Controls->Add(this->btn_create);
			this->pnl_gname->Controls->Add(this->label9);
			this->pnl_gname->Controls->Add(this->label10);
			this->pnl_gname->Controls->Add(this->txt_gname);
			this->pnl_gname->Controls->Add(this->label12);
			this->pnl_gname->Controls->Add(this->label11);
			this->pnl_gname->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_gname->Location = System::Drawing::Point(0, 182);
			this->pnl_gname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_gname->Name = L"pnl_gname";
			this->pnl_gname->Size = System::Drawing::Size(740, 187);
			this->pnl_gname->TabIndex = 1;
			// 
			// btn_finish
			// 
			this->btn_finish->BackColor = System::Drawing::Color::Cyan;
			this->btn_finish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_finish->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btn_finish->Location = System::Drawing::Point(603, 119);
			this->btn_finish->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_finish->Name = L"btn_finish";
			this->btn_finish->Size = System::Drawing::Size(115, 42);
			this->btn_finish->TabIndex = 5;
			this->btn_finish->Text = L"Finish";
			this->btn_finish->UseVisualStyleBackColor = false;
			this->btn_finish->Click += gcnew System::EventHandler(this, &CreateGroup::btn_finish_Click);
			// 
			// btn_browse
			// 
			this->btn_browse->BackColor = System::Drawing::Color::Yellow;
			this->btn_browse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->btn_browse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_browse.Image")));
			this->btn_browse->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_browse->Location = System::Drawing::Point(48, 114);
			this->btn_browse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(280, 47);
			this->btn_browse->TabIndex = 4;
			this->btn_browse->Text = L"Browse Image ";
			this->btn_browse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_browse->UseVisualStyleBackColor = false;
			this->btn_browse->Click += gcnew System::EventHandler(this, &CreateGroup::btn_browse_Click);
			// 
			// groupIMG
			// 
			this->groupIMG->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupIMG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupIMG.BackgroundImage")));
			this->groupIMG->Location = System::Drawing::Point(424, 71);
			this->groupIMG->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupIMG->Name = L"groupIMG";
			this->groupIMG->Size = System::Drawing::Size(131, 100);
			this->groupIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->groupIMG->TabIndex = 3;
			this->groupIMG->TabStop = false;
			this->groupIMG->Click += gcnew System::EventHandler(this, &CreateGroup::groupIMG_Click);
			// 
			// btn_create
			// 
			this->btn_create->BackColor = System::Drawing::Color::Yellow;
			this->btn_create->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_create->Location = System::Drawing::Point(603, 80);
			this->btn_create->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_create->Name = L"btn_create";
			this->btn_create->Size = System::Drawing::Size(115, 39);
			this->btn_create->TabIndex = 2;
			this->btn_create->Text = L"Create";
			this->btn_create->UseVisualStyleBackColor = false;
			this->btn_create->Click += gcnew System::EventHandler(this, &CreateGroup::btn_create_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Fuchsia;
			this->label9->Location = System::Drawing::Point(27, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(362, 36);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Choose A Group Picture";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Fuchsia;
			this->label10->Location = System::Drawing::Point(27, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(343, 36);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Choose A Group Name";
			// 
			// txt_gname
			// 
			this->txt_gname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_gname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_gname->Location = System::Drawing::Point(424, 14);
			this->txt_gname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_gname->Multiline = true;
			this->txt_gname->Name = L"txt_gname";
			this->txt_gname->Size = System::Drawing::Size(312, 52);
			this->txt_gname->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Fuchsia;
			this->label12->Location = System::Drawing::Point(-7, 78);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 38);
			this->label12->TabIndex = 1;
			this->label12->Text = L"*";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Fuchsia;
			this->label11->Location = System::Drawing::Point(3, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 38);
			this->label11->TabIndex = 1;
			this->label11->Text = L"*";
			// 
			// pnl_container
			// 
			this->pnl_container->AutoScroll = true;
			this->pnl_container->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnl_container->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnl_container->Location = System::Drawing::Point(0, 449);
			this->pnl_container->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_container->Name = L"pnl_container";
			this->pnl_container->Size = System::Drawing::Size(740, 339);
			this->pnl_container->TabIndex = 4;
			// 
			// chatBlock
			// 
			this->chatBlock->Controls->Add(this->lbl_name);
			this->chatBlock->Controls->Add(this->profilePic);
			this->chatBlock->Location = System::Drawing::Point(3, 3);
			this->chatBlock->Name = L"chatBlock";
			this->chatBlock->Size = System::Drawing::Size(535, 100);
			this->chatBlock->TabIndex = 0;
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->lbl_name->Location = System::Drawing::Point(140, 37);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(112, 36);
			this->lbl_name->TabIndex = 2;
			this->lbl_name->Text = L"label13";
			// 
			// profilePic
			// 
			this->profilePic->Location = System::Drawing::Point(3, 3);
			this->profilePic->Name = L"profilePic";
			this->profilePic->Size = System::Drawing::Size(100, 94);
			this->profilePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profilePic->TabIndex = 1;
			this->profilePic->TabStop = false;
			// 
			// lbl_chooseParticipants
			// 
			this->lbl_chooseParticipants->AutoSize = true;
			this->lbl_chooseParticipants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_chooseParticipants->ForeColor = System::Drawing::Color::BlueViolet;
			this->lbl_chooseParticipants->Location = System::Drawing::Point(43, 16);
			this->lbl_chooseParticipants->Name = L"lbl_chooseParticipants";
			this->lbl_chooseParticipants->Size = System::Drawing::Size(593, 36);
			this->lbl_chooseParticipants->TabIndex = 0;
			this->lbl_chooseParticipants->Text = L"Choose Participants From Your Contacts";
			// 
			// pnl_titleChoose
			// 
			this->pnl_titleChoose->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnl_titleChoose->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_titleChoose->Location = System::Drawing::Point(0, 369);
			this->pnl_titleChoose->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnl_titleChoose->Name = L"pnl_titleChoose";
			this->pnl_titleChoose->Size = System::Drawing::Size(740, 76);
			this->pnl_titleChoose->TabIndex = 5;
			// 
			// CreateGroup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(740, 788);
			this->Controls->Add(this->pnl_titleChoose);
			this->Controls->Add(this->pnl_container);
			this->Controls->Add(this->pnl_gname);
			this->Controls->Add(this->pnl_top);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CreateGroup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateGroup";
			this->pnl_top->ResumeLayout(false);
			this->pnl_top->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_gname->ResumeLayout(false);
			this->pnl_gname->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupIMG))->EndInit();
			this->chatBlock->ResumeLayout(false);
			this->chatBlock->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profilePic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		SqlConnection^ connection = gcnew SqlConnection("Data Source=.\;Initial Catalog=ChitChatDB;Integrated Security=True");

		int counter;                      //TO GET THE NUMBER OF FRIENDS 
		int CHID;                         //TO STORE THE ID OF THE CREATED CHATROOM
		String^ imageLocation = "";       //FOR CHOOSING THE GROUP IMAGE


	private: System::Void btn_create_Click(System::Object^ sender, System::EventArgs^ e) {
		//First :Check That The User Choosed A Name And An Image To The Group
		if (this->txt_gname->Text == "" || this->groupIMG->Image == nullptr)
		{
			MessageBox::Show("You Must Choose A Name And A Picture For The Group First");
		}


		else {
			this->pnl_titleChoose->Controls->Add(this->lbl_chooseParticipants);

			try
			{
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}
				//SECOND  :CREATING A NEW RECORD IN THE Chatroom TABLE WITH TYPE "GROUP"

				String^ sqlQuery = "INSERT INTO Chatrooms (type) VALUES (1) ";
				SqlCommand cmd(sqlQuery, connection);
				cmd.ExecuteNonQuery();
				//THIRD :INSERTING THE CHOOSEN IMAGE IN THE GroupChat TABLE  
				String^ sqlQuery1 = "SELECT max(CHID) FROM Chatrooms; ";
				SqlCommand cmd1(sqlQuery1, connection);
				SqlDataReader^ reader = cmd1.ExecuteReader();
				reader->Read();
				CHID = (int)reader[0];     //GETTING THE CHID OF THE CHATROOM CREATED
				reader->Close();

				array<Byte>^ images = nullptr;
				FileStream^ stream = gcnew FileStream(imageLocation, FileMode::Open, FileAccess::Read);
				BinaryReader^ brs = gcnew BinaryReader(stream);
				images = brs->ReadBytes((int)stream->Length);


				String^ sqlQuery2 = "INSERT INTO GroupChat (CHID,G_Name,G_Image) VALUES (@CHID,@G_Name,@G_Image) ";
				SqlCommand cmd2(sqlQuery2, connection);
				cmd2.Parameters->AddWithValue("@CHID", CHID);
				cmd2.Parameters->AddWithValue("@G_Name", txt_gname->Text);
				cmd2.Parameters->AddWithValue("@G_Image", images);
				cmd2.ExecuteNonQuery();


				//FOURTH:INSERTING AN INITIAL PARTICIPANT OF THIS GROUP THAT IS ME
				String^ sqlQuery3 = "INSERT INTO Participants (CHID,CID) VALUES (" + CHID + "," + LoginForm::cont->Id + ");"; //YOU SHOULD PUT THE CID OF THE USER LOGGEN IN 
				SqlCommand cmd3(sqlQuery3, connection);
				cmd3.ExecuteNonQuery();




				//FIFTH :SHOWING THE CONTACTS TO THE USER TO CHOOSE THE PARTICIPANTS OF HIS GROUP
				// GETTING THE NUMBER OF CONTACTS FROM DATABASE
				String^ sqlQuery4 = "SELECT COUNT( FID )  FROM HasContacts WHERE CID = '" + LoginForm::cont->Id + "';";
				SqlCommand cmd4(sqlQuery4, connection);
				SqlDataReader^ reader4 = cmd4.ExecuteReader();
				reader4->Read();      //ANY READER MUST BE CLOSED                                 
				counter = (int)reader4[0];
				reader4->Close();

				String^ sqlQuery5 = "SELECT COUNT( CID )  FROM HasContacts WHERE FID = '" + LoginForm::cont->Id + "';";
				SqlCommand cmd5(sqlQuery5, connection);
				SqlDataReader^ reader5 = cmd5.ExecuteReader();
				reader5->Read();      //ANY READER MUST BE CLOSED                                 
				counter += (int)reader5[0];
				reader5->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}



			array<int>^ FID = gcnew array<int>(counter);     // TO STORE THE ID OF EACH FRIEND


			try                                              // GETTING THE FRINDS IDS FROM DATABASE 
			{
				int i = 0;
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}

				String^ sqlQuery = "SELECT FID  FROM HasContacts WHERE CID = '" + LoginForm::cont->Id + "';";

				SqlCommand cmd(sqlQuery, connection);
				SqlDataReader^ reader = cmd.ExecuteReader();


				while (reader->Read())
				{

					FID[i] = (int)reader[0];
					i++;

				}
				reader->Close();

				String^ sqlQuery1 = "SELECT CID  FROM HasContacts WHERE FID = '" + LoginForm::cont->Id + "';";

				SqlCommand cmd1(sqlQuery1, connection);
				SqlDataReader^ reader1 = cmd1.ExecuteReader();


				while (reader1->Read())
				{

					FID[i] = (int)reader1[0];
					i++;

				}
				reader1->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}


			for (int i = 0; i < counter; i++)
			{

				Button^ b = gcnew Button();           //********



				int y;
				this->lbl_name = (gcnew System::Windows::Forms::Label());
				this->chatBlock = (gcnew System::Windows::Forms::Panel());
				this->profilePic = (gcnew System::Windows::Forms::PictureBox());
				try
				{
					String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID='" + FID[i] + "'";
					String^ sqlQuery2 = "SELECT CID, Fname ,Lname FROM Contacts WHERE CID='" + FID[i] + "'";

					String^ Fname;
					String^ Lname;
					String^ FullName;




					SqlCommand cmd(sqlQuery1, connection);
					SqlDataReader^ reader1 = cmd.ExecuteReader();
					reader1->Read();

					if (reader1->HasRows) {

						if (!reader1->IsDBNull(0))
						{
							array<Byte>^ img = (array<Byte>^)(reader1["Image"]);
							
							
								MemoryStream^ m = gcnew MemoryStream(img);
								this->profilePic->Image = Image::FromStream(m);

							
						}
						reader1->Close();

					}
					else
					{
						connection->Close();
						MessageBox::Show("Image Does No Exist");
					}



					SqlCommand cmd2(sqlQuery2, connection);
					SqlDataReader^ reader2 = cmd2.ExecuteReader();
					reader2->Read();
					b->Text = (String^)reader2[0]->ToString();
					Fname = (String^)reader2[1];
					Lname = (String^)reader2[2];
					FullName = Fname + " " + Lname;
					this->lbl_name->Text = FullName;                    //*******
					reader2->Close();

				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message);
				}


				// 
				// chatBlock
				// 
				this->chatBlock->Controls->Add(this->lbl_name);
				this->chatBlock->Controls->Add(this->profilePic);
				this->chatBlock->Controls->Add(b);                                 //*******		
				this->chatBlock->Location = System::Drawing::Point(3, 3 + y);
				this->chatBlock->Name = L"chatBlock";
				this->chatBlock->Size = System::Drawing::Size(530, 100);
				this->chatBlock->TabIndex = 0;
				// 
				// profilePic
				// 
				this->profilePic->Location = System::Drawing::Point(3, 0);
				this->profilePic->Name = L"profilePic";
				this->profilePic->Size = System::Drawing::Size(100, 97);
				this->profilePic->TabIndex = 1;
				this->profilePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->profilePic->TabStop = false;
				// 
				// lbl_name
				// 
				this->lbl_name->AutoSize = true;
				this->lbl_name->BackColor = System::Drawing::Color::DeepSkyBlue;
				this->lbl_name->Font = (gcnew System::Drawing::Font(L"Ravie", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->lbl_name->ForeColor = System::Drawing::Color::DarkSlateGray;
				this->lbl_name->Location = System::Drawing::Point(154, 30);
				this->lbl_name->Name = L"lbl_name";
				this->lbl_name->Size = System::Drawing::Size(124, 35);
				this->lbl_name->TabIndex = 4;




				b->BackColor = System::Drawing::Color::DarkSlateBlue;
				b->Font = (gcnew System::Drawing::Font(L"Felix Titling", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				b->ForeColor = System::Drawing::Color::DarkSlateBlue;
				b->Location = System::Drawing::Point(109, 3);
				b->Name = L"b_btn";
				b->Size = System::Drawing::Size(422, 94);
				b->TabIndex = 0;
				b->UseVisualStyleBackColor = false;
				b->Click += gcnew System::EventHandler(this, &CreateGroup::b_Click);  //*********



				this->pnl_container->Controls->Add(this->chatBlock);

				y += 100;

			}

		}
		//this->Close();
	}



		   Button^ btn;              //****
	private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e) {

		this->btn_finish->Show();
		btn = (Button^)sender;    //****
		//INSERTING THE CHOOSEN CONTACT AS A NEW PARTICIPANT IN THE GROUP


		try                                            // GETTING THE NUMBER OF CONTACTS FROM DATABASE
		{
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}

			int b = Convert::ToInt32(btn->Text);
			String^ sqlQuery3 = "INSERT INTO Participants (CHID,CID) VALUES (" + CHID + "," + b + ");"; //YOU SHOULD PUT THE CID OF THE USER LOGGEN IN 
			SqlCommand cmd3(sqlQuery3, connection);
			cmd3.ExecuteNonQuery();

		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}



	}





	private: System::Void btn_browse_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Filter = " png files (*.png)|*.png|jpg files(*.jpg|*.jpg|All files(*.*)|*.*  ";

		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			imageLocation = dialog->FileName->ToString();
			groupIMG->ImageLocation = imageLocation;
		}
		this->groupIMG->BackgroundImage = nullptr;
	}




	public:bool switchToGroups = false;  //++++++++++++++++++++++++++++++
	private: System::Void btn_finish_Click(System::Object^ sender, System::EventArgs^ e) {
		//SHOULD RETURN YOU BACK TO THE HOME PAGE
		this->switchToGroups = true;
		this->Close();


	}



	private: System::Void groupIMG_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
