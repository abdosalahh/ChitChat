#pragma once
#include "Contacts.h"
#include "LoginForm.h"
#include "Story.h"
#include <cliext/list>
#include <ctime>
#include "MyStory.h"
#include "FriendStory.h"
#include "AddStory.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace	System::Collections::Generic;

	public ref class StoryMain : public System::Windows::Forms::Form
	{
	public:
		StoryMain(void)
		{
			InitializeComponent();
		}

	protected:
		~StoryMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::Button^ AddStoryButton;
	private: System::Windows::Forms::Label^ MyStoryLabel1;
	private: System::Windows::Forms::Label^ MyStoryLabel2;
	private: System::Windows::Forms::PictureBox^ MyStoryPictureBox;
		   //Friend components
	private: System::Windows::Forms::PictureBox^ FriendStoryPictureBox;
	private: System::Windows::Forms::Label^ FriendStoryLabel1;
	private: System::Windows::Forms::Label^ FriendStoryLabel2;
	private: System::Windows::Forms::Button^ MyStoryButton;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryMain::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->AddStoryButton = (gcnew System::Windows::Forms::Button());
			this->MyStoryButton = (gcnew System::Windows::Forms::Button());
			this->MyStoryLabel2 = (gcnew System::Windows::Forms::Label());
			this->MyStoryPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->MyStoryLabel1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyStoryPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// GoBackButton
			// 
			this->GoBackButton->BackColor = System::Drawing::Color::Transparent;
			this->GoBackButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatAppearance->BorderSize = 0;
			this->GoBackButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->GoBackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GoBackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GoBackButton.Image")));
			this->GoBackButton->Location = System::Drawing::Point(12, 12);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(47, 46);
			this->GoBackButton->TabIndex = 0;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &StoryMain::GoBackButton_Click);
			// 
			// AddStoryButton
			// 
			this->AddStoryButton->BackColor = System::Drawing::Color::Transparent;
			this->AddStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->AddStoryButton->FlatAppearance->BorderSize = 0;
			this->AddStoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->AddStoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->AddStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddStoryButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddStoryButton.Image")));
			this->AddStoryButton->Location = System::Drawing::Point(465, 7);
			this->AddStoryButton->Name = L"AddStoryButton";
			this->AddStoryButton->Size = System::Drawing::Size(73, 62);
			this->AddStoryButton->TabIndex = 1;
			this->AddStoryButton->UseVisualStyleBackColor = false;
			this->AddStoryButton->Click += gcnew System::EventHandler(this, &StoryMain::AddStoryButton_Click);
			// 
			// MyStoryButton
			// 
			this->MyStoryButton->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->MyStoryButton->FlatAppearance->BorderSize = 3;
			this->MyStoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->MyStoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->MyStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MyStoryButton->Location = System::Drawing::Point(64, 87);
			this->MyStoryButton->Name = L"MyStoryButton";
			this->MyStoryButton->Size = System::Drawing::Size(439, 104);
			this->MyStoryButton->TabIndex = 2;
			this->MyStoryButton->UseVisualStyleBackColor = false;
			this->MyStoryButton->Click += gcnew System::EventHandler(this, &StoryMain::MyStoryButton_Click);
			// 
			// MyStoryLabel2
			// 
			this->MyStoryLabel2->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel2->ForeColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel2->Location = System::Drawing::Point(200, 147);
			this->MyStoryLabel2->Name = L"MyStoryLabel2";
			this->MyStoryLabel2->Size = System::Drawing::Size(293, 30);
			this->MyStoryLabel2->TabIndex = 5;
			this->MyStoryLabel2->Text = L"There Is No Story To Show";
			// 
			// MyStoryPictureBox
			// 
			this->MyStoryPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MyStoryPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyStoryPictureBox.Image")));
			this->MyStoryPictureBox->Location = System::Drawing::Point(88, 104);
			this->MyStoryPictureBox->Name = L"MyStoryPictureBox";
			this->MyStoryPictureBox->Size = System::Drawing::Size(91, 73);
			this->MyStoryPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MyStoryPictureBox->TabIndex = 4;
			this->MyStoryPictureBox->TabStop = false;
			// 
			// MyStoryLabel1
			// 
			this->MyStoryLabel1->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel1->ForeColor = System::Drawing::Color::White;
			this->MyStoryLabel1->Location = System::Drawing::Point(195, 104);
			this->MyStoryLabel1->Name = L"MyStoryLabel1";
			this->MyStoryLabel1->Size = System::Drawing::Size(154, 33);
			this->MyStoryLabel1->TabIndex = 3;
			this->MyStoryLabel1->Text = L"My Story";
			// 
			// StoryMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 710);
			this->Controls->Add(this->MyStoryLabel2);
			this->Controls->Add(this->MyStoryPictureBox);
			this->Controls->Add(this->MyStoryLabel1);
			this->Controls->Add(this->MyStoryButton);
			this->Controls->Add(this->AddStoryButton);
			this->Controls->Add(this->GoBackButton);
			this->Name = L"StoryMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StoryMain";
			this->Load += gcnew System::EventHandler(this, &StoryMain::StoryMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyStoryPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	//Creating a list to store friend ids inside
	private: static List<int>^ FriendID;
    //list of all user friends stories
	private: static List<Story^>^ FriendStories;
	private: Story^ story;
    //to get last story date for each friend
	private:static List<Story^>^ lastTime;
	//bool to check if i have a story
	private: bool hasStory = false;
	private: void showStory()
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StoryMain::typeid));
		FriendID = gcnew List<int>();
		FriendStories = gcnew List<Story^>();
		lastTime = gcnew List<Story^>();
		try
		{
			//Delete story if it has passsed 24 hours
			time_t TimeDate = time(0);
			int sid = (int)TimeDate - 86400;
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery0 = "Delete FROM Stories WHERE  SID < " + sid;
			SqlCommand command0(sqlQuery0, % sqlConn);
			command0.ExecuteNonQuery();

			//My Story button to update data

			 //Changing the date of the story button if the user has any story

			String^ sqlQuery = "SELECT TimeDate FROM Stories WHERE CID = @CID;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read())
			{
				if (!reader->IsDBNull(0))
				{
					MyStoryLabel2->Text = reader->GetString(0);
					hasStory = true;
				}
			}
			else
			{
				MyStoryLabel2->Text = nullptr;
			}
			reader->Close();
			//------------------------------------------------------------------------//


			//Changing the image of the story button if the user has any story
			String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader1 = command1.ExecuteReader();

			if (reader1->Read())
			{
				if (!reader1->IsDBNull(0))
				{
					MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
					MyStoryPictureBox->Image = Image::FromStream(m);
				}
			}
			reader1->Close();
			//------------------------------------------------------------------------//

			//Saving friends id in a list
			String^ sqlQuery2 = "SELECT FID FROM HasContacts WHERE CID = @CID";
			SqlCommand command2(sqlQuery2, % sqlConn);
			command2.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader2 = command2.ExecuteReader();

			while (reader2->Read())
			{
				if (reader2->HasRows)
				{
					FriendID->Add(reader2->GetInt32(0));
				}
			}
			reader2->Close();
			//----------------------------------------------------------------//

			String^ sqlQuery3 = "SELECT CID FROM HasContacts WHERE FID = @FID";
			SqlCommand command3(sqlQuery3, % sqlConn);
			command3.Parameters->AddWithValue("@FID", LoginForm::cont->Id);

			SqlDataReader^ reader3 = command3.ExecuteReader();
			while (reader3->Read())
			{
				if (reader3->HasRows)
				{
					FriendID->Add(reader3->GetInt32(0));
				}
			}
			reader3->Close();
			//---------------------------------------------------------------------//

			//saving friends stories in a list
			for (int i = 0; i < FriendID->Count; i++)
			{
				String^ sqlQuery4 = "SELECT * FROM Stories WHERE CID = @CID;";
				SqlCommand command4(sqlQuery4, % sqlConn);
				command4.Parameters->AddWithValue("@CID", FriendID[i]);
				SqlDataReader^ reader4 = command4.ExecuteReader();
				while (reader4->Read())
				{
					story = gcnew Story;
					story->SID = reader4->GetInt32(0);
					if (!reader4->IsDBNull(1))
					{
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader4[1]);
						story->Img = Image::FromStream(m);
					}


					if (!reader4->IsDBNull(2))
					{
						story->Text = reader4->GetString(2);
					}
					else
					{
						story->Text = "";
					}
					story->TimeDate = reader4->GetString(3);
					story->CID = reader4->GetInt32(4);
					FriendStories->Add(story);
				}
				reader4->Close();
			}
			//------------------------------------------------------------------------//

			sqlConn.Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
		}
		//Showing friends story buttons
		int y = 220;
		bool f = false;
		if (FriendStories->Count > 0)
		{
			for (int i = 0; i < FriendStories->Count; i++)
			{
				if (i == FriendStories->Count - 1 || ((FriendStories[i]->CID) != (FriendStories[i + 1]->CID)))
				{
					lastTime->Add(FriendStories[i]);
				}
			}
			lastTime->Sort();
			List<Story^>^ l = gcnew List<Story^>();
			for each (Story ^ var in lastTime)
			{
				for (int i = 0; i < FriendStories->Count; i++)
				{
					if (FriendStories[i]->CID == var->CID)
					{
						l->Add(FriendStories[i]);
					}
				}
			}
			FriendStories->Clear();
			FriendStories = l;
			delete[] l;
			for (int i = 0; i < lastTime->Count; i++)
			{

				{
					String^ name = nullptr;
					MemoryStream^ mm = gcnew MemoryStream();
					bool flag = false;
					try
					{
						//Getting the name of the user who has story i
						String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
						SqlConnection sqlConn(connString);
						sqlConn.Open();

						String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID;";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@CID", lastTime[i]->CID);

						SqlDataReader^ reader = command.ExecuteReader();

						if (reader->Read())
						{
							if (!reader->IsDBNull(0) || !reader->IsDBNull(1))
							{
								Name = reader->GetString(0);
								Name += " ";
								Name += reader->GetString(1);
							}
						}
						reader->Close();

						//Changing the image of the user story button if the user has any story
						String^ sqlQuery2 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
						SqlCommand command2(sqlQuery2, % sqlConn);
						command2.Parameters->AddWithValue("@CID", lastTime[i]->CID);

						SqlDataReader^ reader2 = command2.ExecuteReader();

						if (reader2->Read())
						{
							if (!reader2->IsDBNull(0))
							{
								MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader2[0]);
								mm = m;
								flag = true;
							}
						}

						reader2->Close();

						sqlConn.Close();
					}
					catch (Exception^ e)
					{
						MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
					}

					Button^ FriendStoryButton = gcnew Button();
					this->FriendStoryPictureBox = (gcnew System::Windows::Forms::PictureBox());
					this->FriendStoryLabel1 = (gcnew System::Windows::Forms::Label());
					this->FriendStoryLabel2 = (gcnew System::Windows::Forms::Label());
					(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FriendStoryPictureBox))->EndInit();
					FriendStoryButton->SuspendLayout();



					//FriendStoryPictureBox


					if (flag)
					{
						this->FriendStoryPictureBox->Image = Image::FromStream(mm);
					}
					else
					{
						this->FriendStoryPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyStoryPictureBox.Image")));
					}
					this->FriendStoryPictureBox->BackColor = System::Drawing::Color::Transparent;
					this->FriendStoryPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
					this->FriendStoryPictureBox->Location = System::Drawing::Point(26, 17);
					this->FriendStoryPictureBox->Name = L"FriendStoryPictureBox";
					this->FriendStoryPictureBox->Size = System::Drawing::Size(91, 73);
					this->FriendStoryPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					this->FriendStoryPictureBox->TabIndex = 4;
					this->FriendStoryPictureBox->TabStop = false;

					//FriendStoryLabel1
					this->FriendStoryLabel1->BackColor = System::Drawing::Color::Transparent;
					this->FriendStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->FriendStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->FriendStoryLabel1->ForeColor = System::Drawing::Color::White;
					this->FriendStoryLabel1->Location = System::Drawing::Point(135, 17);
					this->FriendStoryLabel1->Name = L"FriendStoryLabel1";
					this->FriendStoryLabel1->Size = System::Drawing::Size(154, 33);
					this->FriendStoryLabel1->TabIndex = 3;
					if (Name != nullptr)
					{
						this->FriendStoryLabel1->Text = Name;
					}

					//FriendStoryLabel2
					this->FriendStoryLabel2->BackColor = System::Drawing::Color::Transparent;
					this->FriendStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					this->FriendStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->FriendStoryLabel2->ForeColor = System::Drawing::Color::White;
					this->FriendStoryLabel2->Location = System::Drawing::Point(140, 60);
					this->FriendStoryLabel2->Name = L"FriendStoryLabel2";
					this->FriendStoryLabel2->Size = System::Drawing::Size(293, 30);
					this->FriendStoryLabel2->TabIndex = 5;
					this->FriendStoryLabel2->Text = lastTime[i]->TimeDate;

					//FriendStoryButton
					FriendStoryButton->BackColor = System::Drawing::Color::Transparent;
					FriendStoryButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
					FriendStoryButton->FlatAppearance->BorderSize = 3;
					FriendStoryButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
					FriendStoryButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
					FriendStoryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					FriendStoryButton->ForeColor = System::Drawing::SystemColors::ControlText;
					FriendStoryButton->Location = System::Drawing::Point(64, y);
					FriendStoryButton->Name = lastTime[i]->CID.ToString();
					FriendStoryButton->Size = System::Drawing::Size(439, 104);
					FriendStoryButton->TabIndex = 2;
					FriendStoryButton->UseVisualStyleBackColor = false;
					FriendStoryButton->Controls->Add(this->FriendStoryLabel1);
					FriendStoryButton->Controls->Add(this->FriendStoryLabel2);
					FriendStoryButton->Controls->Add(this->FriendStoryPictureBox);
					FriendStoryButton->Click += gcnew System::EventHandler(this, &StoryMain::FriendStoryButton_Click);


					FriendStoryButton->ResumeLayout(false);

					this->Controls->Add(FriendStoryButton);

					y += 130;
				}
			}

		}
	}
	private: System::Void StoryMain_Load(System::Object^ sender, System::EventArgs^) {
		showStory();
	};
	private:Button^ btn;
	private: System::Void FriendStoryButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		btn = (Button^)sender;
		FriendStory^ x = gcnew FriendStory(FriendStories , Convert::ToInt32(btn->Name));
		Hide();
		x->ShowDialog();
		Show();
		showStory();
	}
		
	private: System::Void MyStoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (hasStory)
		{
			MyStory^ x = gcnew MyStory(hasStory);
			Hide();
			x->ShowDialog();
			Show();
			showStory();
		}
	}
    private: System::Void AddStoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddStory^ addStory = gcnew AddStory;
	Hide();
	addStory->ShowDialog();
	Show();
	showStory();

    }

		   public:bool switchToHome = false;  //++++++++++++++++++++++++++++++
    private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToHome = true;
	this->Close();
    }
};
}


