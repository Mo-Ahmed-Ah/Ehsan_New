// SearchCaseForm.h
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Globalization;

namespace Ehsan {

	public ref class SearchCaseForm : public System::Windows::Forms::Form
	{
	public:
		SearchCaseForm(void)
		{
			InitializeComponent();
		}

	protected:
		~SearchCaseForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Label^ lblName;
		Label^ lblID;
		Label^ lblAidType;
		Label^ lblDate;
		Label^ lblStatus;
		Label^ lblResultCount;
		TextBox^ txtName;
		TextBox^ txtID;
		ComboBox^ cmbAidType;
		ComboBox^ cmbStatus;
		DateTimePicker^ dtDate;
		Button^ btnSearch;
		Button^ btnClear;
		Button^ btnExport;
		Button^ btnBack;
		DataGridView^ dgvResults;
		GroupBox^ grpResults;
		ToolTip^ tooltip;

		void InitializeComponent(void)
		{
			this->Text = L"البحث عن حالة";
			this->ClientSize = System::Drawing::Size(980, 680);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::White;
			this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			tooltip = gcnew ToolTip();

			lblTitle = gcnew Label();
			lblTitle->Text = L"🔍 البحث عن حالة";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
			lblTitle->ForeColor = Color::White;
			lblTitle->BackColor = Color::SteelBlue;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			this->Controls->Add(lblTitle);

			lblName = gcnew Label();
			lblName->Text = L"👤 الاسم:";
			lblName->Location = Point(650, 80);
			lblName->Size = Drawing::Size(100, 25);
			this->Controls->Add(lblName);

			txtName = gcnew TextBox();
			txtName->Location = Point(500, 110);
			txtName->Size = Drawing::Size(260, 25);
			tooltip->SetToolTip(txtName, "اكتب جزء من الاسم، مثل: أحمد");
			this->Controls->Add(txtName);

			lblID = gcnew Label();
			lblID->Text = L"🆔 الرقم القومي:";
			lblID->Location = Point(650, 150);
			lblID->Size = Drawing::Size(100, 25);
			this->Controls->Add(lblID);

			txtID = gcnew TextBox();
			txtID->Location = Point(500, 180);
			txtID->Size = Drawing::Size(260, 25);
			tooltip->SetToolTip(txtID, "أدخل الرقم القومي المكون من 14 رقم");
			this->Controls->Add(txtID);

			lblAidType = gcnew Label();
			lblAidType->Text = L"🎁 نوع المساعدة:";
			lblAidType->Location = Point(250, 80);
			lblAidType->Size = Drawing::Size(120, 25);
			this->Controls->Add(lblAidType);

			cmbAidType = gcnew ComboBox();
			cmbAidType->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbAidType->Items->AddRange(gcnew array<Object^> {
				L"الكل", L"مالية", L"عينية", L"موسمية", L"خاصة"
			});
			cmbAidType->SelectedIndex = 0;
			cmbAidType->Location = Point(120, 110);
			cmbAidType->Size = Drawing::Size(260, 25);
			this->Controls->Add(cmbAidType);

			lblDate = gcnew Label();
			lblDate->Text = L"📅 التاريخ:";
			lblDate->Location = Point(250, 150);
			lblDate->Size = Drawing::Size(100, 25);
			this->Controls->Add(lblDate);

			dtDate = gcnew DateTimePicker();
			dtDate->Format = DateTimePickerFormat::Short;
			dtDate->Location = Point(120, 180);
			dtDate->Size = Drawing::Size(260, 25);
			this->Controls->Add(dtDate);

			lblStatus = gcnew Label();
			lblStatus->Text = L"⚙️ الحالة:";
			lblStatus->Location = Point(250, 220);
			lblStatus->Size = Drawing::Size(100, 25);
			this->Controls->Add(lblStatus);

			cmbStatus = gcnew ComboBox();
			cmbStatus->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbStatus->Items->AddRange(gcnew array<Object^> { L"الكل", L"نشطة", L"غير نشطة" });
			cmbStatus->SelectedIndex = 0;
			cmbStatus->Location = Point(120, 250);
			cmbStatus->Size = Drawing::Size(260, 25);
			this->Controls->Add(cmbStatus);

			btnSearch = gcnew Button();
			btnSearch->Text = L"🔍 بحث";
			btnSearch->BackColor = Color::LightSkyBlue;
			btnSearch->Location = Point(500, 230);
			btnSearch->Size = Drawing::Size(120, 35);
			this->Controls->Add(btnSearch);

			btnClear = gcnew Button();
			btnClear->Text = L"🔄 إعادة تعيين";
			btnClear->BackColor = Color::WhiteSmoke;
			btnClear->Location = Point(640, 230);
			btnClear->Size = Drawing::Size(120, 35);
			this->Controls->Add(btnClear);

			grpResults = gcnew GroupBox();
			grpResults->Text = L"📋 نتائج البحث";
			grpResults->Font = gcnew Drawing::Font("Segoe UI", 11, FontStyle::Bold);
			grpResults->ForeColor = Color::DarkSlateGray;
			grpResults->Location = Point(30, 290);
			grpResults->Size = Drawing::Size(900, 300);

			dgvResults = gcnew DataGridView();
			dgvResults->Dock = DockStyle::Fill;
			dgvResults->ReadOnly = true;
			dgvResults->AllowUserToAddRows = false;
			dgvResults->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dgvResults->AlternatingRowsDefaultCellStyle->BackColor = Color::WhiteSmoke;
			dgvResults->ColumnHeadersDefaultCellStyle->BackColor = Color::LightSteelBlue;
			dgvResults->ColumnHeadersDefaultCellStyle->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
			grpResults->Controls->Add(dgvResults);
			this->Controls->Add(grpResults);

			lblResultCount = gcnew Label();
			lblResultCount->Text = L"🔢 عدد النتائج: 0";
			lblResultCount->Font = gcnew Drawing::Font("Segoe UI", 9, FontStyle::Italic);
			lblResultCount->ForeColor = Color::DimGray;
			lblResultCount->Location = Point(40, 600);
			lblResultCount->Size = Drawing::Size(200, 25);
			this->Controls->Add(lblResultCount);

			btnExport = gcnew Button();
			btnExport->Text = L"📄 تصدير النتائج";
			btnExport->BackColor = Color::PaleGreen;
			btnExport->Location = Point(760, 600);
			btnExport->Size = Drawing::Size(160, 35);
			this->Controls->Add(btnExport);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة للرئيسية";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(580, 600);
			btnBack->Size = Drawing::Size(160, 35);
			btnBack->Click += gcnew EventHandler(this, &SearchCaseForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}
	};
}
