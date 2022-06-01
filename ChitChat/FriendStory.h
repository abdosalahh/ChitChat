#pragma once
#include <cliext/list>
#include "Story.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace	System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Data::SqlClient;


	public ref class FriendStory : public System::Windows::Forms::Form
	{
	public:
		FriendStory(void)
		{
			InitializeComponent();
		}
	private:List<Story^>^ FriendStories = gcnew List<Story ^>();
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:int ButtonID;
	public:
		FriendStory(List<Story^>^ l , int b)
		{
			for (int i = 0; i < l->Count; i++)
			{
				this->FriendStories->Add(l[i]);
			}
			this->ButtonID = b;
			InitializeComponent();
		}
	protected:
		~FriendStory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ FriendPictureBox;
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::Label^ FriendStoryLabel1;
	private: System::Windows::Forms::Label^ FriendStoryLabel2;
	private: System::Windows::Forms::PictureBox^ StoryImage;
	private: System::Windows::Forms::Label^ FriendStoryLabel3;
	private: System::Windows::Forms::Button^ Next;
	private: System::Windows::Forms::Button^ Previous;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FriendStory::typeid));
			this->FriendPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->FriendStoryLabel1 = (gcnew System::Windows::Forms::Label());
			this->FriendStoryLabel2 = (gcnew System::Windows::Forms::Label());
			this->StoryImage = (gcnew System::Windows::Forms::PictureBox());
			this->FriendStoryLabel3 = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Previous = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FriendPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// FriendPictureBox
			// 
			this->FriendPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->FriendPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->FriendPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FriendPictureBox.Image")));
			this->FriendPictureBox->Location = System::Drawing::Point(50, 81);
			this->FriendPictureBox->Name = L"FriendPictureBox";
			this->FriendPictureBox->Size = System::Drawing::Size(92, 76);
			this->FriendPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->FriendPictureBox->TabIndex = 6;
			this->FriendPictureBox->TabStop = false;
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
			this->GoBackButton->Location = System::Drawing::Point(23, 12);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(56, 47);
			this->GoBackButton->TabIndex = 7;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &FriendStory::GoBackButton_Click);
			// 
			// FriendStoryLabel1
			// 
			this->FriendStoryLabel1->AutoSize = true;
			this->FriendStoryLabel1->BackColor = System::Drawing::Color::Transparent;
			this->FriendStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FriendStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendStoryLabel1->ForeColor = System::Drawing::Color::White;
			this->FriendStoryLabel1->Location = System::Drawing::Point(160, 70);
			this->FriendStoryLabel1->Name = L"FriendStoryLabel1";
			this->FriendStoryLabel1->Size = System::Drawing::Size(0, 28);
			this->FriendStoryLabel1->TabIndex = 8;
			// 
			// FriendStoryLabel2
			// 
			this->FriendStoryLabel2->BackColor = System::Drawing::Color::Transparent;
			this->FriendStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FriendStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendStoryLabel2->ForeColor = System::Drawing::Color::White;
			this->FriendStoryLabel2->Location = System::Drawing::Point(177, 116);
			this->FriendStoryLabel2->Name = L"FriendStoryLabel2";
			this->FriendStoryLabel2->Size = System::Drawing::Size(325, 41);
			this->FriendStoryLabel2->TabIndex = 9;
			// 
			// StoryImage
			// 
			this->StoryImage->BackColor = System::Drawing::Color::Transparent;
			this->StoryImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->StoryImage->Location = System::Drawing::Point(50, 179);
			this->StoryImage->Name = L"StoryImage";
			this->StoryImage->Size = System::Drawing::Size(452, 317);
			this->StoryImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->StoryImage->TabIndex = 10;
			this->StoryImage->TabStop = false;
			// 
			// FriendStoryLabel3
			// 
			this->FriendStoryLabel3->BackColor = System::Drawing::Color::Transparent;
			this->FriendStoryLabel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->FriendStoryLabel3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FriendStoryLabel3->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriendStoryLabel3->ForeColor = System::Drawing::Color::White;
			this->FriendStoryLabel3->Location = System::Drawing::Point(50, 521);
			this->FriendStoryLabel3->Name = L"FriendStoryLabel3";
			this->FriendStoryLabel3->Size = System::Drawing::Size(452, 52);
			this->FriendStoryLabel3->TabIndex = 15;
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::Transparent;
			this->Next->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Next->FlatAppearance->BorderSize = 0;
			this->Next->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Next->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->Next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Next->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Next.Image")));
			this->Next->Location = System::Drawing::Point(426, 604);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(76, 62);
			this->Next->TabIndex = 16;
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Click += gcnew System::EventHandler(this, &FriendStory::Next_Click);
			// 
			// Previous
			// 
			this->Previous->BackColor = System::Drawing::Color::Transparent;
			this->Previous->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Previous->FlatAppearance->BorderSize = 0;
			this->Previous->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Previous->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->Previous->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Previous->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Previous.Image")));
			this->Previous->Location = System::Drawing::Point(349, 604);
			this->Previous->Name = L"Previous";
			this->Previous->Size = System::Drawing::Size(71, 62);
			this->Previous->TabIndex = 17;
			this->Previous->UseVisualStyleBackColor = false;
			this->Previous->Click += gcnew System::EventHandler(this, &FriendStory::Previous_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(50, 604);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 78);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// FriendStory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 710);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->FriendStoryLabel3);
			this->Controls->Add(this->StoryImage);
			this->Controls->Add(this->FriendStoryLabel2);
			this->Controls->Add(this->FriendStoryLabel1);
			this->Controls->Add(this->GoBackButton);
			this->Controls->Add(this->FriendPictureBox);
			this->Name = L"FriendStory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FriendStory";
			this->Load += gcnew System::EventHandler(this, &FriendStory::FriendStory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FriendPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: static int i = 0;
	private: System::Void FriendStory_Load(System::Object^ sender, System::EventArgs^ e) {
		for (; i < FriendStories->Count; i++)
		{
			if (ButtonID == FriendStories[i]->CID)
			{
				if(FriendStories[i]->Img != nullptr)
				this->StoryImage->Image = FriendStories[i]->Img;
				else
					this->StoryImage->Image = nullptr;
				this->FriendStoryLabel2->Text = FriendStories[i]->TimeDate;
				this->FriendStoryLabel3->Text = FriendStories[i]->Text;
				try {
					String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID;";
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read())
					{
						if (!reader->IsDBNull(0) || !reader->IsDBNull(1))
						{
							this->FriendStoryLabel1->Text = " ";
							this->FriendStoryLabel1->Text += reader->GetString(0);
							this->FriendStoryLabel1->Text += " ";
							this->FriendStoryLabel1->Text += reader->GetString(1);
						}
					}
					reader->Close();

					String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
					SqlCommand command1(sqlQuery1, % sqlConn);
					command1.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

					SqlDataReader^ reader1 = command1.ExecuteReader();

					if (reader1->Read())
					{
						if (!reader1->IsDBNull(0))
						{
							MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
							this->FriendPictureBox->Image = Image::FromStream(m);
						}
					}
					reader1->Close();
					sqlConn.Close();
				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
				}

				break;
			}
		}
	}
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == FriendStories->Count - 1)
	{
		i = 0;
		this->Close();
	}
	else
		i++;
	if (FriendStories[i]->Img != nullptr)
	  this->StoryImage->Image = FriendStories[i]->Img;
	else
		this->StoryImage->Image = nullptr;
	this->FriendStoryLabel2->Text = FriendStories[i]->TimeDate;
	this->FriendStoryLabel3->Text = FriendStories[i]->Text;
	try {
		String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read())
		{
			this->FriendStoryLabel1->Text = " ";
			if (!reader->IsDBNull(0))
			{
				this->FriendStoryLabel1->Text += reader->GetString(0);
				this->FriendStoryLabel1->Text += " ";
			}
			if(!reader->IsDBNull(1))
			{
				this->FriendStoryLabel1->Text += reader->GetString(1);
			}
		}
		reader->Close();

		String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
		SqlCommand command1(sqlQuery1, % sqlConn);
		command1.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

		SqlDataReader^ reader1 = command1.ExecuteReader();

		if (reader1->Read())
		{
			if (!reader1->IsDBNull(0))
			{
				MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
				this->FriendPictureBox->Image = Image::FromStream(m);
			}
		}
		reader1->Close();
		sqlConn.Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
	}

}
private: System::Void Previous_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == 0)
	{
		i = 0;
		this->Close();
	}
	else
		i--;
	if (FriendStories[i]->Img != nullptr)
		this->StoryImage->Image = FriendStories[i]->Img;
	else
		this->StoryImage->Image = nullptr;
	this->FriendStoryLabel2->Text = FriendStories[i]->TimeDate;
	this->FriendStoryLabel3->Text = FriendStories[i]->Text;
	try {
		String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			this->FriendStoryLabel1->Text = " ";
			if (!reader->IsDBNull(0))
			{
				this->FriendStoryLabel1->Text += reader->GetString(0);
				this->FriendStoryLabel1->Text += " ";
			}
			if (!reader->IsDBNull(1))
			{
				this->FriendStoryLabel1->Text += reader->GetString(1);
			}
		}
		reader->Close();

		String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
		SqlCommand command1(sqlQuery1, % sqlConn);
		command1.Parameters->AddWithValue("@CID", FriendStories[i]->CID);

		SqlDataReader^ reader1 = command1.ExecuteReader();

		if (reader1->Read())
		{
			if (!reader1->IsDBNull(0))
			{
				MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
				this->FriendPictureBox->Image = Image::FromStream(m);
			}
		}
		reader1->Close();
		sqlConn.Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
	}

}
private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;
	this->Close();
}
};
}
