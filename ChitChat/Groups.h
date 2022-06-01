#pragma once
#include <cliext/list>
#include "showChats.h"
#include "LoginForm.h"
#include "UserProfileForm.h"
#include "StoryMain.h"
#include "AddForm.h"
#include "CreateGroup.h"
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

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Groups : public System::Windows::Forms::Form
	{
	public:
		Groups(void)
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
		~Groups()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_top;
	protected:
	private: System::Windows::Forms::Panel^ pnl_container;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Button^ btn_groups;
	private: System::Windows::Forms::Button^ btn_contacts;


	private: System::Windows::Forms::Panel^ chatBlock;

	private: System::Windows::Forms::PictureBox^ profilePic;
	private: System::Windows::Forms::Button^ chat_btn;




	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ lbl_msgtxt;
	private: System::Windows::Forms::Label^ lbl_msgtime;




	private: System::ComponentModel::IContainer^ components;




#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Groups::typeid));
			   this->pnl_top = (gcnew System::Windows::Forms::Panel());
			   this->btn_contacts = (gcnew System::Windows::Forms::Button());
			   this->btn_groups = (gcnew System::Windows::Forms::Button());
			   this->pnl_title = (gcnew System::Windows::Forms::Panel());
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
			   this->pnl_top->Controls->Add(this->btn_groups);
			   this->pnl_top->Controls->Add(this->pnl_title);
			   this->pnl_top->Dock = System::Windows::Forms::DockStyle::Top;
			   this->pnl_top->Location = System::Drawing::Point(0, 0);
			   this->pnl_top->Name = L"pnl_top";
			   this->pnl_top->Size = System::Drawing::Size(582, 161);
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
			   this->btn_contacts->Location = System::Drawing::Point(343, 100);
			   this->btn_contacts->Name = L"btn_contacts";
			   this->btn_contacts->Size = System::Drawing::Size(178, 60);
			   this->btn_contacts->TabIndex = 0;
			   this->btn_contacts->Text = L"Contacts";
			   this->btn_contacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_contacts->UseVisualStyleBackColor = false;
			   this->btn_contacts->Click += gcnew System::EventHandler(this, &Groups::btn_contacts_Click);
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
			   this->btn_groups->Location = System::Drawing::Point(62, 100);
			   this->btn_groups->Name = L"btn_groups";
			   this->btn_groups->Size = System::Drawing::Size(178, 61);
			   this->btn_groups->TabIndex = 0;
			   this->btn_groups->Text = L"Groups";
			   this->btn_groups->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_groups->UseVisualStyleBackColor = false;
			   // 
			   // pnl_title
			   // 
			   this->pnl_title->Controls->Add(this->label1);
			   this->pnl_title->Controls->Add(this->pictureBox1);
			   this->pnl_title->Location = System::Drawing::Point(0, 4);
			   this->pnl_title->Name = L"pnl_title";
			   this->pnl_title->Size = System::Drawing::Size(579, 77);
			   this->pnl_title->TabIndex = 0;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			   this->label1->Location = System::Drawing::Point(88, 18);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(152, 38);
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
			   this->pnl_container->Size = System::Drawing::Size(582, 588);
			   this->pnl_container->TabIndex = 1;
			   this->pnl_container->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Groups::pnl_container_Paint);
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
			   this->lbl_msgtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic));
			   this->lbl_msgtime->Location = System::Drawing::Point(341, 77);
			   this->lbl_msgtime->Name = L"lbl_msgtime";
			   this->lbl_msgtime->Size = System::Drawing::Size(53, 20);
			   this->lbl_msgtime->TabIndex = 6;
			   this->lbl_msgtime->Text = L"label3";
			   // 
			   // lbl_msgtxt
			   // 
			   this->lbl_msgtxt->AutoSize = true;
			   this->lbl_msgtxt->BackColor = System::Drawing::Color::Cyan;
			   this->lbl_msgtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic));
			   this->lbl_msgtxt->Location = System::Drawing::Point(128, 54);
			   this->lbl_msgtxt->Name = L"lbl_msgtxt";
			   this->lbl_msgtxt->Size = System::Drawing::Size(79, 29);
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
			   this->lbl_name->Location = System::Drawing::Point(128, 16);
			   this->lbl_name->Name = L"lbl_name";
			   this->lbl_name->Size = System::Drawing::Size(95, 36);
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
			   // Groups
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(582, 749);
			   this->Controls->Add(this->pnl_container);
			   this->Controls->Add(this->pnl_top);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			   this->Name = L"Groups";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"home";
			   this->pnl_top->ResumeLayout(false);
			   this->pnl_title->ResumeLayout(false);
			   this->pnl_title->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->chatBlock->ResumeLayout(false);
			   this->chatBlock->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profilePic))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   SqlConnection^ connection = gcnew SqlConnection("Data Source=.\;Initial Catalog=ChitChatDB;Integrated Security=True");

		   int counter;                               //TO GET THE NUMBER OF GROUPS THAT THE USER BELOGS
	private:List<int>^ LCHID;
		   List<showChats^>^ chatData;
		   showChats^ showChatObj;


	private: System::Void pnl_container_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		String^ senderName;
		LCHID = gcnew List<int>();
		chatData = gcnew List<showChats^>();


		//	array<int>^ CHID = gcnew array<int>(counter);    // TO STORE THE ID OF EACH FRIEND


		try // GETTING THE CHATROOMS IDS FROM DATABASE 
		{
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			} 

			String^ sqlQuery = "SELECT CHID  FROM Participants WHERE CID = '" + LoginForm::cont->Id + "'";

			SqlCommand cmd(sqlQuery, connection);
			SqlDataReader^ reader = cmd.ExecuteReader();


			while (reader->Read())
			{
				LCHID->Add((int)reader[0]);
			}
			reader->Close();





			for (int i = 0; i < LCHID->Count; i++)
			{
				showChatObj = gcnew showChats();
				showChatObj->CHID = LCHID[i];




				String^ sqlQuery2 = "SELECT G_Name,G_Image FROM GroupChat WHERE CHID='" + LCHID[i] + "'";


				SqlCommand cmd2(sqlQuery2, connection);
				SqlDataReader^ reader2 = cmd2.ExecuteReader();


				if (reader2->Read())
				{
					showChatObj->fullName = reader2[0]->ToString();
					if (!reader2->IsDBNull(1))
					{
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader2[1]);
						showChatObj->img = Image::FromStream(m);
					}
				}
				reader2->Close();


				String^ sqlQuery3 = "SELECT  Text ,Time,CID FROM Messages WHERE CHID='" + LCHID[i] + "'";

				SqlCommand cmd3(sqlQuery3, connection);
				SqlDataReader^ reader3 = cmd3.ExecuteReader();
				while (reader3->Read())
				{
					showChatObj->text = (String^)reader3[0];
					showChatObj->timeDate = (int)reader3[1];
					showChatObj->CID = (int)reader3[2];

				}reader3->Close();



				String^ sqlQuery4 = "SELECT  Fname ,Lname FROM Contacts WHERE CID='" + showChatObj->CID + "'";
				SqlCommand cmd4(sqlQuery4, connection);
				SqlDataReader^ reader4 = cmd4.ExecuteReader();
				if (reader4->Read())
				{
					senderName = (String^)reader4[0] + " " + (String^)reader4[1];

				}reader4->Close();



				chatData->Add(showChatObj);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}chatData->Sort();
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
				this->lbl_msgtxt->Text = "No Messages Yet";

			}
			else {

				if (chatData[i]->text->Length >= 22)
				{
					chatData[i]->text = chatData[i]->text->Substring(0, 21);
					chatData[i]->text += " .......";
				}

				this->lbl_msgtxt->Text = senderName + "  :  " + chatData[i]->text;
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
			b->Name = L"b_btn";
			b->Size = System::Drawing::Size(448, 94);
			b->TabIndex = 0;
			b->UseVisualStyleBackColor = false;
			b->Click += gcnew System::EventHandler(this, &Groups::b_Click);
			b->Text = chatData[i]->CHID.ToString();////////////////////////////////////////////////////////////////



			this->pnl_container->Controls->Add(this->chatBlock);

			y += 100;
		}

		//for (int i = 0; i < counter; i++)
		//{

		//	Button^ b = gcnew Button();           //********



		//	int y;
		//	this->lbl_name = (gcnew System::Windows::Forms::Label());
		//	this->chatBlock = (gcnew System::Windows::Forms::Panel());
		//	this->profilePic = (gcnew System::Windows::Forms::PictureBox());
		//	try
		//	{
		//		String^ sqlQuery = "SELECT CHID,G_Name,G_Image FROM GroupChat WHERE CHID='" + CHID[i] + "'";

		//		SqlCommand cmd(sqlQuery, connection);
		//		SqlDataReader^ reader = cmd.ExecuteReader();
		//		reader->Read();
		//		array<Byte>^ img = (array<Byte>^)(reader["G_Image"]);				
		//		MemoryStream^ m = gcnew MemoryStream(img);

		//		this->profilePic->Image = Image::FromStream(m);
		//		b->Text = (String^)reader["CHID"]->ToString();
		//		this->lbl_name->Text = (String^)reader["G_Name"]->ToString();

		//		reader->Close();
		//	}
		//	catch (Exception^ e)
		//	{
		//		MessageBox::Show(e->Message);
		//	}


		//	// 
		//	// chatBlock
		//	// 
		//	this->chatBlock->Controls->Add(this->lbl_name);
		//	this->chatBlock->Controls->Add(this->profilePic);
		//	this->chatBlock->Controls->Add(b);                                 //*******		
		//	this->chatBlock->Location = System::Drawing::Point(3, 6 + y);
		//	this->chatBlock->Name = L"chatBlock";
		//	this->chatBlock->Size = System::Drawing::Size(560, 100);
		//	this->chatBlock->TabIndex = 0;
		//	// 
		//	// profilePic
		//	// 
		//	this->profilePic->Location = System::Drawing::Point(3, 0);
		//	this->profilePic->Name = L"profilePic";
		//	this->profilePic->Size = System::Drawing::Size(100, 97);
		//	this->profilePic->TabIndex = 1;
		//	this->profilePic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
		//	this->profilePic->TabStop = false;
		//	// 
		//	// lbl_name
		//	// 
		//	this->lbl_name->AutoSize = true;
		//	this->lbl_name->BackColor = System::Drawing::Color::DeepSkyBlue;
		//	this->lbl_name->Font = (gcnew System::Drawing::Font(L"Ravie", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		//	this->lbl_name->ForeColor = System::Drawing::Color::DarkSlateGray;
		//	this->lbl_name->Location = System::Drawing::Point(154, 30);
		//	this->lbl_name->Name = L"lbl_name";
		//	this->lbl_name->Size = System::Drawing::Size(124, 35);
		//	this->lbl_name->TabIndex = 4;

		//	//
		//	//btn_chat
		//	//

		//	b->BackColor = System::Drawing::Color::DarkSlateBlue;
		//	b->Font = (gcnew System::Drawing::Font(L"Felix Titling", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		//		static_cast<System::Byte>(0)));
		//	b->ForeColor = System::Drawing::Color::DarkSlateBlue;
		//	b->Location = System::Drawing::Point(109, 3);
		//	b->Name = L"b_btn";
		//	b->Size = System::Drawing::Size(448, 94);
		//	b->TabIndex = 0;
		//	b->UseVisualStyleBackColor = false;
		//	b->Click += gcnew System::EventHandler(this, &Groups::b_Click);  



		//	



		//	this->pnl_container->Controls->Add(this->chatBlock);

		//	y += 100;

		//}



	}
	 public:bool switchToChatroom = false;//++++++++++++++++++++++++++++++
		   Button^ btn; //***
	 public: static int CHID;
	private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e) {
		btn = (Button^)sender;    //**
		CHID = Convert::ToInt32(btn->Text);
		btn = (Button^)sender;    //**
		//THIS ACTION SOULD TRANSFERE THE USER TO THE GORUP CHAT ROOM
		this->switchToChatroom = true;
		this->Close();



	}





	public:bool switchToHome = false; //++++++++++++++++++++++++++++++
	private: System::Void btn_contacts_Click(System::Object^ sender, System::EventArgs^ e) {

		this->switchToHome = true;
		this->Close();


		//this->Close();
	}


	};
}