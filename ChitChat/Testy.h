#pragma once
#include "LoginForm.h"
#include <ctime>
namespace ChitChat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Testy
	/// </summary>
	public ref class Testy : public System::Windows::Forms::Form
	{
	public:
		Testy(void)
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
		~Testy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ PictureBox;
	private: System::Windows::Forms::TextBox^ TextBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// PictureBox
			// 
			this->PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PictureBox->Location = System::Drawing::Point(58, 56);
			this->PictureBox->Name = L"PictureBox";
			this->PictureBox->Size = System::Drawing::Size(228, 169);
			this->PictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox->TabIndex = 0;
			this->PictureBox->TabStop = false;
			this->PictureBox->Click += gcnew System::EventHandler(this, &Testy::pictureBox1_Click);
			// 
			// TextBox
			// 
			this->TextBox->Location = System::Drawing::Point(58, 250);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(228, 28);
			this->TextBox->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 319);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Testy::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Testy::button2_Click);
			// 
			// Testy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 386);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->PictureBox);
			this->Name = L"Testy";
			this->Text = L"Testy";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Text = this->TextBox->Text;
		try {
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "INSERT INTO UserProfile (Bio ,CID, Image,Visability) VALUES (@Bio, @CID, @Image, @Visability);";
			SqlCommand command(sqlQuery, % sqlConn);

			command.Parameters->AddWithValue("@Bio", Text);
			command.Parameters->AddWithValue("@Image", m->ToArray());
			command.Parameters->AddWithValue("@Visability", 0);
			command.Parameters->AddWithValue("@CID", LoginForm::cont->Id);
			command.ExecuteNonQuery();

			sqlConn.Close();
			this->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message,
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
     Image^ Img;
     MemoryStream^ m = gcnew MemoryStream();
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Testy::typeid));
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			PictureBox->Image = Image::FromFile(openFileDialog1->FileName);
			Img = PictureBox->Image;
			Img->Save(m, Imaging::ImageFormat::Jpeg);
		}
		else
		{
			Img = nullptr;
			Img->Save(m, Imaging::ImageFormat::Jpeg);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			time_t TimeDate = time(0);
			int sid = (int)TimeDate - 86400;
			String^ connString = "Data Source=.;Initial Catalog=ChitChatDB;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "Delete FROM Stories WHERE  SID < " + sid;
			SqlCommand command(sqlQuery, % sqlConn);
			command.ExecuteNonQuery();
			sqlConn.Close();
			this->Close();

		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Database Connection Error", MessageBoxButtons::OK);
		}
	}
};
}
