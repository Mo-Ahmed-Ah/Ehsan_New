#pragma once
#include "Cases.h"
#include "Connection.h"

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// Summary for AddCaseForm
	/// </summary>
	public ref class AddCaseForm : public System::Windows::Forms::Form
	{
	public:
		AddCaseForm(void)
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
		~AddCaseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AddCasesPageTitleLabel;
	private: System::Windows::Forms::Panel^ AddCasesTitlePanal;
	private: System::Windows::Forms::Label^ AddCasesFristNameLabel;
	private: System::Windows::Forms::TextBox^ AddCasesFrsitNameTextBox;

	private: System::Windows::Forms::TextBox^ AddCasesLastNameTextBox;
	private: System::Windows::Forms::Label^ AddCasesLastLabel;
	private: System::Windows::Forms::TextBox^ AddCasesNationalIdTextBox;

	private: System::Windows::Forms::Label^ AddCasesNationalIdLabel;

	private: System::Windows::Forms::TextBox^ AddCasesNickNameTextBox;

	private: System::Windows::Forms::Label^ AddCasesNickNameLabel;



	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ AddCasesBirthDateBaLabel;



	private: System::Windows::Forms::ComboBox^ AddCasesAreaComboBox;

	private: System::Windows::Forms::Label^ AddCasesAreaLabel;
	private: System::Windows::Forms::Label^ AddCasesStreetLabel;
	private: System::Windows::Forms::ComboBox^ AddCasesStreetComboBox;
	private: System::Windows::Forms::Label^ AddCasesMaritalStatusLabel;
	private: System::Windows::Forms::ComboBox^ AddCasesMaritalStatusComboBox;






	private: System::Windows::Forms::Label^ AddCasesMaleChildrenLabel;
	private: System::Windows::Forms::NumericUpDown^ AddCasesMaleChildrenNumericUpDown;
	private: System::Windows::Forms::NumericUpDown^ AddCasesFemaleChildrenNumericUpDown;

	private: System::Windows::Forms::Label^ AddCasesFemaleChildrenLabel;
	private: System::Windows::Forms::Label^ AddCasesMotherStatusLabel;
	private: System::Windows::Forms::RadioButton^ AddCasesMotherStatuDeadRadioButton;
	private: System::Windows::Forms::RadioButton^ AddCasesMotherStatusAliveRadioButton;
	private: System::Windows::Forms::Label^ AddCasesFatherStatusLabel;
	private: System::Windows::Forms::RadioButton^ AddCasesFatherStatuDeadRadioButton;
	private: System::Windows::Forms::RadioButton^ AddCasesFatherStatusAliveRadioButton;
	private: System::Windows::Forms::Label^ AddCasesGenderLabel;
	private: System::Windows::Forms::RadioButton^ AddCasesGenderMailRadioButton;
	private: System::Windows::Forms::RadioButton^ AddCasesGenderFemailRadioButton;
	private: System::Windows::Forms::Panel^ AddCasesFatherStatusPanel;
	private: System::Windows::Forms::Panel^ AddCasesMotherStatusPanel;
	private: System::Windows::Forms::Panel^ AddCasesGenderPanel;
	private: System::Windows::Forms::Button^ AddCaseSaveButton;
	private: System::Windows::Forms::Button^ AddCasesCleanButton;
	private: System::Windows::Forms::Button^ AddCasesCancelButton;
	private: System::Windows::Forms::TextBox^ AddCasesPhoneNumberTextBox;
	private: System::Windows::Forms::Label^ AddCasesPhoneNumberLabel;







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
			this->AddCasesPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesTitlePanal = (gcnew System::Windows::Forms::Panel());
			this->AddCasesFristNameLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesFrsitNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddCasesLastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddCasesLastLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesNationalIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddCasesNationalIdLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesNickNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddCasesNickNameLabel = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->AddCasesBirthDateBaLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesAreaComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCasesAreaLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesStreetLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesStreetComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCasesMaritalStatusLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesMaritalStatusComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddCasesMaleChildrenLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesMaleChildrenNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->AddCasesFemaleChildrenNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->AddCasesFemaleChildrenLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesMotherStatusLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesMotherStatuDeadRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesMotherStatusAliveRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesFatherStatusLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesFatherStatuDeadRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesFatherStatusAliveRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesGenderLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesGenderMailRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesGenderFemailRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->AddCasesFatherStatusPanel = (gcnew System::Windows::Forms::Panel());
			this->AddCasesMotherStatusPanel = (gcnew System::Windows::Forms::Panel());
			this->AddCasesGenderPanel = (gcnew System::Windows::Forms::Panel());
			this->AddCaseSaveButton = (gcnew System::Windows::Forms::Button());
			this->AddCasesCleanButton = (gcnew System::Windows::Forms::Button());
			this->AddCasesCancelButton = (gcnew System::Windows::Forms::Button());
			this->AddCasesPhoneNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddCasesPhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->AddCasesTitlePanal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCasesMaleChildrenNumericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCasesFemaleChildrenNumericUpDown))->BeginInit();
			this->AddCasesFatherStatusPanel->SuspendLayout();
			this->AddCasesMotherStatusPanel->SuspendLayout();
			this->AddCasesGenderPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// AddCasesPageTitleLabel
			// 
			this->AddCasesPageTitleLabel->AutoSize = true;
			this->AddCasesPageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesPageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddCasesPageTitleLabel->Location = System::Drawing::Point(280, 9);
			this->AddCasesPageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesPageTitleLabel->Name = L"AddCasesPageTitleLabel";
			this->AddCasesPageTitleLabel->Size = System::Drawing::Size(131, 33);
			this->AddCasesPageTitleLabel->TabIndex = 0;
			this->AddCasesPageTitleLabel->Text = L"إضافة حالة";
			// 
			// AddCasesTitlePanal
			// 
			this->AddCasesTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->AddCasesTitlePanal->Controls->Add(this->AddCasesPageTitleLabel);
			this->AddCasesTitlePanal->Location = System::Drawing::Point(0, 0);
			this->AddCasesTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesTitlePanal->Name = L"AddCasesTitlePanal";
			this->AddCasesTitlePanal->Size = System::Drawing::Size(712, 49);
			this->AddCasesTitlePanal->TabIndex = 3;
			// 
			// AddCasesFristNameLabel
			// 
			this->AddCasesFristNameLabel->AutoSize = true;
			this->AddCasesFristNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFristNameLabel->Location = System::Drawing::Point(579, 74);
			this->AddCasesFristNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesFristNameLabel->Name = L"AddCasesFristNameLabel";
			this->AddCasesFristNameLabel->Size = System::Drawing::Size(86, 24);
			this->AddCasesFristNameLabel->TabIndex = 4;
			this->AddCasesFristNameLabel->Text = L"الاسم الاول";
			this->AddCasesFristNameLabel->Click += gcnew System::EventHandler(this, &AddCaseForm::AddCasesFristNameLabel_Click);
			// 
			// AddCasesFrsitNameTextBox
			// 
			this->AddCasesFrsitNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFrsitNameTextBox->Location = System::Drawing::Point(275, 69);
			this->AddCasesFrsitNameTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesFrsitNameTextBox->Name = L"AddCasesFrsitNameTextBox";
			this->AddCasesFrsitNameTextBox->Size = System::Drawing::Size(241, 29);
			this->AddCasesFrsitNameTextBox->TabIndex = 5;
			this->AddCasesFrsitNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->AddCasesFrsitNameTextBox->TextChanged += gcnew System::EventHandler(this, &AddCaseForm::AddCasesFrsitNameTextBox_TextChanged);
			// 
			// AddCasesLastNameTextBox
			// 
			this->AddCasesLastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesLastNameTextBox->Location = System::Drawing::Point(276, 102);
			this->AddCasesLastNameTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesLastNameTextBox->Name = L"AddCasesLastNameTextBox";
			this->AddCasesLastNameTextBox->Size = System::Drawing::Size(240, 29);
			this->AddCasesLastNameTextBox->TabIndex = 7;
			this->AddCasesLastNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// AddCasesLastLabel
			// 
			this->AddCasesLastLabel->AutoSize = true;
			this->AddCasesLastLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCasesLastLabel->Location = System::Drawing::Point(572, 107);
			this->AddCasesLastLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesLastLabel->Name = L"AddCasesLastLabel";
			this->AddCasesLastLabel->Size = System::Drawing::Size(93, 24);
			this->AddCasesLastLabel->TabIndex = 6;
			this->AddCasesLastLabel->Text = L"الاسم الاخير";
			// 
			// AddCasesNationalIdTextBox
			// 
			this->AddCasesNationalIdTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesNationalIdTextBox->Location = System::Drawing::Point(276, 166);
			this->AddCasesNationalIdTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesNationalIdTextBox->Name = L"AddCasesNationalIdTextBox";
			this->AddCasesNationalIdTextBox->Size = System::Drawing::Size(240, 29);
			this->AddCasesNationalIdTextBox->TabIndex = 11;
			this->AddCasesNationalIdTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// AddCasesNationalIdLabel
			// 
			this->AddCasesNationalIdLabel->AutoSize = true;
			this->AddCasesNationalIdLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesNationalIdLabel->Location = System::Drawing::Point(571, 175);
			this->AddCasesNationalIdLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesNationalIdLabel->Name = L"AddCasesNationalIdLabel";
			this->AddCasesNationalIdLabel->Size = System::Drawing::Size(94, 24);
			this->AddCasesNationalIdLabel->TabIndex = 10;
			this->AddCasesNationalIdLabel->Text = L"الرقم القومي";
			// 
			// AddCasesNickNameTextBox
			// 
			this->AddCasesNickNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesNickNameTextBox->Location = System::Drawing::Point(276, 134);
			this->AddCasesNickNameTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesNickNameTextBox->Name = L"AddCasesNickNameTextBox";
			this->AddCasesNickNameTextBox->Size = System::Drawing::Size(240, 29);
			this->AddCasesNickNameTextBox->TabIndex = 9;
			this->AddCasesNickNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// AddCasesNickNameLabel
			// 
			this->AddCasesNickNameLabel->AutoSize = true;
			this->AddCasesNickNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesNickNameLabel->Location = System::Drawing::Point(619, 139);
			this->AddCasesNickNameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesNickNameLabel->Name = L"AddCasesNickNameLabel";
			this->AddCasesNickNameLabel->Size = System::Drawing::Size(46, 24);
			this->AddCasesNickNameLabel->TabIndex = 8;
			this->AddCasesNickNameLabel->Text = L"اللقب";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(275, 307);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(240, 29);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// AddCasesBirthDateBaLabel
			// 
			this->AddCasesBirthDateBaLabel->AutoSize = true;
			this->AddCasesBirthDateBaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesBirthDateBaLabel->Location = System::Drawing::Point(567, 312);
			this->AddCasesBirthDateBaLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesBirthDateBaLabel->Name = L"AddCasesBirthDateBaLabel";
			this->AddCasesBirthDateBaLabel->Size = System::Drawing::Size(97, 24);
			this->AddCasesBirthDateBaLabel->TabIndex = 16;
			this->AddCasesBirthDateBaLabel->Text = L"تاريخ الميلاد";
			// 
			// AddCasesAreaComboBox
			// 
			this->AddCasesAreaComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesAreaComboBox->FormattingEnabled = true;
			this->AddCasesAreaComboBox->Location = System::Drawing::Point(275, 272);
			this->AddCasesAreaComboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesAreaComboBox->Name = L"AddCasesAreaComboBox";
			this->AddCasesAreaComboBox->Size = System::Drawing::Size(240, 32);
			this->AddCasesAreaComboBox->TabIndex = 17;
			// 
			// AddCasesAreaLabel
			// 
			this->AddCasesAreaLabel->AutoSize = true;
			this->AddCasesAreaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCasesAreaLabel->Location = System::Drawing::Point(604, 280);
			this->AddCasesAreaLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesAreaLabel->Name = L"AddCasesAreaLabel";
			this->AddCasesAreaLabel->Size = System::Drawing::Size(60, 24);
			this->AddCasesAreaLabel->TabIndex = 18;
			this->AddCasesAreaLabel->Text = L"المنطقة";
			// 
			// AddCasesStreetLabel
			// 
			this->AddCasesStreetLabel->AutoSize = true;
			this->AddCasesStreetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesStreetLabel->Location = System::Drawing::Point(607, 244);
			this->AddCasesStreetLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesStreetLabel->Name = L"AddCasesStreetLabel";
			this->AddCasesStreetLabel->Size = System::Drawing::Size(57, 24);
			this->AddCasesStreetLabel->TabIndex = 20;
			this->AddCasesStreetLabel->Text = L"الشارع";
			// 
			// AddCasesStreetComboBox
			// 
			this->AddCasesStreetComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesStreetComboBox->FormattingEnabled = true;
			this->AddCasesStreetComboBox->Location = System::Drawing::Point(275, 236);
			this->AddCasesStreetComboBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesStreetComboBox->Name = L"AddCasesStreetComboBox";
			this->AddCasesStreetComboBox->Size = System::Drawing::Size(241, 32);
			this->AddCasesStreetComboBox->TabIndex = 19;
			// 
			// AddCasesMaritalStatusLabel
			// 
			this->AddCasesMaritalStatusLabel->AutoSize = true;
			this->AddCasesMaritalStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMaritalStatusLabel->Location = System::Drawing::Point(538, 347);
			this->AddCasesMaritalStatusLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesMaritalStatusLabel->Name = L"AddCasesMaritalStatusLabel";
			this->AddCasesMaritalStatusLabel->Size = System::Drawing::Size(126, 24);
			this->AddCasesMaritalStatusLabel->TabIndex = 22;
			this->AddCasesMaritalStatusLabel->Text = L"الحالة الاجتماعية";
			// 
			// AddCasesMaritalStatusComboBox
			// 
			this->AddCasesMaritalStatusComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->AddCasesMaritalStatusComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMaritalStatusComboBox->FormattingEnabled = true;
			this->AddCasesMaritalStatusComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"أرمل / أرملة", L"أرمل / أرملة ويعول",
					L"أعزب / عزباء", L"متزوج / متزوجة", L"متزوج / متزوجة ويعول", L"مطلق / مطلقة", L"مطلق / مطلقة ويعول"
			});
			this->AddCasesMaritalStatusComboBox->Location = System::Drawing::Point(275, 339);
			this->AddCasesMaritalStatusComboBox->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->AddCasesMaritalStatusComboBox->Name = L"AddCasesMaritalStatusComboBox";
			this->AddCasesMaritalStatusComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddCasesMaritalStatusComboBox->Size = System::Drawing::Size(240, 32);
			this->AddCasesMaritalStatusComboBox->TabIndex = 21;
			// 
			// AddCasesMaleChildrenLabel
			// 
			this->AddCasesMaleChildrenLabel->AutoSize = true;
			this->AddCasesMaleChildrenLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMaleChildrenLabel->Location = System::Drawing::Point(523, 415);
			this->AddCasesMaleChildrenLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesMaleChildrenLabel->Name = L"AddCasesMaleChildrenLabel";
			this->AddCasesMaleChildrenLabel->Size = System::Drawing::Size(141, 24);
			this->AddCasesMaleChildrenLabel->TabIndex = 29;
			this->AddCasesMaleChildrenLabel->Text = L"عدد الاطفال الذكور";
			// 
			// AddCasesMaleChildrenNumericUpDown
			// 
			this->AddCasesMaleChildrenNumericUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMaleChildrenNumericUpDown->Location = System::Drawing::Point(277, 408);
			this->AddCasesMaleChildrenNumericUpDown->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesMaleChildrenNumericUpDown->Name = L"AddCasesMaleChildrenNumericUpDown";
			this->AddCasesMaleChildrenNumericUpDown->Size = System::Drawing::Size(239, 31);
			this->AddCasesMaleChildrenNumericUpDown->TabIndex = 30;
			this->AddCasesMaleChildrenNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddCasesFemaleChildrenNumericUpDown
			// 
			this->AddCasesFemaleChildrenNumericUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFemaleChildrenNumericUpDown->Location = System::Drawing::Point(275, 374);
			this->AddCasesFemaleChildrenNumericUpDown->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesFemaleChildrenNumericUpDown->Name = L"AddCasesFemaleChildrenNumericUpDown";
			this->AddCasesFemaleChildrenNumericUpDown->Size = System::Drawing::Size(240, 31);
			this->AddCasesFemaleChildrenNumericUpDown->TabIndex = 32;
			this->AddCasesFemaleChildrenNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddCasesFemaleChildrenLabel
			// 
			this->AddCasesFemaleChildrenLabel->AutoSize = true;
			this->AddCasesFemaleChildrenLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFemaleChildrenLabel->Location = System::Drawing::Point(525, 377);
			this->AddCasesFemaleChildrenLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesFemaleChildrenLabel->Name = L"AddCasesFemaleChildrenLabel";
			this->AddCasesFemaleChildrenLabel->Size = System::Drawing::Size(139, 24);
			this->AddCasesFemaleChildrenLabel->TabIndex = 31;
			this->AddCasesFemaleChildrenLabel->Text = L"عدد الاطفال الاناث";
			// 
			// AddCasesMotherStatusLabel
			// 
			this->AddCasesMotherStatusLabel->AutoSize = true;
			this->AddCasesMotherStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMotherStatusLabel->Location = System::Drawing::Point(94, 9);
			this->AddCasesMotherStatusLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesMotherStatusLabel->Name = L"AddCasesMotherStatusLabel";
			this->AddCasesMotherStatusLabel->Size = System::Drawing::Size(68, 24);
			this->AddCasesMotherStatusLabel->TabIndex = 41;
			this->AddCasesMotherStatusLabel->Text = L"حالة الأم";
			// 
			// AddCasesMotherStatuDeadRadioButton
			// 
			this->AddCasesMotherStatuDeadRadioButton->AutoSize = true;
			this->AddCasesMotherStatuDeadRadioButton->Checked = true;
			this->AddCasesMotherStatuDeadRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMotherStatuDeadRadioButton->Location = System::Drawing::Point(159, 56);
			this->AddCasesMotherStatuDeadRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesMotherStatuDeadRadioButton->Name = L"AddCasesMotherStatuDeadRadioButton";
			this->AddCasesMotherStatuDeadRadioButton->Size = System::Drawing::Size(61, 24);
			this->AddCasesMotherStatuDeadRadioButton->TabIndex = 40;
			this->AddCasesMotherStatuDeadRadioButton->TabStop = true;
			this->AddCasesMotherStatuDeadRadioButton->Text = L"متوفي";
			this->AddCasesMotherStatuDeadRadioButton->UseVisualStyleBackColor = true;
			// 
			// AddCasesMotherStatusAliveRadioButton
			// 
			this->AddCasesMotherStatusAliveRadioButton->AutoSize = true;
			this->AddCasesMotherStatusAliveRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesMotherStatusAliveRadioButton->Location = System::Drawing::Point(4, 56);
			this->AddCasesMotherStatusAliveRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesMotherStatusAliveRadioButton->Name = L"AddCasesMotherStatusAliveRadioButton";
			this->AddCasesMotherStatusAliveRadioButton->Size = System::Drawing::Size(89, 24);
			this->AddCasesMotherStatusAliveRadioButton->TabIndex = 39;
			this->AddCasesMotherStatusAliveRadioButton->TabStop = true;
			this->AddCasesMotherStatusAliveRadioButton->Text = L"غير متوفي";
			this->AddCasesMotherStatusAliveRadioButton->UseVisualStyleBackColor = true;
			// 
			// AddCasesFatherStatusLabel
			// 
			this->AddCasesFatherStatusLabel->AutoSize = true;
			this->AddCasesFatherStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFatherStatusLabel->Location = System::Drawing::Point(69, 16);
			this->AddCasesFatherStatusLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesFatherStatusLabel->Name = L"AddCasesFatherStatusLabel";
			this->AddCasesFatherStatusLabel->Size = System::Drawing::Size(76, 24);
			this->AddCasesFatherStatusLabel->TabIndex = 38;
			this->AddCasesFatherStatusLabel->Text = L"حالة الاب";
			this->AddCasesFatherStatusLabel->Click += gcnew System::EventHandler(this, &AddCaseForm::AddCasesFatherStatusLabel_Click);
			// 
			// AddCasesFatherStatuDeadRadioButton
			// 
			this->AddCasesFatherStatuDeadRadioButton->AutoSize = true;
			this->AddCasesFatherStatuDeadRadioButton->Checked = true;
			this->AddCasesFatherStatuDeadRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFatherStatuDeadRadioButton->Location = System::Drawing::Point(159, 56);
			this->AddCasesFatherStatuDeadRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesFatherStatuDeadRadioButton->Name = L"AddCasesFatherStatuDeadRadioButton";
			this->AddCasesFatherStatuDeadRadioButton->Size = System::Drawing::Size(61, 24);
			this->AddCasesFatherStatuDeadRadioButton->TabIndex = 37;
			this->AddCasesFatherStatuDeadRadioButton->TabStop = true;
			this->AddCasesFatherStatuDeadRadioButton->Text = L"متوفي";
			this->AddCasesFatherStatuDeadRadioButton->UseVisualStyleBackColor = true;
			this->AddCasesFatherStatuDeadRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AddCaseForm::AddCasesFatherStatuDeadRadioButton_CheckedChanged);
			// 
			// AddCasesFatherStatusAliveRadioButton
			// 
			this->AddCasesFatherStatusAliveRadioButton->AutoSize = true;
			this->AddCasesFatherStatusAliveRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesFatherStatusAliveRadioButton->Location = System::Drawing::Point(4, 56);
			this->AddCasesFatherStatusAliveRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesFatherStatusAliveRadioButton->Name = L"AddCasesFatherStatusAliveRadioButton";
			this->AddCasesFatherStatusAliveRadioButton->Size = System::Drawing::Size(89, 24);
			this->AddCasesFatherStatusAliveRadioButton->TabIndex = 36;
			this->AddCasesFatherStatusAliveRadioButton->TabStop = true;
			this->AddCasesFatherStatusAliveRadioButton->Text = L"غير متوفي";
			this->AddCasesFatherStatusAliveRadioButton->UseVisualStyleBackColor = true;
			this->AddCasesFatherStatusAliveRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AddCaseForm::AddCasesFatherStatusAliveRadioButton_CheckedChanged);
			// 
			// AddCasesGenderLabel
			// 
			this->AddCasesGenderLabel->AutoSize = true;
			this->AddCasesGenderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesGenderLabel->Location = System::Drawing::Point(107, 15);
			this->AddCasesGenderLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesGenderLabel->Name = L"AddCasesGenderLabel";
			this->AddCasesGenderLabel->Size = System::Drawing::Size(46, 24);
			this->AddCasesGenderLabel->TabIndex = 35;
			this->AddCasesGenderLabel->Text = L"النوع";
			// 
			// AddCasesGenderMailRadioButton
			// 
			this->AddCasesGenderMailRadioButton->AutoSize = true;
			this->AddCasesGenderMailRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesGenderMailRadioButton->Location = System::Drawing::Point(169, 50);
			this->AddCasesGenderMailRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesGenderMailRadioButton->Name = L"AddCasesGenderMailRadioButton";
			this->AddCasesGenderMailRadioButton->Size = System::Drawing::Size(45, 25);
			this->AddCasesGenderMailRadioButton->TabIndex = 34;
			this->AddCasesGenderMailRadioButton->Text = L"ذكر";
			this->AddCasesGenderMailRadioButton->UseCompatibleTextRendering = true;
			this->AddCasesGenderMailRadioButton->UseVisualStyleBackColor = true;
			// 
			// AddCasesGenderFemailRadioButton
			// 
			this->AddCasesGenderFemailRadioButton->AutoSize = true;
			this->AddCasesGenderFemailRadioButton->Checked = true;
			this->AddCasesGenderFemailRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesGenderFemailRadioButton->Location = System::Drawing::Point(4, 50);
			this->AddCasesGenderFemailRadioButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesGenderFemailRadioButton->Name = L"AddCasesGenderFemailRadioButton";
			this->AddCasesGenderFemailRadioButton->Size = System::Drawing::Size(52, 24);
			this->AddCasesGenderFemailRadioButton->TabIndex = 33;
			this->AddCasesGenderFemailRadioButton->TabStop = true;
			this->AddCasesGenderFemailRadioButton->Text = L"انثى";
			this->AddCasesGenderFemailRadioButton->UseVisualStyleBackColor = true;
			// 
			// AddCasesFatherStatusPanel
			// 
			this->AddCasesFatherStatusPanel->Controls->Add(this->AddCasesFatherStatusLabel);
			this->AddCasesFatherStatusPanel->Controls->Add(this->AddCasesFatherStatusAliveRadioButton);
			this->AddCasesFatherStatusPanel->Controls->Add(this->AddCasesFatherStatuDeadRadioButton);
			this->AddCasesFatherStatusPanel->Location = System::Drawing::Point(14, 306);
			this->AddCasesFatherStatusPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesFatherStatusPanel->Name = L"AddCasesFatherStatusPanel";
			this->AddCasesFatherStatusPanel->Size = System::Drawing::Size(233, 92);
			this->AddCasesFatherStatusPanel->TabIndex = 42;
			// 
			// AddCasesMotherStatusPanel
			// 
			this->AddCasesMotherStatusPanel->Controls->Add(this->AddCasesMotherStatusLabel);
			this->AddCasesMotherStatusPanel->Controls->Add(this->AddCasesMotherStatuDeadRadioButton);
			this->AddCasesMotherStatusPanel->Controls->Add(this->AddCasesMotherStatusAliveRadioButton);
			this->AddCasesMotherStatusPanel->Location = System::Drawing::Point(14, 166);
			this->AddCasesMotherStatusPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesMotherStatusPanel->Name = L"AddCasesMotherStatusPanel";
			this->AddCasesMotherStatusPanel->Size = System::Drawing::Size(233, 92);
			this->AddCasesMotherStatusPanel->TabIndex = 43;
			// 
			// AddCasesGenderPanel
			// 
			this->AddCasesGenderPanel->Controls->Add(this->AddCasesGenderLabel);
			this->AddCasesGenderPanel->Controls->Add(this->AddCasesGenderFemailRadioButton);
			this->AddCasesGenderPanel->Controls->Add(this->AddCasesGenderMailRadioButton);
			this->AddCasesGenderPanel->Location = System::Drawing::Point(18, 54);
			this->AddCasesGenderPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesGenderPanel->Name = L"AddCasesGenderPanel";
			this->AddCasesGenderPanel->Size = System::Drawing::Size(233, 92);
			this->AddCasesGenderPanel->TabIndex = 44;
			// 
			// AddCaseSaveButton
			// 
			this->AddCaseSaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCaseSaveButton->Location = System::Drawing::Point(25, 470);
			this->AddCaseSaveButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCaseSaveButton->Name = L"AddCaseSaveButton";
			this->AddCaseSaveButton->Size = System::Drawing::Size(226, 32);
			this->AddCaseSaveButton->TabIndex = 45;
			this->AddCaseSaveButton->Text = L"حفظ الحالة ";
			this->AddCaseSaveButton->UseVisualStyleBackColor = true;
			this->AddCaseSaveButton->Click += gcnew System::EventHandler(this, &AddCaseForm::AddCaseSaveButton_Click);
			// 
			// AddCasesCleanButton
			// 
			this->AddCasesCleanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesCleanButton->Location = System::Drawing::Point(439, 470);
			this->AddCasesCleanButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesCleanButton->Name = L"AddCasesCleanButton";
			this->AddCasesCleanButton->Size = System::Drawing::Size(226, 32);
			this->AddCasesCleanButton->TabIndex = 46;
			this->AddCasesCleanButton->Text = L"تفريغ الحقول";
			this->AddCasesCleanButton->UseVisualStyleBackColor = true;
			this->AddCasesCleanButton->Click += gcnew System::EventHandler(this, &AddCaseForm::AddCasesCleanButton_Click);
			// 
			// AddCasesCancelButton
			// 
			this->AddCasesCancelButton->BackColor = System::Drawing::Color::Red;
			this->AddCasesCancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesCancelButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddCasesCancelButton->Location = System::Drawing::Point(286, 459);
			this->AddCasesCancelButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesCancelButton->Name = L"AddCasesCancelButton";
			this->AddCasesCancelButton->Size = System::Drawing::Size(110, 43);
			this->AddCasesCancelButton->TabIndex = 47;
			this->AddCasesCancelButton->Text = L"إلغاء";
			this->AddCasesCancelButton->UseVisualStyleBackColor = false;
			this->AddCasesCancelButton->Click += gcnew System::EventHandler(this, &AddCaseForm::AddCasesCancelButton_Click);
			// 
			// AddCasesPhoneNumberTextBox
			// 
			this->AddCasesPhoneNumberTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesPhoneNumberTextBox->Location = System::Drawing::Point(278, 201);
			this->AddCasesPhoneNumberTextBox->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddCasesPhoneNumberTextBox->Name = L"AddCasesPhoneNumberTextBox";
			this->AddCasesPhoneNumberTextBox->Size = System::Drawing::Size(238, 29);
			this->AddCasesPhoneNumberTextBox->TabIndex = 49;
			this->AddCasesPhoneNumberTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// AddCasesPhoneNumberLabel
			// 
			this->AddCasesPhoneNumberLabel->AutoSize = true;
			this->AddCasesPhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddCasesPhoneNumberLabel->Location = System::Drawing::Point(573, 210);
			this->AddCasesPhoneNumberLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddCasesPhoneNumberLabel->Name = L"AddCasesPhoneNumberLabel";
			this->AddCasesPhoneNumberLabel->Size = System::Drawing::Size(84, 24);
			this->AddCasesPhoneNumberLabel->TabIndex = 48;
			this->AddCasesPhoneNumberLabel->Text = L"رقم الهاتف";
			// 
			// AddCaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 514);
			this->Controls->Add(this->AddCasesPhoneNumberTextBox);
			this->Controls->Add(this->AddCasesPhoneNumberLabel);
			this->Controls->Add(this->AddCasesCancelButton);
			this->Controls->Add(this->AddCasesCleanButton);
			this->Controls->Add(this->AddCaseSaveButton);
			this->Controls->Add(this->AddCasesGenderPanel);
			this->Controls->Add(this->AddCasesMotherStatusPanel);
			this->Controls->Add(this->AddCasesFatherStatusPanel);
			this->Controls->Add(this->AddCasesFemaleChildrenNumericUpDown);
			this->Controls->Add(this->AddCasesFemaleChildrenLabel);
			this->Controls->Add(this->AddCasesMaleChildrenNumericUpDown);
			this->Controls->Add(this->AddCasesMaleChildrenLabel);
			this->Controls->Add(this->AddCasesMaritalStatusLabel);
			this->Controls->Add(this->AddCasesMaritalStatusComboBox);
			this->Controls->Add(this->AddCasesStreetLabel);
			this->Controls->Add(this->AddCasesStreetComboBox);
			this->Controls->Add(this->AddCasesAreaLabel);
			this->Controls->Add(this->AddCasesAreaComboBox);
			this->Controls->Add(this->AddCasesBirthDateBaLabel);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->AddCasesNationalIdTextBox);
			this->Controls->Add(this->AddCasesNationalIdLabel);
			this->Controls->Add(this->AddCasesNickNameTextBox);
			this->Controls->Add(this->AddCasesNickNameLabel);
			this->Controls->Add(this->AddCasesLastNameTextBox);
			this->Controls->Add(this->AddCasesLastLabel);
			this->Controls->Add(this->AddCasesFrsitNameTextBox);
			this->Controls->Add(this->AddCasesFristNameLabel);
			this->Controls->Add(this->AddCasesTitlePanal);
			this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"AddCaseForm";
			this->Text = L"صفحة إضافة حالة ";
			this->AddCasesTitlePanal->ResumeLayout(false);
			this->AddCasesTitlePanal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCasesMaleChildrenNumericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddCasesFemaleChildrenNumericUpDown))->EndInit();
			this->AddCasesFatherStatusPanel->ResumeLayout(false);
			this->AddCasesFatherStatusPanel->PerformLayout();
			this->AddCasesMotherStatusPanel->ResumeLayout(false);
			this->AddCasesMotherStatusPanel->PerformLayout();
			this->AddCasesGenderPanel->ResumeLayout(false);
			this->AddCasesGenderPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void AddCasesGenderLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesGenderMailRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesGenderFemailRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesFristNameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesFrsitNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesFatherStatuDeadRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesFatherStatusAliveRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCasesFatherStatusLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddCaseSaveButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Cases^ c;

	// قراءة البيانات من الحقول
	String^ firstName = AddCasesFrsitNameTextBox->Text->Trim();
	String^ lastName = AddCasesLastNameTextBox->Text->Trim();
	String^ nationalId = AddCasesNationalIdTextBox->Text->Trim();
	String^ nickName = AddCasesNickNameTextBox->Text->Trim();
	String^ phoneNumber = AddCasesPhoneNumberTextBox->Text->Trim(); // قراءة رقم الهاتف

	Nullable<DateTime> birthDate = Nullable<DateTime>();
	if (dateTimePicker1->Value.Date != DateTime::Now.Date)
	{
		birthDate = dateTimePicker1->Value;
	}

	String^ area = AddCasesAreaComboBox->SelectedItem != nullptr ? AddCasesAreaComboBox->SelectedItem->ToString() : nullptr;
	String^ street = AddCasesStreetComboBox->SelectedItem != nullptr ? AddCasesStreetComboBox->SelectedItem->ToString() : nullptr;
	String^ maritalStatus = AddCasesMaritalStatusComboBox->SelectedItem != nullptr ? AddCasesMaritalStatusComboBox->SelectedItem->ToString() : nullptr;

	Nullable<Byte> maleChildren = (Byte)AddCasesMaleChildrenNumericUpDown->Value;
	Nullable<Byte> femaleChildren = (Byte)AddCasesFemaleChildrenNumericUpDown->Value;

	Nullable<bool> motherStatus = Nullable<bool>();
	if (AddCasesMotherStatusAliveRadioButton->Checked)
		motherStatus = true;
	else if (AddCasesMotherStatuDeadRadioButton->Checked)
		motherStatus = false;

	Nullable<bool> fatherStatus = Nullable<bool>();
	if (AddCasesFatherStatusAliveRadioButton->Checked)
		fatherStatus = true;
	else if (AddCasesFatherStatuDeadRadioButton->Checked)
		fatherStatus = false;

	Nullable<bool> gender = Nullable<bool>();
	if (AddCasesGenderMailRadioButton->Checked)
		gender = true;
	else if (AddCasesGenderFemailRadioButton->Checked)
		gender = false;

	Nullable<bool> isActive = true; // بافتراض أن الحالة الجديدة مفعلة

	DateTime now = DateTime::Now;
	Nullable<DateTime> createdAt = now;
	Nullable<DateTime> updatedAt = now;

	// التحقق من الحقول الأساسية
	if (firstName == "")
	{
		MessageBox::Show(L"لا يمكن ترك الاسم الاول فارغ", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	else if (lastName == "") {
		MessageBox::Show(L"لا يمكن ترك الاسم الاخر فارغ", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// التحقق من رقم الهاتف
	if (phoneNumber == "") {
		MessageBox::Show(L"لا يمكن ترك رقم الهاتف فارغًا", L"تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// إنشاء الكائن
	c = gcnew Cases(
		nationalId,
		firstName,
		lastName,
		nickName,
		phoneNumber, // تمرير رقم الهاتف
		gender,
		birthDate,
		area,
		street,
		maritalStatus,
		fatherStatus,
		motherStatus,
		maleChildren,
		femaleChildren,
		isActive,
		createdAt,
		updatedAt
	);

	Connection::AddCase(c);
}



private: System::Void AddCasesCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void AddCasesCleanButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// تفريغ حقول النصوص
	AddCasesFrsitNameTextBox->Text = "";
	AddCasesLastNameTextBox->Text = "";
	AddCasesNationalIdTextBox->Text = "";
	AddCasesNickNameTextBox->Text = "";
	AddCasesPhoneNumberTextBox->Text = "";

	// إعادة تعيين تاريخ الميلاد إلى التاريخ الحالي
	dateTimePicker1->Value = DateTime::Now;

	// إعادة تعيين ComboBoxes
	AddCasesAreaComboBox->SelectedIndex = -1;
	AddCasesStreetComboBox->SelectedIndex = -1;
	AddCasesMaritalStatusComboBox->SelectedIndex = -1;

	// إعادة تعيين NumericUpDowns إلى القيمة الافتراضية (0)
	AddCasesMaleChildrenNumericUpDown->Value = 0;
	AddCasesFemaleChildrenNumericUpDown->Value = 0;

	// إعادة تعيين RadioButtons إلى الحالة الافتراضية
	AddCasesMotherStatusAliveRadioButton->Checked = false;
	AddCasesMotherStatuDeadRadioButton->Checked = true; // أو false حسب ما تريد

	AddCasesFatherStatusAliveRadioButton->Checked = false;
	AddCasesFatherStatuDeadRadioButton->Checked = true; // أو false حسب ما تريد

	AddCasesGenderMailRadioButton->Checked = false;
	AddCasesGenderFemailRadioButton->Checked = true; // أو العكس حسب ما تريد
}
};
}
