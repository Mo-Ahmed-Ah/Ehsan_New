#pragma once

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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ HomePageTitleLabel;
	private: System::Windows::Forms::Label^ HomePageCasesNumberLabel;


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
			this->HomeInfoPanal = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->HomePageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->HomePageCasesNumberLabel = (gcnew System::Windows::Forms::Label());
			this->HomeInfoPanal->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// HomeInfoPanal
			// 
			this->HomeInfoPanal->Controls->Add(this->panel2);
			this->HomeInfoPanal->Controls->Add(this->panel3);
			this->HomeInfoPanal->Controls->Add(this->panel4);
			this->HomeInfoPanal->Controls->Add(this->panel5);
			this->HomeInfoPanal->Controls->Add(this->panel6);
			this->HomeInfoPanal->Controls->Add(this->panel7);
			this->HomeInfoPanal->Controls->Add(this->panel8);
			this->HomeInfoPanal->Controls->Add(this->panel9);
			this->HomeInfoPanal->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->HomeInfoPanal->Location = System::Drawing::Point(12, 70);
			this->HomeInfoPanal->Name = L"HomeInfoPanal";
			this->HomeInfoPanal->Size = System::Drawing::Size(1041, 124);
			this->HomeInfoPanal->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->HomePageCasesNumberLabel);
			this->panel2->Location = System::Drawing::Point(838, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 52);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(632, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 52);
			this->panel3->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(426, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 52);
			this->panel4->TabIndex = 2;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(220, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 52);
			this->panel5->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(14, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 52);
			this->panel6->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(838, 61);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 52);
			this->panel7->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(632, 61);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(200, 52);
			this->panel8->TabIndex = 6;
			// 
			// panel9
			// 
			this->panel9->Location = System::Drawing::Point(426, 61);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(200, 52);
			this->panel9->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->HomePageTitleLabel);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1064, 53);
			this->panel1->TabIndex = 2;
			// 
			// HomePageTitleLabel
			// 
			this->HomePageTitleLabel->AutoSize = true;
			this->HomePageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HomePageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->HomePageTitleLabel->Location = System::Drawing::Point(319, 9);
			this->HomePageTitleLabel->Name = L"HomePageTitleLabel";
			this->HomePageTitleLabel->Size = System::Drawing::Size(424, 33);
			this->HomePageTitleLabel->TabIndex = 0;
			this->HomePageTitleLabel->Text = L"نظام إحسان الخيري - الصفحة الرئيسية";
			// 
			// HomePageCasesNumberLabel
			// 
			this->HomePageCasesNumberLabel->AutoSize = true;
			this->HomePageCasesNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->HomePageCasesNumberLabel->Location = System::Drawing::Point(126, 14);
			this->HomePageCasesNumberLabel->Name = L"HomePageCasesNumberLabel";
			this->HomePageCasesNumberLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->HomePageCasesNumberLabel->Size = System::Drawing::Size(71, 24);
			this->HomePageCasesNumberLabel->TabIndex = 0;
			this->HomePageCasesNumberLabel->Text = L"الحالات : ";
			// 
			// MainForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 630);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->HomeInfoPanal);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->HomeInfoPanal->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
