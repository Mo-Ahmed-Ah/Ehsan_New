#pragma once
#include "Connection.h"


namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToDayShowAid
	/// </summary>
	public ref class ToDayShowAid : public System::Windows::Forms::Form
	{
	public:
		ToDayShowAid(void)
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
		~ToDayShowAid()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ToDayShowAidPageTitleLabel;
	private: System::Windows::Forms::Panel^ ToDayShowAidPagePanal;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CaseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AidAmount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AidType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Notes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ IsRecurring;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ NextDueDate;

	private: System::Windows::Forms::Panel^ ToDayShowFinancialAidPanel;
	private: System::Windows::Forms::Label^ ToDayShowFinancialAidLabel;
	private: System::Windows::Forms::DataGridView^ ToDayShowFinancialAidDataGridView;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn2;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn3;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn4;
	private: System::Windows::Forms::Panel^ ToDayShowInKindAidPanel;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ ToDayShowInKindAidDataGridView;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ aColCaseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ aColAidValue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ aColAidType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ aNotes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ aColIsDelivered;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ aColID;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ aColIsRecurring;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fColCaseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fColAidType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fColAmount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fColNotes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ fColIsDelivered;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ fColID;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ fColIsRecurring;

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
			this->ToDayShowAidPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->ToDayShowAidPagePanal = (gcnew System::Windows::Forms::Panel());
			this->ToDayShowFinancialAidPanel = (gcnew System::Windows::Forms::Panel());
			this->ToDayShowFinancialAidLabel = (gcnew System::Windows::Forms::Label());
			this->ToDayShowFinancialAidDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->fColCaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fColAidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fColAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fColNotes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fColIsDelivered = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->fColID = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->fColIsRecurring = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->CaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AidAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->IsRecurring = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->NextDueDate = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->ToDayShowInKindAidPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ToDayShowInKindAidDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->aColCaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aColAidValue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aColAidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aNotes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->aColIsDelivered = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->aColID = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->aColIsRecurring = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->ToDayShowAidPagePanal->SuspendLayout();
			this->ToDayShowFinancialAidPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToDayShowFinancialAidDataGridView))->BeginInit();
			this->ToDayShowInKindAidPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToDayShowInKindAidDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// ToDayShowAidPageTitleLabel
			// 
			this->ToDayShowAidPageTitleLabel->AutoSize = true;
			this->ToDayShowAidPageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ToDayShowAidPageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ToDayShowAidPageTitleLabel->Location = System::Drawing::Point(500, 7);
			this->ToDayShowAidPageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ToDayShowAidPageTitleLabel->Name = L"ToDayShowAidPageTitleLabel";
			this->ToDayShowAidPageTitleLabel->Size = System::Drawing::Size(168, 33);
			this->ToDayShowAidPageTitleLabel->TabIndex = 0;
			this->ToDayShowAidPageTitleLabel->Text = L"مساعدات اليوم";
			// 
			// ToDayShowAidPagePanal
			// 
			this->ToDayShowAidPagePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->ToDayShowAidPagePanal->Controls->Add(this->ToDayShowAidPageTitleLabel);
			this->ToDayShowAidPagePanal->Location = System::Drawing::Point(-1, -1);
			this->ToDayShowAidPagePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->ToDayShowAidPagePanal->Name = L"ToDayShowAidPagePanal";
			this->ToDayShowAidPagePanal->Size = System::Drawing::Size(1170, 49);
			this->ToDayShowAidPagePanal->TabIndex = 5;
			// 
			// ToDayShowFinancialAidPanel
			// 
			this->ToDayShowFinancialAidPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ToDayShowFinancialAidPanel->Controls->Add(this->ToDayShowFinancialAidLabel);
			this->ToDayShowFinancialAidPanel->Controls->Add(this->ToDayShowFinancialAidDataGridView);
			this->ToDayShowFinancialAidPanel->Location = System::Drawing::Point(8, 54);
			this->ToDayShowFinancialAidPanel->Name = L"ToDayShowFinancialAidPanel";
			this->ToDayShowFinancialAidPanel->Size = System::Drawing::Size(1144, 351);
			this->ToDayShowFinancialAidPanel->TabIndex = 7;
			// 
			// ToDayShowFinancialAidLabel
			// 
			this->ToDayShowFinancialAidLabel->AutoSize = true;
			this->ToDayShowFinancialAidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ToDayShowFinancialAidLabel->ForeColor = System::Drawing::SystemColors::Highlight;
			this->ToDayShowFinancialAidLabel->Location = System::Drawing::Point(471, -2);
			this->ToDayShowFinancialAidLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ToDayShowFinancialAidLabel->Name = L"ToDayShowFinancialAidLabel";
			this->ToDayShowFinancialAidLabel->Size = System::Drawing::Size(199, 33);
			this->ToDayShowFinancialAidLabel->TabIndex = 1;
			this->ToDayShowFinancialAidLabel->Text = L"المساعدات المالة ";
			// 
			// ToDayShowFinancialAidDataGridView
			// 
			this->ToDayShowFinancialAidDataGridView->AllowUserToAddRows = false;
			this->ToDayShowFinancialAidDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ToDayShowFinancialAidDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->ToDayShowFinancialAidDataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ToDayShowFinancialAidDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ToDayShowFinancialAidDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->ToDayShowFinancialAidDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ToDayShowFinancialAidDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->fColCaseName,
					this->fColAidType, this->fColAmount, this->fColNotes, this->fColIsDelivered, this->fColID, this->fColIsRecurring
			});
			this->ToDayShowFinancialAidDataGridView->Cursor = System::Windows::Forms::Cursors::Default;
			this->ToDayShowFinancialAidDataGridView->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->ToDayShowFinancialAidDataGridView->Location = System::Drawing::Point(3, 37);
			this->ToDayShowFinancialAidDataGridView->Name = L"ToDayShowFinancialAidDataGridView";
			this->ToDayShowFinancialAidDataGridView->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ToDayShowFinancialAidDataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->ToDayShowFinancialAidDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ToDayShowFinancialAidDataGridView->Size = System::Drawing::Size(1134, 307);
			this->ToDayShowFinancialAidDataGridView->TabIndex = 0;
			this->ToDayShowFinancialAidDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ToDayShowAid::ToDayShowFinancialAidDataGridView_CellContentClick);
			// 
			// fColCaseName
			// 
			this->fColCaseName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->fColCaseName->Frozen = true;
			this->fColCaseName->HeaderText = L"اسم الحالة";
			this->fColCaseName->Name = L"fColCaseName";
			this->fColCaseName->Width = 253;
			// 
			// fColAidType
			// 
			this->fColAidType->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->fColAidType->Frozen = true;
			this->fColAidType->HeaderText = L"نوع المساعدة";
			this->fColAidType->Name = L"fColAidType";
			this->fColAidType->Width = 253;
			// 
			// fColAmount
			// 
			this->fColAmount->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->fColAmount->HeaderText = L"قيمة المساعدة";
			this->fColAmount->Name = L"fColAmount";
			this->fColAmount->Width = 253;
			// 
			// fColNotes
			// 
			this->fColNotes->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->fColNotes->HeaderText = L"ملاحظات";
			this->fColNotes->Name = L"fColNotes";
			this->fColNotes->Width = 254;
			// 
			// fColIsDelivered
			// 
			this->fColIsDelivered->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->fColIsDelivered->HeaderText = L"تم الأستلام";
			this->fColIsDelivered->Name = L"fColIsDelivered";
			this->fColIsDelivered->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->fColIsDelivered->Width = 78;
			// 
			// fColID
			// 
			this->fColID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fColID->HeaderText = L"ID";
			this->fColID->Name = L"fColID";
			this->fColID->Visible = false;
			// 
			// fColIsRecurring
			// 
			this->fColIsRecurring->Name = L"fColIsRecurring";
			// 
			// CaseName
			// 
			this->CaseName->Name = L"CaseName";
			// 
			// AidAmount
			// 
			this->AidAmount->Name = L"AidAmount";
			// 
			// AidType
			// 
			this->AidType->Name = L"AidType";
			// 
			// Notes
			// 
			this->Notes->Name = L"Notes";
			// 
			// ID
			// 
			this->ID->Name = L"ID";
			// 
			// IsRecurring
			// 
			this->IsRecurring->Name = L"IsRecurring";
			// 
			// NextDueDate
			// 
			this->NextDueDate->Name = L"NextDueDate";
			// 
			// ToDayShowInKindAidPanel
			// 
			this->ToDayShowInKindAidPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ToDayShowInKindAidPanel->Controls->Add(this->label3);
			this->ToDayShowInKindAidPanel->Controls->Add(this->ToDayShowInKindAidDataGridView);
			this->ToDayShowInKindAidPanel->Location = System::Drawing::Point(8, 411);
			this->ToDayShowInKindAidPanel->Name = L"ToDayShowInKindAidPanel";
			this->ToDayShowInKindAidPanel->Size = System::Drawing::Size(1144, 350);
			this->ToDayShowInKindAidPanel->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(471, -5);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 33);
			this->label3->TabIndex = 1;
			this->label3->Text = L"المساعدات العينية  ";
			// 
			// ToDayShowInKindAidDataGridView
			// 
			this->ToDayShowInKindAidDataGridView->AllowUserToAddRows = false;
			this->ToDayShowInKindAidDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ToDayShowInKindAidDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ToDayShowInKindAidDataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ToDayShowInKindAidDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ToDayShowInKindAidDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->ToDayShowInKindAidDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ToDayShowInKindAidDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->aColCaseName,
					this->aColAidValue, this->aColAidType, this->aNotes, this->aColIsDelivered, this->aColID, this->aColIsRecurring
			});
			this->ToDayShowInKindAidDataGridView->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->ToDayShowInKindAidDataGridView->Location = System::Drawing::Point(3, 34);
			this->ToDayShowInKindAidDataGridView->Name = L"ToDayShowInKindAidDataGridView";
			this->ToDayShowInKindAidDataGridView->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ToDayShowInKindAidDataGridView->Size = System::Drawing::Size(1134, 309);
			this->ToDayShowInKindAidDataGridView->TabIndex = 0;
			this->ToDayShowInKindAidDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ToDayShowAid::ToDayShowInKindAidDataGridView_CellContentClick);
			// 
			// aColCaseName
			// 
			this->aColCaseName->HeaderText = L"أسم الحالة";
			this->aColCaseName->Name = L"aColCaseName";
			this->aColCaseName->ReadOnly = true;
			// 
			// aColAidValue
			// 
			this->aColAidValue->HeaderText = L"قيمة المساعدة";
			this->aColAidValue->Name = L"aColAidValue";
			this->aColAidValue->ReadOnly = true;
			// 
			// aColAidType
			// 
			this->aColAidType->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->aColAidType->HeaderText = L"نوع المساعدة";
			this->aColAidType->Name = L"aColAidType";
			this->aColAidType->ReadOnly = true;
			// 
			// aNotes
			// 
			this->aNotes->HeaderText = L"الملاحظات";
			this->aNotes->Name = L"aNotes";
			this->aNotes->ReadOnly = true;
			// 
			// aColIsDelivered
			// 
			this->aColIsDelivered->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->aColIsDelivered->HeaderText = L"تم الاستلام";
			this->aColIsDelivered->Name = L"aColIsDelivered";
			this->aColIsDelivered->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->aColIsDelivered->Width = 78;
			// 
			// aColID
			// 
			this->aColID->HeaderText = L"ID";
			this->aColID->Name = L"aColID";
			this->aColID->ReadOnly = true;
			this->aColID->Visible = false;
			// 
			// aColIsRecurring
			// 
			this->aColIsRecurring->HeaderText = L"IsRecurring";
			this->aColIsRecurring->Name = L"aColIsRecurring";
			this->aColIsRecurring->ReadOnly = true;
			this->aColIsRecurring->Visible = false;
			// 
			// ToDayShowAid
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1169, 773);
			this->Controls->Add(this->ToDayShowFinancialAidPanel);
			this->Controls->Add(this->ToDayShowInKindAidPanel);
			this->Controls->Add(this->ToDayShowAidPagePanal);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ToDayShowAid";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"عرض مساعدات اليوم ";
			this->Shown += gcnew System::EventHandler(this, &ToDayShowAid::ToDayShowAidPage_Load);
			this->ToDayShowAidPagePanal->ResumeLayout(false);
			this->ToDayShowAidPagePanal->PerformLayout();
			this->ToDayShowFinancialAidPanel->ResumeLayout(false);
			this->ToDayShowFinancialAidPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToDayShowFinancialAidDataGridView))->EndInit();
			this->ToDayShowInKindAidPanel->ResumeLayout(false);
			this->ToDayShowInKindAidPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ToDayShowInKindAidDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ToDayShowFinancialAidDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->ColumnIndex == this->fColIsDelivered->Index && e->RowIndex >= 0) {
		DataGridViewCheckBoxCell^ cell = (DataGridViewCheckBoxCell^)
			this->ToDayShowFinancialAidDataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex];

		bool newValue = !Convert::ToBoolean(cell->Value);
		cell->Value = newValue;
		this->ToDayShowFinancialAidDataGridView->RefreshEdit();

		DataGridViewRow^ row = this->ToDayShowFinancialAidDataGridView->Rows[e->RowIndex];
		if (row->Cells[this->fColID->Index]->Value != nullptr && row->Cells[this->fColIsRecurring->Index]->Value != nullptr) {
			int aidId = Convert::ToInt32(row->Cells[this->fColID->Index]->Value);
			bool isRecurring = Convert::ToBoolean(row->Cells[this->fColIsRecurring->Index]->Value);
			String^ frequency = "";

			try {
				Connection::ConfirmFinancialAidReceipt(aidId, isRecurring, frequency);
				MessageBox::Show(L"تم تحديث حالة الاستلام بنجاح", L"تم", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				cell->Value = !newValue;
				this->ToDayShowFinancialAidDataGridView->RefreshEdit();
				MessageBox::Show(L"حدث خطأ أثناء التحديث: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			cell->Value = !newValue;
			this->ToDayShowFinancialAidDataGridView->RefreshEdit();
			MessageBox::Show(L"بيانات غير صالحة", L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}

	private: System::Void ToDayShowInKindAidDataGridView_CellContentClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->ColumnIndex == this->aColIsDelivered->Index && e->RowIndex >= 0)
		{
			DataGridViewCheckBoxCell^ cell = (DataGridViewCheckBoxCell^)
				this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex];

			// تبديل قيمة CheckBox

			bool newValue = !Convert::ToBoolean(cell->Value);
			cell->Value = newValue;
			this->ToDayShowInKindAidDataGridView->RefreshEdit();

			int aidId = Convert::ToInt32(this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[this->aColID->Index]->Value);
			bool isRecurring = Convert::ToBoolean(this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[this->aColIsRecurring->Index]->Value);
			String^ frequency ; // القيمة الافتراضية

			try {
				// استدعاء الدالة لتأكيد الاستلام
				Connection::ConfirmInKindAidReceipt(aidId, isRecurring, frequency);

				// رسالة تأكيد
				MessageBox::Show(L"تم تحديث حالة الاستلام بنجاح", L"تم", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				// إعادة قيمة CheckBox إلى حالتها الأصلية في حالة الخطأ
				cell->Value = !newValue;
				this->ToDayShowInKindAidDataGridView->RefreshEdit();
				MessageBox::Show(L"حدث خطأ أثناء التحديث: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void ToDayShowAidPage_Load(System::Object^ sender, System::EventArgs^ e) {
	try {
		// تحميل المساعدات المالية
		List<FinancialAid^>^ financialAids = Connection::GetTodayFinancialAids();
		this->ToDayShowFinancialAidDataGridView->Rows->Clear();

		for each(FinancialAid ^ aid in financialAids) {
			if (aid != nullptr) {
				int rowIndex = this->ToDayShowFinancialAidDataGridView->Rows->Add();
				DataGridViewRow^ row = this->ToDayShowFinancialAidDataGridView->Rows[rowIndex];

				row->Cells[this->fColCaseName->Index]->Value = aid->CaseName;
				row->Cells[this->fColAidType->Index]->Value = aid->AidType;
				row->Cells[this->fColAmount->Index]->Value = aid->Amount;
				row->Cells[this->fColNotes->Index]->Value = aid->Notes;
				row->Cells[this->fColIsDelivered->Index]->Value = aid->IsOneTimeConfirmed;
				row->Cells[this->fColID->Index]->Value = aid->ID;
				row->Cells[this->fColIsRecurring->Index]->Value = aid->IsRecurring;
			}
		}

		// تحميل المساعدات العينية
		List<InKindAid^>^ inKindAids = Connection::GetTodayInKindAids();
		this->ToDayShowInKindAidDataGridView->Rows->Clear();

		for each(InKindAid ^ aid in inKindAids) {
			if (aid != nullptr) {
				int rowIndex = this->ToDayShowInKindAidDataGridView->Rows->Add();
				DataGridViewRow^ row = this->ToDayShowInKindAidDataGridView->Rows[rowIndex];

				row->Cells[this->aColCaseName->Index]->Value = aid->CaseName;
				row->Cells[this->aColAidValue->Index]->Value = aid->AidContent;
				row->Cells[this->aColAidType->Index]->Value = aid->AidType;
				row->Cells[this->aNotes->Index]->Value = aid->Notes;
				row->Cells[this->aColIsDelivered->Index]->Value = aid->IsOneTimeConfirmed;
				row->Cells[this->aColID->Index]->Value = aid->ID;
				row->Cells[this->aColIsRecurring->Index]->Value = aid->IsRecurring;
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(L"حدث خطأ أثناء تحميل البيانات: " + ex->Message, L"خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
