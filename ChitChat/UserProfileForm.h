#pragma once
#include "Contacts.h"
#include "LoginForm.h"

namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;

	public ref class UserProfileForm : public System::Windows::Forms::Form
	{
	public:
		UserProfileForm(void)
		{
			InitializeComponent();
		}

	protected:
		~UserProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ MyPhoto;
	private: System::Windows::Forms::TextBox^ BioTextBox;
	private: System::Windows::Forms::Label^ modifiyBio;
	private: System::Windows::Forms::Label^ modifiyPhoto;
	private: System::Windows::Forms::Label^ MainLabel;
	private: System::Windows::Forms::Button^ GoBackButton;
	private: System::Windows::Forms::TextBox^ FNameTextBox;
	private: System::Windows::Forms::Label^ FNameLabel;
	private: System::Windows::Forms::TextBox^ LNameTextBox;
	private: System::Windows::Forms::Label^ LNameLabel;
	private: System::Windows::Forms::Button^ UploadButton;
	private: System::Windows::Forms::Button^ Visability;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserProfileForm::typeid));
			this->MyPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->BioTextBox = (gcnew System::Windows::Forms::TextBox());
			this->modifiyBio = (gcnew System::Windows::Forms::Label());
			this->modifiyPhoto = (gcnew System::Windows::Forms::Label());
			this->MainLabel = (gcnew System::Windows::Forms::Label());
			this->GoBackButton = (gcnew System::Windows::Forms::Button());
			this->FNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FNameLabel = (gcnew System::Windows::Forms::Label());
			this->LNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LNameLabel = (gcnew System::Windows::Forms::Label());
			this->UploadButton = (gcnew System::Windows::Forms::Button());
			this->Visability = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MyPhoto
			// 
			this->MyPhoto->BackColor = System::Drawing::Color::Transparent;
			this->MyPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MyPhoto->Location = System::Drawing::Point(79, 62);
			this->MyPhoto->Margin = System::Windows::Forms::Padding(2);
			this->MyPhoto->Name = L"MyPhoto";
			this->MyPhoto->Size = System::Drawing::Size(336, 184);
			this->MyPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MyPhoto->TabIndex = 36;
			this->MyPhoto->TabStop = false;
			// 
			// BioTextBox
			// 
			this->BioTextBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BioTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BioTextBox->ForeColor = System::Drawing::Color::Black;
			this->BioTextBox->Location = System::Drawing::Point(34, 371);
			this->BioTextBox->Margin = System::Windows::Forms::Padding(2);
			this->BioTextBox->Multiline = true;
			this->BioTextBox->Name = L"BioTextBox";
			this->BioTextBox->Size = System::Drawing::Size(424, 56);
			this->BioTextBox->TabIndex = 41;
			this->BioTextBox->Text = L"Hey,Iam using ChitChat";
			// 
			// modifiyBio
			// 
			this->modifiyBio->BackColor = System::Drawing::Color::Transparent;
			this->modifiyBio->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifiyBio->ForeColor = System::Drawing::Color::Transparent;
			this->modifiyBio->Location = System::Drawing::Point(31, 345);
			this->modifiyBio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->modifiyBio->Name = L"modifiyBio";
			this->modifiyBio->Size = System::Drawing::Size(128, 24);
			this->modifiyBio->TabIndex = 42;
			this->modifiyBio->Text = L"Modifiy Bio";
			// 
			// modifiyPhoto
			// 
			this->modifiyPhoto->BackColor = System::Drawing::Color::Transparent;
			this->modifiyPhoto->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifiyPhoto->ForeColor = System::Drawing::Color::Transparent;
			this->modifiyPhoto->Location = System::Drawing::Point(346, 31);
			this->modifiyPhoto->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->modifiyPhoto->Name = L"modifiyPhoto";
			this->modifiyPhoto->Size = System::Drawing::Size(86, 29);
			this->modifiyPhoto->TabIndex = 40;
			this->modifiyPhoto->Text = L"modifiy image";
			this->modifiyPhoto->Click += gcnew System::EventHandler(this, &UserProfileForm::modifiyPhoto_Click);
			// 
			// MainLabel
			// 
			this->MainLabel->BackColor = System::Drawing::Color::Transparent;
			this->MainLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainLabel->Location = System::Drawing::Point(198, 7);
			this->MainLabel->Name = L"MainLabel";
			this->MainLabel->Size = System::Drawing::Size(107, 32);
			this->MainLabel->TabIndex = 43;
			this->MainLabel->Text = L"Profile";
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
			this->GoBackButton->Location = System::Drawing::Point(14, 8);
			this->GoBackButton->Name = L"GoBackButton";
			this->GoBackButton->Size = System::Drawing::Size(52, 42);
			this->GoBackButton->TabIndex = 45;
			this->GoBackButton->UseVisualStyleBackColor = false;
			this->GoBackButton->Click += gcnew System::EventHandler(this, &UserProfileForm::GoBackButton_Click);
			// 
			// FNameTextBox
			// 
			this->FNameTextBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->FNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNameTextBox->ForeColor = System::Drawing::Color::Black;
			this->FNameTextBox->Location = System::Drawing::Point(35, 293);
			this->FNameTextBox->Margin = System::Windows::Forms::Padding(2);
			this->FNameTextBox->Multiline = true;
			this->FNameTextBox->Name = L"FNameTextBox";
			this->FNameTextBox->Size = System::Drawing::Size(177, 41);
			this->FNameTextBox->TabIndex = 46;
			// 
			// FNameLabel
			// 
			this->FNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->FNameLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNameLabel->ForeColor = System::Drawing::Color::Transparent;
			this->FNameLabel->Location = System::Drawing::Point(30, 267);
			this->FNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->FNameLabel->Name = L"FNameLabel";
			this->FNameLabel->Size = System::Drawing::Size(113, 24);
			this->FNameLabel->TabIndex = 49;
			this->FNameLabel->Text = L"FirstName";
			// 
			// LNameTextBox
			// 
			this->LNameTextBox->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->LNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LNameTextBox->ForeColor = System::Drawing::Color::Black;
			this->LNameTextBox->Location = System::Drawing::Point(281, 293);
			this->LNameTextBox->Margin = System::Windows::Forms::Padding(2);
			this->LNameTextBox->Multiline = true;
			this->LNameTextBox->Name = L"LNameTextBox";
			this->LNameTextBox->Size = System::Drawing::Size(177, 41);
			this->LNameTextBox->TabIndex = 50;
			// 
			// LNameLabel
			// 
			this->LNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->LNameLabel->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LNameLabel->ForeColor = System::Drawing::Color::Transparent;
			this->LNameLabel->Location = System::Drawing::Point(277, 267);
			this->LNameLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LNameLabel->Name = L"LNameLabel";
			this->LNameLabel->Size = System::Drawing::Size(104, 24);
			this->LNameLabel->TabIndex = 51;
			this->LNameLabel->Text = L"LastName";
			// 
			// UploadButton
			// 
			this->UploadButton->BackColor = System::Drawing::Color::Transparent;
			this->UploadButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->UploadButton->FlatAppearance->BorderSize = 0;
			this->UploadButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->UploadButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->UploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UploadButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UploadButton.Image")));
			this->UploadButton->Location = System::Drawing::Point(398, 437);
			this->UploadButton->Name = L"UploadButton";
			this->UploadButton->Size = System::Drawing::Size(84, 71);
			this->UploadButton->TabIndex = 53;
			this->UploadButton->UseVisualStyleBackColor = false;
			this->UploadButton->Click += gcnew System::EventHandler(this, &UserProfileForm::UploadButton_Click);
			// 
			// Visability
			// 
			this->Visability->BackColor = System::Drawing::Color::Transparent;
			this->Visability->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Visability->FlatAppearance->BorderSize = 0;
			this->Visability->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->Visability->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->Visability->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Visability->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Visability->Location = System::Drawing::Point(34, 446);
			this->Visability->Name = L"Visability";
			this->Visability->Size = System::Drawing::Size(137, 39);
			this->Visability->TabIndex = 54;
			this->Visability->Text = L"Visable";
			this->Visability->UseVisualStyleBackColor = false;
			this->Visability->Click += gcnew System::EventHandler(this, &UserProfileForm::Visability_Click);
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
			this->pictureBox1->Location = System::Drawing::Point(158, 478);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// UserProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(511, 535);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Visability);
			this->Controls->Add(this->UploadButton);
			this->Controls->Add(this->LNameLabel);
			this->Controls->Add(this->LNameTextBox);
			this->Controls->Add(this->FNameLabel);
			this->Controls->Add(this->FNameTextBox);
			this->Controls->Add(this->GoBackButton);
			this->Controls->Add(this->MainLabel);
			this->Controls->Add(this->modifiyBio);
			this->Controls->Add(this->BioTextBox);
			this->Controls->Add(this->modifiyPhoto);
			this->Controls->Add(this->MyPhoto);
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"6";
			this->Load += gcnew System::EventHandler(this, &UserProfileForm::UserProfileForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MyPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM UserProfile WHERE CID = @CID";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read())
			{
				if (!reader->IsDBNull(0))
				{
					this->BioTextBox->Text = reader->GetString(0);
				}
				if (!reader->IsDBNull(2))
				{
					MemoryStream^ m = gcnew MemoryStream((array<Byte>^)reader[2]);
					this->MyPhoto->Image = Image::FromStream(m);
				}
				if (reader->GetInt32(3) == 1)
				{
					this->Visability->Text = "Visable";
				}
				else
				{
					this->Visability->Text = "UnVisable";
				}

			}
			reader->Close();

			String^ sqlQuery1 = "SELECT Fname , Lname FROM Contacts WHERE CID = @CID";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
			SqlDataReader^ reader1 = command1.ExecuteReader();

			if (reader1->Read())
			{
				if (!reader1->IsDBNull(0)) {
					this->FNameTextBox->Text = reader1->GetString(0);
				}
				if (!reader1->IsDBNull(1)) {
					this->LNameTextBox->Text = reader1->GetString(1);
				}
			}
			reader1->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}

	}
	private: Image^ img;
	private: MemoryStream^ m = gcnew MemoryStream();
	private:bool flag = false;
	private: System::Void modifiyPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			flag = true;
			MyPhoto->Image = Image::FromFile(openFileDialog1->FileName);
			img = MyPhoto->Image;
			img->Save(m, Imaging::ImageFormat::Jpeg);
		}
	}
	private: System::Void UploadButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			if (flag)
			{
				String^ sqlQuery = "UPDATE UserProfile SET Bio = @Bio ,Image = @Image ,Visability = @Visability WHERE CID = @CID;";
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
				command.Parameters->AddWithValue("@Bio", this->BioTextBox->Text->ToString());
				command.Parameters->AddWithValue("@Image", m->ToArray());
				if (Visability->Text == "Visable")
					command.Parameters->AddWithValue("@Visability", 1);
				else
					command.Parameters->AddWithValue("@Visability", 0);
				command.ExecuteNonQuery();
			}
			else
			{
				String^ sqlQuery = "UPDATE UserProfile SET Bio = @Bio ,Visability = @Visability WHERE CID = @CID;";
				SqlCommand command(sqlQuery, % sqlConn);

				command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
				command.Parameters->AddWithValue("@Bio", this->BioTextBox->Text->ToString());
				if (Visability->Text == "Visable")
					command.Parameters->AddWithValue("@Visability", 1);
				else
					command.Parameters->AddWithValue("@Visability", 0);
				command.ExecuteNonQuery();
			}
			String^ sqlQuery1 = "UPDATE Contacts SET Fname = @Fname ,Lanme = @Lname WHERE CID = @CID;";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
			command1.Parameters->AddWithValue("@Fname", this->FNameLabel->Text->ToString());
			command1.Parameters->AddWithValue("@Lname", this->LNameLabel->Text->ToString());
			sqlConn.Close();
			this->switchToHome = true;
			this->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
	private: System::Void Visability_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Visability->Text == "Visable")
			this->Visability->Text = "UnVisable";
		else
			this->Visability->Text = "Visable";
	}


		   public:bool switchToHome = false;  //++++++++++++++++++++++++++++++
    private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToHome = true;
	this->Close();
}
};
}
