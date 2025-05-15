#pragma once

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TodayViewForm1
	/// </summary>
	public ref class TodayViewForm : public System::Windows::Forms::Form
	{
	public:
		TodayViewForm(void)
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
		~TodayViewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TodoPageTitleLabel;
	protected:
	private: System::Windows::Forms::Panel^ TodoPageTitlePanal;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AidID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CaseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AidType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DueDate;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Status;






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
			this->TodoPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->TodoPageTitlePanal = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AidID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DueDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->TodoPageTitlePanal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// TodoPageTitleLabel
			// 
			this->TodoPageTitleLabel->AutoSize = true;
			this->TodoPageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TodoPageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->TodoPageTitleLabel->Location = System::Drawing::Point(456, 9);
			this->TodoPageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TodoPageTitleLabel->Name = L"TodoPageTitleLabel";
			this->TodoPageTitleLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TodoPageTitleLabel->Size = System::Drawing::Size(136, 33);
			this->TodoPageTitleLabel->TabIndex = 0;
			this->TodoPageTitleLabel->Text = L"عرض اليوم";
			this->TodoPageTitleLabel->Click += gcnew System::EventHandler(this, &TodayViewForm::AddCasesPageTitleLabel_Click);
			// 
			// TodoPageTitlePanal
			// 
			this->TodoPageTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->TodoPageTitlePanal->Controls->Add(this->TodoPageTitleLabel);
			this->TodoPageTitlePanal->Location = System::Drawing::Point(-1, 0);
			this->TodoPageTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->TodoPageTitlePanal->Name = L"TodoPageTitlePanal";
			this->TodoPageTitlePanal->Size = System::Drawing::Size(1051, 50);
			this->TodoPageTitlePanal->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->AidID,
					this->CaseName, this->AidType, this->DueDate, this->Status
			});
			this->dataGridView1->GridColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(13, 117);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->dataGridView1->Size = System::Drawing::Size(996, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// AidID
			// 
			this->AidID->Frozen = true;
			this->AidID->HeaderText = L"Aid ID";
			this->AidID->Name = L"AidID";
			this->AidID->ReadOnly = true;
			// 
			// CaseName
			// 
			this->CaseName->Frozen = true;
			this->CaseName->HeaderText = L"أسم الحالة";
			this->CaseName->Name = L"CaseName";
			this->CaseName->ReadOnly = true;
			// 
			// AidType
			// 
			this->AidType->Frozen = true;
			this->AidType->HeaderText = L"نوع المساعدة ";
			this->AidType->Name = L"AidType";
			this->AidType->ReadOnly = true;
			// 
			// DueDate
			// 
			this->DueDate->Frozen = true;
			this->DueDate->HeaderText = L"التاريخ المستحق";
			this->DueDate->Name = L"DueDate";
			this->DueDate->ReadOnly = true;
			// 
			// Status
			// 
			this->Status->Frozen = true;
			this->Status->HeaderText = L"الحالة (تمت/لم تتم)";
			this->Status->Name = L"Status";
			this->Status->ReadOnly = true;
			// 
			// TodayViewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 753);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->TodoPageTitlePanal);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TodayViewForm";
			this->Text = L"عرض اليوم";
			this->TodoPageTitlePanal->ResumeLayout(false);
			this->TodoPageTitlePanal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddCasesPageTitleLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
