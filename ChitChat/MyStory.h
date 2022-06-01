#pragma once
#include "LoginForm.h"
#include <cliext/list>
#include "Story.h"
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace	System::Collections::Generic;
	using namespace cliext;

	public ref class MyStory : public System::Windows::Forms::Form
	{
	public:
		MyStory(void)
		{
			InitializeComponent();
		}
		static bool hasStatus = false;
		MyStory(bool has)
		{
			hasStatus = has;
			InitializeComponent();
		}

	protected:
		~MyStory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::PictureBox^ MyPictureBox;
	private: System::Windows::Forms::Label^ MyStoryLabel1;
	private: System::Windows::Forms::Label^ MyStoryLabel2;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::PictureBox^ StoryImage;
	private: System::Windows::Forms::Button^ Next;
	private: System::Windows::Forms::Button^ Previous;
	private: System::Windows::Forms::Label^ MyStoryLabel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyStory::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->MyPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->MyStoryLabel1 = (gcnew System::Windows::Forms::Label());
			this->MyStoryLabel2 = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->StoryImage = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Previous = (gcnew System::Windows::Forms::Button());
			this->MyStoryLabel3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->GoBackButton->Size = System::Drawing::Size(61, 44);
			this->GoBackButton->TabIndex = 1;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &MyStory::GoBackButton_Click);
			// 
			// MyPictureBox
			// 
			this->MyPictureBox->BackColor = System::Drawing::Color::Transparent;
			this->MyPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MyPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MyPictureBox.Image")));
			this->MyPictureBox->Location = System::Drawing::Point(47, 69);
			this->MyPictureBox->Name = L"MyPictureBox";
			this->MyPictureBox->Size = System::Drawing::Size(89, 84);
			this->MyPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MyPictureBox->TabIndex = 5;
			this->MyPictureBox->TabStop = false;
			// 
			// MyStoryLabel1
			// 
			this->MyStoryLabel1->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel1->ForeColor = System::Drawing::Color::White;
			this->MyStoryLabel1->Location = System::Drawing::Point(171, 69);
			this->MyStoryLabel1->Name = L"MyStoryLabel1";
			this->MyStoryLabel1->Size = System::Drawing::Size(129, 30);
			this->MyStoryLabel1->TabIndex = 6;
			this->MyStoryLabel1->Text = L"My Story";
			this->MyStoryLabel1->Click += gcnew System::EventHandler(this, &MyStory::MyStoryLabel1_Click);
			// 
			// MyStoryLabel2
			// 
			this->MyStoryLabel2->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel2->ForeColor = System::Drawing::Color::White;
			this->MyStoryLabel2->Location = System::Drawing::Point(182, 119);
			this->MyStoryLabel2->Name = L"MyStoryLabel2";
			this->MyStoryLabel2->Size = System::Drawing::Size(321, 34);
			this->MyStoryLabel2->TabIndex = 7;
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::Transparent;
			this->Delete->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Delete->FlatAppearance->BorderSize = 0;
			this->Delete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Delete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->Delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->Location = System::Drawing::Point(446, 12);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(68, 72);
			this->Delete->TabIndex = 8;
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MyStory::Delete_Click);
			// 
			// StoryImage
			// 
			this->StoryImage->BackColor = System::Drawing::Color::Transparent;
			this->StoryImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->StoryImage->Location = System::Drawing::Point(47, 173);
			this->StoryImage->Name = L"StoryImage";
			this->StoryImage->Size = System::Drawing::Size(456, 312);
			this->StoryImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->StoryImage->TabIndex = 9;
			this->StoryImage->TabStop = false;
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
			this->Next->Location = System::Drawing::Point(446, 597);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(68, 57);
			this->Next->TabIndex = 11;
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Click += gcnew System::EventHandler(this, &MyStory::Next_Click);
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
			this->Previous->Location = System::Drawing::Point(359, 597);
			this->Previous->Name = L"Previous";
			this->Previous->Size = System::Drawing::Size(68, 57);
			this->Previous->TabIndex = 12;
			this->Previous->UseVisualStyleBackColor = false;
			this->Previous->Click += gcnew System::EventHandler(this, &MyStory::Previous_Click);
			// 
			// MyStoryLabel3
			// 
			this->MyStoryLabel3->BackColor = System::Drawing::Color::Transparent;
			this->MyStoryLabel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MyStoryLabel3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyStoryLabel3->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyStoryLabel3->ForeColor = System::Drawing::Color::White;
			this->MyStoryLabel3->Location = System::Drawing::Point(47, 515);
			this->MyStoryLabel3->Name = L"MyStoryLabel3";
			this->MyStoryLabel3->Size = System::Drawing::Size(456, 54);
			this->MyStoryLabel3->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 597);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// MyStory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 710);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MyStoryLabel3);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->StoryImage);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->MyStoryLabel2);
			this->Controls->Add(this->MyStoryLabel1);
			this->Controls->Add(this->MyPictureBox);
			this->Controls->Add(this->GoBackButton);
			this->Name = L"MyStory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyStory";
			this->Load += gcnew System::EventHandler(this, &MyStory::MyStory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoryImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyStoryLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    //queue of my stories
	private: List<Story^>^ myStory;
	private:Story^ story = nullptr;
    private: Image^ img;
    private:static int i = 0;
    private: bool flag = false;
	private:void showMyStory()
	{
		if (hasStatus) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyStory::typeid));
			try {
				String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM Stories WHERE CID = @CID";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

				SqlDataReader^ reader = command.ExecuteReader();
				myStory = gcnew List<Story^>();
				while (reader->Read())
				{
					story = gcnew Story;
					story->SID = reader->GetInt32(0);
					if (!reader->IsDBNull(1))
					{
						flag = true;
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader[1]);
						story->Img = Image::FromStream(m);
					}
					if (!reader->IsDBNull(2))
					{
						story->Text = reader->GetString(2);
					}
					else
					{
						story->Text = "";
					}
					story->TimeDate = reader->GetString(3);
					story->CID = reader->GetInt32(4);
					myStory->Add(story);
				}
				reader->Close();
				//getting my profile image
				String^ sqlQuery1 = "SELECT Image FROM UserProfile WHERE CID = @CID;";
				SqlCommand command1(sqlQuery1, % sqlConn);
				command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

				SqlDataReader^ reader1 = command1.ExecuteReader();

				if (reader1->Read())
				{
					if (!reader1->IsDBNull(0))
					{
						MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader1[0]);
						img = Image::FromStream(m);
						this->MyPictureBox->Image = img;
					}
				}
				reader1->Close();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
			}


			if (flag)
			{
				MyStoryLabel2->Text = myStory[i]->TimeDate;
				MyStoryLabel3->Text = myStory[i]->Text;
				StoryImage->Image = myStory[i]->Img;
			}

		}
	}
