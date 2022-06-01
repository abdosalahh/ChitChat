#pragma once
#include <iostream>
#include <format>
#include <string>
#include "message.h"
#include <cliext/queue>
#include <ctime>
#include <string.h>
#include "ViewUserProfile.h"
#include "LoginForm.h"
#include "home.h"
#include "Groups.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int z = 1;
		bool group = false;
		cliext::queue<message^>^ q;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ name_txt;
	private: System::Windows::Forms::Button^ btn_unsend;



	public:





	private: System::Windows::Forms::FlowLayoutPanel^ container_pnl;


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		//public:int CHID, CID;
			//MyForm(int cid, int chid)
			//{
			//	CHID = chid;
			//	CID = cid;
			//	InitializeComponent();
			//	//
			//	//TODO: Add the constructor code here
			//	//
			//}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ top_panal;
	protected:

	private: System::Windows::Forms::Label^ user_name;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ send_pnl;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ send_bt;



	private: System::Windows::Forms::Panel^ msg_pnl;
	private: System::Windows::Forms::Label^ msg_time;


	private: System::Windows::Forms::Label^ msg_text;

	private: System::Windows::Forms::CheckBox^ seen_box;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->top_panal = (gcnew System::Windows::Forms::Panel());
			this->btn_unsend = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->user_name = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->send_pnl = (gcnew System::Windows::Forms::Panel());
			this->send_bt = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->msg_pnl = (gcnew System::Windows::Forms::Panel());
			this->name_txt = (gcnew System::Windows::Forms::Label());
			this->seen_box = (gcnew System::Windows::Forms::CheckBox());
			this->msg_time = (gcnew System::Windows::Forms::Label());
			this->msg_text = (gcnew System::Windows::Forms::Label());
			this->container_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->top_panal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->send_pnl->SuspendLayout();
			this->msg_pnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// top_panal
			// 
			this->top_panal->BackColor = System::Drawing::Color::Transparent;
			this->top_panal->Controls->Add(this->btn_unsend);
			this->top_panal->Controls->Add(this->button1);
			this->top_panal->Controls->Add(this->user_name);
			this->top_panal->Controls->Add(this->pictureBox1);
			this->top_panal->Dock = System::Windows::Forms::DockStyle::Top;
			this->top_panal->ForeColor = System::Drawing::Color::White;
			this->top_panal->Location = System::Drawing::Point(0, 0);
			this->top_panal->Margin = System::Windows::Forms::Padding(2);
			this->top_panal->Name = L"top_panal";
			this->top_panal->Size = System::Drawing::Size(550, 89);
			this->top_panal->TabIndex = 0;
			this->top_panal->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::top_panal_Paint);
			// 
			// btn_unsend
			// 
			this->btn_unsend->BackColor = System::Drawing::Color::Gray;
			this->btn_unsend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_unsend->Location = System::Drawing::Point(324, 25);
			this->btn_unsend->Name = L"btn_unsend";
			this->btn_unsend->Size = System::Drawing::Size(154, 47);
			this->btn_unsend->TabIndex = 3;
			this->btn_unsend->Text = L"unsend message!";
			this->btn_unsend->UseVisualStyleBackColor = false;
			this->btn_unsend->Click += gcnew System::EventHandler(this, &MyForm::btn_unsend_Click);
			this->btn_unsend->Hide();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::IndianRed;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(483, 25);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 47);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// user_name
			// 
			this->user_name->AutoSize = true;
			this->user_name->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_name->Location = System::Drawing::Point(123, 11);
			this->user_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(0, 28);
			this->user_name->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(91, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// send_pnl
			// 
			this->send_pnl->Controls->Add(this->send_bt);
			this->send_pnl->Controls->Add(this->textBox1);
			this->send_pnl->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->send_pnl->Location = System::Drawing::Point(0, 647);
			this->send_pnl->Margin = System::Windows::Forms::Padding(2);
			this->send_pnl->Name = L"send_pnl";
			this->send_pnl->Size = System::Drawing::Size(550, 63);
			this->send_pnl->TabIndex = 1;
			// 
			// send_bt
			// 
			this->send_bt->BackColor = System::Drawing::Color::DimGray;
			this->send_bt->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send_bt->ForeColor = System::Drawing::Color::White;
			this->send_bt->Location = System::Drawing::Point(407, 0);
			this->send_bt->Margin = System::Windows::Forms::Padding(15, 16, 15, 16);
			this->send_bt->Name = L"send_bt";
			this->send_bt->Padding = System::Windows::Forms::Padding(8);
			this->send_bt->Size = System::Drawing::Size(101, 60);
			this->send_bt->TabIndex = 1;
			this->send_bt->Text = L"send";
			this->send_bt->UseVisualStyleBackColor = false;
			this->send_bt->Click += gcnew System::EventHandler(this, &MyForm::send_bt_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(3, 2);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 60);
			this->textBox1->TabIndex = 0;
			// 
			// msg_pnl
			// 
			this->msg_pnl->BackColor = System::Drawing::Color::Beige;
			this->msg_pnl->Controls->Add(this->name_txt);
			this->msg_pnl->Controls->Add(this->seen_box);
			this->msg_pnl->Controls->Add(this->msg_time);
			this->msg_pnl->Controls->Add(this->msg_text);
			this->msg_pnl->Location = System::Drawing::Point(3, 3);
			this->msg_pnl->Name = L"msg_pnl";
			this->msg_pnl->Padding = System::Windows::Forms::Padding(10);
			this->msg_pnl->Size = System::Drawing::Size(575, 63);
			this->msg_pnl->TabIndex = 0;
			// 
			// name_txt
			// 
			this->name_txt->AutoSize = true;
			this->name_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->name_txt->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_txt->Location = System::Drawing::Point(31, 0);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(33, 16);
			this->name_txt->TabIndex = 3;
			this->name_txt->Text = L"label1";
			// 
			// seen_box
			// 
			this->seen_box->AutoSize = true;
			this->seen_box->Checked = true;
			this->seen_box->CheckState = System::Windows::Forms::CheckState::Checked;
			this->seen_box->Enabled = false;
			this->seen_box->Location = System::Drawing::Point(474, 31);
			this->seen_box->Name = L"seen_box";
			this->seen_box->Size = System::Drawing::Size(49, 17);
			this->seen_box->TabIndex = 2;
			this->seen_box->Text = L"seen";
			this->seen_box->UseVisualStyleBackColor = true;
			// 
			// msg_time
			// 
			this->msg_time->AutoSize = true;
			this->msg_time->Location = System::Drawing::Point(407, 57);
			this->msg_time->Name = L"msg_time";
			this->msg_time->Size = System::Drawing::Size(35, 13);
			this->msg_time->TabIndex = 1;
			this->msg_time->Text = L"label1";
			// 
			// msg_text
			// 
			this->msg_text->AutoSize = true;
			this->msg_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg_text->Location = System::Drawing::Point(61, 31);
			this->msg_text->Name = L"msg_text";
			this->msg_text->Size = System::Drawing::Size(60, 24);
			this->msg_text->TabIndex = 0;
			this->msg_text->Text = L"label1";
			// 
			// container_pnl
			// 
			this->container_pnl->AutoScroll = true;
			this->container_pnl->BackColor = System::Drawing::Color::Transparent;
			this->container_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->container_pnl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container_pnl->Location = System::Drawing::Point(0, 89);
			this->container_pnl->Margin = System::Windows::Forms::Padding(2);
			this->container_pnl->Name = L"container_pnl";
			this->container_pnl->Size = System::Drawing::Size(550, 558);
			this->container_pnl->TabIndex = 2;
			this->container_pnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::container_pnl_Paint_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 710);
			this->Controls->Add(this->container_pnl);
			this->Controls->Add(this->send_pnl);
			this->Controls->Add(this->top_panal);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->top_panal->ResumeLayout(false);
			this->top_panal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->send_pnl->ResumeLayout(false);
			this->send_pnl->PerformLayout();
			this->msg_pnl->ResumeLayout(false);
			this->msg_pnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		SqlConnection^ connection = gcnew SqlConnection("Data Source=.\;Initial Catalog=ChitChatDB;Integrated Security=True");
		public :int ch = 0;
		void f() {
			if (home::switchToChatroom)
				ch = home::CHID;
			else
				ch = Groups::CHID;
		}
		void insert_message() {


			try
			{

				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}
				String^ tt = this->textBox1->Text;
				String^ sqlQuery = "INSERT INTO Messages (Text , CID , CHID ,Type ,Date ,Time) VALUES (@text , @cid , @chid ,@type ,@date , @time);";

				SqlCommand cmd(sqlQuery, connection);

				time_t TimeDate = time(0);
				char* c = ctime(&TimeDate);

				int Time = (int)(TimeDate);

				String^ STimeDate = gcnew String(c);
				STimeDate = STimeDate->Substring(11, 5);

				cmd.Parameters->AddWithValue("@text", this->textBox1->Text);
				cmd.Parameters->AddWithValue("@cid", LoginForm::cont->Id);
				cmd.Parameters->AddWithValue("@chid", ch);
				cmd.Parameters->AddWithValue("@type", false);
				cmd.Parameters->AddWithValue("@date", STimeDate);
				cmd.Parameters->AddWithValue("@time", Time);
				int n = cmd.ExecuteNonQuery();
				connection->Close();
				this->msg_time->Text = STimeDate;




			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}




			this->textBox1->Text = "";

		}


		void show_message()
		{
			q = gcnew cliext::queue<message^>();

			int i = 0;

			try
			{
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}

				String^ sqlQuery = "SELECT MID ,Text , Time , CID , Type ,Date FROM Messages WHERE CHID = @CHID  ;";

				SqlCommand cmd(sqlQuery, connection);
				cmd.Parameters->AddWithValue("@CHID", ch);
				SqlDataReader^ reader = cmd.ExecuteReader();


				while (reader->Read())
				{

					message^ m = gcnew message((int)reader[0], (int)(ch), (String^)reader[1]->ToString(), (bool)reader[4], (String^)reader[2]->ToString(), (int)reader[3], reader[5]->ToString());


					q->push(m);
					i++;



				}

				reader->Close();




			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}

			try
			{
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}

				String^ sqlQuery = "SELECT Type FROM Chatrooms WHERE CHID = @CHID ;";
				SqlCommand cmd(sqlQuery, connection);
				cmd.Parameters->AddWithValue("@CHID", ch);
				SqlDataReader^ reader = cmd.ExecuteReader();
				reader->Read();
				group = (bool)reader[0];
				reader->Close();
				//  ^^^^^^^this is the reader which makes eror ^^^^^^^^^
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}




			if (group == false) {

				for (int j = 0; j < i; j++)
				{
					if (z == 1) {

						this->msg_pnl = (gcnew System::Windows::Forms::Panel());
						this->msg_time = (gcnew System::Windows::Forms::Label());
						this->msg_text = (gcnew System::Windows::Forms::Label());
						this->seen_box = (gcnew System::Windows::Forms::CheckBox());

						message^ n = gcnew message();
						n = q->front();
						q->pop();


						//String^ STimeDate = gcnew String(n->get_time());
						//STimeDate = STimeDate->Substring(11, 5);

						this->msg_text->Text = n->get_msg();
						this->msg_time->Text = n->get_date();


						// 
						// msg_pnl
						// 



						this->msg_pnl->Controls->Add(this->msg_time);
						this->msg_pnl->Controls->Add(this->msg_text);

						this->msg_pnl->Location = System::Drawing::Point(6, 0);
						this->msg_pnl->Name = L"msg_pnl";
						this->msg_pnl->Size = System::Drawing::Size(300, 63);
						this->msg_pnl->TabIndex = 0;
						// 
						// msg_time
						// 
						this->msg_time->AutoSize = true;

						this->msg_time->Name = L"msg_time";
						this->msg_time->Size = System::Drawing::Size(44, 16);
						this->msg_time->TabIndex = 1;
						//this->msg_time->Text = L"label1";
						// 
						// msg_text
						// 
						this->msg_text->AutoSize = true;
						if (n->get_usereid() == LoginForm::cont->Id) {
							this->msg_pnl->Margin = System::Windows::Forms::Padding(0, 10, 200, 10);
							this->msg_pnl->BackColor = System::Drawing::Color::Beige;
							this->msg_text->Location = System::Drawing::Point(30, 21);
							this->msg_time->Location = System::Drawing::Point(240, 47);
							this->seen_box->Location = System::Drawing::Point(200, 45);
							this->msg_pnl->Controls->Add(this->seen_box);
						}
						else
						{

							this->msg_pnl->Margin = System::Windows::Forms::Padding(200, 10, 0, 10);
							this->msg_pnl->BackColor = System::Drawing::Color::DarkGoldenrod;
							this->msg_text->Location = System::Drawing::Point(30, 21);
							this->msg_time->Location = System::Drawing::Point(250, 47);


						}



						this->msg_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));

						this->msg_text->Name = L"msg_text";
						this->msg_text->Size = System::Drawing::Size(50, 15);
						this->msg_text->TabIndex = 0;
						//this->msg_text->Text = L"label1";

						// seen_box
							// 


						if (n->getType() == false) {
							this->seen_box->Checked = false;
						}
						else {
							this->seen_box->Checked = true;

						}


						this->seen_box->AutoSize = true;
						this->seen_box->Enabled = false;
						this->seen_box->Name = L"seen_box";
						this->seen_box->Size = System::Drawing::Size(59, 20);
						this->seen_box->TabIndex = 2;
						this->seen_box->Text = L"seen";
						this->seen_box->UseVisualStyleBackColor = true;
						// 









						this->container_pnl->Controls->Add(this->msg_pnl);

						//	y += 70;



					}


				}
				z = 0;



			}

			else {

				for (int j = 0; j < i; j++)
				{



					if (z == 1) {

						this->msg_pnl = (gcnew System::Windows::Forms::Panel());
						this->msg_time = (gcnew System::Windows::Forms::Label());
						this->msg_text = (gcnew System::Windows::Forms::Label());
						this->seen_box = (gcnew System::Windows::Forms::CheckBox());
						this->name_txt = (gcnew System::Windows::Forms::Label());
						message^ n = gcnew message();
						n = q->front();
						q->pop();


						//String^ STimeDate = gcnew String(n->get_time());
						//STimeDate = STimeDate->Substring(11, 5);

						this->msg_text->Text = n->get_msg();
						this->msg_time->Text = n->get_date();


						// 
						// msg_pnl
						//
						this->msg_pnl->Controls->Add(this->msg_time);
						this->msg_pnl->Controls->Add(this->msg_text);

						this->msg_pnl->Location = System::Drawing::Point(6, 0);
						this->msg_pnl->Name = L"msg_pnl";
						this->msg_pnl->Size = System::Drawing::Size(300, 63);
						this->msg_pnl->TabIndex = 0;
						// 
						// msg_time
						// 
						this->msg_time->AutoSize = true;
						this->msg_time->Name = L"msg_time";
						this->msg_time->Size = System::Drawing::Size(44, 16);
						this->msg_time->TabIndex = 1;


						if (n->get_usereid() == LoginForm::cont->Id) {
							this->msg_pnl->Margin = System::Windows::Forms::Padding(0, 10, 200, 10);
							this->msg_pnl->BackColor = System::Drawing::Color::Beige;
							this->msg_text->Location = System::Drawing::Point(30, 21);
							this->msg_time->Location = System::Drawing::Point(240, 47);
							this->seen_box->Location = System::Drawing::Point(200, 45);
							this->msg_pnl->Controls->Add(this->seen_box);
						}
						else
						{


							this->msg_pnl->Controls->Add(this->name_txt);
							this->msg_pnl->Margin = System::Windows::Forms::Padding(200, 10, 0, 10);
							this->msg_pnl->BackColor = System::Drawing::Color::DarkGoldenrod;
							this->msg_text->Location = System::Drawing::Point(30, 21);
							this->msg_time->Location = System::Drawing::Point(250, 47);
						}

						// 
						// name_txt
						// 
						this->name_txt->AutoSize = true;
						this->name_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(192)));
						this->name_txt->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						this->name_txt->Location = System::Drawing::Point(31, 0);
						this->name_txt->Name = L"name_txt";
						this->name_txt->Size = System::Drawing::Size(38, 17);
						this->name_txt->TabIndex = 3;

						try
						{
							if (connection->State != ConnectionState::Open) {
								connection->Open();
							}

							String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @cid ;";
							SqlCommand cmd(sqlQuery, connection);
							cmd.Parameters->AddWithValue("@cid", n->get_usereid());
							SqlDataReader^ reader = cmd.ExecuteReader();
							reader->Read();
							this->name_txt->Text = reader[0]->ToString() + reader[1]->ToString();
							reader->Close();

						}
						catch (Exception^ e)
						{
							MessageBox::Show(e->Message);
						}



						//
						//msg_text
						//
						this->msg_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						this->msg_text->Name = L"msg_text";
						this->msg_text->Size = System::Drawing::Size(50, 15);
						this->msg_text->TabIndex = 0;
						this->msg_text->AutoSize = true;

						//
						// seen_box
						// 
						if (n->getType() == 0) {
							this->seen_box->Checked = false;
						}
						else {
							this->seen_box->Checked = true;
						}
						this->seen_box->AutoSize = true;
						this->seen_box->Enabled = false;
						this->seen_box->Name = L"seen_box";
						this->seen_box->Size = System::Drawing::Size(59, 20);
						this->seen_box->TabIndex = 2;
						this->seen_box->Text = L"seen";
						this->seen_box->UseVisualStyleBackColor = true;



						this->container_pnl->Controls->Add(this->msg_pnl);

						//	y += 70;



					}


				}
				z = 0;

			}









		}


	private: System::Void send_bt_Click(System::Object^ sender, System::EventArgs^ e) {


		this->msg_pnl = (gcnew System::Windows::Forms::Panel());
		this->msg_time = (gcnew System::Windows::Forms::Label());
		this->msg_text = (gcnew System::Windows::Forms::Label());
		this->seen_box = (gcnew System::Windows::Forms::CheckBox());



		if (this->textBox1->Text != "")

		{

			this->msg_pnl->Controls->Add(this->seen_box);
			this->msg_pnl->Margin = System::Windows::Forms::Padding(0, 10, 200, 10);
			this->msg_pnl->BackColor = System::Drawing::Color::Beige;
			this->msg_text->Location = System::Drawing::Point(30, 21);
			this->msg_time->Location = System::Drawing::Point(240, 47);
			this->seen_box->Location = System::Drawing::Point(200, 45);
			// 
			// msg_pnl
			// 
			this->msg_text->Text = this->textBox1->Text;
			this->msg_pnl->Controls->Add(this->msg_time);
			this->msg_pnl->Controls->Add(this->msg_text);
			this->msg_pnl->Controls->Add(this->seen_box);
			this->msg_pnl->Location = System::Drawing::Point(6, 0);
			this->msg_pnl->Name = L"msg_pnl";
			this->msg_pnl->Size = System::Drawing::Size(300, 63);
			this->msg_pnl->TabIndex = 0;
			// 
			// msg_time
			// 
			this->msg_time->AutoSize = true;
			this->msg_time->Name = L"msg_time";
			this->msg_time->Size = System::Drawing::Size(44, 16);
			this->msg_time->TabIndex = 1;


			this->msg_pnl->BackColor = System::Drawing::Color::Beige;


			//
			//msg_text
			//
			this->msg_text->AutoSize = true;
			this->msg_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			this->msg_text->Name = L"msg_text";
			this->msg_text->Size = System::Drawing::Size(100, 29);
			this->msg_text->TabIndex = 0;
			//
			// seen_box
			// 
			this->seen_box->Checked = false;
			this->seen_box->AutoSize = true;
			this->seen_box->Enabled = false;
			this->seen_box->Name = L"seen_box";
			this->seen_box->Size = System::Drawing::Size(59, 20);
			this->seen_box->TabIndex = 2;
			this->seen_box->Text = L"seen";
			this->seen_box->UseVisualStyleBackColor = true;
			//z = 0;

			insert_message();

			this->container_pnl->Controls->Add(this->msg_pnl);




		}
		this->btn_unsend->Show();
	}


	private: Image^ img;

	private: System::Void top_panal_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		try
		{
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}

			String^ sqlQuery = "SELECT Type FROM Chatrooms WHERE CHID = @CHID ;";
			SqlCommand cmd(sqlQuery, connection);
			cmd.Parameters->AddWithValue("@CHID", ch);
			SqlDataReader^ reader = cmd.ExecuteReader();
			reader->Read();
			group = (bool)reader[0];
			reader->Close();
			//  ^^^^^^^this is the reader which makes eror ^^^^^^^^^
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}


		if (group) {


			try
			{
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}

				String^ sqlQuery = "SELECT G_Name FROM GroupChat WHERE CHID = @cHid ;";
				SqlCommand cmd(sqlQuery, connection);
				cmd.Parameters->AddWithValue("@chid", ch);
				SqlDataReader^ reader = cmd.ExecuteReader();
				reader->Read();
				this->user_name->Text = reader[0]->ToString();
				reader->Close();

			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}

		}
		else {
			try
			{
				if (connection->State != ConnectionState::Open) {
					connection->Open();
				}

				String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @cid ;";
				SqlCommand cmd(sqlQuery, connection);
				cmd.Parameters->AddWithValue("@cid", home::CID);
				SqlDataReader^ reader = cmd.ExecuteReader();
				if (reader->Read())
				{
					if (!reader->IsDBNull(0))
					{
						this->user_name->Text = reader->GetString(0) + " " + reader->GetString(1);
					}
				}
				reader->Close();

				String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
				SqlCommand command1(sqlQuery1, connection);
				command1.Parameters->AddWithValue("@CID", home::CID);

				SqlDataReader^ reader1 = command1.ExecuteReader();

				if (reader1->Read())
				{
					if (!reader1->IsDBNull(0))
					{
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
						img = Image::FromStream(m);
						this->pictureBox1->Image = img;
					}
				}
				reader1->Close();
				connection->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}

		this->top_panal->Controls->Add(this->user_name);
		this->top_panal->Controls->Add(this->pictureBox1);


	}



	private: System::Void container_pnl_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		show_message();
	}


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		int val;
		try
		{
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}
			String^ sqlQuery = "SELECT Visability FROM UserProfile WHERE CID = @CID ;";
			SqlCommand cmd(sqlQuery, connection);
			cmd.Parameters->AddWithValue("@CID", home::CID);
			SqlDataReader^ reader = cmd.ExecuteReader();
			if (reader->Read())
			{
				if (!reader->IsDBNull(0))
				{
					val = reader->GetInt32(0);
				}
			}
			reader->Close();
			connection->Close();

		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		if (val == 1)
		{
			ViewUserProfile^ viewUserProfile = gcnew ViewUserProfile(home::CID);
			this->Hide();
			viewUserProfile->ShowDialog();
			Show();
		}

	}

	 public:bool switchToHome = false;//++++++++++++++++++++++++++++++
	 public:bool switchToGroup = false;//++++++++++++++++++++++++++++++
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (group)
			this->switchToGroup = true;
		else
		    this->switchToHome = true;
		this->Close();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		f();
	}

		public: int maxMID;
		public: int senderCID;
		 public: bool refreshMessage = false;
private: System::Void btn_unsend_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (connection->State != ConnectionState::Open) {
			connection->Open();
		}
		String^ sqlQuery1 = "SELECT max(MID) FROM Messages; ";
		SqlCommand cmd1(sqlQuery1, connection);
		SqlDataReader^ reader = cmd1.ExecuteReader();
		if (reader->Read())
		{
			maxMID = (int)reader[0];
		}
		//geting the last msg id
		reader->Close();


		String^ sqlQuery2 = "SELECT CID FROM Messages WHERE MID='" + maxMID + "';";
		SqlCommand cmd2(sqlQuery2, connection);
		SqlDataReader^ reader2 = cmd2.ExecuteReader();
		if (reader2->Read())
		{
			senderCID = (int)reader2[0];   //geting cid of the last sender
			
		}reader2->Close();

		if (senderCID == LoginForm::cont->Id) {

			String^ sqlQuery3 = "DELETE FROM Messages WHERE MID ='" + maxMID + "';";
			SqlCommand cmd3(sqlQuery3, connection);
			cmd3.ExecuteNonQuery();
			q->pop();
			this->refreshMessage = true;
			this->Close();
		}
		connection->Close();
		
		//MyForm::UpdateStyles();


	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

}
};
}
