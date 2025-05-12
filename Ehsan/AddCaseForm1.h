#pragma once

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for AddCaseForm1
	/// </summary>
	public ref class AddCaseForm1 : public System::Windows::Forms::Form
	{
	public:
		AddCaseForm1(void)
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
		~AddCaseForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ AddNewCaseLable;
	private: System::Windows::Forms::Panel^ PersonalInfoPanal;
	private: System::Windows::Forms::Label^ PersonalInfoLabel;
	private: System::Windows::Forms::Label^ FristNameLabel;
	private: System::Windows::Forms::TextBox^ LastNameTextBox;
	private: System::Windows::Forms::Label^ LastNameLabel;

	private: System::Windows::Forms::TextBox^ NickNameTextBox;

	private: System::Windows::Forms::Label^ NickNameLabel;
	private: System::Windows::Forms::TextBox^ NationalIdTextBox;

	private: System::Windows::Forms::Label^ NationalIdLabel;
	private: System::Windows::Forms::RadioButton^ MailRadioButton;


	private: System::Windows::Forms::RadioButton^ FemailRadioButton;
	private: System::Windows::Forms::Label^ TypeLabel;
	private: System::Windows::Forms::Label^ PateOfBirthLabel;
	private: System::Windows::Forms::DateTimePicker^ DateOfDirthDateBox;
	private: System::Windows::Forms::Label^ AreaLabel;

	private: System::Windows::Forms::TextBox^ FristNameTextBox;
	private: System::Windows::Forms::ComboBox^ AreaComboBox;
	private: System::Windows::Forms::ComboBox^ StreetComboBox;

	private: System::Windows::Forms::Label^ StreetLabel;












	protected:


	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->AddNewCaseLable = (gcnew System::Windows::Forms::Label());
			this->PersonalInfoPanal = (gcnew System::Windows::Forms::Panel());
			this->AreaComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AreaLabel = (gcnew System::Windows::Forms::Label());
			this->PateOfBirthLabel = (gcnew System::Windows::Forms::Label());
			this->DateOfDirthDateBox = (gcnew System::Windows::Forms::DateTimePicker());
			this->TypeLabel = (gcnew System::Windows::Forms::Label());
			this->MailRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->FemailRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->NationalIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NationalIdLabel = (gcnew System::Windows::Forms::Label());
			this->NickNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NickNameLabel = (gcnew System::Windows::Forms::Label());
			this->LastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameLabel = (gcnew System::Windows::Forms::Label());
			this->FristNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FristNameLabel = (gcnew System::Windows::Forms::Label());
			this->PersonalInfoLabel = (gcnew System::Windows::Forms::Label());
			this->StreetComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StreetLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->PersonalInfoPanal->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->AddNewCaseLable);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(860, 42);
			this->panel1->TabIndex = 0;
			// 
			// AddNewCaseLable
			// 
			this->AddNewCaseLable->AutoSize = true;
			this->AddNewCaseLable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddNewCaseLable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddNewCaseLable->Location = System::Drawing::Point(324, 2);
			this->AddNewCaseLable->Name = L"AddNewCaseLable";
			this->AddNewCaseLable->Size = System::Drawing::Size(213, 37);
			this->AddNewCaseLable->TabIndex = 0;
			this->AddNewCaseLable->Text = L"إضافة حالة جديدة";
			this->AddNewCaseLable->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->AddNewCaseLable->Click += gcnew System::EventHandler(this, &AddCaseForm1::AddNewCaseLable_Click);
			// 
			// PersonalInfoPanal
			// 
			this->PersonalInfoPanal->BackColor = System::Drawing::SystemColors::Control;
			this->PersonalInfoPanal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PersonalInfoPanal->Controls->Add(this->StreetComboBox);
			this->PersonalInfoPanal->Controls->Add(this->StreetLabel);
			this->PersonalInfoPanal->Controls->Add(this->AreaComboBox);
			this->PersonalInfoPanal->Controls->Add(this->AreaLabel);
			this->PersonalInfoPanal->Controls->Add(this->PateOfBirthLabel);
			this->PersonalInfoPanal->Controls->Add(this->DateOfDirthDateBox);
			this->PersonalInfoPanal->Controls->Add(this->TypeLabel);
			this->PersonalInfoPanal->Controls->Add(this->MailRadioButton);
			this->PersonalInfoPanal->Controls->Add(this->FemailRadioButton);
			this->PersonalInfoPanal->Controls->Add(this->NationalIdTextBox);
			this->PersonalInfoPanal->Controls->Add(this->NationalIdLabel);
			this->PersonalInfoPanal->Controls->Add(this->NickNameTextBox);
			this->PersonalInfoPanal->Controls->Add(this->NickNameLabel);
			this->PersonalInfoPanal->Controls->Add(this->LastNameTextBox);
			this->PersonalInfoPanal->Controls->Add(this->LastNameLabel);
			this->PersonalInfoPanal->Controls->Add(this->FristNameTextBox);
			this->PersonalInfoPanal->Controls->Add(this->FristNameLabel);
			this->PersonalInfoPanal->Controls->Add(this->PersonalInfoLabel);
			this->PersonalInfoPanal->Cursor = System::Windows::Forms::Cursors::Default;
			this->PersonalInfoPanal->Location = System::Drawing::Point(9, 81);
			this->PersonalInfoPanal->Name = L"PersonalInfoPanal";
			this->PersonalInfoPanal->Size = System::Drawing::Size(835, 228);
			this->PersonalInfoPanal->TabIndex = 1;
			this->PersonalInfoPanal->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddCaseForm1::PersonalInfoPanal_Paint);
			// 
			// AreaComboBox
			// 
			this->AreaComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AreaComboBox->FormattingEnabled = true;
			this->AreaComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"قسم باب شرق", L"قسم محرم بك", L"قسم كرموز",
					L"قسم العطارين", L"قسم الرمل", L"قسم سيدي جابر", L"قسم مينا البصل", L"قسم اللبان", L"قسم المنشية", L"قسم المنتزة", L"قسم الجمرك",
					L"قسم العامرية", L"قسم الدخيلة", L"قسم برج العرب"
			});
			this->AreaComboBox->Location = System::Drawing::Point(556, 131);
			this->AreaComboBox->Name = L"AreaComboBox";
			this->AreaComboBox->Size = System::Drawing::Size(169, 28);
			this->AreaComboBox->TabIndex = 15;
			this->AreaComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddCaseForm1::AreaComboBox_SelectedIndexChanged);
			// 
			// AreaLabel
			// 
			this->AreaLabel->AutoSize = true;
			this->AreaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AreaLabel->Location = System::Drawing::Point(756, 134);
			this->AreaLabel->Name = L"AreaLabel";
			this->AreaLabel->Size = System::Drawing::Size(61, 25);
			this->AreaLabel->TabIndex = 14;
			this->AreaLabel->Text = L"المنطقة";
			this->AreaLabel->Click += gcnew System::EventHandler(this, &AddCaseForm1::AreaLabel_Click);
			// 
			// PateOfBirthLabel
			// 
			this->PateOfBirthLabel->AutoSize = true;
			this->PateOfBirthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PateOfBirthLabel->Location = System::Drawing::Point(223, 88);
			this->PateOfBirthLabel->Name = L"PateOfBirthLabel";
			this->PateOfBirthLabel->Size = System::Drawing::Size(97, 25);
			this->PateOfBirthLabel->TabIndex = 13;
			this->PateOfBirthLabel->Text = L"تاريخ الميلاد";
			// 
			// DateOfDirthDateBox
			// 
			this->DateOfDirthDateBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfDirthDateBox->Location = System::Drawing::Point(38, 89);
			this->DateOfDirthDateBox->Name = L"DateOfDirthDateBox";
			this->DateOfDirthDateBox->Size = System::Drawing::Size(169, 26);
			this->DateOfDirthDateBox->TabIndex = 12;
			this->DateOfDirthDateBox->Value = System::DateTime(2025, 5, 11, 21, 1, 15, 0);
			// 
			// TypeLabel
			// 
			this->TypeLabel->AutoSize = true;
			this->TypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypeLabel->Location = System::Drawing::Point(473, 88);
			this->TypeLabel->Name = L"TypeLabel";
			this->TypeLabel->Size = System::Drawing::Size(53, 25);
			this->TypeLabel->TabIndex = 11;
			this->TypeLabel->Text = L"النوع ";
			// 
			// MailRadioButton
			// 
			this->MailRadioButton->AutoSize = true;
			this->MailRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MailRadioButton->Location = System::Drawing::Point(411, 93);
			this->MailRadioButton->Name = L"MailRadioButton";
			this->MailRadioButton->Size = System::Drawing::Size(44, 20);
			this->MailRadioButton->TabIndex = 10;
			this->MailRadioButton->TabStop = true;
			this->MailRadioButton->Text = L"ذكر";
			this->MailRadioButton->UseVisualStyleBackColor = true;
			// 
			// FemailRadioButton
			// 
			this->FemailRadioButton->AutoSize = true;
			this->FemailRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FemailRadioButton->Location = System::Drawing::Point(341, 92);
			this->FemailRadioButton->Name = L"FemailRadioButton";
			this->FemailRadioButton->Size = System::Drawing::Size(46, 20);
			this->FemailRadioButton->TabIndex = 9;
			this->FemailRadioButton->TabStop = true;
			this->FemailRadioButton->Text = L"انثى";
			this->FemailRadioButton->UseVisualStyleBackColor = true;
			// 
			// NationalIdTextBox
			// 
			this->NationalIdTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NationalIdTextBox->Location = System::Drawing::Point(556, 88);
			this->NationalIdTextBox->Name = L"NationalIdTextBox";
			this->NationalIdTextBox->Size = System::Drawing::Size(169, 29);
			this->NationalIdTextBox->TabIndex = 8;
			this->NationalIdTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// NationalIdLabel
			// 
			this->NationalIdLabel->AutoSize = true;
			this->NationalIdLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NationalIdLabel->Location = System::Drawing::Point(731, 88);
			this->NationalIdLabel->Name = L"NationalIdLabel";
			this->NationalIdLabel->Size = System::Drawing::Size(102, 25);
			this->NationalIdLabel->TabIndex = 7;
			this->NationalIdLabel->Text = L"الرقم القومي ";
			// 
			// NickNameTextBox
			// 
			this->NickNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NickNameTextBox->Location = System::Drawing::Point(38, 43);
			this->NickNameTextBox->Name = L"NickNameTextBox";
			this->NickNameTextBox->Size = System::Drawing::Size(169, 29);
			this->NickNameTextBox->TabIndex = 6;
			this->NickNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// NickNameLabel
			// 
			this->NickNameLabel->AutoSize = true;
			this->NickNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NickNameLabel->Location = System::Drawing::Point(213, 45);
			this->NickNameLabel->Name = L"NickNameLabel";
			this->NickNameLabel->Size = System::Drawing::Size(48, 25);
			this->NickNameLabel->TabIndex = 5;
			this->NickNameLabel->Text = L"اللقب";
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LastNameTextBox->Location = System::Drawing::Point(284, 43);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(169, 29);
			this->LastNameTextBox->TabIndex = 4;
			this->LastNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// LastNameLabel
			// 
			this->LastNameLabel->AutoSize = true;
			this->LastNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameLabel->Location = System::Drawing::Point(463, 45);
			this->LastNameLabel->Name = L"LastNameLabel";
			this->LastNameLabel->Size = System::Drawing::Size(91, 25);
			this->LastNameLabel->TabIndex = 3;
			this->LastNameLabel->Text = L"الأسم الاخر";
			// 
			// FristNameTextBox
			// 
			this->FristNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FristNameTextBox->Location = System::Drawing::Point(556, 43);
			this->FristNameTextBox->Name = L"FristNameTextBox";
			this->FristNameTextBox->Size = System::Drawing::Size(169, 29);
			this->FristNameTextBox->TabIndex = 2;
			this->FristNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// FristNameLabel
			// 
			this->FristNameLabel->AutoSize = true;
			this->FristNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FristNameLabel->Location = System::Drawing::Point(738, 45);
			this->FristNameLabel->Name = L"FristNameLabel";
			this->FristNameLabel->Size = System::Drawing::Size(90, 25);
			this->FristNameLabel->TabIndex = 1;
			this->FristNameLabel->Text = L"الأسم الاول";
			this->FristNameLabel->Click += gcnew System::EventHandler(this, &AddCaseForm1::FristNameLabel_Click);
			// 
			// PersonalInfoLabel
			// 
			this->PersonalInfoLabel->AutoSize = true;
			this->PersonalInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PersonalInfoLabel->Location = System::Drawing::Point(311, 0);
			this->PersonalInfoLabel->Name = L"PersonalInfoLabel";
			this->PersonalInfoLabel->Size = System::Drawing::Size(231, 33);
			this->PersonalInfoLabel->TabIndex = 0;
			this->PersonalInfoLabel->Text = L"المعلومات الشخصية ";
			this->PersonalInfoLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// StreetComboBox
			// 
			this->StreetComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetComboBox->FormattingEnabled = true;
			this->StreetComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"قسم باب شرق", L"قسم محرم بك", L"قسم كرموز",
					L"قسم العطارين", L"قسم الرمل", L"قسم سيدي جابر", L"قسم مينا البصل", L"قسم اللبان", L"قسم المنشية", L"قسم المنتزة", L"قسم الجمرك",
					L"قسم العامرية", L"قسم الدخيلة", L"قسم برج العرب"
			});
			this->StreetComboBox->Location = System::Drawing::Point(265, 131);
			this->StreetComboBox->Name = L"StreetComboBox";
			this->StreetComboBox->Size = System::Drawing::Size(169, 28);
			this->StreetComboBox->TabIndex = 17;
			// 
			// StreetLabel
			// 
			this->StreetLabel->AutoSize = true;
			this->StreetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetLabel->Location = System::Drawing::Point(465, 134);
			this->StreetLabel->Name = L"StreetLabel";
			this->StreetLabel->Size = System::Drawing::Size(61, 25);
			this->StreetLabel->TabIndex = 16;
			this->StreetLabel->Text = L"الشارع";
			// 
			// AddCaseForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 655);
			this->Controls->Add(this->PersonalInfoPanal);
			this->Controls->Add(this->panel1);
			this->Name = L"AddCaseForm1";
			this->Text = L"AddCaseForm1";
			this->Load += gcnew System::EventHandler(this, &AddCaseForm1::AddCaseForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->PersonalInfoPanal->ResumeLayout(false);
			this->PersonalInfoPanal->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void AddNewCaseLable_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FristNameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AddCaseForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AreaLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AreaComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PersonalInfoPanal_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