private: System::Void MyStory_Load(System::Object^ sender, System::EventArgs^ e) {
	showMyStory();
}
     public:bool switchToMainStory = false;
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStory->Count != 0)
	{
		if (i == myStory->Count - 1)
		{
			//switchToMainStory = true;
			this->Close();
			i = 0;
		}
		else
			i++;
		MyStoryLabel2->Text = myStory[i]->TimeDate;
		MyStoryLabel3->Text = myStory[i]->Text;
		if (flag)
			StoryImage->Image = myStory[i]->Img;
	}
	else
	{
		this->Close();
	}
}
private: System::Void Previous_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStory->Count != 0)
	{
		if (i == 0)
		{
			//switchToMainStory = true;
			this->Close();
			i = 0;
		}
		else
			i--;
		MyStoryLabel2->Text = myStory[i]->TimeDate;
		MyStoryLabel3->Text = myStory[i]->Text;
		if (flag)
			StoryImage->Image = myStory[i]->Img;
	}
	else
	{
		this->Close();
	}
}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStory->Count != 0)
	{ 
		if (MessageBox::Show("Are you sure you want to delete this story", "Confirm delete", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			try {
				String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery = "Delete FROM Stories WHERE SID = " + myStory[i]->SID;
				SqlCommand command(sqlQuery, % sqlConn);
				command.ExecuteNonQuery();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
			}
			myStory->RemoveAt(i);
			if (myStory->Count == 0)
			{
				hasStatus = false;

			}
			this->Close();
			i = 0;
			//showMyStory();
			/*else
			{
				MyStoryLabel2->Text = myStory[i]->TimeDate;
				MyStoryLabel3->Text = myStory[i]->Text;
				if (flag)
					StoryImage->Image = myStory[i]->Img;
			}*/
		}
	}
	else {
		this->Close();
	}
}
private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	i = 0;
	this->Close();
}
};
}
