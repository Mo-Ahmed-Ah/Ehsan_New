	#pragma once
#include "AddCaseForm.h"
#include "TodayViewForm.h"

	namespace Ehsan {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Summary for MainForm
		/// </summary>
		public ref class MainForm : public System::Windows::Forms::Form
		{
		public:
			MainForm(void)
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
			~MainForm()
			{
				if (components)
				{
					delete components;
				}
			}


		private: System::Windows::Forms::FlowLayoutPanel^ HomeInfoPanal;
		private: System::Windows::Forms::Panel^ HomePageCasesPanel;
		private: System::Windows::Forms::Panel^ HomePageAssistancePanel;
		private: System::Windows::Forms::Panel^ HomePageExpensesPanel;
		private: System::Windows::Forms::Panel^ HomePageMostCommonPanel;
		private: System::Windows::Forms::Panel^ HomePageTodaysAidPanel;






		private: System::Windows::Forms::Panel^ HomeTitlePanal;




		private: System::Windows::Forms::Label^ HomePageTitleLabel;
		private: System::Windows::Forms::Label^ HomePageCasesNumberLabel;
		private: System::Windows::Forms::Label^ HomePageNumberOfCasesLabel;
		private: System::Windows::Forms::Label^ HomePageNumberOfAssistance;

		private: System::Windows::Forms::Label^ HomePageAssistanceLabel;
		private: System::Windows::Forms::Label^ HomePageExpensesLabel;
		private: System::Windows::Forms::Label^ HomePageExpensesValue;
		private: System::Windows::Forms::Label^ HomePageMostCommonlabel;
		private: System::Windows::Forms::Label^ HomePageMostCommonlValue;
		private: System::Windows::Forms::Label^ HomePageTodaysAidLabel;
		private: System::Windows::Forms::Label^ HomePageNumberOfTodaysAid;
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
		private: System::Windows::Forms::Button^ HomePageToDayButton;
		private: System::Windows::Forms::Button^ AddAidButton;


		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ HomeBageAddCasesButton;

		protected:

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
				this->HomeInfoPanal = (gcnew System::Windows::Forms::FlowLayoutPanel());
				this->HomePageCasesPanel = (gcnew System::Windows::Forms::Panel());
				this->HomePageNumberOfCasesLabel = (gcnew System::Windows::Forms::Label());
				this->HomePageCasesNumberLabel = (gcnew System::Windows::Forms::Label());
				this->HomePageAssistancePanel = (gcnew System::Windows::Forms::Panel());
				this->HomePageNumberOfAssistance = (gcnew System::Windows::Forms::Label());
				this->HomePageAssistanceLabel = (gcnew System::Windows::Forms::Label());
				this->HomePageExpensesPanel = (gcnew System::Windows::Forms::Panel());
				this->HomePageExpensesValue = (gcnew System::Windows::Forms::Label());
				this->HomePageExpensesLabel = (gcnew System::Windows::Forms::Label());
				this->HomePageMostCommonPanel = (gcnew System::Windows::Forms::Panel());
				this->HomePageMostCommonlValue = (gcnew System::Windows::Forms::Label());
				this->HomePageMostCommonlabel = (gcnew System::Windows::Forms::Label());
				this->HomePageTodaysAidPanel = (gcnew System::Windows::Forms::Panel());
				this->HomePageNumberOfTodaysAid = (gcnew System::Windows::Forms::Label());
				this->HomePageTodaysAidLabel = (gcnew System::Windows::Forms::Label());
				this->HomeTitlePanal = (gcnew System::Windows::Forms::Panel());
				this->HomePageTitleLabel = (gcnew System::Windows::Forms::Label());
				this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
				this->HomePageToDayButton = (gcnew System::Windows::Forms::Button());
				this->HomeBageAddCasesButton = (gcnew System::Windows::Forms::Button());
				this->AddAidButton = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->HomeInfoPanal->SuspendLayout();
				this->HomePageCasesPanel->SuspendLayout();
				this->HomePageAssistancePanel->SuspendLayout();
				this->HomePageExpensesPanel->SuspendLayout();
				this->HomePageMostCommonPanel->SuspendLayout();
				this->HomePageTodaysAidPanel->SuspendLayout();
				this->HomeTitlePanal->SuspendLayout();
				this->flowLayoutPanel1->SuspendLayout();
				this->SuspendLayout();
				// 
				// HomeInfoPanal
				// 
				this->HomeInfoPanal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomeInfoPanal->Controls->Add(this->HomePageCasesPanel);
				this->HomeInfoPanal->Controls->Add(this->HomePageAssistancePanel);
				this->HomeInfoPanal->Controls->Add(this->HomePageExpensesPanel);
				this->HomeInfoPanal->Controls->Add(this->HomePageMostCommonPanel);
				this->HomeInfoPanal->Controls->Add(this->HomePageTodaysAidPanel);
				this->HomeInfoPanal->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
				this->HomeInfoPanal->Location = System::Drawing::Point(14, 65);
				this->HomeInfoPanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomeInfoPanal->Name = L"HomeInfoPanal";
				this->HomeInfoPanal->Size = System::Drawing::Size(736, 119);
				this->HomeInfoPanal->TabIndex = 1;
				// 
				// HomePageCasesPanel
				// 
				this->HomePageCasesPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomePageCasesPanel->Controls->Add(this->HomePageNumberOfCasesLabel);
				this->HomePageCasesPanel->Controls->Add(this->HomePageCasesNumberLabel);
				this->HomePageCasesPanel->Location = System::Drawing::Point(495, 3);
				this->HomePageCasesPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageCasesPanel->Name = L"HomePageCasesPanel";
				this->HomePageCasesPanel->Size = System::Drawing::Size(233, 48);
				this->HomePageCasesPanel->TabIndex = 0;
				// 
				// HomePageNumberOfCasesLabel
				// 
				this->HomePageNumberOfCasesLabel->AutoSize = true;
				this->HomePageNumberOfCasesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageNumberOfCasesLabel->ForeColor = System::Drawing::SystemColors::Highlight;
				this->HomePageNumberOfCasesLabel->Location = System::Drawing::Point(42, 12);
				this->HomePageNumberOfCasesLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageNumberOfCasesLabel->Name = L"HomePageNumberOfCasesLabel";
				this->HomePageNumberOfCasesLabel->Size = System::Drawing::Size(51, 25);
				this->HomePageNumberOfCasesLabel->TabIndex = 1;
				this->HomePageNumberOfCasesLabel->Text = L"101";
				// 
				// HomePageCasesNumberLabel
				// 
				this->HomePageCasesNumberLabel->AutoSize = true;
				this->HomePageCasesNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageCasesNumberLabel->Location = System::Drawing::Point(147, 12);
				this->HomePageCasesNumberLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageCasesNumberLabel->Name = L"HomePageCasesNumberLabel";
				this->HomePageCasesNumberLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageCasesNumberLabel->Size = System::Drawing::Size(71, 24);
				this->HomePageCasesNumberLabel->TabIndex = 0;
				this->HomePageCasesNumberLabel->Text = L"الحالات : ";
				// 
				// HomePageAssistancePanel
				// 
				this->HomePageAssistancePanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomePageAssistancePanel->Controls->Add(this->HomePageNumberOfAssistance);
				this->HomePageAssistancePanel->Controls->Add(this->HomePageAssistanceLabel);
				this->HomePageAssistancePanel->Location = System::Drawing::Point(254, 3);
				this->HomePageAssistancePanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageAssistancePanel->Name = L"HomePageAssistancePanel";
				this->HomePageAssistancePanel->Size = System::Drawing::Size(233, 48);
				this->HomePageAssistancePanel->TabIndex = 1;
				// 
				// HomePageNumberOfAssistance
				// 
				this->HomePageNumberOfAssistance->AutoSize = true;
				this->HomePageNumberOfAssistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageNumberOfAssistance->ForeColor = System::Drawing::SystemColors::Highlight;
				this->HomePageNumberOfAssistance->Location = System::Drawing::Point(22, 12);
				this->HomePageNumberOfAssistance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageNumberOfAssistance->Name = L"HomePageNumberOfAssistance";
				this->HomePageNumberOfAssistance->Size = System::Drawing::Size(51, 25);
				this->HomePageNumberOfAssistance->TabIndex = 2;
				this->HomePageNumberOfAssistance->Text = L"101";
				// 
				// HomePageAssistanceLabel
				// 
				this->HomePageAssistanceLabel->AutoSize = true;
				this->HomePageAssistanceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageAssistanceLabel->Location = System::Drawing::Point(127, 13);
				this->HomePageAssistanceLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageAssistanceLabel->Name = L"HomePageAssistanceLabel";
				this->HomePageAssistanceLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageAssistanceLabel->Size = System::Drawing::Size(88, 24);
				this->HomePageAssistanceLabel->TabIndex = 2;
				this->HomePageAssistanceLabel->Text = L"المساعدات : ";
				// 
				// HomePageExpensesPanel
				// 
				this->HomePageExpensesPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomePageExpensesPanel->Controls->Add(this->HomePageExpensesValue);
				this->HomePageExpensesPanel->Controls->Add(this->HomePageExpensesLabel);
				this->HomePageExpensesPanel->Location = System::Drawing::Point(13, 3);
				this->HomePageExpensesPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageExpensesPanel->Name = L"HomePageExpensesPanel";
				this->HomePageExpensesPanel->Size = System::Drawing::Size(233, 48);
				this->HomePageExpensesPanel->TabIndex = 2;
				// 
				// HomePageExpensesValue
				// 
				this->HomePageExpensesValue->AutoSize = true;
				this->HomePageExpensesValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageExpensesValue->ForeColor = System::Drawing::SystemColors::Highlight;
				this->HomePageExpensesValue->Location = System::Drawing::Point(4, 11);
				this->HomePageExpensesValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageExpensesValue->Name = L"HomePageExpensesValue";
				this->HomePageExpensesValue->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageExpensesValue->Size = System::Drawing::Size(102, 24);
				this->HomePageExpensesValue->TabIndex = 3;
				this->HomePageExpensesValue->Text = L"18000 جنيه";
				// 
				// HomePageExpensesLabel
				// 
				this->HomePageExpensesLabel->AutoSize = true;
				this->HomePageExpensesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageExpensesLabel->Location = System::Drawing::Point(118, 12);
				this->HomePageExpensesLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageExpensesLabel->Name = L"HomePageExpensesLabel";
				this->HomePageExpensesLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageExpensesLabel->Size = System::Drawing::Size(96, 24);
				this->HomePageExpensesLabel->TabIndex = 3;
				this->HomePageExpensesLabel->Text = L"المصروفات : ";
				this->HomePageExpensesLabel->Click += gcnew System::EventHandler(this, &MainForm::HomePageExpensesLabel_Click);
				// 
				// HomePageMostCommonPanel
				// 
				this->HomePageMostCommonPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomePageMostCommonPanel->Controls->Add(this->HomePageMostCommonlValue);
				this->HomePageMostCommonPanel->Controls->Add(this->HomePageMostCommonlabel);
				this->HomePageMostCommonPanel->Location = System::Drawing::Point(495, 57);
				this->HomePageMostCommonPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageMostCommonPanel->Name = L"HomePageMostCommonPanel";
				this->HomePageMostCommonPanel->Size = System::Drawing::Size(233, 48);
				this->HomePageMostCommonPanel->TabIndex = 3;
				// 
				// HomePageMostCommonlValue
				// 
				this->HomePageMostCommonlValue->AutoSize = true;
				this->HomePageMostCommonlValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageMostCommonlValue->ForeColor = System::Drawing::SystemColors::Highlight;
				this->HomePageMostCommonlValue->Location = System::Drawing::Point(27, 11);
				this->HomePageMostCommonlValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageMostCommonlValue->Name = L"HomePageMostCommonlValue";
				this->HomePageMostCommonlValue->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageMostCommonlValue->Size = System::Drawing::Size(62, 24);
				this->HomePageMostCommonlValue->TabIndex = 4;
				this->HomePageMostCommonlValue->Text = L"بطاطين";
				// 
				// HomePageMostCommonlabel
				// 
				this->HomePageMostCommonlabel->AutoSize = true;
				this->HomePageMostCommonlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageMostCommonlabel->Location = System::Drawing::Point(106, 11);
				this->HomePageMostCommonlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageMostCommonlabel->Name = L"HomePageMostCommonlabel";
				this->HomePageMostCommonlabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageMostCommonlabel->Size = System::Drawing::Size(102, 24);
				this->HomePageMostCommonlabel->TabIndex = 4;
				this->HomePageMostCommonlabel->Text = L"الاكثر شيوعاً : ";
				// 
				// HomePageTodaysAidPanel
				// 
				this->HomePageTodaysAidPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->HomePageTodaysAidPanel->Controls->Add(this->HomePageNumberOfTodaysAid);
				this->HomePageTodaysAidPanel->Controls->Add(this->HomePageTodaysAidLabel);
				this->HomePageTodaysAidPanel->Location = System::Drawing::Point(256, 57);
				this->HomePageTodaysAidPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageTodaysAidPanel->Name = L"HomePageTodaysAidPanel";
				this->HomePageTodaysAidPanel->Size = System::Drawing::Size(231, 48);
				this->HomePageTodaysAidPanel->TabIndex = 4;
				this->HomePageTodaysAidPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::HomePageTodaysAidPanel_Paint);
				// 
				// HomePageNumberOfTodaysAid
				// 
				this->HomePageNumberOfTodaysAid->AutoSize = true;
				this->HomePageNumberOfTodaysAid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageNumberOfTodaysAid->ForeColor = System::Drawing::SystemColors::Highlight;
				this->HomePageNumberOfTodaysAid->Location = System::Drawing::Point(20, 13);
				this->HomePageNumberOfTodaysAid->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageNumberOfTodaysAid->Name = L"HomePageNumberOfTodaysAid";
				this->HomePageNumberOfTodaysAid->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageNumberOfTodaysAid->Size = System::Drawing::Size(32, 24);
				this->HomePageNumberOfTodaysAid->TabIndex = 5;
				this->HomePageNumberOfTodaysAid->Text = L"60";
				this->HomePageNumberOfTodaysAid->Click += gcnew System::EventHandler(this, &MainForm::HomePageNumberOfTodaysAid_Click);
				// 
				// HomePageTodaysAidLabel
				// 
				this->HomePageTodaysAidLabel->AutoSize = true;
				this->HomePageTodaysAidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageTodaysAidLabel->Location = System::Drawing::Point(99, 12);
				this->HomePageTodaysAidLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageTodaysAidLabel->Name = L"HomePageTodaysAidLabel";
				this->HomePageTodaysAidLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->HomePageTodaysAidLabel->Size = System::Drawing::Size(112, 24);
				this->HomePageTodaysAidLabel->TabIndex = 5;
				this->HomePageTodaysAidLabel->Text = L"مساعدات اليوم : ";
				// 
				// HomeTitlePanal
				// 
				this->HomeTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
				this->HomeTitlePanal->Controls->Add(this->HomePageTitleLabel);
				this->HomeTitlePanal->Location = System::Drawing::Point(-1, -1);
				this->HomeTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomeTitlePanal->Name = L"HomeTitlePanal";
				this->HomeTitlePanal->Size = System::Drawing::Size(768, 49);
				this->HomeTitlePanal->TabIndex = 2;
				// 
				// HomePageTitleLabel
				// 
				this->HomePageTitleLabel->AutoSize = true;
				this->HomePageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomePageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->HomePageTitleLabel->Location = System::Drawing::Point(127, 9);
				this->HomePageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->HomePageTitleLabel->Name = L"HomePageTitleLabel";
				this->HomePageTitleLabel->Size = System::Drawing::Size(424, 33);
				this->HomePageTitleLabel->TabIndex = 0;
				this->HomePageTitleLabel->Text = L"نظام إحسان الخيري - الصفحة الرئيسية";
				// 
				// flowLayoutPanel1
				// 
				this->flowLayoutPanel1->Controls->Add(this->HomePageToDayButton);
				this->flowLayoutPanel1->Controls->Add(this->HomeBageAddCasesButton);
				this->flowLayoutPanel1->Controls->Add(this->AddAidButton);
				this->flowLayoutPanel1->Controls->Add(this->button3);
				this->flowLayoutPanel1->Controls->Add(this->button4);
				this->flowLayoutPanel1->Location = System::Drawing::Point(216, 189);
				this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
				this->flowLayoutPanel1->Size = System::Drawing::Size(274, 370);
				this->flowLayoutPanel1->TabIndex = 3;
				// 
				// HomePageToDayButton
				// 
				this->HomePageToDayButton->BackColor = System::Drawing::SystemColors::HotTrack;
				this->HomePageToDayButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				this->HomePageToDayButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->HomePageToDayButton->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
				this->HomePageToDayButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
				this->HomePageToDayButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Cyan;
				this->HomePageToDayButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->HomePageToDayButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->HomePageToDayButton->Location = System::Drawing::Point(4, 3);
				this->HomePageToDayButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomePageToDayButton->Name = L"HomePageToDayButton";
				this->HomePageToDayButton->Size = System::Drawing::Size(271, 40);
				this->HomePageToDayButton->TabIndex = 6;
				this->HomePageToDayButton->Text = L"عرض اليوم ";
				this->HomePageToDayButton->UseVisualStyleBackColor = false;
				this->HomePageToDayButton->Click += gcnew System::EventHandler(this, &MainForm::HomePageToDayButton_Click);
				// 
				// HomeBageAddCasesButton
				// 
				this->HomeBageAddCasesButton->BackColor = System::Drawing::SystemColors::HotTrack;
				this->HomeBageAddCasesButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				this->HomeBageAddCasesButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->HomeBageAddCasesButton->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
				this->HomeBageAddCasesButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
				this->HomeBageAddCasesButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Cyan;
				this->HomeBageAddCasesButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->HomeBageAddCasesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->HomeBageAddCasesButton->Location = System::Drawing::Point(4, 49);
				this->HomeBageAddCasesButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->HomeBageAddCasesButton->Name = L"HomeBageAddCasesButton";
				this->HomeBageAddCasesButton->Size = System::Drawing::Size(271, 40);
				this->HomeBageAddCasesButton->TabIndex = 7;
				this->HomeBageAddCasesButton->Text = L"إضافة حالة";
				this->HomeBageAddCasesButton->UseVisualStyleBackColor = false;
				this->HomeBageAddCasesButton->Click += gcnew System::EventHandler(this, &MainForm::HomeBageAddCasesButton_Click);
				// 
				// AddAidButton
				// 
				this->AddAidButton->BackColor = System::Drawing::SystemColors::HotTrack;
				this->AddAidButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				this->AddAidButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->AddAidButton->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
				this->AddAidButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
				this->AddAidButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Cyan;
				this->AddAidButton->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->AddAidButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->AddAidButton->Location = System::Drawing::Point(4, 95);
				this->AddAidButton->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->AddAidButton->Name = L"AddAidButton";
				this->AddAidButton->Size = System::Drawing::Size(271, 40);
				this->AddAidButton->TabIndex = 8;
				this->AddAidButton->Text = L"إضافة مساعدة";
				this->AddAidButton->UseVisualStyleBackColor = false;
				this->AddAidButton->Click += gcnew System::EventHandler(this, &MainForm::AddAidButton_Click);
				// 
				// button3
				// 
				this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
				this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
				this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
				this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Cyan;
				this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->button3->Location = System::Drawing::Point(4, 141);
				this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(271, 40);
				this->button3->TabIndex = 9;
				this->button3->Text = L"عرض اليوم ";
				this->button3->UseVisualStyleBackColor = false;
				// 
				// button4
				// 
				this->button4->BackColor = System::Drawing::SystemColors::HotTrack;
				this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Cyan;
				this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Cyan;
				this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Cyan;
				this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				this->button4->Location = System::Drawing::Point(4, 187);
				this->button4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(271, 40);
				this->button4->TabIndex = 10;
				this->button4->Text = L"عرض اليوم ";
				this->button4->UseVisualStyleBackColor = false;
				// 
				// MainForm
				// 
				this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
				this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(768, 568);
				this->Controls->Add(this->flowLayoutPanel1);
				this->Controls->Add(this->HomeTitlePanal);
				this->Controls->Add(this->HomeInfoPanal);
				this->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"MainForm";
				this->Text = L"MainForm";
				this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
				this->HomeInfoPanal->ResumeLayout(false);
				this->HomePageCasesPanel->ResumeLayout(false);
				this->HomePageCasesPanel->PerformLayout();
				this->HomePageAssistancePanel->ResumeLayout(false);
				this->HomePageAssistancePanel->PerformLayout();
				this->HomePageExpensesPanel->ResumeLayout(false);
				this->HomePageExpensesPanel->PerformLayout();
				this->HomePageMostCommonPanel->ResumeLayout(false);
				this->HomePageMostCommonPanel->PerformLayout();
				this->HomePageTodaysAidPanel->ResumeLayout(false);
				this->HomePageTodaysAidPanel->PerformLayout();
				this->HomeTitlePanal->ResumeLayout(false);
				this->HomeTitlePanal->PerformLayout();
				this->flowLayoutPanel1->ResumeLayout(false);
				this->ResumeLayout(false);

			}
#pragma endregion
		private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void HomePageExpensesLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void HomePageNumberOfTodaysAid_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void HomePageTodaysAidPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		}
		private: void MainForm::HomePageToDayButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Create an instance of TodayViewForm and show it
			TodayViewForm^ todayViewForm = gcnew TodayViewForm();
			todayViewForm->Show();
		}



		private: System::Void HomeBageAddCasesButton_Click(System::Object^ sender, System::EventArgs^ e) {
			// Create an instance of AddCasesViewForm and show it
			AddCaseForm^ AddCasesViewForm = gcnew AddCaseForm();
			AddCasesViewForm->Show();
		}

private: System::Void AddAidButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
	}
