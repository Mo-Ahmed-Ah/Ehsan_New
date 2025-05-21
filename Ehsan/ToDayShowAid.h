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
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ WasCeceived;
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





















	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn5;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn6;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ dataGridViewCheckBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCaseName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAidType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAmount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNotes;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ colIsDelivered;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ colIsRecurring;































































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
			this->ToDayShowAidPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->ToDayShowAidPagePanal = (gcnew System::Windows::Forms::Panel());
			this->ToDayShowFinancialAidPanel = (gcnew System::Windows::Forms::Panel());
			this->ToDayShowFinancialAidLabel = (gcnew System::Windows::Forms::Label());
			this->ToDayShowFinancialAidDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->CaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AidAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WasCeceived = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->IsRecurring = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->NextDueDate = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->ToDayShowInKindAidPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ToDayShowInKindAidDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewCheckBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->dataGridViewCheckBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->dataGridViewCheckBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->colIsRecurring = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->colIsDelivered = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->colID = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->colNotes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAidType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCaseName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->ToDayShowFinancialAidDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ToDayShowFinancialAidDataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ToDayShowFinancialAidDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ToDayShowFinancialAidDataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->ToDayShowFinancialAidDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ToDayShowFinancialAidDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colCaseName,
					this->colAidType, this->colAmount, this->colNotes, this->colID, this->colIsDelivered, this->colIsRecurring
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
			this->ToDayShowFinancialAidDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ToDayShowAid::ToDayShowInKindAidDataGridView_CellContentClick);
			// 
			// CaseName
			// 
			this->CaseName->HeaderText = L"أسم الحالة";
			this->CaseName->Name = L"CaseName";
			this->CaseName->ReadOnly = true;
			// 
			// AidAmount
			// 
			this->AidAmount->HeaderText = L"قيمة المساعدة";
			this->AidAmount->Name = L"AidAmount";
			this->AidAmount->ReadOnly = true;
			// 
			// AidType
			// 
			this->AidType->HeaderText = L"نوع المساعدة ";
			this->AidType->Name = L"AidType";
			this->AidType->ReadOnly = true;
			// 
			// Notes
			// 
			this->Notes->HeaderText = L"الملاحظات";
			this->Notes->Name = L"Notes";
			this->Notes->ReadOnly = true;
			// 
			// WasCeceived
			// 
			this->WasCeceived->HeaderText = L"تم الاستلام";
			this->WasCeceived->Name = L"WasCeceived";
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Visible = false;
			// 
			// IsRecurring
			// 
			this->IsRecurring->HeaderText = L"IsRecurring";
			this->IsRecurring->Name = L"IsRecurring";
			this->IsRecurring->ReadOnly = true;
			this->IsRecurring->Visible = false;
			// 
			// NextDueDate
			// 
			this->NextDueDate->HeaderText = L"Column1";
			this->NextDueDate->Name = L"NextDueDate";
			this->NextDueDate->ReadOnly = true;
			this->NextDueDate->Visible = false;
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
			this->label3->Location = System::Drawing::Point(486, -2);
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
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewCheckBoxColumn5,
					this->dataGridViewCheckBoxColumn6, this->dataGridViewCheckBoxColumn7
			});
			this->ToDayShowInKindAidDataGridView->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->ToDayShowInKindAidDataGridView->Location = System::Drawing::Point(3, 34);
			this->ToDayShowInKindAidDataGridView->Name = L"ToDayShowInKindAidDataGridView";
			this->ToDayShowInKindAidDataGridView->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->ToDayShowInKindAidDataGridView->Size = System::Drawing::Size(1134, 309);
			this->ToDayShowInKindAidDataGridView->TabIndex = 0;
			this->ToDayShowInKindAidDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ToDayShowAid::ToDayShowInKindAidDataGridView_CellContentClick);
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"أسم الحالة";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"قيمة المساعدة";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"نوع المساعدة";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"الملاحظات";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewCheckBoxColumn5
			// 
			this->dataGridViewCheckBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewCheckBoxColumn5->HeaderText = L"تم الاستلام";
			this->dataGridViewCheckBoxColumn5->Name = L"dataGridViewCheckBoxColumn5";
			this->dataGridViewCheckBoxColumn5->Width = 59;
			// 
			// dataGridViewCheckBoxColumn6
			// 
			this->dataGridViewCheckBoxColumn6->HeaderText = L"ID";
			this->dataGridViewCheckBoxColumn6->Name = L"dataGridViewCheckBoxColumn6";
			this->dataGridViewCheckBoxColumn6->ReadOnly = true;
			this->dataGridViewCheckBoxColumn6->Visible = false;
			// 
			// dataGridViewCheckBoxColumn7
			// 
			this->dataGridViewCheckBoxColumn7->HeaderText = L"IsRecurring";
			this->dataGridViewCheckBoxColumn7->Name = L"dataGridViewCheckBoxColumn7";
			this->dataGridViewCheckBoxColumn7->ReadOnly = true;
			this->dataGridViewCheckBoxColumn7->Visible = false;
			// 
			// colIsRecurring
			// 
			this->colIsRecurring->HeaderText = L"IsRecurring";
			this->colIsRecurring->Name = L"colIsRecurring";
			this->colIsRecurring->Visible = false;
			// 
			// colIsDelivered
			// 
			this->colIsDelivered->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->colIsDelivered->HeaderText = L"تم الأستلام";
			this->colIsDelivered->Name = L"colIsDelivered";
			this->colIsDelivered->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->colIsDelivered->Width = 219;
			// 
			// colID
			// 
			this->colID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			this->colID->Visible = false;
			// 
			// colNotes
			// 
			this->colNotes->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->colNotes->Frozen = true;
			this->colNotes->HeaderText = L"ملاحظات";
			this->colNotes->Name = L"colNotes";
			this->colNotes->Width = 218;
			// 
			// colAmount
			// 
			this->colAmount->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->colAmount->Frozen = true;
			this->colAmount->HeaderText = L"قيمة المساعدة";
			this->colAmount->Name = L"colAmount";
			this->colAmount->Width = 218;
			// 
			// colAidType
			// 
			this->colAidType->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->colAidType->Frozen = true;
			this->colAidType->HeaderText = L"نوع المساعدة";
			this->colAidType->Name = L"colAidType";
			this->colAidType->Width = 218;
			// 
			// colCaseName
			// 
			this->colCaseName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->colCaseName->Frozen = true;
			this->colCaseName->HeaderText = L"اسم الحالة";
			this->colCaseName->Name = L"colCaseName";
			this->colCaseName->Width = 218;
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
			this->ToDayShowFinancialAidDataGridView->CellContentClick +=
				gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ToDayShowAid::ToDayShowFinancialAidDataGridView_CellContentClick);
		}
