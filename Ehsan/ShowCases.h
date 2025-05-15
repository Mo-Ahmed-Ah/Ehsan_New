#pragma once
#include "Cases.h"
#include "Connection.h"
#include "CaseProfile.h"

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for ShowCases
	/// </summary>
	public ref class ShowCases : public System::Windows::Forms::Form
	{
		List<Cases^>^ AllCases;
	public:
		ShowCases(void)
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
		~ShowCases()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ShowCasesTitleLabel;
	protected:
	private: System::Windows::Forms::Panel^ HomeTitlePanal;
	private: System::Windows::Forms::Panel^ ShowCasesPagePanel;
	private: System::Windows::Forms::Panel^ ShowCasesPageCasePanel;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseNameLabel;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseNameValueLabel;
	private: System::Windows::Forms::Button^ ShowCasesPageCaseProfileButton;
	private: System::Windows::Forms::Button^ ShowCasesPageCaseDeleteButton;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseNaturalIdLabel;

	private: System::Windows::Forms::Label^ ShowCasesPageNaturalIdValueLabel;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseNickNameValueLabel;

	private: System::Windows::Forms::Label^ ShowCasesPageCaseNickNameLabel;
	private: System::Windows::Forms::Label^ ShowCasesPageCasePhoneNumberValueLabel;

	private: System::Windows::Forms::Label^ ShowCasesPageCasePhoneNumberLabel;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseIsActiveValueLabel;
	private: System::Windows::Forms::Label^ ShowCasesPageCaseIsActiveLabel;

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
			this->ShowCasesTitleLabel = (gcnew System::Windows::Forms::Label());
			this->HomeTitlePanal = (gcnew System::Windows::Forms::Panel());
			this->ShowCasesPagePanel = (gcnew System::Windows::Forms::Panel());
			this->ShowCasesPageCasePanel = (gcnew System::Windows::Forms::Panel());
			this->ShowCasesPageCaseNameLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseNaturalIdLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseDeleteButton = (gcnew System::Windows::Forms::Button());
			this->ShowCasesPageCaseProfileButton = (gcnew System::Windows::Forms::Button());
			this->ShowCasesPageCaseNameValueLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageNaturalIdValueLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseNickNameValueLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseNickNameLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCasePhoneNumberValueLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCasePhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseIsActiveValueLabel = (gcnew System::Windows::Forms::Label());
			this->ShowCasesPageCaseIsActiveLabel = (gcnew System::Windows::Forms::Label());
			this->HomeTitlePanal->SuspendLayout();
			this->ShowCasesPagePanel->SuspendLayout();
			this->ShowCasesPageCasePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ShowCasesTitleLabel
			// 
			this->ShowCasesTitleLabel->AutoSize = true;
			this->ShowCasesTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ShowCasesTitleLabel->Location = System::Drawing::Point(269, 9);
			this->ShowCasesTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ShowCasesTitleLabel->Name = L"ShowCasesTitleLabel";
			this->ShowCasesTitleLabel->Size = System::Drawing::Size(228, 33);
			this->ShowCasesTitleLabel->TabIndex = 0;
			this->ShowCasesTitleLabel->Text = L"عرض جميع الحالات";
			// 
			// HomeTitlePanal
			// 
			this->HomeTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->HomeTitlePanal->Controls->Add(this->ShowCasesTitleLabel);
			this->HomeTitlePanal->Location = System::Drawing::Point(2, 1);
			this->HomeTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->HomeTitlePanal->Name = L"HomeTitlePanal";
			this->HomeTitlePanal->Size = System::Drawing::Size(763, 49);
			this->HomeTitlePanal->TabIndex = 3;
			// 
			// ShowCasesPagePanel
			// 
			this->ShowCasesPagePanel->AutoScroll = true;
			this->ShowCasesPagePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ShowCasesPagePanel->Location = System::Drawing::Point(12, 56);
			this->ShowCasesPagePanel->Name = L"ShowCasesPagePanel";
			this->ShowCasesPagePanel->Size = System::Drawing::Size(742, 513);
			this->ShowCasesPagePanel->TabIndex = 4;
			// 
			// ShowCasesPageCasePanel
			// 
			this->ShowCasesPageCasePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseIsActiveValueLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseIsActiveLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCasePhoneNumberValueLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCasePhoneNumberLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseNickNameValueLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseNickNameLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageNaturalIdValueLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseNameValueLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseProfileButton);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseDeleteButton);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseNaturalIdLabel);
			this->ShowCasesPageCasePanel->Controls->Add(this->ShowCasesPageCaseNameLabel);
			this->ShowCasesPageCasePanel->Location = System::Drawing::Point(4, 3);
			this->ShowCasesPageCasePanel->Name = L"ShowCasesPageCasePanel";
			this->ShowCasesPageCasePanel->Size = System::Drawing::Size(731, 60);
			this->ShowCasesPageCasePanel->TabIndex = 0;
			// 
			// ShowCasesPageCaseNameLabel
			// 
			this->ShowCasesPageCaseNameLabel->AutoSize = true;
			this->ShowCasesPageCaseNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseNameLabel->Location = System::Drawing::Point(678, 6);
			this->ShowCasesPageCaseNameLabel->Name = L"ShowCasesPageCaseNameLabel";
			this->ShowCasesPageCaseNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseNameLabel->Size = System::Drawing::Size(50, 24);
			this->ShowCasesPageCaseNameLabel->TabIndex = 0;
			this->ShowCasesPageCaseNameLabel->Text = L"الأسم :";
			// 
			// ShowCasesPageCaseNaturalIdLabel
			// 
			this->ShowCasesPageCaseNaturalIdLabel->AutoSize = true;
			this->ShowCasesPageCaseNaturalIdLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseNaturalIdLabel->Location = System::Drawing::Point(628, 30);
			this->ShowCasesPageCaseNaturalIdLabel->Name = L"ShowCasesPageCaseNaturalIdLabel";
			this->ShowCasesPageCaseNaturalIdLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseNaturalIdLabel->Size = System::Drawing::Size(97, 24);
			this->ShowCasesPageCaseNaturalIdLabel->TabIndex = 1;
			this->ShowCasesPageCaseNaturalIdLabel->Text = L"الرقم القومي : ";
			// 
			// ShowCasesPageCaseDeleteButton
			// 
			this->ShowCasesPageCaseDeleteButton->BackColor = System::Drawing::Color::Red;
			this->ShowCasesPageCaseDeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseDeleteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ShowCasesPageCaseDeleteButton->Location = System::Drawing::Point(3, 15);
			this->ShowCasesPageCaseDeleteButton->Name = L"ShowCasesPageCaseDeleteButton";
			this->ShowCasesPageCaseDeleteButton->Size = System::Drawing::Size(78, 37);
			this->ShowCasesPageCaseDeleteButton->TabIndex = 2;
			this->ShowCasesPageCaseDeleteButton->Text = L"حذف";
			this->ShowCasesPageCaseDeleteButton->UseVisualStyleBackColor = false;
			this->ShowCasesPageCaseDeleteButton->Click += gcnew System::EventHandler(this, &ShowCases::DeleteButton_Click);
			// 
			// ShowCasesPageCaseProfileButton
			// 
			this->ShowCasesPageCaseProfileButton->BackColor = System::Drawing::Color::Red;
			this->ShowCasesPageCaseProfileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseProfileButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ShowCasesPageCaseProfileButton->Location = System::Drawing::Point(87, 15);
			this->ShowCasesPageCaseProfileButton->Name = L"ShowCasesPageCaseProfileButton";
			this->ShowCasesPageCaseProfileButton->Size = System::Drawing::Size(115, 37);
			this->ShowCasesPageCaseProfileButton->TabIndex = 3;
			this->ShowCasesPageCaseProfileButton->Text = L"الملف الشخصي";
			this->ShowCasesPageCaseProfileButton->UseVisualStyleBackColor = false;
			// Event handler wired up dynamically below
			// 
			// ShowCasesPageCaseNameValueLabel
			// 
			this->ShowCasesPageCaseNameValueLabel->AutoSize = true;
			this->ShowCasesPageCaseNameValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseNameValueLabel->Location = System::Drawing::Point(568, 6);
			this->ShowCasesPageCaseNameValueLabel->Name = L"ShowCasesPageCaseNameValueLabel";
			this->ShowCasesPageCaseNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseNameValueLabel->Size = System::Drawing::Size(104, 24);
			this->ShowCasesPageCaseNameValueLabel->TabIndex = 4;
			this->ShowCasesPageCaseNameValueLabel->Text = L"أحمد محمد أحمد";
			// 
			// ShowCasesPageNaturalIdValueLabel
			// 
			this->ShowCasesPageNaturalIdValueLabel->AutoSize = true;
			this->ShowCasesPageNaturalIdValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageNaturalIdValueLabel->Location = System::Drawing::Point(487, 30);
			this->ShowCasesPageNaturalIdValueLabel->Name = L"ShowCasesPageNaturalIdValueLabel";
			this->ShowCasesPageNaturalIdValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageNaturalIdValueLabel->Size = System::Drawing::Size(150, 24);
			this->ShowCasesPageNaturalIdValueLabel->TabIndex = 5;
			this->ShowCasesPageNaturalIdValueLabel->Text = L"01234567891234";
			// 
			// ShowCasesPageCaseNickNameValueLabel
			// 
			this->ShowCasesPageCaseNickNameValueLabel->AutoSize = true;
			this->ShowCasesPageCaseNickNameValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseNickNameValueLabel->Location = System::Drawing::Point(430, 6);
			this->ShowCasesPageCaseNickNameValueLabel->Name = L"ShowCasesPageCaseNickNameValueLabel";
			this->ShowCasesPageCaseNickNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseNickNameValueLabel->Size = System::Drawing::Size(61, 24);
			this->ShowCasesPageCaseNickNameValueLabel->TabIndex = 7;
			this->ShowCasesPageCaseNickNameValueLabel->Text = L"ابو علاء";
			// 
			// ShowCasesPageCaseNickNameLabel
			// 
			this->ShowCasesPageCaseNickNameLabel->AutoSize = true;
			this->ShowCasesPageCaseNickNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseNickNameLabel->Location = System::Drawing::Point(487, 6);
			this->ShowCasesPageCaseNickNameLabel->Name = L"ShowCasesPageCaseNickNameLabel";
			this->ShowCasesPageCaseNickNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseNickNameLabel->Size = System::Drawing::Size(56, 24);
			this->ShowCasesPageCaseNickNameLabel->TabIndex = 6;
			this->ShowCasesPageCaseNickNameLabel->Text = L"اللقب : ";
			// 
			// ShowCasesPageCasePhoneNumberValueLabel
			// 
			this->ShowCasesPageCasePhoneNumberValueLabel->AutoSize = true;
			this->ShowCasesPageCasePhoneNumberValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCasePhoneNumberValueLabel->Location = System::Drawing::Point(273, 30);
			this->ShowCasesPageCasePhoneNumberValueLabel->Name = L"ShowCasesPageCasePhoneNumberValueLabel";
			this->ShowCasesPageCasePhoneNumberValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCasePhoneNumberValueLabel->Size = System::Drawing::Size(120, 24);
			this->ShowCasesPageCasePhoneNumberValueLabel->TabIndex = 9;
			this->ShowCasesPageCasePhoneNumberValueLabel->Text = L"01033833292";
			// 
			// ShowCasesPageCasePhoneNumberLabel
			// 
			this->ShowCasesPageCasePhoneNumberLabel->AutoSize = true;
			this->ShowCasesPageCasePhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCasePhoneNumberLabel->Location = System::Drawing::Point(391, 30);
			this->ShowCasesPageCasePhoneNumberLabel->Name = L"ShowCasesPageCasePhoneNumberLabel";
			this->ShowCasesPageCasePhoneNumberLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCasePhoneNumberLabel->Size = System::Drawing::Size(85, 24);
			this->ShowCasesPageCasePhoneNumberLabel->TabIndex = 8;
			this->ShowCasesPageCasePhoneNumberLabel->Text = L"رقم الهاتف : ";
			// 
			// ShowCasesPageCaseIsActiveValueLabel
			// 
			this->ShowCasesPageCaseIsActiveValueLabel->AutoSize = true;
			this->ShowCasesPageCaseIsActiveValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseIsActiveValueLabel->Location = System::Drawing::Point(295, 6);
			this->ShowCasesPageCaseIsActiveValueLabel->Name = L"ShowCasesPageCaseIsActiveValueLabel";
			this->ShowCasesPageCaseIsActiveValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseIsActiveValueLabel->Size = System::Drawing::Size(36, 24);
			this->ShowCasesPageCaseIsActiveValueLabel->TabIndex = 11;
			this->ShowCasesPageCaseIsActiveValueLabel->Text = L"فعال";
			// 
			// ShowCasesPageCaseIsActiveLabel
			// 
			this->ShowCasesPageCaseIsActiveLabel->AutoSize = true;
			this->ShowCasesPageCaseIsActiveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowCasesPageCaseIsActiveLabel->Location = System::Drawing::Point(337, 6);
			this->ShowCasesPageCaseIsActiveLabel->Name = L"ShowCasesPageCaseIsActiveLabel";
			this->ShowCasesPageCaseIsActiveLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ShowCasesPageCaseIsActiveLabel->Size = System::Drawing::Size(53, 24);
			this->ShowCasesPageCaseIsActiveLabel->TabIndex = 10;
			this->ShowCasesPageCaseIsActiveLabel->Text = L"الحالة :";
			// 
			// ShowCases
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 620);
			this->Controls->Add(this->ShowCasesPagePanel);
			this->Controls->Add(this->HomeTitlePanal);
			this->Name = L"ShowCases";
			this->Text = L"عرض الحالات ";
			this->Load += gcnew System::EventHandler(this, &ShowCases::GetAllCases_Load);
			this->HomeTitlePanal->ResumeLayout(false);
			this->HomeTitlePanal->PerformLayout();
			this->ShowCasesPagePanel->ResumeLayout(false);
			this->ShowCasesPageCasePanel->ResumeLayout(false);
			this->ShowCasesPageCasePanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowCasesPageCaseNickNameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ShowCasesPageCaseNickNameValueLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GetAllCases_Load(System::Object^ sender, System::EventArgs^ e) {
		AllCases = Connection::GetAllCases();
		DisplayAllCases();
	}

	private: void DisplayAllCases() {
		// Clear existing controls
		ShowCasesPagePanel->Controls->Clear();

		int yPos = 10; // Starting Y position for the first case panel

		for each (Cases ^ caseItem in AllCases)
		{
			// Create a new panel for each case
			Panel^ casePanel = gcnew Panel();
			casePanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			casePanel->Size = System::Drawing::Size(731, 60);
			casePanel->Location = System::Drawing::Point(5, yPos);

			// Create and add all controls to the new panel
			Label^ nameLabel = gcnew Label();
			nameLabel->AutoSize = true;
			nameLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			nameLabel->Location = System::Drawing::Point(678, 6);
			nameLabel->Text = L"الأسم :";
			nameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ nameValueLabel = gcnew Label();
			nameValueLabel->AutoSize = true;
			nameValueLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			nameValueLabel->Location = System::Drawing::Point(568, 6);
			nameValueLabel->Text = caseItem->FName + L" " + caseItem->LName;
			nameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ naturalIdLabel = gcnew Label();
			naturalIdLabel->AutoSize = true;
			naturalIdLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			naturalIdLabel->Location = System::Drawing::Point(628, 30);
			naturalIdLabel->Text = L"الرقم القومي : ";
			naturalIdLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ naturalIdValueLabel = gcnew Label();
			naturalIdValueLabel->AutoSize = true;
			naturalIdValueLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			naturalIdValueLabel->Location = System::Drawing::Point(487, 30);
			naturalIdValueLabel->Text = caseItem->NationalID;
			naturalIdValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ nickNameLabel = gcnew Label();
			nickNameLabel->AutoSize = true;
			nickNameLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			nickNameLabel->Location = System::Drawing::Point(487, 6);
			nickNameLabel->Text = L"اللقب : ";
			nickNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ nickNameValueLabel = gcnew Label();
			nickNameValueLabel->AutoSize = true;
			nickNameValueLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			nickNameValueLabel->Location = System::Drawing::Point(430, 6);
			nickNameValueLabel->Text = caseItem->NickName;
			nickNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ phoneLabel = gcnew Label();
			phoneLabel->AutoSize = true;
			phoneLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			phoneLabel->Location = System::Drawing::Point(391, 30);
			phoneLabel->Text = L"رقم الهاتف : ";
			phoneLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ phoneValueLabel = gcnew Label();
			phoneValueLabel->AutoSize = true;
			phoneValueLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			phoneValueLabel->Location = System::Drawing::Point(273, 30);
			phoneValueLabel->Text = caseItem->PhoneNumber;
			phoneValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ statusLabel = gcnew Label();
			statusLabel->AutoSize = true;
			statusLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			statusLabel->Location = System::Drawing::Point(337, 6);
			statusLabel->Text = L"الحالة :";
			statusLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Label^ statusValueLabel = gcnew Label();
			statusValueLabel->AutoSize = true;
			statusValueLabel->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F);
			statusValueLabel->Location = System::Drawing::Point(295, 6);
			statusValueLabel->Text = caseItem->IsActive ? L"فعال" : L"غير فعال";
			statusValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			Button^ profileButton = gcnew Button();
			profileButton->BackColor = System::Drawing::Color::Red;
			profileButton->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12);
			profileButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			profileButton->Location = System::Drawing::Point(87, 15);
			profileButton->Size = System::Drawing::Size(115, 37);
			profileButton->Text = L"الملف الشخصي";
			profileButton->UseVisualStyleBackColor = false;
			profileButton->Tag = caseItem; // store the Cases object in Tag for event handling
			profileButton->Click += gcnew System::EventHandler(this, &ShowCases::ProfileButton_Click);

			Button^ deleteButton = gcnew Button();
			deleteButton->BackColor = System::Drawing::Color::Red;
			deleteButton->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12);
			deleteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			deleteButton->Location = System::Drawing::Point(3, 15);
			deleteButton->Size = System::Drawing::Size(78, 37);
			deleteButton->Text = L"حذف";
			deleteButton->UseVisualStyleBackColor = false;
			deleteButton->Tag = caseItem->ID; // Store case ID for event handling
			deleteButton->Click += gcnew System::EventHandler(this, &ShowCases::DeleteButton_Click);

			// Add all controls to the panel
			casePanel->Controls->Add(nameLabel);
			casePanel->Controls->Add(nameValueLabel);
			casePanel->Controls->Add(naturalIdLabel);
			casePanel->Controls->Add(naturalIdValueLabel);
			casePanel->Controls->Add(nickNameLabel);
			casePanel->Controls->Add(nickNameValueLabel);
			casePanel->Controls->Add(phoneLabel);
			casePanel->Controls->Add(phoneValueLabel);
			casePanel->Controls->Add(statusLabel);
			casePanel->Controls->Add(statusValueLabel);
			casePanel->Controls->Add(profileButton);
			casePanel->Controls->Add(deleteButton);

			// Add the panel to the main container
			ShowCasesPagePanel->Controls->Add(casePanel);

			// Increment Y position for next panel
			yPos += casePanel->Height + 10;
		}
	}

	private: System::Void ProfileButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		Cases^ selectedCase = dynamic_cast<Cases^>(button->Tag);
		Cases^ ThisCase = Connection::GetCaseById(selectedCase->ID);

		CaseProfile^ profileForm = gcnew CaseProfile(ThisCase);
		
		profileForm->ShowDialog();
	}

	private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ deleteButton = safe_cast<Button^>(sender);
		int caseId = safe_cast<int>(deleteButton->Tag);

		// الحصول على اسم الحالة لعرضه في رسالة التأكيد
		String^ caseName = safe_cast<Label^>(deleteButton->Parent->Controls[1])->Text;

		// رسالة تأكيد أوضح
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			String::Format(L"هل أنت متأكد من رغبتك في حذف الحالة '{0}'؟", caseName),
			L"تأكيد الحذف",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning,
			MessageBoxDefaultButton::Button2);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			try
			{
				Connection::DeleteCaseIfNoAid(caseId);
				// إعادة تحميل البيانات
				AllCases = Connection::GetAllCases();
				DisplayAllCases();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(
					L"حدث خطأ أثناء محاولة الحذف:\n " + ex->Message,
					L"خطأ",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	};
}
