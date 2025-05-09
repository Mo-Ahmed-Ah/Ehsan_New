// AssistanceTypeForm.h
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Ehsan {

	public ref class AssistanceTypeForm : public System::Windows::Forms::Form
	{
	public:
		AssistanceTypeForm(void)
		{
			InitializeComponent();
			CustomizeUI();
		}

	protected:
		~AssistanceTypeForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Label^ lblNewType;
		Label^ lblCategory;
		ListBox^ lstTypes;
		ComboBox^ cmbCategory;
		TextBox^ txtNewType;
		Button^ btnAdd;
		Button^ btnEdit;
		Button^ btnDelete;
		Button^ btnBack;
		Panel^ panelList;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->Text = L"إدارة أنواع المساعدات";
			this->ClientSize = System::Drawing::Size(700, 450);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::Azure;
			this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			lblTitle = gcnew Label();
			lblTitle->Text = L"✨ أنواع المساعدات - إدارة كاملة ✨";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 16, FontStyle::Bold);
			lblTitle->ForeColor = Color::FromArgb(0, 70, 140);
			lblTitle->BackColor = Color::WhiteSmoke;
			lblTitle->BorderStyle = BorderStyle::FixedSingle;
			lblTitle->Size = Drawing::Size(500, 50);
			lblTitle->Location = Point(100, 20);
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			this->Controls->Add(lblTitle);

			panelList = gcnew Panel();
			panelList->BorderStyle = BorderStyle::FixedSingle;
			panelList->Location = Point(30, 90);
			panelList->Size = Drawing::Size(320, 250);

			lstTypes = gcnew ListBox();
			lstTypes->Dock = DockStyle::Fill;
			lstTypes->Font = gcnew Drawing::Font("Segoe UI", 10);
			lstTypes->Items->AddRange(gcnew array<Object^> {
				L"شهرية", L"إيجار", L"دواء", L"عمليات جراحية", L"طعام", L"جهاز عروسة",
					L"سداد دين", L"رمضان", L"زكاة الفطر", L"عيد الفطر", L"عيد الأضحى",
					L"المدارس", L"الشتاء"
			});
			lstTypes->SelectedIndexChanged += gcnew EventHandler(this, &AssistanceTypeForm::lstTypes_SelectedIndexChanged);
			panelList->Controls->Add(lstTypes);
			this->Controls->Add(panelList);

			lblNewType = gcnew Label();
			lblNewType->Text = L"اسم نوع المساعدة الجديد";
			lblNewType->Location = Point(380, 90);
			lblNewType->Size = Drawing::Size(250, 25);
			this->Controls->Add(lblNewType);

			txtNewType = gcnew TextBox();
			txtNewType->Location = Point(380, 115);
			txtNewType->Size = Drawing::Size(200, 25);
			this->Controls->Add(txtNewType);

			lblCategory = gcnew Label();
			lblCategory->Text = L"التصنيف";
			lblCategory->Location = Point(380, 155);
			lblCategory->Size = Drawing::Size(250, 25);
			this->Controls->Add(lblCategory);

			cmbCategory = gcnew ComboBox();
			cmbCategory->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbCategory->Items->AddRange(gcnew array<Object^> {
				L"دورية", L"موسمية", L"خاصة"
			});
			cmbCategory->SelectedIndex = 0;
			cmbCategory->Location = Point(380, 180);
			cmbCategory->Size = Drawing::Size(200, 25);
			this->Controls->Add(cmbCategory);

			btnAdd = gcnew Button();
			btnAdd->Text = L"➕ إضافة";
			btnAdd->BackColor = Color::Honeydew;
			btnAdd->Location = Point(380, 220);
			btnAdd->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnAdd);
			btnAdd->Click += gcnew EventHandler(this, &AssistanceTypeForm::btnAdd_Click);

			btnEdit = gcnew Button();
			btnEdit->Text = L"✏ تعديل";
			btnEdit->BackColor = Color::LightYellow;
			btnEdit->Location = Point(480, 220);
			btnEdit->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnEdit);
			btnEdit->Click += gcnew EventHandler(this, &AssistanceTypeForm::btnEdit_Click);

			btnDelete = gcnew Button();
			btnDelete->Text = L"❌ حذف";
			btnDelete->BackColor = Color::MistyRose;
			btnDelete->Location = Point(430, 270);
			btnDelete->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnDelete);
			btnDelete->Click += gcnew EventHandler(this, &AssistanceTypeForm::btnDelete_Click);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة للرئيسية";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(430, 320);
			btnBack->Size = Drawing::Size(140, 35);
			this->Controls->Add(btnBack);
			btnBack->Click += gcnew EventHandler(this, &AssistanceTypeForm::btnBack_Click);
		}
