#pragma once
#include "Cases.h"
#include "Connection.h"
#include "FinancialAid.h"
#include "InKindAid.h"

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for AddNewAid
	/// </summary>
	public ref class AddNewAid : public System::Windows::Forms::Form
	{
	public:
		AddNewAid(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			HideAllFields();
		}
	private: void HideAllFields()
        {
            AddingNewAidPageAidTypeLabel->Visible = false;
            AddingNewAidPageAidTypeComboBox->Visible = false;
            AddingNewAidPageAidTypeAmountLabel->Visible = false;
            AddingNewAidPageAidTypeAmountNumericUpDown->Visible = false;
            AddingNewAidPageAidTypeAidContentLabel->Visible = false;
            AddingNewAidPageAidTypeAidContentCheckedListBox->Visible = false;
            AddingNewAidPageSeasonTypeLabel->Visible = false;
            AddingNewAidPageSeasonTypeComboBox->Visible = false;
			AddingNewAidPageAidTypeRepetitionLabel->Visible = false;
			AddingNewAidPageAidTypeRepetitionComboBox->Visible = false;
        }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewAid()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AddingNewAidPageTitleLabel;
	private: System::Windows::Forms::Panel^ AddingNewAidPageTitlePanal;
	private: System::Windows::Forms::Button^ AddingNewAidPageCleanButton;


	private: System::Windows::Forms::Button^ AddingNewAidPageSaveButton;

	private: System::Windows::Forms::Button^ AddingNewAidPageCancelButton;
	private: System::Windows::Forms::Panel^ AddingNewAidPageContolPanel;
	private: System::Windows::Forms::ComboBox^ AddingNewAidPageChoseCaseComboBox;
	private: System::Windows::Forms::Label^ AddingNewAidPageChoseCaseLabel;
	private: System::Windows::Forms::ComboBox^ AddingNewAidPageChoseAidCategoryComboBox;
	private: System::Windows::Forms::Label^ AddingNewAidPageChoseAidCategoryLabel;
	private: System::Windows::Forms::CheckBox^ AddingNewAidPageRepetitionCheckBox;
	private: System::Windows::Forms::ComboBox^ AddingNewAidPageAidTypeComboBox;
	private: System::Windows::Forms::Label^ AddingNewAidPageAidTypeLabel;
	private: System::Windows::Forms::NumericUpDown^ AddingNewAidPageAidTypeAmountNumericUpDown;
	private: System::Windows::Forms::Label^ AddingNewAidPageAidTypeAmountLabel;
	private: System::Windows::Forms::Label^ AddingNewAidPageAidTypeAidContentLabel;
	private: System::Windows::Forms::CheckedListBox^ AddingNewAidPageAidTypeAidContentCheckedListBox;
	private: System::Windows::Forms::ComboBox^ AddingNewAidPageAidTypeRepetitionComboBox;
	private: System::Windows::Forms::Label^ AddingNewAidPageAidTypeRepetitionLabel;
	private: System::Windows::Forms::ComboBox^ AddingNewAidPageSeasonTypeComboBox;
	private: System::Windows::Forms::Label^ AddingNewAidPageSeasonTypeLabel;
	private: System::Windows::Forms::DateTimePicker^ AddingNewAidPageDeliveryDateDateTimePicker;

	private: System::Windows::Forms::Label^ AddingNewAidPageDeliveryDateLabel;
	private: System::Windows::Forms::Label^ AddingNewAidPageNotesLabel;
	private: System::Windows::Forms::RichTextBox^ AddingNewAidPageNotesRichTextBox;


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
			this->AddingNewAidPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageTitlePanal = (gcnew System::Windows::Forms::Panel());
			this->AddingNewAidPageCleanButton = (gcnew System::Windows::Forms::Button());
			this->AddingNewAidPageSaveButton = (gcnew System::Windows::Forms::Button());
			this->AddingNewAidPageCancelButton = (gcnew System::Windows::Forms::Button());
			this->AddingNewAidPageContolPanel = (gcnew System::Windows::Forms::Panel());
			this->AddingNewAidPageNotesLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageNotesRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->AddingNewAidPageDeliveryDateDateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->AddingNewAidPageDeliveryDateLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageSeasonTypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddingNewAidPageSeasonTypeLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageAidTypeRepetitionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddingNewAidPageAidTypeRepetitionLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageAidTypeAidContentCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->AddingNewAidPageAidTypeAidContentLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageAidTypeAmountNumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->AddingNewAidPageAidTypeAmountLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageAidTypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddingNewAidPageAidTypeLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageRepetitionCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->AddingNewAidPageChoseAidCategoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddingNewAidPageChoseAidCategoryLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageChoseCaseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddingNewAidPageChoseCaseLabel = (gcnew System::Windows::Forms::Label());
			this->AddingNewAidPageTitlePanal->SuspendLayout();
			this->AddingNewAidPageContolPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddingNewAidPageAidTypeAmountNumericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// AddingNewAidPageTitleLabel
			// 
			this->AddingNewAidPageTitleLabel->AutoSize = true;
			this->AddingNewAidPageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddingNewAidPageTitleLabel->Location = System::Drawing::Point(251, 8);
			this->AddingNewAidPageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AddingNewAidPageTitleLabel->Name = L"AddingNewAidPageTitleLabel";
			this->AddingNewAidPageTitleLabel->Size = System::Drawing::Size(230, 33);
			this->AddingNewAidPageTitleLabel->TabIndex = 0;
			this->AddingNewAidPageTitleLabel->Text = L"إضافة مساعدة جديدة";
			// 
			// AddingNewAidPageTitlePanal
			// 
			this->AddingNewAidPageTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->AddingNewAidPageTitlePanal->Controls->Add(this->AddingNewAidPageTitleLabel);
			this->AddingNewAidPageTitlePanal->Location = System::Drawing::Point(-1, 0);
			this->AddingNewAidPageTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddingNewAidPageTitlePanal->Name = L"AddingNewAidPageTitlePanal";
			this->AddingNewAidPageTitlePanal->Size = System::Drawing::Size(735, 49);
			this->AddingNewAidPageTitlePanal->TabIndex = 3;
			// 
			// AddingNewAidPageCleanButton
			// 
			this->AddingNewAidPageCleanButton->BackColor = System::Drawing::Color::SaddleBrown;
			this->AddingNewAidPageCleanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageCleanButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddingNewAidPageCleanButton->Location = System::Drawing::Point(12, 448);
			this->AddingNewAidPageCleanButton->Name = L"AddingNewAidPageCleanButton";
			this->AddingNewAidPageCleanButton->Size = System::Drawing::Size(115, 40);
			this->AddingNewAidPageCleanButton->TabIndex = 4;
			this->AddingNewAidPageCleanButton->Text = L"مسح";
			this->AddingNewAidPageCleanButton->UseVisualStyleBackColor = false;
			this->AddingNewAidPageCleanButton->Click += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageCleanButton_Click);
			// 
			// AddingNewAidPageSaveButton
			// 
			this->AddingNewAidPageSaveButton->BackColor = System::Drawing::Color::Lime;
			this->AddingNewAidPageSaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageSaveButton->ForeColor = System::Drawing::Color::White;
			this->AddingNewAidPageSaveButton->Location = System::Drawing::Point(133, 448);
			this->AddingNewAidPageSaveButton->Name = L"AddingNewAidPageSaveButton";
			this->AddingNewAidPageSaveButton->Size = System::Drawing::Size(115, 40);
			this->AddingNewAidPageSaveButton->TabIndex = 5;
			this->AddingNewAidPageSaveButton->Text = L"حفظ";
			this->AddingNewAidPageSaveButton->UseVisualStyleBackColor = false;
			this->AddingNewAidPageSaveButton->Click += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageSaveButton_Click);
			// 
			// AddingNewAidPageCancelButton
			// 
			this->AddingNewAidPageCancelButton->BackColor = System::Drawing::Color::Red;
			this->AddingNewAidPageCancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageCancelButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->AddingNewAidPageCancelButton->Location = System::Drawing::Point(254, 448);
			this->AddingNewAidPageCancelButton->Name = L"AddingNewAidPageCancelButton";
			this->AddingNewAidPageCancelButton->Size = System::Drawing::Size(115, 40);
			this->AddingNewAidPageCancelButton->TabIndex = 6;
			this->AddingNewAidPageCancelButton->Text = L"إلغاء";
			this->AddingNewAidPageCancelButton->UseVisualStyleBackColor = false;
			this->AddingNewAidPageCancelButton->Click += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageCancelButton_Click);
			// 
			// AddingNewAidPageContolPanel
			// 
			this->AddingNewAidPageContolPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageNotesLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageNotesRichTextBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageDeliveryDateDateTimePicker);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageDeliveryDateLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageSeasonTypeComboBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageSeasonTypeLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeRepetitionComboBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeRepetitionLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeAidContentCheckedListBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeAidContentLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeAmountNumericUpDown);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeAmountLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeComboBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageAidTypeLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageRepetitionCheckBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageChoseAidCategoryComboBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageChoseAidCategoryLabel);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageChoseCaseComboBox);
			this->AddingNewAidPageContolPanel->Controls->Add(this->AddingNewAidPageChoseCaseLabel);
			this->AddingNewAidPageContolPanel->Location = System::Drawing::Point(12, 55);
			this->AddingNewAidPageContolPanel->Name = L"AddingNewAidPageContolPanel";
			this->AddingNewAidPageContolPanel->Size = System::Drawing::Size(722, 387);
			this->AddingNewAidPageContolPanel->TabIndex = 7;
			// 
			// AddingNewAidPageNotesLabel
			// 
			this->AddingNewAidPageNotesLabel->AutoSize = true;
			this->AddingNewAidPageNotesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageNotesLabel->Location = System::Drawing::Point(621, 196);
			this->AddingNewAidPageNotesLabel->Name = L"AddingNewAidPageNotesLabel";
			this->AddingNewAidPageNotesLabel->Size = System::Drawing::Size(82, 25);
			this->AddingNewAidPageNotesLabel->TabIndex = 19;
			this->AddingNewAidPageNotesLabel->Text = L"ملاحظات";
			// 
			// AddingNewAidPageNotesRichTextBox
			// 
			this->AddingNewAidPageNotesRichTextBox->Location = System::Drawing::Point(364, 160);
			this->AddingNewAidPageNotesRichTextBox->Name = L"AddingNewAidPageNotesRichTextBox";
			this->AddingNewAidPageNotesRichTextBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageNotesRichTextBox->Size = System::Drawing::Size(201, 96);
			this->AddingNewAidPageNotesRichTextBox->TabIndex = 18;
			this->AddingNewAidPageNotesRichTextBox->Text = L"";
			// 
			// AddingNewAidPageDeliveryDateDateTimePicker
			// 
			this->AddingNewAidPageDeliveryDateDateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageDeliveryDateDateTimePicker->Location = System::Drawing::Point(364, 123);
			this->AddingNewAidPageDeliveryDateDateTimePicker->Name = L"AddingNewAidPageDeliveryDateDateTimePicker";
			this->AddingNewAidPageDeliveryDateDateTimePicker->Size = System::Drawing::Size(196, 31);
			this->AddingNewAidPageDeliveryDateDateTimePicker->TabIndex = 17;
			// 
			// AddingNewAidPageDeliveryDateLabel
			// 
			this->AddingNewAidPageDeliveryDateLabel->AutoSize = true;
			this->AddingNewAidPageDeliveryDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageDeliveryDateLabel->Location = System::Drawing::Point(597, 126);
			this->AddingNewAidPageDeliveryDateLabel->Name = L"AddingNewAidPageDeliveryDateLabel";
			this->AddingNewAidPageDeliveryDateLabel->Size = System::Drawing::Size(112, 25);
			this->AddingNewAidPageDeliveryDateLabel->TabIndex = 16;
			this->AddingNewAidPageDeliveryDateLabel->Text = L"تاريخ التسليم";
			// 
			// AddingNewAidPageSeasonTypeComboBox
			// 
			this->AddingNewAidPageSeasonTypeComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageSeasonTypeComboBox->FormattingEnabled = true;
			this->AddingNewAidPageSeasonTypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"رمضان", L"عيد الفطر",
					L"عيد الاضحى", L"المولد النبوي"
			});
			this->AddingNewAidPageSeasonTypeComboBox->Location = System::Drawing::Point(14, 119);
			this->AddingNewAidPageSeasonTypeComboBox->Name = L"AddingNewAidPageSeasonTypeComboBox";
			this->AddingNewAidPageSeasonTypeComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageSeasonTypeComboBox->Size = System::Drawing::Size(196, 33);
			this->AddingNewAidPageSeasonTypeComboBox->TabIndex = 15;
			this->AddingNewAidPageSeasonTypeComboBox->Text = L"نوع الموسم";
			// 
			// AddingNewAidPageSeasonTypeLabel
			// 
			this->AddingNewAidPageSeasonTypeLabel->AutoSize = true;
			this->AddingNewAidPageSeasonTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageSeasonTypeLabel->Location = System::Drawing::Point(248, 123);
			this->AddingNewAidPageSeasonTypeLabel->Name = L"AddingNewAidPageSeasonTypeLabel";
			this->AddingNewAidPageSeasonTypeLabel->Size = System::Drawing::Size(100, 25);
			this->AddingNewAidPageSeasonTypeLabel->TabIndex = 14;
			this->AddingNewAidPageSeasonTypeLabel->Text = L"نوع الموسم";
			// 
			// AddingNewAidPageAidTypeRepetitionComboBox
			// 
			this->AddingNewAidPageAidTypeRepetitionComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeRepetitionComboBox->FormattingEnabled = true;
			this->AddingNewAidPageAidTypeRepetitionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"اسبوعي", L"شهري",
					L"نصف سنوي", L"سنوي"
			});
			this->AddingNewAidPageAidTypeRepetitionComboBox->Location = System::Drawing::Point(364, 84);
			this->AddingNewAidPageAidTypeRepetitionComboBox->Name = L"AddingNewAidPageAidTypeRepetitionComboBox";
			this->AddingNewAidPageAidTypeRepetitionComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageAidTypeRepetitionComboBox->Size = System::Drawing::Size(196, 33);
			this->AddingNewAidPageAidTypeRepetitionComboBox->TabIndex = 13;
			this->AddingNewAidPageAidTypeRepetitionComboBox->Text = L"نوع التكرار";
			// 
			// AddingNewAidPageAidTypeRepetitionLabel
			// 
			this->AddingNewAidPageAidTypeRepetitionLabel->AutoSize = true;
			this->AddingNewAidPageAidTypeRepetitionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeRepetitionLabel->Location = System::Drawing::Point(607, 88);
			this->AddingNewAidPageAidTypeRepetitionLabel->Name = L"AddingNewAidPageAidTypeRepetitionLabel";
			this->AddingNewAidPageAidTypeRepetitionLabel->Size = System::Drawing::Size(102, 25);
			this->AddingNewAidPageAidTypeRepetitionLabel->TabIndex = 12;
			this->AddingNewAidPageAidTypeRepetitionLabel->Text = L"نوع التكرار";
			// 
			// AddingNewAidPageAidTypeAidContentCheckedListBox
			// 
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->BackColor = System::Drawing::SystemColors::Control;
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->FormattingEnabled = true;
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"بطانية",
					L"طعام ", L"دواء", L"ملابس"
			});
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->Location = System::Drawing::Point(14, 162);
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->Name = L"AddingNewAidPageAidTypeAidContentCheckedListBox";
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->Size = System::Drawing::Size(196, 96);
			this->AddingNewAidPageAidTypeAidContentCheckedListBox->TabIndex = 11;
			// 
			// AddingNewAidPageAidTypeAidContentLabel
			// 
			this->AddingNewAidPageAidTypeAidContentLabel->AutoSize = true;
			this->AddingNewAidPageAidTypeAidContentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeAidContentLabel->Location = System::Drawing::Point(214, 197);
			this->AddingNewAidPageAidTypeAidContentLabel->Name = L"AddingNewAidPageAidTypeAidContentLabel";
			this->AddingNewAidPageAidTypeAidContentLabel->Size = System::Drawing::Size(139, 25);
			this->AddingNewAidPageAidTypeAidContentLabel->TabIndex = 10;
			this->AddingNewAidPageAidTypeAidContentLabel->Text = L"محتوى السماعدة";
			// 
			// AddingNewAidPageAidTypeAmountNumericUpDown
			// 
			this->AddingNewAidPageAidTypeAmountNumericUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeAmountNumericUpDown->Location = System::Drawing::Point(14, 81);
			this->AddingNewAidPageAidTypeAmountNumericUpDown->Name = L"AddingNewAidPageAidTypeAmountNumericUpDown";
			this->AddingNewAidPageAidTypeAmountNumericUpDown->Size = System::Drawing::Size(196, 31);
			this->AddingNewAidPageAidTypeAmountNumericUpDown->TabIndex = 8;
			this->AddingNewAidPageAidTypeAmountNumericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddingNewAidPageAidTypeAmountLabel
			// 
			this->AddingNewAidPageAidTypeAmountLabel->AutoSize = true;
			this->AddingNewAidPageAidTypeAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeAmountLabel->Location = System::Drawing::Point(229, 84);
			this->AddingNewAidPageAidTypeAmountLabel->Name = L"AddingNewAidPageAidTypeAmountLabel";
			this->AddingNewAidPageAidTypeAmountLabel->Size = System::Drawing::Size(119, 25);
			this->AddingNewAidPageAidTypeAmountLabel->TabIndex = 7;
			this->AddingNewAidPageAidTypeAmountLabel->Text = L"قيمة المساعدة";
			// 
			// AddingNewAidPageAidTypeComboBox
			// 
			this->AddingNewAidPageAidTypeComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeComboBox->FormattingEnabled = true;
			this->AddingNewAidPageAidTypeComboBox->Location = System::Drawing::Point(14, 42);
			this->AddingNewAidPageAidTypeComboBox->Name = L"AddingNewAidPageAidTypeComboBox";
			this->AddingNewAidPageAidTypeComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageAidTypeComboBox->Size = System::Drawing::Size(196, 33);
			this->AddingNewAidPageAidTypeComboBox->TabIndex = 6;
			this->AddingNewAidPageAidTypeComboBox->Text = L"أختار نوع المساعدة";
			// 
			// AddingNewAidPageAidTypeLabel
			// 
			this->AddingNewAidPageAidTypeLabel->AutoSize = true;
			this->AddingNewAidPageAidTypeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageAidTypeLabel->Location = System::Drawing::Point(232, 46);
			this->AddingNewAidPageAidTypeLabel->Name = L"AddingNewAidPageAidTypeLabel";
			this->AddingNewAidPageAidTypeLabel->Size = System::Drawing::Size(116, 25);
			this->AddingNewAidPageAidTypeLabel->TabIndex = 5;
			this->AddingNewAidPageAidTypeLabel->Text = L"نوع المساعدة";
			this->AddingNewAidPageAidTypeLabel->Click += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageAidTypeLabel_Click);
			// 
			// AddingNewAidPageRepetitionCheckBox
			// 
			this->AddingNewAidPageRepetitionCheckBox->AutoSize = true;
			this->AddingNewAidPageRepetitionCheckBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageRepetitionCheckBox->Location = System::Drawing::Point(3, 351);
			this->AddingNewAidPageRepetitionCheckBox->Name = L"AddingNewAidPageRepetitionCheckBox";
			this->AddingNewAidPageRepetitionCheckBox->Size = System::Drawing::Size(74, 29);
			this->AddingNewAidPageRepetitionCheckBox->TabIndex = 4;
			this->AddingNewAidPageRepetitionCheckBox->Text = L"تكرار";
			this->AddingNewAidPageRepetitionCheckBox->UseVisualStyleBackColor = true;
			this->AddingNewAidPageRepetitionCheckBox->CheckedChanged += gcnew System::EventHandler(this, &AddNewAid::CheckedChanged);
			// 
			// AddingNewAidPageChoseAidCategoryComboBox
			// 
			this->AddingNewAidPageChoseAidCategoryComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageChoseAidCategoryComboBox->FormattingEnabled = true;
			this->AddingNewAidPageChoseAidCategoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
				L"مساعدة مالية",
					L"مساعدة عينية"
			});
			this->AddingNewAidPageChoseAidCategoryComboBox->Location = System::Drawing::Point(364, 46);
			this->AddingNewAidPageChoseAidCategoryComboBox->Name = L"AddingNewAidPageChoseAidCategoryComboBox";
			this->AddingNewAidPageChoseAidCategoryComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageChoseAidCategoryComboBox->Size = System::Drawing::Size(196, 33);
			this->AddingNewAidPageChoseAidCategoryComboBox->TabIndex = 3;
			this->AddingNewAidPageChoseAidCategoryComboBox->Text = L"أختار تصنيف المساعدة";
			this->AddingNewAidPageChoseAidCategoryComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageChoseAidCategoryComboBox_SelectedIndexChanged);
			// 
			// AddingNewAidPageChoseAidCategoryLabel
			// 
			this->AddingNewAidPageChoseAidCategoryLabel->AutoSize = true;
			this->AddingNewAidPageChoseAidCategoryLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageChoseAidCategoryLabel->Location = System::Drawing::Point(566, 50);
			this->AddingNewAidPageChoseAidCategoryLabel->Name = L"AddingNewAidPageChoseAidCategoryLabel";
			this->AddingNewAidPageChoseAidCategoryLabel->Size = System::Drawing::Size(143, 25);
			this->AddingNewAidPageChoseAidCategoryLabel->TabIndex = 2;
			this->AddingNewAidPageChoseAidCategoryLabel->Text = L"تصنيف المساعدة";
			this->AddingNewAidPageChoseAidCategoryLabel->Click += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageChoseAidCategoryLabel_Click);
			// 
			// AddingNewAidPageChoseCaseComboBox
			// 
			this->AddingNewAidPageChoseCaseComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageChoseCaseComboBox->FormattingEnabled = true;
			this->AddingNewAidPageChoseCaseComboBox->Location = System::Drawing::Point(119, 3);
			this->AddingNewAidPageChoseCaseComboBox->Name = L"AddingNewAidPageChoseCaseComboBox";
			this->AddingNewAidPageChoseCaseComboBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->AddingNewAidPageChoseCaseComboBox->Size = System::Drawing::Size(354, 33);
			this->AddingNewAidPageChoseCaseComboBox->TabIndex = 1;
			this->AddingNewAidPageChoseCaseComboBox->Text = L"الاسم - الرقم القويم -اللقب";
			// 
			// AddingNewAidPageChoseCaseLabel
			// 
			this->AddingNewAidPageChoseCaseLabel->AutoSize = true;
			this->AddingNewAidPageChoseCaseLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->AddingNewAidPageChoseCaseLabel->Location = System::Drawing::Point(479, 6);
			this->AddingNewAidPageChoseCaseLabel->Name = L"AddingNewAidPageChoseCaseLabel";
			this->AddingNewAidPageChoseCaseLabel->Size = System::Drawing::Size(118, 25);
			this->AddingNewAidPageChoseCaseLabel->TabIndex = 0;
			this->AddingNewAidPageChoseCaseLabel->Text = L"اختيار الحالة ";
			// 
			// AddNewAid
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 492);
			this->Controls->Add(this->AddingNewAidPageContolPanel);
			this->Controls->Add(this->AddingNewAidPageCancelButton);
			this->Controls->Add(this->AddingNewAidPageSaveButton);
			this->Controls->Add(this->AddingNewAidPageCleanButton);
			this->Controls->Add(this->AddingNewAidPageTitlePanal);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddNewAid";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddNewAid";
			this->Load += gcnew System::EventHandler(this, &AddNewAid::AddNewAid_Load);
			this->AddingNewAidPageTitlePanal->ResumeLayout(false);
			this->AddingNewAidPageTitlePanal->PerformLayout();
			this->AddingNewAidPageContolPanel->ResumeLayout(false);
			this->AddingNewAidPageContolPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AddingNewAidPageAidTypeAmountNumericUpDown))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void AddNewAid_Load(System::Object^ sender, System::EventArgs^ e) {
	List<Cases^>^ allCases = Connection::GetAllCasesIsActive();
	this->AddingNewAidPageChoseCaseComboBox->Items->Clear();

	for each (Cases ^ c in allCases) {
		String^ fullName = c->FName +" " + c->LName + " - " + c->NationalID + " - " + c->NickName;
		this->AddingNewAidPageChoseCaseComboBox->Items->Add(fullName);
	}
}

private: System::Void AddingNewAidPageAidTypeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddingNewAidPageCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddingNewAidPageRepetitionCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// إظهار أو إخفاء حقل نوع التكرار بناءً على حالة CheckBox
	this->AddingNewAidPageAidTypeRepetitionLabel->Visible = this->AddingNewAidPageRepetitionCheckBox->Checked;
	this->AddingNewAidPageAidTypeRepetitionComboBox->Visible = this->AddingNewAidPageRepetitionCheckBox->Checked;
}

private: System::Void AddingNewAidPageSaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1. Validate category selection
	String^ selectedCategory = this->AddingNewAidPageChoseAidCategoryComboBox->Text->Trim();
	if (String::IsNullOrEmpty(selectedCategory)) {
		MessageBox::Show(L"الرجاء اختيار تصنيف المساعدة أولاً.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 2. Validate case selection
	if (this->AddingNewAidPageChoseCaseComboBox->SelectedIndex < 0) {
		MessageBox::Show(L"الرجاء اختيار الحالة أولاً.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 3. Extract CaseID from the selected item
	String^ selectedCaseText = this->AddingNewAidPageChoseCaseComboBox->SelectedItem->ToString();
	array<String^>^ parts = selectedCaseText->Split('-');
	if (parts->Length < 2) {
		MessageBox::Show(L"تنسيق بيانات الحالة غير صحيح.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ nationalID = parts[1]->Trim();
	Nullable<int> caseID = Connection::GetCaseIdByNationalID(nationalID);

	if (!caseID.HasValue) {
		MessageBox::Show(L"تعذر العثور على معرف الحالة.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// 4. Common fields
	String^ aidType = this->AddingNewAidPageAidTypeComboBox->Text->Trim();
	if (String::IsNullOrEmpty(aidType)) {
		MessageBox::Show(L"الرجاء إدخال نوع المساعدة.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ notes = this->AddingNewAidPageNotesRichTextBox->Text->Trim();
	bool isRecurring = this->AddingNewAidPageRepetitionCheckBox->Checked; // 0 أو 1
	String^ frequencyLong = isRecurring ? this->AddingNewAidPageAidTypeRepetitionComboBox->Text->Trim() : "";
	String^ seasonType = this->AddingNewAidPageSeasonTypeComboBox->Text->Trim();
	DateTime now = DateTime::Now;
	bool isActive = true;
	bool isOneTimeConfirmed = false;
	Nullable<int> receivedCount = isRecurring ? 0 : Nullable<int>(); // 0 إذا كان متكرراً، وإلا Null
	Nullable<DateTime> receivedDate;
	Nullable<DateTime> nextDueDate;
	DateTime registrationDate = this->AddingNewAidPageDeliveryDateDateTimePicker->Value;

	try {
		if (selectedCategory->Contains(L"مالية")) {
			// Financial Aid
			Nullable<Decimal> amount = safe_cast<Decimal>(this->AddingNewAidPageAidTypeAmountNumericUpDown->Value);
			if (!amount.HasValue || amount.Value <= 0) {
				MessageBox::Show(L"الرجاء إدخال قيمة صحيحة للمساعدة المالية.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			FinancialAid^ aid = gcnew FinancialAid(
				caseID,
				aidType,
				amount,
				frequencyLong,
				isRecurring,
				receivedCount,
				seasonType,
				isOneTimeConfirmed,
				registrationDate,
				receivedDate,
				nextDueDate,
				notes,
				isActive,
				now,
				now
			);

			Connection::AddFinancialAid(aid);
			MessageBox::Show(L"تمت إضافة المساعدة المالية بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (selectedCategory->Contains(L"عينية")) {
			// In-Kind Aid
			System::Collections::Generic::List<String^>^ contentList = gcnew System::Collections::Generic::List<String^>();
			for each (Object ^ item in this->AddingNewAidPageAidTypeAidContentCheckedListBox->CheckedItems) {
				contentList->Add(item->ToString());
			}

			if (contentList->Count == 0) {
				MessageBox::Show(L"الرجاء اختيار محتوى المساعدة العينية.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ aidContent = String::Join(L", ", contentList);

			InKindAid^ aid = gcnew InKindAid(
				caseID,
				aidType,
				aidContent,
				frequencyLong,
				isRecurring,
				receivedCount,
				seasonType,
				isOneTimeConfirmed,
				registrationDate,
				receivedDate,
				nextDueDate,
				notes,
				isActive,
				now,
				now
			);

			Connection::AddInKindAid(aid);
			MessageBox::Show(L"تمت إضافة المساعدة العينية بنجاح.", L"نجاح", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(L"نوع المساعدة غير معروف.", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(L"حدث خطأ أثناء الحفظ: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void AddingNewAidPageCleanButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddingNewAidPageChoseAidCategoryLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddingNewAidPageChoseAidCategoryComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	if (AddingNewAidPageChoseAidCategoryComboBox->SelectedItem != nullptr)
	{
		String^ selectedCategory = AddingNewAidPageChoseAidCategoryComboBox->SelectedItem->ToString();
		
		if (selectedCategory->Contains(L"مساعدة مالية"))
		{
			ShowFinancialAidFields();
		}
		else if (selectedCategory->Contains(L"مساعدة عينية"))
		{
			ShowInKindAidFields();
		}
	}
}

	   ////Functions 
private: System::Void ShowFinancialAidFields()
	   {
		   HideAllFields();

		   AddingNewAidPageAidTypeLabel->Visible = true;
		   AddingNewAidPageAidTypeComboBox->Visible = true;
		   AddingNewAidPageAidTypeAmountLabel->Visible = true;
		   AddingNewAidPageAidTypeAmountNumericUpDown->Visible = true;

		   // تعبئة أنواع المساعدة المالية
		   AddingNewAidPageAidTypeComboBox->Items->Clear();
		   AddingNewAidPageAidTypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
			   L"مساعدة نقدية", L"سداد دين", L"مساعدة علاجية"
		   });
	   }

	   // دالة لعرض حقول المساعدة العينية
private: System::Void ShowInKindAidFields()
	   {
		   HideAllFields();

		   AddingNewAidPageAidTypeLabel->Visible = true;
		   AddingNewAidPageAidTypeComboBox->Visible = true;
		   AddingNewAidPageAidTypeAidContentLabel->Visible = true;
		   AddingNewAidPageAidTypeAidContentCheckedListBox->Visible = true;
		   AddingNewAidPageSeasonTypeLabel->Visible = true;
		   AddingNewAidPageSeasonTypeComboBox->Visible = true;

		   // تعبئة أنواع المساعدة العينية
		   AddingNewAidPageAidTypeComboBox->Items->Clear();
		   AddingNewAidPageAidTypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
			   L"سلة غذائية", L"ملابس", L"أثاث منزل"
		   });
	   }
private: System::Void CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->AddingNewAidPageRepetitionCheckBox->CheckedChanged += gcnew System::EventHandler(this, &AddNewAid::AddingNewAidPageRepetitionCheckBox_CheckedChanged);
}
};
}