#pragma endregion
	private: System::Void ToDayShowFinancialAidDataGridView_CellContentClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		// التحقق من أن النقر كان على عمود "تم الاستلام" وأن الصف صالح
		if (e->ColumnIndex == 4 && e->RowIndex >= 0) // 4 هو مؤشر عمود colIsDelivered
		{
			DataGridViewCheckBoxCell^ cell = (DataGridViewCheckBoxCell^)
				this->ToDayShowFinancialAidDataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex];

			bool newValue = !(bool)cell->Value;

			// الحصول على بيانات الصف
			int aidId = Convert::ToInt32(this->ToDayShowFinancialAidDataGridView->Rows[e->RowIndex]->Cells[5]->Value); // 5 هو مؤشر عمود colID
			bool isRecurring = Convert::ToBoolean(this->ToDayShowFinancialAidDataGridView->Rows[e->RowIndex]->Cells[6]->Value); // 6 هو مؤشر عمود colIsRecurring
			String^ frequency = "شهرياً"; // يجب استبدال هذا بالقيمة الفعلية من قاعدة البيانات

			// تحديث قاعدة البيانات
			Connection::ConfirmFinancialAidReceipt(aidId, isRecurring, frequency);

			// تحديث القيمة في الـ DataGridView
			cell->Value = newValue;
			this->ToDayShowFinancialAidDataGridView->RefreshEdit();

			// تحديث البيانات إذا لزم الأمر
			this->ToDayShowAidPage_Load(nullptr, nullptr);
		}
	}

	private: System::Void ToDayShowInKindAidDataGridView_CellContentClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->ColumnIndex == 4 && e->RowIndex >= 0) // 4 هو مؤشر عمود dataGridViewCheckBoxColumn5
		{
			DataGridViewCheckBoxCell^ cell = (DataGridViewCheckBoxCell^)
				this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[e->ColumnIndex];

			bool newValue = !(bool)cell->Value;

			int aidId = Convert::ToInt32(this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[5]->Value); // 5 هو مؤشر عمود dataGridViewCheckBoxColumn6
			bool isRecurring = Convert::ToBoolean(this->ToDayShowInKindAidDataGridView->Rows[e->RowIndex]->Cells[6]->Value); // 6 هو مؤشر عمود dataGridViewCheckBoxColumn7
			String^ frequency = "شهرياً"; // يجب استبدال هذا بالقيمة الفعلية من قاعدة البيانات

			Connection::ConfirmInKindAidReceipt(aidId, isRecurring, frequency);

			cell->Value = newValue;
			this->ToDayShowInKindAidDataGridView->RefreshEdit();
			this->ToDayShowAidPage_Load(nullptr, nullptr);
		}
	}
private: System::Void ToDayShowAidPage_Load(System::Object^ sender, System::EventArgs^ e) {
	try {

		// تحميل المساعدات المالية
		List<FinancialAid^>^ financialAids = Connection::GetTodayFinancialAids();
		this->ToDayShowFinancialAidDataGridView->Rows->Clear();

		for each(FinancialAid ^ aid in financialAids) {

			if (aid != nullptr) {
				this->ToDayShowFinancialAidDataGridView->Rows->Add(
					aid->CaseName,
					aid->Amount,
					aid->AidType,
					aid->Notes,
					aid->IsOneTimeConfirmed,
					aid->ID,
					aid->IsRecurring,
					aid->NextDueDate
				);
			}
		}

		// تحميل المساعدات العينية
		List<InKindAid^>^ inKindAids = Connection::GetTodayInKindAids();
		this->ToDayShowInKindAidDataGridView->Rows->Clear();

		for each(InKindAid ^ aid in inKindAids) {
			if (aid != nullptr) {
				this->ToDayShowInKindAidDataGridView->Rows->Add(
					aid->CaseName,
					aid->AidType,
					aid->AidContent,
					aid->Notes,
					aid->IsOneTimeConfirmed,
					aid->ID,
					aid->IsRecurring
				);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("حدث خطأ أثناء تحميل البيانات: " + ex->Message, "خطأ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