#pragma endregion

	private:
		void lstTypes_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			if (lstTypes->SelectedIndex != -1)
			{
				txtNewType->Text = lstTypes->SelectedItem->ToString();
			}
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}

		void btnAdd_Click(Object^ sender, EventArgs^ e)
		{
			String^ newType = txtNewType->Text->Trim();
			if (newType == "") {
				MessageBox::Show("يرجى إدخال اسم النوع", "تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			if (!lstTypes->Items->Contains(newType)) {
				lstTypes->Items->Add(newType);
				txtNewType->Clear();
			}
			else {
				MessageBox::Show("هذا النوع موجود مسبقا", "ملاحظة", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		void btnEdit_Click(Object^ sender, EventArgs^ e)
		{
			if (lstTypes->SelectedIndex != -1) {
				String^ newValue = txtNewType->Text->Trim();
				if (newValue != "") {
					lstTypes->Items[lstTypes->SelectedIndex] = newValue;
					txtNewType->Clear();
				}
			}
			else {
				MessageBox::Show("يرجى اختيار نوع لتعديله", "تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		void btnDelete_Click(Object^ sender, EventArgs^ e)
		{
			if (lstTypes->SelectedIndex != -1) {
				if (MessageBox::Show("هل أنت متأكد من حذف هذا النوع؟", "تأكيد", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					lstTypes->Items->RemoveAt(lstTypes->SelectedIndex);
					txtNewType->Clear();
				}
			}
			else {
				MessageBox::Show("يرجى اختيار نوع لحذفه", "تنبيه", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		void CustomizeUI()
		{
			btnAdd->Cursor = Cursors::Hand;
			btnEdit->Cursor = Cursors::Hand;
			btnDelete->Cursor = Cursors::Hand;
			btnBack->Cursor = Cursors::Hand;
		}
	};
}

/* #pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Ehsan {

	public ref class AssistanceTypeForm : public System::Windows::Forms::Form
	{
	public:
		AssistanceTypeForm(void)
		{
			InitializeComponent();
			CustomizeUI();
		}

	protected:
		~AssistanceTypeForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Label^ lblNewType;
		Label^ lblCategory;
		ListBox^ lstTypes;
		ComboBox^ cmbCategory;
		TextBox^ txtNewType;
		Button^ btnAdd;
		Button^ btnEdit;
		Button^ btnDelete;
		Button^ btnBack;
		Panel^ panelList;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->Text = L"إدارة أنواع المساعدات";
			this->ClientSize = System::Drawing::Size(700, 450);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::Azure;
			this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			lblTitle = gcnew Label();
			lblTitle->Text = L"✨ أنواع المساعدات - إدارة كاملة ✨";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 16, FontStyle::Bold);
			lblTitle->ForeColor = Color::FromArgb(0, 70, 140);
			lblTitle->BackColor = Color::WhiteSmoke;
			lblTitle->BorderStyle = BorderStyle::FixedSingle;
			lblTitle->Size = Drawing::Size(500, 50);
			lblTitle->Location = Point(100, 20);
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			this->Controls->Add(lblTitle);

			panelList = gcnew Panel();
			panelList->BorderStyle = BorderStyle::FixedSingle;
			panelList->Location = Point(30, 90);
			panelList->Size = Drawing::Size(320, 250);

			lstTypes = gcnew ListBox();
			lstTypes->Dock = DockStyle::Fill;
			lstTypes->Font = gcnew Drawing::Font("Segoe UI", 10);
			lstTypes->Items->AddRange(gcnew array<Object^> {
				L"شهرية", L"إيجار", L"دواء", L"عمليات جراحية", L"طعام", L"جهاز عروسة",
					L"سداد دين", L"رمضان", L"زكاة الفطر", L"عيد الفطر", L"عيد الأضحى",
					L"المدارس", L"الشتاء"
			});
			lstTypes->SelectedIndexChanged += gcnew EventHandler(this, &AssistanceTypeForm::lstTypes_SelectedIndexChanged);
			panelList->Controls->Add(lstTypes);
			this->Controls->Add(panelList);

			lblNewType = gcnew Label();
			lblNewType->Text = L"اسم نوع المساعدة الجديد";
			lblNewType->Location = Point(380, 90);
			lblNewType->Size = Drawing::Size(250, 25);
			this->Controls->Add(lblNewType);

			txtNewType = gcnew TextBox();
			txtNewType->Location = Point(380, 115);
			txtNewType->Size = Drawing::Size(200, 25);
			this->Controls->Add(txtNewType);

			lblCategory = gcnew Label();
			lblCategory->Text = L"التصنيف";
			lblCategory->Location = Point(380, 155);
			lblCategory->Size = Drawing::Size(250, 25);
			this->Controls->Add(lblCategory);

			cmbCategory = gcnew ComboBox();
			cmbCategory->DropDownStyle = ComboBoxStyle::DropDownList;
			cmbCategory->Items->AddRange(gcnew array<Object^> {
				L"دورية", L"موسمية", L"خاصة"
			});
			cmbCategory->SelectedIndex = 0;
			cmbCategory->Location = Point(380, 180);
			cmbCategory->Size = Drawing::Size(200, 25);
			this->Controls->Add(cmbCategory);

			btnAdd = gcnew Button();
			btnAdd->Text = L"➕ إضافة";
			btnAdd->BackColor = Color::Honeydew;
			btnAdd->Location = Point(380, 220);
			btnAdd->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnAdd);

			btnEdit = gcnew Button();
			btnEdit->Text = L"✏ تعديل";
			btnEdit->BackColor = Color::LightYellow;
			btnEdit->Location = Point(480, 220);
			btnEdit->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnEdit);

			btnDelete = gcnew Button();
			btnDelete->Text = L"❌ حذف";
			btnDelete->BackColor = Color::MistyRose;
			btnDelete->Location = Point(430, 270);
			btnDelete->Size = Drawing::Size(90, 35);
			this->Controls->Add(btnDelete);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة للرئيسية";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(430, 320);
			btnBack->Size = Drawing::Size(140, 35);
			btnBack->Click += gcnew EventHandler(this, &AssistanceTypeForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}
#pragma endregion

		void lstTypes_SelectedIndexChanged(Object^ sender, EventArgs^ e)
		{
			if (lstTypes->SelectedIndex != -1)
			{
				txtNewType->Text = lstTypes->SelectedItem->ToString();
			}
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}

		void CustomizeUI()
		{
			// يمكن إضافة تحسينات الشكل لاحقًا هنا
		}
	};
}*/


//خليت السطر ده هنا عشان ده مشكلة بتظهر كل مره للغة في الكود وده الحل
//this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;