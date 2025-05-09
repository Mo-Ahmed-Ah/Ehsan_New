// ManageCasesForm.h - تحسينات احترافية
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Ehsan {

	public ref class ManageCasesForm : public System::Windows::Forms::Form
	{
	public:
		ManageCasesForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ManageCasesForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Label^ lblSearch;
		Label^ lblStats;
		TextBox^ txtSearch;
		ComboBox^ cmbStatus;
		Button^ btnBack;
		Button^ btnExport;
		DataGridView^ dgvCases;
		ToolTip^ tip;

		void InitializeComponent(void)
		{
			this->Text = L"🧾 إدارة الحالات";
			this->ClientSize = Drawing::Size(1000, 680);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::WhiteSmoke;
			this->Font = gcnew Drawing::Font("Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			tip = gcnew ToolTip();

			lblTitle = gcnew Label();
			lblTitle->Text = L"📋 إدارة الحالات";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
			lblTitle->ForeColor = Color::White;
			lblTitle->BackColor = Color::Teal;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			this->Controls->Add(lblTitle);

			lblStats = gcnew Label();
			lblStats->Text = L"📊 عدد الحالات: 102 | النشطة: 94 | غير نشطة: 8";
			lblStats->ForeColor = Color::DimGray;
			lblStats->Font = gcnew Drawing::Font("Segoe UI", 9);
			lblStats->Location = Point(30, 65);
			lblStats->AutoSize = true;
			this->Controls->Add(lblStats);

			lblSearch = gcnew Label();
			lblSearch->Text = L"🔎 بحث باسم أو رقم قومي:";
			lblSearch->Location = Point(640, 90);
			lblSearch->Size = Drawing::Size(300, 25);
			this->Controls->Add(lblSearch);

			txtSearch = gcnew TextBox();
			txtSearch->Location = Point(320, 120);
			txtSearch->Size = Drawing::Size(620, 28);
			txtSearch->Font = gcnew Drawing::Font("Segoe UI", 11);
			txtSearch->BackColor = Color::White;
			txtSearch->BorderStyle = BorderStyle::FixedSingle;
			tip->SetToolTip(txtSearch, "اكتب الاسم أو الرقم القومي لفلترة الحالات");
			this->Controls->Add(txtSearch);

			cmbStatus = gcnew ComboBox();
			cmbStatus->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbStatus->Items->AddRange(gcnew array<Object^> { L"الكل", L"نشطة", L"غير نشطة" });
			cmbStatus->SelectedIndex = 0;
			cmbStatus->Location = Point(30, 120);
			cmbStatus->Size = Drawing::Size(260, 28);
			tip->SetToolTip(cmbStatus, "فلتر حسب حالة التفعيل");
			this->Controls->Add(cmbStatus);

			dgvCases = gcnew DataGridView();
			dgvCases->Location = Point(30, 170);
			dgvCases->Size = Drawing::Size(920, 400);
			dgvCases->ReadOnly = true;
			dgvCases->AllowUserToAddRows = false;
			dgvCases->RowHeadersVisible = false;
			dgvCases->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dgvCases->AlternatingRowsDefaultCellStyle->BackColor = Color::WhiteSmoke;
			dgvCases->BackgroundColor = Color::White;
			dgvCases->ColumnCount = 6;
			dgvCases->Columns[0]->Name = "ID";
			dgvCases->Columns[1]->Name = "الاسم الكامل";
			dgvCases->Columns[2]->Name = "الرقم القومي";
			dgvCases->Columns[3]->Name = "عدد الأفراد";
			dgvCases->Columns[4]->Name = "مفعل؟";
			dgvCases->Columns[5]->Name = "إجراءات";
			this->Controls->Add(dgvCases);

			btnExport = gcnew Button();
			btnExport->Text = L"📄 تصدير PDF";
			btnExport->BackColor = Color::PaleGreen;
			btnExport->Location = Point(780, 590);
			btnExport->Size = Drawing::Size(140, 35);
			tip->SetToolTip(btnExport, "تحميل نسخة من الحالات الحالية");
			this->Controls->Add(btnExport);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(30, 590);
			btnBack->Size = Drawing::Size(140, 35);
			btnBack->Click += gcnew EventHandler(this, &ManageCasesForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}
	};
}
