#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Ehsan {

	public ref class ManageAssistancesForm : public System::Windows::Forms::Form
	{
	public:
		ManageAssistancesForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ManageAssistancesForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;

		Label^ lblTitle;
		GroupBox^ grpAdd;
		GroupBox^ grpRecent;
		ComboBox^ cmbCase;
		ComboBox^ cmbCategory;
		NumericUpDown^ numAmount;
		TextBox^ txtContent;
		DateTimePicker^ dtDate;
		Button^ btnSave;
		Button^ btnBack;
		RadioButton^ radMoney;
		RadioButton^ radItem;
		DataGridView^ dgvRecent;
		TextBox^ txtFilter;
		ToolTip^ tip;

		void InitializeComponent(void)
		{
			this->Text = L"🎁 إدارة المساعدات";
			this->ClientSize = Drawing::Size(1000, 650);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::WhiteSmoke;
			this->Font = gcnew Drawing::Font("Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			tip = gcnew ToolTip();

			lblTitle = gcnew Label();
			lblTitle->Text = L"🎁 إدارة المساعدات (إضافة - تعديل - حذف)";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
			lblTitle->ForeColor = Color::White;
			lblTitle->BackColor = Color::Teal;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			this->Controls->Add(lblTitle);

			// القسم الأيمن - إضافة
			grpAdd = gcnew GroupBox();
			grpAdd->Text = L"➕ إضافة مساعدة لحالة";
			grpAdd->Location = Point(30, 80);
			grpAdd->Size = Drawing::Size(420, 500);

			cmbCase = gcnew ComboBox();
			cmbCase->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbCase->Location = Point(30, 40);
			cmbCase->Size = Drawing::Size(350, 28);
			tip->SetToolTip(cmbCase, "اختر الحالة التي ستحصل على المساعدة");

			cmbCategory = gcnew ComboBox();
			cmbCategory->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbCategory->Items->AddRange(gcnew array<Object^> { L"موسمية", L"دورية", L"خاصة" });
			cmbCategory->SelectedIndex = 0;
			cmbCategory->Location = Point(30, 85);
			cmbCategory->Size = Drawing::Size(350, 28);

			radMoney = gcnew RadioButton();
			radMoney->Text = L"💵 مساعدة مالية";
			radMoney->Location = Point(30, 130);
			radMoney->Checked = true;

			radItem = gcnew RadioButton();
			radItem->Text = L"📦 مساعدة عينية";
			radItem->Location = Point(200, 130);

			numAmount = gcnew NumericUpDown();
			numAmount->Location = Point(30, 170);
			numAmount->Size = Drawing::Size(200, 28);
			numAmount->Minimum = 0;
			numAmount->Maximum = 100000;

			txtContent = gcnew TextBox();
			txtContent->Location = Point(30, 170);
			txtContent->Size = Drawing::Size(350, 28);
			txtContent->Visible = false;

			dtDate = gcnew DateTimePicker();
			dtDate->Format = DateTimePickerFormat::Short;
			dtDate->Location = Point(30, 215);
			dtDate->Size = Drawing::Size(200, 28);

			btnSave = gcnew Button();
			btnSave->Text = L"💾 حفظ المساعدة";
			btnSave->BackColor = Color::PaleGreen;
			btnSave->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
			btnSave->Location = Point(30, 270);
			btnSave->Size = Drawing::Size(200, 40);

			grpAdd->Controls->AddRange(gcnew array<Control^> {
				cmbCase, cmbCategory, radMoney, radItem,
					numAmount, txtContent, dtDate, btnSave
			});
			this->Controls->Add(grpAdd);

			// القسم الأيسر - المساعدات الأخيرة
			grpRecent = gcnew GroupBox();
			grpRecent->Text = L"📋 آخر المساعدات المضافة";
			grpRecent->Location = Point(470, 80);
			grpRecent->Size = Drawing::Size(500, 500);

			txtFilter = gcnew TextBox();
			txtFilter->Location = Point(30, 30);
			txtFilter->Size = Drawing::Size(440, 28);
			txtFilter->Text = L"اكتب للبحث داخل المساعدات...";
			txtFilter->ForeColor = Color::Gray;
			txtFilter->GotFocus += gcnew EventHandler(this, &ManageAssistancesForm::ClearPlaceholder);
			txtFilter->LostFocus += gcnew EventHandler(this, &ManageAssistancesForm::RestorePlaceholder);


			dgvRecent = gcnew DataGridView();
			dgvRecent->Location = Point(30, 70);
			dgvRecent->Size = Drawing::Size(440, 380);
			dgvRecent->ReadOnly = true;
			dgvRecent->AllowUserToAddRows = false;
			dgvRecent->RowHeadersVisible = false;
			dgvRecent->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dgvRecent->AlternatingRowsDefaultCellStyle->BackColor = Color::WhiteSmoke;

			grpRecent->Controls->Add(txtFilter);
			grpRecent->Controls->Add(dgvRecent);
			this->Controls->Add(grpRecent);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(420, 600);
			btnBack->Size = Drawing::Size(160, 35);
			btnBack->Click += gcnew EventHandler(this, &ManageAssistancesForm::btnBack_Click);
			this->Controls->Add(btnBack);

			radMoney->CheckedChanged += gcnew EventHandler(this, &ManageAssistancesForm::ToggleAidType);
			radItem->CheckedChanged += gcnew EventHandler(this, &ManageAssistancesForm::ToggleAidType);
		}

		void ToggleAidType(Object^ sender, EventArgs^ e)
		{
			bool isMoney = radMoney->Checked;
			numAmount->Visible = isMoney;
			txtContent->Visible = !isMoney;
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}
		void ClearPlaceholder(Object^ sender, EventArgs^ e)
		{
			if (txtFilter->Text == L"اكتب للبحث داخل المساعدات...")
			{
				txtFilter->Text = "";
				txtFilter->ForeColor = Color::Black;
			}
		}

		void RestorePlaceholder(Object^ sender, EventArgs^ e)
		{
			if (txtFilter->Text->Trim() == "")
			{
				txtFilter->Text = L"اكتب للبحث داخل المساعدات...";
				txtFilter->ForeColor = Color::Gray;
			}
		}

	};
}
