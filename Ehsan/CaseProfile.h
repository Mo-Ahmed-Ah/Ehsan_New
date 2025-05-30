﻿#pragma once
#include "Cases.h"
#include "Connection.h"

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CaseProfile
	/// </summary>
	public ref class CaseProfile : public System::Windows::Forms::Form
	{
	private:
		Cases^ currentCase; // تعريف متغير لتخزين كائن من نوع Cases

	public:
		// الكونستركتور الافتراضي
		CaseProfile(void)
		{
			InitializeComponent();

		}

		// كونستركتور جديد يستقبل كائن من نوع Cases
		CaseProfile(Cases^ caseObj)
		{
			currentCase = caseObj;
			InitializeComponent();
			this->CasesProfilePageFristNameValueLabel->Text = currentCase->FName ? currentCase->FName : L"لا يوجد اسم اول";
			this->CasesProfilePageLastNameValueLabel->Text = currentCase->LName ? currentCase->LName : L"لا يوجد اسم اخر";
			this->CasesProfilePageIDValueLabel->Text = currentCase->ID.ToString();
			this->CasesProfilePageNickNameValueLabel->Text = currentCase->NickName ? currentCase->NickName : L"لا يوجد اسم مستعار";
			this->CasesProfilePagePhoneNumberValueLabel->Text = currentCase->PhoneNumber;
			this->CasesProfilePageGenderValueLabel->Text = currentCase->Gender ? L"ذكر" : L"أنثى";
			this->CasesProfilePageBirthDateValueLabel->Text = currentCase->BirthDate.HasValue ? currentCase->BirthDate.Value.ToString("dd/MM/yyyy") : L"غير محدد";
			this->CasesProfilePageAgeValueLabel->Text = currentCase->Age.ToString() + L" سنه";
			this->CasesProfilePageAreaValueLabel->Text = currentCase->Area;
			this->CasesProfilePageStreetValueLabel->Text = currentCase->Street;
			this->CasesProfilePageMaritalStatusValueLabel->Text = currentCase->MaritalStatus;
			this->CasesProfilePageFatherStatusValueLabel->Text = currentCase->FatherStatus ? L"على قيد الحياة" : L"متوفي";
			this->CasesProfilePageMotherStatusValueLabel->Text = currentCase->MotherStatus ? L"على قيد الحياة" : L"متوفية";
			this->CasesProfilePageMaleChildrenValueLabel->Text = currentCase->MaleChildren.ToString();
			this->CasesProfilePageFemaleChildrenValueLabel->Text = currentCase->FemaleChildren.ToString();
			this->CasesProfilePageIsActiveValueLabel->Text = currentCase->IsActive ? L"نشط" : L"غير نشط";
			this->CasesProfilePageUpdatedAtValueLabel->Text = currentCase->UpdateIN.HasValue ? currentCase->UpdateIN.Value.ToString("dd/MM/yyyy") : L"غير محدد";
			this->CasesProfilePageCreatedAtValueLabel->Text = currentCase->CreateIN.HasValue ? currentCase->CreateIN.Value.ToString("dd/MM/yyyy") : L"غير محدد";


			// يمكنك استخدام currentCase هنا مثلاً لتحديث الواجهة بناءً على بيانات الحالة
			// مثال: this->Text = currentCase->Name; // في حال كان هناك خاصية اسم
		}

	protected:
		~CaseProfile()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ CasesProfilePagePanal;
	private: System::Windows::Forms::Label^ CasesProfilePageTitleLabel;
	private: System::Windows::Forms::Panel^ CasesProfilePageInformationPanel;
	private: System::Windows::Forms::Label^ CasesProfilePageFristNameValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageFristNameLabel;



	private: System::Windows::Forms::Label^ CasesProfilePageLastNameValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageLastNameLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageIDValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageIDLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageGenderValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageGenderLabel;
	private: System::Windows::Forms::Label^ CasesProfilePagePhoneNumberValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePagePhoneNumberLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageNickNameValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageNickNameLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageBirthDateValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageBirthDateLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageAreaValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageAreaLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageAgeValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageAgeLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageStreetValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageStreetLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageFatherStatusValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageFatherStatusLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageMaritalStatusValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageMaritalStatusLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageFemaleChildrenValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageFemaleChildrenLabel;



	private: System::Windows::Forms::Label^ CasesProfilePageMaleChildrenValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageMaleChildrenLabel;


	private: System::Windows::Forms::Label^ CasesProfilePageMotherStatusValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageMotherStatusLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageIsActiveValueLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageIsActiveLabel;

	private: System::Windows::Forms::Label^ CasesProfilePageUpdatedAtValueLabel;


	private: System::Windows::Forms::Label^ CasesProfilePageUpdatedAtLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageCreatedAtValueLabel;
	private: System::Windows::Forms::Label^ CasesProfilePageCreatedAtLabel;
private: System::Windows::Forms::Button^ CasesProfilePageChangeStatusButton;

private: System::Windows::Forms::Button^ CasesProfilePageDeleteButton;




	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->CasesProfilePagePanal = (gcnew System::Windows::Forms::Panel());
			   this->CasesProfilePageTitleLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageInformationPanel = (gcnew System::Windows::Forms::Panel());
			   this->CasesProfilePageChangeStatusButton = (gcnew System::Windows::Forms::Button());
			   this->CasesProfilePageDeleteButton = (gcnew System::Windows::Forms::Button());
			   this->CasesProfilePageIsActiveValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageIsActiveLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageUpdatedAtValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageUpdatedAtLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageCreatedAtValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageCreatedAtLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFemaleChildrenValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFemaleChildrenLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMaleChildrenValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMaleChildrenLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMotherStatusValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMotherStatusLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFatherStatusValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFatherStatusLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMaritalStatusValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageMaritalStatusLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageStreetValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageStreetLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageAreaValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageAreaLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageAgeValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageAgeLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageBirthDateValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageBirthDateLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageGenderValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageGenderLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePagePhoneNumberValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePagePhoneNumberLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageNickNameValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageNickNameLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageIDValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageIDLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageLastNameValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageLastNameLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFristNameValueLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePageFristNameLabel = (gcnew System::Windows::Forms::Label());
			   this->CasesProfilePagePanal->SuspendLayout();
			   this->CasesProfilePageInformationPanel->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // CasesProfilePagePanal
			   // 
			   this->CasesProfilePagePanal->BackColor = System::Drawing::SystemColors::Highlight;
			   this->CasesProfilePagePanal->Controls->Add(this->CasesProfilePageTitleLabel);
			   this->CasesProfilePagePanal->Location = System::Drawing::Point(1, 1);
			   this->CasesProfilePagePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			   this->CasesProfilePagePanal->Name = L"CasesProfilePagePanal";
			   this->CasesProfilePagePanal->Size = System::Drawing::Size(1170, 49);
			   this->CasesProfilePagePanal->TabIndex = 4;
			   // 
			   // CasesProfilePageTitleLabel
			   // 
			   this->CasesProfilePageTitleLabel->AutoSize = true;
			   this->CasesProfilePageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->CasesProfilePageTitleLabel->Location = System::Drawing::Point(455, 9);
			   this->CasesProfilePageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->CasesProfilePageTitleLabel->Name = L"CasesProfilePageTitleLabel";
			   this->CasesProfilePageTitleLabel->Size = System::Drawing::Size(262, 33);
			   this->CasesProfilePageTitleLabel->TabIndex = 0;
			   this->CasesProfilePageTitleLabel->Text = L"تفاصيل الملف الشخصي";
			   // 
			   // CasesProfilePageInformationPanel
			   // 
			   this->CasesProfilePageInformationPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageChangeStatusButton);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageDeleteButton);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageIsActiveValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageIsActiveLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageUpdatedAtValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageUpdatedAtLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageCreatedAtValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageCreatedAtLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFemaleChildrenValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFemaleChildrenLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMaleChildrenValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMaleChildrenLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMotherStatusValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMotherStatusLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFatherStatusValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFatherStatusLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMaritalStatusValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageMaritalStatusLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageStreetValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageStreetLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageAreaValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageAreaLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageAgeValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageAgeLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageBirthDateValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageBirthDateLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageGenderValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageGenderLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePagePhoneNumberValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePagePhoneNumberLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageNickNameValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageNickNameLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageIDValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageIDLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageLastNameValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageLastNameLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFristNameValueLabel);
			   this->CasesProfilePageInformationPanel->Controls->Add(this->CasesProfilePageFristNameLabel);
			   this->CasesProfilePageInformationPanel->Location = System::Drawing::Point(927, 58);
			   this->CasesProfilePageInformationPanel->Name = L"CasesProfilePageInformationPanel";
			   this->CasesProfilePageInformationPanel->Size = System::Drawing::Size(244, 712);
			   this->CasesProfilePageInformationPanel->TabIndex = 5;
			   // 
			   // CasesProfilePageChangeStatusButton
			   // 
			   this->CasesProfilePageChangeStatusButton->BackColor = System::Drawing::Color::Olive;
			   this->CasesProfilePageChangeStatusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageChangeStatusButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->CasesProfilePageChangeStatusButton->Location = System::Drawing::Point(6, 661);
			   this->CasesProfilePageChangeStatusButton->Name = L"CasesProfilePageChangeStatusButton";
			   this->CasesProfilePageChangeStatusButton->Size = System::Drawing::Size(107, 34);
			   this->CasesProfilePageChangeStatusButton->TabIndex = 38;
			   this->CasesProfilePageChangeStatusButton->Text = L"إلغاء التفعيل";
			   this->CasesProfilePageChangeStatusButton->UseVisualStyleBackColor = false;
			   this->CasesProfilePageChangeStatusButton->Click += gcnew System::EventHandler(this, &CaseProfile::Deactivate_Status_Click);
			   // 
			   // CasesProfilePageDeleteButton
			   // 
			   this->CasesProfilePageDeleteButton->BackColor = System::Drawing::Color::Red;
			   this->CasesProfilePageDeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageDeleteButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->CasesProfilePageDeleteButton->Location = System::Drawing::Point(140, 661);
			   this->CasesProfilePageDeleteButton->Name = L"CasesProfilePageDeleteButton";
			   this->CasesProfilePageDeleteButton->Size = System::Drawing::Size(97, 34);
			   this->CasesProfilePageDeleteButton->TabIndex = 37;
			   this->CasesProfilePageDeleteButton->Text = L"حذف";
			   this->CasesProfilePageDeleteButton->UseVisualStyleBackColor = false;
			   this->CasesProfilePageDeleteButton->Click += gcnew System::EventHandler(this, &CaseProfile::DeleteButton_Click);
			   // 
			   // CasesProfilePageIsActiveValueLabel
			   // 
			   this->CasesProfilePageIsActiveValueLabel->AutoSize = true;
			   this->CasesProfilePageIsActiveValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageIsActiveValueLabel->Location = System::Drawing::Point(83, 533);
			   this->CasesProfilePageIsActiveValueLabel->Name = L"CasesProfilePageIsActiveValueLabel";
			   this->CasesProfilePageIsActiveValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageIsActiveValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageIsActiveValueLabel->TabIndex = 35;
			   // 
			   // CasesProfilePageIsActiveLabel
			   // 
			   this->CasesProfilePageIsActiveLabel->AutoSize = true;
			   this->CasesProfilePageIsActiveLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageIsActiveLabel->Location = System::Drawing::Point(180, 535);
			   this->CasesProfilePageIsActiveLabel->Name = L"CasesProfilePageIsActiveLabel";
			   this->CasesProfilePageIsActiveLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageIsActiveLabel->Size = System::Drawing::Size(57, 18);
			   this->CasesProfilePageIsActiveLabel->TabIndex = 34;
			   this->CasesProfilePageIsActiveLabel->Text = L"الحالة : ";
			   // 
			   // CasesProfilePageUpdatedAtValueLabel
			   // 
			   this->CasesProfilePageUpdatedAtValueLabel->AutoSize = true;
			   this->CasesProfilePageUpdatedAtValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageUpdatedAtValueLabel->Location = System::Drawing::Point(78, 501);
			   this->CasesProfilePageUpdatedAtValueLabel->Name = L"CasesProfilePageUpdatedAtValueLabel";
			   this->CasesProfilePageUpdatedAtValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageUpdatedAtValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageUpdatedAtValueLabel->TabIndex = 33;
			   // 
			   // CasesProfilePageUpdatedAtLabel
			   // 
			   this->CasesProfilePageUpdatedAtLabel->AutoSize = true;
			   this->CasesProfilePageUpdatedAtLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageUpdatedAtLabel->Location = System::Drawing::Point(150, 503);
			   this->CasesProfilePageUpdatedAtLabel->Name = L"CasesProfilePageUpdatedAtLabel";
			   this->CasesProfilePageUpdatedAtLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageUpdatedAtLabel->Size = System::Drawing::Size(87, 18);
			   this->CasesProfilePageUpdatedAtLabel->TabIndex = 32;
			   this->CasesProfilePageUpdatedAtLabel->Text = L"أخر تحديث : ";
			   // 
			   // CasesProfilePageCreatedAtValueLabel
			   // 
			   this->CasesProfilePageCreatedAtValueLabel->AutoSize = true;
			   this->CasesProfilePageCreatedAtValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageCreatedAtValueLabel->Location = System::Drawing::Point(25, 470);
			   this->CasesProfilePageCreatedAtValueLabel->Name = L"CasesProfilePageCreatedAtValueLabel";
			   this->CasesProfilePageCreatedAtValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageCreatedAtValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageCreatedAtValueLabel->TabIndex = 31;
			   // 
			   // CasesProfilePageCreatedAtLabel
			   // 
			   this->CasesProfilePageCreatedAtLabel->AutoSize = true;
			   this->CasesProfilePageCreatedAtLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageCreatedAtLabel->Location = System::Drawing::Point(147, 471);
			   this->CasesProfilePageCreatedAtLabel->Name = L"CasesProfilePageCreatedAtLabel";
			   this->CasesProfilePageCreatedAtLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageCreatedAtLabel->Size = System::Drawing::Size(90, 18);
			   this->CasesProfilePageCreatedAtLabel->TabIndex = 30;
			   this->CasesProfilePageCreatedAtLabel->Text = L"التسجيل في : ";
			   // 
			   // CasesProfilePageFemaleChildrenValueLabel
			   // 
			   this->CasesProfilePageFemaleChildrenValueLabel->AutoSize = true;
			   this->CasesProfilePageFemaleChildrenValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFemaleChildrenValueLabel->Location = System::Drawing::Point(68, 445);
			   this->CasesProfilePageFemaleChildrenValueLabel->Name = L"CasesProfilePageFemaleChildrenValueLabel";
			   this->CasesProfilePageFemaleChildrenValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFemaleChildrenValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageFemaleChildrenValueLabel->TabIndex = 29;
			   // 
			   // CasesProfilePageFemaleChildrenLabel
			   // 
			   this->CasesProfilePageFemaleChildrenLabel->AutoSize = true;
			   this->CasesProfilePageFemaleChildrenLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFemaleChildrenLabel->Location = System::Drawing::Point(178, 445);
			   this->CasesProfilePageFemaleChildrenLabel->Name = L"CasesProfilePageFemaleChildrenLabel";
			   this->CasesProfilePageFemaleChildrenLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFemaleChildrenLabel->Size = System::Drawing::Size(59, 18);
			   this->CasesProfilePageFemaleChildrenLabel->TabIndex = 28;
			   this->CasesProfilePageFemaleChildrenLabel->Text = L"الاناث : ";
			   // 
			   // CasesProfilePageMaleChildrenValueLabel
			   // 
			   this->CasesProfilePageMaleChildrenValueLabel->AutoSize = true;
			   this->CasesProfilePageMaleChildrenValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMaleChildrenValueLabel->Location = System::Drawing::Point(96, 425);
			   this->CasesProfilePageMaleChildrenValueLabel->Name = L"CasesProfilePageMaleChildrenValueLabel";
			   this->CasesProfilePageMaleChildrenValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMaleChildrenValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageMaleChildrenValueLabel->TabIndex = 27;
			   // 
			   // CasesProfilePageMaleChildrenLabel
			   // 
			   this->CasesProfilePageMaleChildrenLabel->AutoSize = true;
			   this->CasesProfilePageMaleChildrenLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMaleChildrenLabel->Location = System::Drawing::Point(177, 425);
			   this->CasesProfilePageMaleChildrenLabel->Name = L"CasesProfilePageMaleChildrenLabel";
			   this->CasesProfilePageMaleChildrenLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMaleChildrenLabel->Size = System::Drawing::Size(60, 18);
			   this->CasesProfilePageMaleChildrenLabel->TabIndex = 26;
			   this->CasesProfilePageMaleChildrenLabel->Text = L"الذكور : ";
			   this->CasesProfilePageMaleChildrenLabel->Click += gcnew System::EventHandler(this, &CaseProfile::label2_Click);
			   // 
			   // CasesProfilePageMotherStatusValueLabel
			   // 
			   this->CasesProfilePageMotherStatusValueLabel->AutoSize = true;
			   this->CasesProfilePageMotherStatusValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMotherStatusValueLabel->Location = System::Drawing::Point(36, 397);
			   this->CasesProfilePageMotherStatusValueLabel->Name = L"CasesProfilePageMotherStatusValueLabel";
			   this->CasesProfilePageMotherStatusValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMotherStatusValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageMotherStatusValueLabel->TabIndex = 25;
			   // 
			   // CasesProfilePageMotherStatusLabel
			   // 
			   this->CasesProfilePageMotherStatusLabel->AutoSize = true;
			   this->CasesProfilePageMotherStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMotherStatusLabel->Location = System::Drawing::Point(194, 397);
			   this->CasesProfilePageMotherStatusLabel->Name = L"CasesProfilePageMotherStatusLabel";
			   this->CasesProfilePageMotherStatusLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMotherStatusLabel->Size = System::Drawing::Size(43, 18);
			   this->CasesProfilePageMotherStatusLabel->TabIndex = 24;
			   this->CasesProfilePageMotherStatusLabel->Text = L"الأم : ";
			   // 
			   // CasesProfilePageFatherStatusValueLabel
			   // 
			   this->CasesProfilePageFatherStatusValueLabel->AutoSize = true;
			   this->CasesProfilePageFatherStatusValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFatherStatusValueLabel->Location = System::Drawing::Point(36, 366);
			   this->CasesProfilePageFatherStatusValueLabel->Name = L"CasesProfilePageFatherStatusValueLabel";
			   this->CasesProfilePageFatherStatusValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFatherStatusValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageFatherStatusValueLabel->TabIndex = 23;
			   // 
			   // CasesProfilePageFatherStatusLabel
			   // 
			   this->CasesProfilePageFatherStatusLabel->AutoSize = true;
			   this->CasesProfilePageFatherStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFatherStatusLabel->Location = System::Drawing::Point(188, 366);
			   this->CasesProfilePageFatherStatusLabel->Name = L"CasesProfilePageFatherStatusLabel";
			   this->CasesProfilePageFatherStatusLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFatherStatusLabel->Size = System::Drawing::Size(49, 18);
			   this->CasesProfilePageFatherStatusLabel->TabIndex = 22;
			   this->CasesProfilePageFatherStatusLabel->Text = L"الاب : ";
			   // 
			   // CasesProfilePageMaritalStatusValueLabel
			   // 
			   this->CasesProfilePageMaritalStatusValueLabel->AutoSize = true;
			   this->CasesProfilePageMaritalStatusValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMaritalStatusValueLabel->Location = System::Drawing::Point(77, 336);
			   this->CasesProfilePageMaritalStatusValueLabel->Name = L"CasesProfilePageMaritalStatusValueLabel";
			   this->CasesProfilePageMaritalStatusValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMaritalStatusValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageMaritalStatusValueLabel->TabIndex = 21;
			   // 
			   // CasesProfilePageMaritalStatusLabel
			   // 
			   this->CasesProfilePageMaritalStatusLabel->AutoSize = true;
			   this->CasesProfilePageMaritalStatusLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageMaritalStatusLabel->Location = System::Drawing::Point(114, 337);
			   this->CasesProfilePageMaritalStatusLabel->Name = L"CasesProfilePageMaritalStatusLabel";
			   this->CasesProfilePageMaritalStatusLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageMaritalStatusLabel->Size = System::Drawing::Size(123, 18);
			   this->CasesProfilePageMaritalStatusLabel->TabIndex = 20;
			   this->CasesProfilePageMaritalStatusLabel->Text = L"الحالة الاجتماعية : ";
			   // 
			   // CasesProfilePageStreetValueLabel
			   // 
			   this->CasesProfilePageStreetValueLabel->AutoSize = true;
			   this->CasesProfilePageStreetValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageStreetValueLabel->Location = System::Drawing::Point(7, 299);
			   this->CasesProfilePageStreetValueLabel->Name = L"CasesProfilePageStreetValueLabel";
			   this->CasesProfilePageStreetValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageStreetValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageStreetValueLabel->TabIndex = 19;
			   // 
			   // CasesProfilePageStreetLabel
			   // 
			   this->CasesProfilePageStreetLabel->AutoSize = true;
			   this->CasesProfilePageStreetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageStreetLabel->Location = System::Drawing::Point(173, 299);
			   this->CasesProfilePageStreetLabel->Name = L"CasesProfilePageStreetLabel";
			   this->CasesProfilePageStreetLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageStreetLabel->Size = System::Drawing::Size(64, 18);
			   this->CasesProfilePageStreetLabel->TabIndex = 18;
			   this->CasesProfilePageStreetLabel->Text = L"الشارع : ";
			   // 
			   // CasesProfilePageAreaValueLabel
			   // 
			   this->CasesProfilePageAreaValueLabel->AutoSize = true;
			   this->CasesProfilePageAreaValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageAreaValueLabel->Location = System::Drawing::Point(49, 271);
			   this->CasesProfilePageAreaValueLabel->Name = L"CasesProfilePageAreaValueLabel";
			   this->CasesProfilePageAreaValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageAreaValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageAreaValueLabel->TabIndex = 17;
			   // 
			   // CasesProfilePageAreaLabel
			   // 
			   this->CasesProfilePageAreaLabel->AutoSize = true;
			   this->CasesProfilePageAreaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageAreaLabel->Location = System::Drawing::Point(171, 271);
			   this->CasesProfilePageAreaLabel->Name = L"CasesProfilePageAreaLabel";
			   this->CasesProfilePageAreaLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageAreaLabel->Size = System::Drawing::Size(66, 18);
			   this->CasesProfilePageAreaLabel->TabIndex = 16;
			   this->CasesProfilePageAreaLabel->Text = L"المنطقة : ";
			   // 
			   // CasesProfilePageAgeValueLabel
			   // 
			   this->CasesProfilePageAgeValueLabel->AutoSize = true;
			   this->CasesProfilePageAgeValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageAgeValueLabel->Location = System::Drawing::Point(63, 239);
			   this->CasesProfilePageAgeValueLabel->Name = L"CasesProfilePageAgeValueLabel";
			   this->CasesProfilePageAgeValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageAgeValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageAgeValueLabel->TabIndex = 15;
			   // 
			   // CasesProfilePageAgeLabel
			   // 
			   this->CasesProfilePageAgeLabel->AutoSize = true;
			   this->CasesProfilePageAgeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageAgeLabel->Location = System::Drawing::Point(183, 239);
			   this->CasesProfilePageAgeLabel->Name = L"CasesProfilePageAgeLabel";
			   this->CasesProfilePageAgeLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageAgeLabel->Size = System::Drawing::Size(54, 18);
			   this->CasesProfilePageAgeLabel->TabIndex = 14;
			   this->CasesProfilePageAgeLabel->Text = L"العمر : ";
			   // 
			   // CasesProfilePageBirthDateValueLabel
			   // 
			   this->CasesProfilePageBirthDateValueLabel->AutoSize = true;
			   this->CasesProfilePageBirthDateValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageBirthDateValueLabel->Location = System::Drawing::Point(25, 204);
			   this->CasesProfilePageBirthDateValueLabel->Name = L"CasesProfilePageBirthDateValueLabel";
			   this->CasesProfilePageBirthDateValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageBirthDateValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageBirthDateValueLabel->TabIndex = 13;
			   // 
			   // CasesProfilePageBirthDateLabel
			   // 
			   this->CasesProfilePageBirthDateLabel->AutoSize = true;
			   this->CasesProfilePageBirthDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageBirthDateLabel->Location = System::Drawing::Point(140, 204);
			   this->CasesProfilePageBirthDateLabel->Name = L"CasesProfilePageBirthDateLabel";
			   this->CasesProfilePageBirthDateLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageBirthDateLabel->Size = System::Drawing::Size(97, 18);
			   this->CasesProfilePageBirthDateLabel->TabIndex = 12;
			   this->CasesProfilePageBirthDateLabel->Text = L"تاريخ الميلاد : ";
			   // 
			   // CasesProfilePageGenderValueLabel
			   // 
			   this->CasesProfilePageGenderValueLabel->AutoSize = true;
			   this->CasesProfilePageGenderValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageGenderValueLabel->Location = System::Drawing::Point(86, 167);
			   this->CasesProfilePageGenderValueLabel->Name = L"CasesProfilePageGenderValueLabel";
			   this->CasesProfilePageGenderValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageGenderValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageGenderValueLabel->TabIndex = 11;
			   // 
			   // CasesProfilePageGenderLabel
			   // 
			   this->CasesProfilePageGenderLabel->AutoSize = true;
			   this->CasesProfilePageGenderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageGenderLabel->Location = System::Drawing::Point(184, 168);
			   this->CasesProfilePageGenderLabel->Name = L"CasesProfilePageGenderLabel";
			   this->CasesProfilePageGenderLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageGenderLabel->Size = System::Drawing::Size(53, 18);
			   this->CasesProfilePageGenderLabel->TabIndex = 10;
			   this->CasesProfilePageGenderLabel->Text = L"النوع : ";
			   // 
			   // CasesProfilePagePhoneNumberValueLabel
			   // 
			   this->CasesProfilePagePhoneNumberValueLabel->AutoSize = true;
			   this->CasesProfilePagePhoneNumberValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePagePhoneNumberValueLabel->Location = System::Drawing::Point(6, 137);
			   this->CasesProfilePagePhoneNumberValueLabel->Name = L"CasesProfilePagePhoneNumberValueLabel";
			   this->CasesProfilePagePhoneNumberValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePagePhoneNumberValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePagePhoneNumberValueLabel->TabIndex = 9;
			   // 
			   // CasesProfilePagePhoneNumberLabel
			   // 
			   this->CasesProfilePagePhoneNumberLabel->AutoSize = true;
			   this->CasesProfilePagePhoneNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePagePhoneNumberLabel->Location = System::Drawing::Point(151, 137);
			   this->CasesProfilePagePhoneNumberLabel->Name = L"CasesProfilePagePhoneNumberLabel";
			   this->CasesProfilePagePhoneNumberLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePagePhoneNumberLabel->Size = System::Drawing::Size(86, 18);
			   this->CasesProfilePagePhoneNumberLabel->TabIndex = 8;
			   this->CasesProfilePagePhoneNumberLabel->Text = L"رقم الهاتف : ";
			   // 
			   // CasesProfilePageNickNameValueLabel
			   // 
			   this->CasesProfilePageNickNameValueLabel->AutoSize = true;
			   this->CasesProfilePageNickNameValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageNickNameValueLabel->Location = System::Drawing::Point(60, 106);
			   this->CasesProfilePageNickNameValueLabel->Name = L"CasesProfilePageNickNameValueLabel";
			   this->CasesProfilePageNickNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageNickNameValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageNickNameValueLabel->TabIndex = 7;
			   // 
			   // CasesProfilePageNickNameLabel
			   // 
			   this->CasesProfilePageNickNameLabel->AutoSize = true;
			   this->CasesProfilePageNickNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageNickNameLabel->Location = System::Drawing::Point(184, 107);
			   this->CasesProfilePageNickNameLabel->Name = L"CasesProfilePageNickNameLabel";
			   this->CasesProfilePageNickNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageNickNameLabel->Size = System::Drawing::Size(53, 18);
			   this->CasesProfilePageNickNameLabel->TabIndex = 6;
			   this->CasesProfilePageNickNameLabel->Text = L"اللقب : ";
			   // 
			   // CasesProfilePageIDValueLabel
			   // 
			   this->CasesProfilePageIDValueLabel->AutoSize = true;
			   this->CasesProfilePageIDValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageIDValueLabel->Location = System::Drawing::Point(96, 11);
			   this->CasesProfilePageIDValueLabel->Name = L"CasesProfilePageIDValueLabel";
			   this->CasesProfilePageIDValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageIDValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageIDValueLabel->TabIndex = 5;
			   this->CasesProfilePageIDValueLabel->Click += gcnew System::EventHandler(this, &CaseProfile::CasesProfilePageIDValueLabel_Click);
			   // 
			   // CasesProfilePageIDLabel
			   // 
			   this->CasesProfilePageIDLabel->AutoSize = true;
			   this->CasesProfilePageIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageIDLabel->Location = System::Drawing::Point(198, 11);
			   this->CasesProfilePageIDLabel->Name = L"CasesProfilePageIDLabel";
			   this->CasesProfilePageIDLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageIDLabel->Size = System::Drawing::Size(39, 18);
			   this->CasesProfilePageIDLabel->TabIndex = 4;
			   this->CasesProfilePageIDLabel->Text = L"ID : ";
			   // 
			   // CasesProfilePageLastNameValueLabel
			   // 
			   this->CasesProfilePageLastNameValueLabel->AutoSize = true;
			   this->CasesProfilePageLastNameValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageLastNameValueLabel->Location = System::Drawing::Point(82, 74);
			   this->CasesProfilePageLastNameValueLabel->Name = L"CasesProfilePageLastNameValueLabel";
			   this->CasesProfilePageLastNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageLastNameValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageLastNameValueLabel->TabIndex = 3;
			   // 
			   // CasesProfilePageLastNameLabel
			   // 
			   this->CasesProfilePageLastNameLabel->AutoSize = true;
			   this->CasesProfilePageLastNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageLastNameLabel->Location = System::Drawing::Point(143, 74);
			   this->CasesProfilePageLastNameLabel->Name = L"CasesProfilePageLastNameLabel";
			   this->CasesProfilePageLastNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageLastNameLabel->Size = System::Drawing::Size(94, 18);
			   this->CasesProfilePageLastNameLabel->TabIndex = 2;
			   this->CasesProfilePageLastNameLabel->Text = L"ألاسم الأخير : ";
			   // 
			   // CasesProfilePageFristNameValueLabel
			   // 
			   this->CasesProfilePageFristNameValueLabel->AutoSize = true;
			   this->CasesProfilePageFristNameValueLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFristNameValueLabel->Location = System::Drawing::Point(79, 35);
			   this->CasesProfilePageFristNameValueLabel->Name = L"CasesProfilePageFristNameValueLabel";
			   this->CasesProfilePageFristNameValueLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFristNameValueLabel->Size = System::Drawing::Size(0, 20);
			   this->CasesProfilePageFristNameValueLabel->TabIndex = 36;
			   // 
			   // CasesProfilePageFristNameLabel
			   // 
			   this->CasesProfilePageFristNameLabel->AutoSize = true;
			   this->CasesProfilePageFristNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->CasesProfilePageFristNameLabel->Location = System::Drawing::Point(149, 35);
			   this->CasesProfilePageFristNameLabel->Name = L"CasesProfilePageFristNameLabel";
			   this->CasesProfilePageFristNameLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->CasesProfilePageFristNameLabel->Size = System::Drawing::Size(88, 18);
			   this->CasesProfilePageFristNameLabel->TabIndex = 0;
			   this->CasesProfilePageFristNameLabel->Text = L"الاسم الاول : ";
			   // 
			   // CaseProfile
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1174, 767);
			   this->Controls->Add(this->CasesProfilePageInformationPanel);
			   this->Controls->Add(this->CasesProfilePagePanal);
			   this->Name = L"CaseProfile";
			   this->Text = L"الملف الشخصي";
			   this->CasesProfilePagePanal->ResumeLayout(false);
			   this->CasesProfilePagePanal->PerformLayout();
			   this->CasesProfilePageInformationPanel->ResumeLayout(false);
			   this->CasesProfilePageInformationPanel->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CasesProfilePageIDValueLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// رسالة تأكيد أوضح
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			String::Format(L"هل أنت متأكد من رغبتك في حذف الحالة '{0} {1}'؟",
				currentCase->FName, currentCase->LName),
			L"تأكيد الحذف",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning,
			MessageBoxDefaultButton::Button2);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			try
			{
				// استخدم ID من currentCase بدلاً من محاولة الحصول عليه من الزر
				Connection::DeleteCaseIfNoAid(currentCase->ID);
				this->Close();
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
	private: System::Void Deactivate_Status_Click(System::Object^ sender, System::EventArgs^ e)
{
	
		try
		{
			if (this->CasesProfilePageChangeStatusButton->Text == L"تفعيل") {
				// استدعاء دالة إلغاء التفعيل من كلاس الاتصال
				Connection::DeactivateCase(currentCase->ID.Value , 1);

				// تحديث حالة الكائن الحالي
				currentCase->IsActive = false;
				currentCase->UpdateIN = DateTime::Now;

				// تحديث واجهة المستخدم
				this->CasesProfilePageIsActiveValueLabel->Text = L"نشط";
				this->CasesProfilePageUpdatedAtValueLabel->Text = currentCase->UpdateIN.Value.ToString("dd/MM/yyyy");

				// تغيير نص الزر إذا لزم الأمر
				this->CasesProfilePageChangeStatusButton->Text = L"إلغاء التفعيل";
			}
			else {
				// استدعاء دالة إلغاء التفعيل من كلاس الاتصال
				Connection::DeactivateCase(currentCase->ID.Value , 0);

				// تحديث حالة الكائن الحالي
				currentCase->IsActive = false;
				currentCase->UpdateIN = DateTime::Now;

				// تحديث واجهة المستخدم
				this->CasesProfilePageIsActiveValueLabel->Text = L"غير نشط";
				this->CasesProfilePageUpdatedAtValueLabel->Text = currentCase->UpdateIN.Value.ToString("dd/MM/yyyy");

				// تغيير نص الزر إذا لزم الأمر
				this->CasesProfilePageChangeStatusButton->Text = L"تفعيل";
			}
			

		
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(L"حدث خطأ أثناء محاولة إلغاء التفعيل:\n" + ex->Message,
				L"خطأ",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	
}
};
}
