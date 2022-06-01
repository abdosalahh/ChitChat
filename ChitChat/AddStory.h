#pragma once
#include <ctime>
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
	
	public ref class AddStory : public System::Windows::Forms::Form
	{
	public:
		AddStory(void)
		{
			InitializeComponent();
		}

	protected:
		~AddStory()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::PictureBox^ PictureBox;
	private: System::Windows::Forms::Label^ UploadImageLabel;
	private: System::Windows::Forms::TextBox^ TextBox;
	private: System::Windows::Forms::Label^ StoryTextLabel;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
	
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStory::typeid));
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->UploadImageLabel = (gcnew System::Windows::Forms::Label());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->StoryTextLabel = (gcnew System::Windows::Forms::Label());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
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
			this->GoBackButton->Location = System::Drawing::Point(26, 25);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(59, 48);
			this->GoBackButton->TabIndex = 1;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &AddStory::GoBackButton_Click);
			// 
			// PictureBox
			// 
			this->PictureBox->BackColor = System::Drawing::Color::Transparent;
			this->PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PictureBox->Location = System::Drawing::Point(35, 115);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(477, 351);
			this->PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox->TabIndex = 2;
			this->PictureBox->TabStop = false;
			// 
			// UploadImageLabel
			// 
			this->UploadImageLabel->BackColor = System::Drawing::Color::Transparent;
			this->UploadImageLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UploadImageLabel->ForeColor = System::Drawing::Color::White;
			this->UploadImageLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UploadImageLabel.Image")));
			this->UploadImageLabel->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->UploadImageLabel->Location = System::Drawing::Point(299, 69);
			this->UploadImageLabel->Name = L"UploadImageLabel";
			this->UploadImageLabel->Size = System::Drawing::Size(213, 43);
			this->UploadImageLabel->TabIndex = 3;
			this->UploadImageLabel->Text = L"Upload Image";
			this->UploadImageLabel->Click += gcnew System::EventHandler(this, &AddStory::Label1_Click);
			// 
			// TextBox
			// 
			this->TextBox->BackColor = System::Drawing::Color::Gray;
			this->TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox->ForeColor = System::Drawing::Color::Black;
			this->TextBox->Location = System::Drawing::Point(35, 504);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(477, 57);
			this->TextBox->TabIndex = 4;
			// 
			// StoryTextLabel
			// 
			this->StoryTextLabel->BackColor = System::Drawing::Color::Transparent;
			this->StoryTextLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StoryTextLabel->ForeColor = System::Drawing::Color::White;
			this->StoryTextLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StoryTextLabel.Image")));
			this->StoryTextLabel->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->StoryTextLabel->Location = System::Drawing::Point(29, 576);
			this->StoryTextLabel->Name = L"StoryTextLabel";
			this->StoryTextLabel->Size = System::Drawing::Size(182, 33);
			this->StoryTextLabel->TabIndex = 5;
			this->StoryTextLabel->Text = L"Story Text";
			// 
			// AddButton
			// 
			this->AddButton->BackColor = System::Drawing::Color::Transparent;
			this->AddButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->AddButton->FlatAppearance->BorderSize = 0;
			this->AddButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddButton.Image")));
			this->AddButton->Location = System::Drawing::Point(423, 589);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(89, 73);
			this->AddButton->TabIndex = 6;
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddStory::AddButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(35, 611);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// AddStory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(550, 710);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->StoryTextLabel);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->UploadImageLabel);
			this->Controls->Add(this->PictureBox);
			this->Controls->Add(this->GoBackButton);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"AddStory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddStory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Image variables
	private:Image^ Img;
	private:MemoryStream^ m = gcnew MemoryStream();
	private:bool flag = false;
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
		//taking image from file
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			PictureBox->Image = Image::FromFile(openFileDialog1->FileName);
			Img = PictureBox->Image;
			Img->Save(m, Imaging::ImageFormat::Jpeg);
			flag = true;
		}

	}
	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Text = this->TextBox->Text;
		//getting time and convert it to string and int
		time_t TimeDate = time(0);
		char* c = ctime(&TimeDate);
		String^ STimeDate = gcnew String(c);
		int sid = (int)TimeDate;

		if (Text->Length == 0 && !flag)
		{
			MessageBox::Show("Please enter Image path or Text",
				"Image path and Text are empty !!", MessageBoxButtons::OK);
			return;
		}
		try {
			if (flag)
			{
				String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery = "INSERT INTO Stories (SID ,Image,Text,TimeDate, CID) VALUES (@SID, @Image, @Text, @TimeDate, @CID);";
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@SID", sid);
				command.Parameters->AddWithValue("@Text", Text);
				command.Parameters->AddWithValue("@Image", m->ToArray());
				command.Parameters->AddWithValue("@TimeDate", STimeDate);
				command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
				command.ExecuteNonQuery();

				sqlConn.Close();
				this->Close();
			}
			else
			{
				String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery = "INSERT INTO Stories (SID,Text,TimeDate, CID) VALUES (@SID, @Text, @TimeDate, @CID);";
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@SID", sid);
				command.Parameters->AddWithValue("@Text", Text);
				command.Parameters->AddWithValue("@TimeDate", STimeDate);
				command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
				command.ExecuteNonQuery();

				sqlConn.Close();
				this->Close();
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message,
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}

private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
