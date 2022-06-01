#pragma once
#include "CreateGroup.h"
#include <cliext/list>
#include "showChats.h"
#include <ctime>
#include "LoginForm.h"
#include "UserProfileForm.h"
#include "StoryMain.h"
#include "AddForm.h"
#include "Groups.h"

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;


	public ref class home : public System::Windows::Forms::Form
	{
	public:
		home(void)
		{
			InitializeComponent();

		}

	protected:

		~home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_top;
	private: System::Windows::Forms::Panel^ pnl_container;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ myProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addContactToolStripMenuItem;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Button^ btn_groups;
	private: System::Windows::Forms::Button^ btn_contacts;
	private: System::Windows::Forms::Button^ btn_status;
	private: System::Windows::Forms::ToolStripMenuItem^ createGoupToolStripMenuItem;
	private: System::Windows::Forms::Panel^ chatBlock;

	private: System::Windows::Forms::PictureBox^ profilePic;
	private: System::Windows::Forms::Button^ chat_btn;
	private: System::Windows::Forms::ToolStripMenuItem^ switchAcountToolStripMenuItem;

	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ lbl_msgtxt;
	private: System::Windows::Forms::Label^ lbl_msgtime;
	private: System::Windows::Forms::ToolStripMenuItem^ logOutToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;




#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(home::typeid));
			   this->pnl_top = (gcnew System::Windows::Forms::Panel());
			   this->btn_contacts = (gcnew System::Windows::Forms::Button());
			   this->btn_status = (gcnew System::Windows::Forms::Button());
			   this->btn_groups = (gcnew System::Windows::Forms::Button());
			   this->pnl_title = (gcnew System::Windows::Forms::Panel());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->myProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->addContactToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->createGoupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->switchAcountToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->logOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pnl_container = (gcnew System::Windows::Forms::Panel());
			   this->chatBlock = (gcnew System::Windows::Forms::Panel());
			   this->lbl_msgtime = (gcnew System::Windows::Forms::Label());
			   this->lbl_msgtxt = (gcnew System::Windows::Forms::Label());
			   this->lbl_name = (gcnew System::Windows::Forms::Label());
			   this->profilePic = (gcnew System::Windows::Forms::PictureBox());
			   this->chat_btn = (gcnew System::Windows::Forms::Button());
			   this->pnl_top->SuspendLayout();
			   this->pnl_title->SuspendLayout();
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->chatBlock->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profilePic))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pnl_top
			   // 
			   this->pnl_top->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->pnl_top->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->pnl_top->Controls->Add(this->btn_contacts);
			   this->pnl_top->Controls->Add(this->btn_status);
			   this->pnl_top->Controls->Add(this->btn_groups);
			   this->pnl_top->Controls->Add(this->pnl_title);
			   this->pnl_top->Dock = System::Windows::Forms::DockStyle::Top;
			   this->pnl_top->Location = System::Drawing::Point(0, 0);
			   this->pnl_top->Name = L"pnl_top";
			   this->pnl_top->Size = System::Drawing::Size(566, 161);
			   this->pnl_top->TabIndex = 0;
			   // 
			   // btn_contacts
			   // 
			   this->btn_contacts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->btn_contacts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_contacts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_contacts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_contacts.Image")));
			   this->btn_contacts->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->btn_contacts->Location = System::Drawing::Point(375, 94);
			   this->btn_contacts->Name = L"btn_contacts";
			   this->btn_contacts->Size = System::Drawing::Size(178, 60);
			   this->btn_contacts->TabIndex = 0;
			   this->btn_contacts->Text = L"Contacts";
			   this->btn_contacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_contacts->UseVisualStyleBackColor = false;
			   // 
			   // btn_status
			   // 
			   this->btn_status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->btn_status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_status->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_status.Image")));
			   this->btn_status->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->btn_status->Location = System::Drawing::Point(187, 94);
			   this->btn_status->Name = L"btn_status";
			   this->btn_status->Size = System::Drawing::Size(178, 61);
			   this->btn_status->TabIndex = 0;
			   this->btn_status->Text = L"Status";
			   this->btn_status->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_status->UseVisualStyleBackColor = false;
			   this->btn_status->Click += gcnew System::EventHandler(this, &home::btn_status_Click);
			   // 
			   // btn_groups
			   // 
			   this->btn_groups->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(192)));
			   this->btn_groups->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_groups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_groups->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_groups.Image")));
			   this->btn_groups->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->btn_groups->Location = System::Drawing::Point(3, 94);
			   this->btn_groups->Name = L"btn_groups";
			   this->btn_groups->Size = System::Drawing::Size(178, 61);
			   this->btn_groups->TabIndex = 0;
			   this->btn_groups->Text = L"Groups";
			   this->btn_groups->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_groups->UseVisualStyleBackColor = false;
			   this->btn_groups->Click += gcnew System::EventHandler(this, &home::btn_groups_Click);
			   // 
			   // pnl_title
			   // 
			   this->pnl_title->Controls->Add(this->menuStrip1);
			   this->pnl_title->Controls->Add(this->label1);
			   this->pnl_title->Controls->Add(this->pictureBox1);
			   this->pnl_title->Location = System::Drawing::Point(0, 4);
			   this->pnl_title->Name = L"pnl_title";
			   this->pnl_title->Size = System::Drawing::Size(565, 77);
			   this->pnl_title->TabIndex = 0;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::DarkSlateGray;
			   this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(486, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(183, 24);
			   this->menuStrip1->TabIndex = 6;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // menuToolStripMenuItem
			   // 
			   this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->myProfileToolStripMenuItem,
					   this->addContactToolStripMenuItem, this->createGoupToolStripMenuItem, this->switchAcountToolStripMenuItem, this->logOutToolStripMenuItem
			   });
			   this->menuToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			   this->menuToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			   this->menuToolStripMenuItem->Text = L"menu";
			   // 
			   // myProfileToolStripMenuItem
			   // 
			   this->myProfileToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->myProfileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myProfileToolStripMenuItem.Image")));
			   this->myProfileToolStripMenuItem->Name = L"myProfileToolStripMenuItem";
			   this->myProfileToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			   this->myProfileToolStripMenuItem->Text = L"My Profile";
			   this->myProfileToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::myProfileToolStripMenuItem_Click);
			   // 
			   // addContactToolStripMenuItem
			   // 
			   this->addContactToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->addContactToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addContactToolStripMenuItem.Image")));
			   this->addContactToolStripMenuItem->Name = L"addContactToolStripMenuItem";
			   this->addContactToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			   this->addContactToolStripMenuItem->Text = L"Add Contact";
			   this->addContactToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::addContactToolStripMenuItem_Click);
			   // 
			   // createGoupToolStripMenuItem
			   // 
			   this->createGoupToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->createGoupToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createGoupToolStripMenuItem.Image")));
			   this->createGoupToolStripMenuItem->Name = L"createGoupToolStripMenuItem";
			   this->createGoupToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			   this->createGoupToolStripMenuItem->Text = L"Creat Group";
			   this->createGoupToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::createGoupToolStripMenuItem_Click);
			   // 
			   // switchAcountToolStripMenuItem
			   // 
			   this->switchAcountToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->switchAcountToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"switchAcountToolStripMenuItem.Image")));
			   this->switchAcountToolStripMenuItem->Name = L"switchAcountToolStripMenuItem";
			   this->switchAcountToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			   this->switchAcountToolStripMenuItem->Text = L"Switch Account";
			   this->switchAcountToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::switchAcountToolStripMenuItem_Click);
			   // 
			   // logOutToolStripMenuItem
			   // 
			   this->logOutToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
			   this->logOutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logOutToolStripMenuItem.Image")));
			   this->logOutToolStripMenuItem->Name = L"logOutToolStripMenuItem";
			   this->logOutToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			   this->logOutToolStripMenuItem->Text = L"log out";
			   this->logOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &home::logOutToolStripMenuItem_Click_1);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			   this->label1->Location = System::Drawing::Point(88, 18);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(129, 31);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"ChitChat";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(12, 2);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(83, 72);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 2;
			   this->pictureBox1->TabStop = false;
			   // 
			   // pnl_container
			   // 
			   this->pnl_container->AutoScroll = true;
			   this->pnl_container->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->pnl_container->BackColor = System::Drawing::Color::Black;
			   this->pnl_container->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->pnl_container->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pnl_container->Location = System::Drawing::Point(0, 161);
			   this->pnl_container->Name = L"pnl_container";
			   this->pnl_container->Size = System::Drawing::Size(566, 588);
			   this->pnl_container->TabIndex = 1;
			   this->pnl_container->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &home::pnl_container_Paint);
			   // 
			   // chatBlock
			   // 
			   this->chatBlock->Controls->Add(this->lbl_msgtime);
			   this->chatBlock->Controls->Add(this->lbl_msgtxt);
			   this->chatBlock->Controls->Add(this->lbl_name);
			   this->chatBlock->Controls->Add(this->profilePic);
			   this->chatBlock->Controls->Add(this->chat_btn);
			   this->chatBlock->Location = System::Drawing::Point(3, 96);
			   this->chatBlock->Name = L"chatBlock";
			   this->chatBlock->Size = System::Drawing::Size(560, 100);
			   this->chatBlock->TabIndex = 0;
			   // 
			   // lbl_msgtime
			   // 
			   this->lbl_msgtime->AutoSize = true;
			   this->lbl_msgtime->BackColor = System::Drawing::Color::DarkSlateBlue;
			   this->lbl_msgtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_msgtime->Location = System::Drawing::Point(341, 77);
			   this->lbl_msgtime->Name = L"lbl_msgtime";
			   this->lbl_msgtime->Size = System::Drawing::Size(46, 17);
			   this->lbl_msgtime->TabIndex = 6;
			   this->lbl_msgtime->Text = L"label2";
			   // 
			   // lbl_msgtxt
			   // 
			   this->lbl_msgtxt->AutoSize = true;
			   this->lbl_msgtxt->BackColor = System::Drawing::Color::Cyan;
			   this->lbl_msgtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic));
			   this->lbl_msgtxt->Location = System::Drawing::Point(128, 54);
			   this->lbl_msgtxt->Name = L"lbl_msgtxt";
			   this->lbl_msgtxt->Size = System::Drawing::Size(60, 24);
			   this->lbl_msgtxt->TabIndex = 5;
			   this->lbl_msgtxt->Text = L"label2";
			   // 
			   // lbl_name
			   // 
			   this->lbl_name->AutoSize = true;
			   this->lbl_name->BackColor = System::Drawing::Color::DeepSkyBlue;
			   this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_name->ForeColor = System::Drawing::Color::DarkSlateGray;
			   this->lbl_name->Location = System::Drawing::Point(126, 14);
			   this->lbl_name->Name = L"lbl_name";
			   this->lbl_name->Size = System::Drawing::Size(79, 29);
			   this->lbl_name->TabIndex = 4;
			   this->lbl_name->Text = L"label3";
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
			   // chat_btn
			   // 
			   this->chat_btn->BackColor = System::Drawing::Color::DarkSlateBlue;
			   this->chat_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->chat_btn->ForeColor = System::Drawing::Color::Black;
			   this->chat_btn->Location = System::Drawing::Point(109, 3);
			   this->chat_btn->Name = L"chat_btn";
			   this->chat_btn->Size = System::Drawing::Size(448, 94);
			   this->chat_btn->TabIndex = 0;
			   this->chat_btn->Text = L"button1";
			   this->chat_btn->UseVisualStyleBackColor = false;
			   // 
			   // home
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(566, 749);
			   this->Controls->Add(this->pnl_container);
			   this->Controls->Add(this->pnl_top);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			   this->Name = L"home";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"home";
			   this->pnl_top->ResumeLayout(false);
			   this->pnl_title->ResumeLayout(false);
			   this->pnl_title->PerformLayout();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->chatBlock->ResumeLayout(false);
			   this->chatBlock->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profilePic))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   SqlConnection^ connection = gcnew SqlConnection("Data Source=.\;Initial Catalog=ChitChatDB;Integrated Security=True");
	private:List<int>^ LCHID;
	private:List<int>^ LCID;
	private:List<showChats^>^ chatData;
	private:showChats^ showChatObj;

	private: System::Void pnl_container_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		LCHID = gcnew List<int>();
		LCID = gcnew List<int>();
		chatData = gcnew List<showChats^>();

		try {
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}


			String^ sqlQuery = "SELECT CHID FROM HasChatRoom WHERE CID = @CID;";

			SqlCommand cmd(sqlQuery, connection);
			cmd.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
			SqlDataReader^ reader = cmd.ExecuteReader();

			while (reader->Read())
			{
				LCHID->Add((int)reader[0]);
			}
			reader->Close();
			for (int i = 0; i < LCHID->Count; i++)
			{
				String^ sqlQuery1 = "SELECT CID FROM HasChatRoom WHERE CHID = @CHID AND CID <> @CID";

				SqlCommand cmd1(sqlQuery1, connection);
				cmd1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
				cmd1.Parameters->AddWithValue("@CHID", LCHID[i]);
				SqlDataReader^ reader1 = cmd1.ExecuteReader();
				while (reader1->Read())
				{
					LCID->Add((int)reader1[0]);
				}
				reader1->Close();
			}

			for (int i = 0; i < LCHID->Count; i++)
			{
				showChatObj = gcnew showChats();
				showChatObj->CHID = LCHID[i];
				showChatObj->CID = LCID[i];



				String^ sqlQuery2 = "SELECT Image FROM UserProfile WHERE CID='" + LCID[i] + "'";


				SqlCommand cmd2(sqlQuery2, connection);
				SqlDataReader^ reader2 = cmd2.ExecuteReader();


				if (reader2->Read())
				{
					if (!reader2->IsDBNull(0))
					{
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader2[0]);
						showChatObj->img = Image::FromStream(m);
					}
				}
				reader2->Close();



				String^ sqlQuery3 = "SELECT  Fname ,Lname FROM Contacts WHERE CID='" + LCID[i] + "'";
				SqlCommand cmd3(sqlQuery3, connection);
				SqlDataReader^ reader3 = cmd3.ExecuteReader();
				if (reader3->Read())
				{
					showChatObj->fullName = (String^)reader3[0] + " " + (String^)reader3[1];
					reader3->Close();
				}


				String^ sqlQuery4 = "SELECT  Text ,Time FROM Messages WHERE CHID='" + LCHID[i] + "'";

				SqlCommand cmd4(sqlQuery4, connection);
				SqlDataReader^ reader4 = cmd4.ExecuteReader();
				while (reader4->Read())
				{
					showChatObj->text = (String^)reader4[0];
					showChatObj->timeDate = Convert::ToInt64(reader4[1]);

				}reader4->Close();


				chatData->Add(showChatObj);

			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		chatData->Sort();

		for (int i = 0; i < chatData->Count; i++)
		{
			Button^ b = gcnew Button();
			int y;

			this->chatBlock = (gcnew System::Windows::Forms::Panel());
			this->profilePic = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_msgtxt = (gcnew System::Windows::Forms::Label());
			this->lbl_msgtime = (gcnew System::Windows::Forms::Label());
			//		 
			//chatBlock
			//
			this->chatBlock->Controls->Add(this->lbl_msgtime);
			this->chatBlock->Controls->Add(this->lbl_msgtxt);
			this->chatBlock->Controls->Add(this->lbl_name);
			this->chatBlock->Controls->Add(this->profilePic);
			this->chatBlock->Controls->Add(b);
			this->chatBlock->Location = System::Drawing::Point(3, 6 + y);
			this->chatBlock->Name = L"chatBlock";
			this->chatBlock->Size = System::Drawing::Size(560, 100);
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
			this->profilePic->Image = chatData[i]->img;//////////////////////////////////////////////////////////////////
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Ravie", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_name->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->lbl_name->Location = System::Drawing::Point(126, 14);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(124, 35);
			this->lbl_name->TabIndex = 4;
			this->lbl_name->Text = chatData[i]->fullName;/////////////////////////////////////////////////////////////
			 // 
			 // lbl_msgtxt
			 // 
			this->lbl_msgtxt->AutoSize = true;
			this->lbl_msgtxt->BackColor = System::Drawing::Color::Cyan;
			this->lbl_msgtxt->Font = (gcnew System::Drawing::Font(L"Felix Titling", 13.8F, System::Drawing::FontStyle::Italic));
			this->lbl_msgtxt->Location = System::Drawing::Point(128, 54);
			this->lbl_msgtxt->Name = L"lbl_msgtxt";
			this->lbl_msgtxt->Size = System::Drawing::Size(89, 27);
			this->lbl_msgtxt->TabIndex = 5;
			if (chatData[i]->text == nullptr)
			{
				this->lbl_msgtxt->BackColor = System::Drawing::Color::DarkSlateBlue;
				this->lbl_msgtxt->Font = (gcnew System::Drawing::Font(L"Felix Titling", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_msgtxt->Text = "lets start chat  ! ";

			}
			else {
				if (chatData[i]->text->Length >= 22)
				{
					chatData[i]->text = chatData[i]->text->Substring(0, 21);
					chatData[i]->text += " .......";
				}
				this->lbl_msgtxt->Text = chatData[i]->text;
			}
			// 
			// lbl_msgtime
			// 
			this->lbl_msgtime->AutoSize = true;
			this->lbl_msgtime->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->lbl_msgtime->Font = (gcnew System::Drawing::Font(L"Felix Titling", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_msgtime->Location = System::Drawing::Point(341, 77);
			this->lbl_msgtime->Name = L"lbl_msgtime";
			this->lbl_msgtime->Size = System::Drawing::Size(67, 20);
			this->lbl_msgtime->TabIndex = 6;
			if (chatData[i]->text == nullptr)
			{
				this->lbl_msgtime->Hide();

			}
			else {
				time_t TimeDate = (time_t)chatData[i]->timeDate;
				char* c = ctime(&TimeDate);
				String^ STimeDate = gcnew String(c);
				this->lbl_msgtime->Text = STimeDate;
			}
			//
			//chat_btn
			//
			b->BackColor = System::Drawing::Color::DarkSlateBlue;
			b->Font = (gcnew System::Drawing::Font(L"Felix Titling", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			b->ForeColor = System::Drawing::Color::DarkSlateBlue;
			b->Location = System::Drawing::Point(109, 3);
			b->Name = chatData[i]->CHID.ToString();
			b->Size = System::Drawing::Size(448, 94);
			b->TabIndex = 0;
			b->UseVisualStyleBackColor = false;
			b->Click += gcnew System::EventHandler(this, &home::b_Click);
			b->Text = chatData[i]->CID.ToString();////////////////////////////////////////////////////////////////



			this->pnl_container->Controls->Add(this->chatBlock);

			y += 100;
		}
	}

	public: static int CID, CHID;
	public:static bool switchToChatroom = false;  //++++++++++++++++++++++++++++++
	private:Button^ btn; //***
	private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e) {
		//FIRST CHACNGING THE STATUS OF ALL THE PREVIOUSE MESSAGES IN THE CHATROOM TO SEEN
		btn = (Button^)sender;    //**
		CID = Convert::ToInt32(btn->Text);
		CHID = Convert::ToInt32(btn->Name);
		try
		{
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}
			String^ sqlQuery = "UPDATE Messages SET Type = '1' WHERE CHID = @CHID AND CID != @CID; ";
			SqlCommand cmd(sqlQuery, connection);
			cmd.Parameters->AddWithValue("@CHID", CHID);
			cmd.Parameters->AddWithValue("@CID", CID);

			cmd.ExecuteNonQuery();
			connection->Close();


		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}

		//THIS ACTION SOULD TRANSFERE THE USER TO THE CHAT ROOM
		//MyForm ^myForm = gcnew MyForm(Convert::ToInt32(btn->Text), Convert::ToInt32(btn->Name));
		
		this->switchToChatroom = true;
		this->Close();


		//this->Hide();
		//myForm->ShowDialog();
		//Show();

	}
	 


	public:bool switchToCreateGroup = false;  //++++++++++++++++++++++++++++++
	private: System::Void createGoupToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToCreateGroup = true;
		this->Close();


		/*this->Hide();
		CreateGroup^ c = gcnew CreateGroup();
		c->ShowDialog();
		Show();*/
	}


	public:bool switchToProfile = false;  //++++++++++++++++++++++++++++++
	private: System::Void myProfileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToProfile = true;
		this->Close();


		/*UserProfileForm^ myForm = gcnew UserProfileForm();
		this->Hide();
		myForm->ShowDialog();
		Show()*/;
	}


	public:bool switchToStatus = false;  //++++++++++++++++++++++++++++++
	private: System::Void btn_status_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToStatus = true;
		this->Close();


		/*StoryMain^ myStory = gcnew StoryMain();
		this->Hide();
		myStory->ShowDialog();
		Show();*/
	}


	public:bool switchToAddConctact = false;  //++++++++++++++++++++++++++++++
	private: System::Void addContactToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToAddConctact = true;
		this->Close();



		/*AddForm^ addFriend = gcnew AddForm();
		this->Hide();
		addFriend->ShowDialog();
		Show();*/
	}


	public:bool switchToGroups = false;  //++++++++++++++++++++++++++++++
	private: System::Void btn_groups_Click(System::Object^ sender, System::EventArgs^ e) {

		this->switchToGroups = true;
		this->Close();


		/*Groups^ myGroups = gcnew Groups();
		this->Hide();
		myGroups->ShowDialog();
		Show();*/
	}
	private: System::Void logOutToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

public:bool switchToLogin = false;  //++++++++++++++++++++++++++++++
private: System::Void switchAcountToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	time_t TimeDate = time(0);
	char* c = ctime(&TimeDate);
	String^ LastSeen = gcnew String(c);
	try
	{
		if (connection->State != ConnectionState::Open) {
			connection->Open();
		}
		String^ sqlQuery = "UPDATE Contacts SET LastSeen = @LastSeen WHERE CID = @CID;";
		SqlCommand cmd(sqlQuery, connection);
		cmd.Parameters->AddWithValue("@LastSeen", LastSeen);
		cmd.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
		cmd.ExecuteNonQuery();


	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	this->switchToLogin = true;
	this->Close();
	/*LoginForm^ logOut = gcnew LoginForm();
	this->Hide();
	logOut->ShowDialog();
	Show();*/

}
};
}