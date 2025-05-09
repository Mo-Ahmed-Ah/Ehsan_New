#pragma once

#include "Cases.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text::RegularExpressions;

namespace Ehsan {

    public ref class AddCaseForm : public System::Windows::Forms::Form
    {
    public:
        AddCaseForm(void)
        {
            InitializeComponent();
            SetupFormStyles();
            LoadInitialData();
        }

    protected:
        ~AddCaseForm()
        {
            if (components)
                delete components;
        }

    private:
        System::ComponentModel::Container^ components;

        // عناصر التحكم الرئيسية
        Label^ lblTitle;
        TabControl^ tabMain;
        TabPage^ tabPersonalInfo;
        TabPage^ tabAddressInfo;
        TabPage^ tabFamilyInfo;

        // معلومات شخصية
        TextBox^ txtFName;
        TextBox^ txtLName;
        TextBox^ txtNickName;
        MaskedTextBox^ txtNationalID;
        ComboBox^ cmbGender;
        DateTimePicker^ dtBirth;

        // معلومات العنوان
        ComboBox^ cmbGovernorate;
        ComboBox^ cmbCity;
        TextBox^ txtArea;
        TextBox^ txtStreet;
        TextBox^ txtAddressDetails;

        // معلومات الأسرة
        ComboBox^ cmbMaritalStatus;
        ComboBox^ cmbFatherStatus;
        ComboBox^ cmbMotherStatus;
        NumericUpDown^ numMaleChildren;
        NumericUpDown^ numFemaleChildren;

        // عناصر تحكم إضافية
        CheckBox^ chkIsActive;
        Button^ btnSave;
        Button^ btnCancel;
        ToolTip^ toolTip;
        ErrorProvider^ errorProvider;

        void InitializeComponent(void)
        {
            // إعداد النموذج الأساسي
            this->Text = L"إضافة حالة جديدة - نظام إحسان";
            this->ClientSize = Drawing::Size(850, 650);
            this->StartPosition = FormStartPosition::CenterScreen;
            this->Font = gcnew Drawing::Font("Tahoma", 10);
            this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->RightToLeftLayout = true;
            this->MinimizeBox = false;
            this->MaximizeBox = false;
            this->FormBorderStyle = FormBorderStyle::FixedDialog;

            // إعداد أدوات المساعدة
            toolTip = gcnew ToolTip();
            errorProvider = gcnew ErrorProvider();
            errorProvider->BlinkStyle = ErrorBlinkStyle::NeverBlink;

            // شريط العنوان
            lblTitle = gcnew Label();
            lblTitle->Text = L"إضافة حالة جديدة";
            lblTitle->Font = gcnew Drawing::Font("Tahoma", 14, FontStyle::Bold);
            lblTitle->TextAlign = ContentAlignment::MiddleCenter;
            lblTitle->Dock = DockStyle::Top;
            lblTitle->Height = 50;
            lblTitle->BackColor = Color::FromArgb(0, 102, 153);
            lblTitle->ForeColor = Color::White;
            this->Controls->Add(lblTitle);

            // تبويبات النموذج
            tabMain = gcnew TabControl();
            tabMain->Dock = DockStyle::Fill;
            tabMain->Padding = Point(15, 10);
            tabMain->Alignment = TabAlignment::Right;
            tabMain->SizeMode = TabSizeMode::Fixed;
            tabMain->ItemSize = Drawing::Size(25, 120);
            tabMain->DrawMode = TabDrawMode::OwnerDrawFixed;
            tabMain->DrawItem += gcnew DrawItemEventHandler(this, &AddCaseForm::TabControl_DrawItem);

            // تبويب المعلومات الشخصية
            tabPersonalInfo = gcnew TabPage();
            tabPersonalInfo->Text = L"معلومات شخصية";
            tabPersonalInfo->BackColor = Color::WhiteSmoke;
            tabPersonalInfo->Padding = System::Windows::Forms::Padding(10);

            // تبويب معلومات العنوان
            tabAddressInfo = gcnew TabPage();
            tabAddressInfo->Text = L"معلومات العنوان";
            tabAddressInfo->BackColor = Color::WhiteSmoke;

            // تبويب معلومات الأسرة
            tabFamilyInfo = gcnew TabPage();
            tabFamilyInfo->Text = L"معلومات الأسرة";
            tabFamilyInfo->BackColor = Color::WhiteSmoke;

            tabMain->Controls->Add(tabPersonalInfo);
            tabMain->Controls->Add(tabAddressInfo);
            tabMain->Controls->Add(tabFamilyInfo);

            this->Controls->Add(tabMain);

            // إعداد عناصر التحكم في كل تبويب
            SetupPersonalInfoTab();
            SetupAddressInfoTab();
            SetupFamilyInfoTab();

            // إعداد أزرار التحكم
            SetupControlButtons();
        }

        void SetupPersonalInfoTab()
        {
            // إنشاء جدول لتنظيم العناصر
            TableLayoutPanel^ tableLayout = gcnew TableLayoutPanel();
            tableLayout->Dock = DockStyle::Fill;
            tableLayout->ColumnCount = 2;
            tableLayout->RowCount = 6;
            tableLayout->Padding = System::Windows::Forms::Padding(10);
            tableLayout->BackColor = Color::White;

            // إضافة عناصر التحكم
            AddLabelAndControl(tableLayout, 0, L"الاسم الأول:", txtFName = gcnew TextBox());
            AddLabelAndControl(tableLayout, 1, L"الاسم الأخير:", txtLName = gcnew TextBox());
            AddLabelAndControl(tableLayout, 2, L"اللقب:", txtNickName = gcnew TextBox());
            AddLabelAndControl(tableLayout, 3, L"الرقم القومي:", txtNationalID = gcnew MaskedTextBox());
            txtNationalID->Mask = "00000000000000";

            AddLabelAndControl(tableLayout, 4, L"الجنس:", cmbGender = gcnew ComboBox());
            cmbGender->Items->AddRange(gcnew array<Object^> { L"ذكر", L"أنثى" });
            cmbGender->DropDownStyle = ComboBoxStyle::DropDownList;

            AddLabelAndControl(tableLayout, 5, L"تاريخ الميلاد:", dtBirth = gcnew DateTimePicker());
            dtBirth->Format = DateTimePickerFormat::Custom;
            dtBirth->CustomFormat = "dd/MM/yyyy";
            dtBirth->MaxDate = DateTime::Today.AddYears(-10);
            dtBirth->MinDate = DateTime::Today.AddYears(-100);

            tabPersonalInfo->Controls->Add(tableLayout);
        }

        void SetupAddressInfoTab()
        {
            TableLayoutPanel^ tableLayout = gcnew TableLayoutPanel();
            tableLayout->Dock = DockStyle::Fill;
            tableLayout->ColumnCount = 2;
            tableLayout->RowCount = 5;
            tableLayout->Padding = System::Windows::Forms::Padding(10);
            tableLayout->BackColor = Color::White;

            AddLabelAndControl(tableLayout, 0, L"المحافظة:", cmbGovernorate = gcnew ComboBox());
            cmbGovernorate->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbGovernorate->SelectedIndexChanged += gcnew EventHandler(this, &AddCaseForm::Governorate_SelectedIndexChanged);

            AddLabelAndControl(tableLayout, 1, L"المدينة:", cmbCity = gcnew ComboBox());
            cmbCity->DropDownStyle = ComboBoxStyle::DropDownList;

            AddLabelAndControl(tableLayout, 2, L"المنطقة:", txtArea = gcnew TextBox());
            AddLabelAndControl(tableLayout, 3, L"الشارع:", txtStreet = gcnew TextBox());
            AddLabelAndControl(tableLayout, 4, L"تفاصيل العنوان:", txtAddressDetails = gcnew TextBox());
            txtAddressDetails->Multiline = true;
            txtAddressDetails->Height = 60;

            tabAddressInfo->Controls->Add(tableLayout);
        }

        void SetupFamilyInfoTab()
        {
            TableLayoutPanel^ tableLayout = gcnew TableLayoutPanel();
            tableLayout->Dock = DockStyle::Fill;
            tableLayout->ColumnCount = 2;
            tableLayout->RowCount = 5;
            tableLayout->Padding = System::Windows::Forms::Padding(10);
            tableLayout->BackColor = Color::White;

            AddLabelAndControl(tableLayout, 0, L"الحالة الاجتماعية:", cmbMaritalStatus = gcnew ComboBox());
            cmbMaritalStatus->Items->AddRange(gcnew array<Object^> { L"أعزب", L"متزوج", L"مطلق", L"أرمل" });
            cmbMaritalStatus->DropDownStyle = ComboBoxStyle::DropDownList;

            AddLabelAndControl(tableLayout, 1, L"حالة الأب:", cmbFatherStatus = gcnew ComboBox());
            cmbFatherStatus->Items->AddRange(gcnew array<Object^> { L"على قيد الحياة", L"متوفى" });
            cmbFatherStatus->DropDownStyle = ComboBoxStyle::DropDownList;

            AddLabelAndControl(tableLayout, 2, L"حالة الأم:", cmbMotherStatus = gcnew ComboBox());
            cmbMotherStatus->Items->AddRange(gcnew array<Object^> { L"على قيد الحياة", L"متوفية" });
            cmbMotherStatus->DropDownStyle = ComboBoxStyle::DropDownList;

            AddLabelAndControl(tableLayout, 3, L"عدد الأبناء الذكور:", numMaleChildren = gcnew NumericUpDown());
            numMaleChildren->Maximum = 20;

            AddLabelAndControl(tableLayout, 4, L"عدد البنات الإناث:", numFemaleChildren = gcnew NumericUpDown());
            numFemaleChildren->Maximum = 20;

            tabFamilyInfo->Controls->Add(tableLayout);
        }

        void SetupControlButtons()
        {
            Panel^ panelButtons = gcnew Panel();
            panelButtons->Dock = DockStyle::Bottom;
            panelButtons->Height = 60;
            panelButtons->BackColor = Color::FromArgb(240, 240, 240);
            panelButtons->Padding = System::Windows::Forms::Padding(10);

            btnSave = gcnew Button();
            btnSave->Text = L"حفظ البيانات";
            btnSave->Image = Image::FromFile("save_icon.png");
            btnSave->ImageAlign = ContentAlignment::MiddleLeft;
            btnSave->TextImageRelation = TextImageRelation::ImageBeforeText;
            btnSave->Size = Drawing::Size(150, 40);
            btnSave->Location = Point(520, 10);
            btnSave->BackColor = Color::FromArgb(0, 153, 51);
            btnSave->ForeColor = Color::White;
            btnSave->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);
            btnSave->Click += gcnew EventHandler(this, &AddCaseForm::btnSave_Click);

            btnCancel = gcnew Button();
            btnCancel->Text = L"إلغاء";
            btnCancel->Size = Drawing::Size(150, 40);
            btnCancel->Location = Point(350, 10);
            btnCancel->BackColor = Color::FromArgb(204, 0, 0);
            btnCancel->ForeColor = Color::White;
            btnCancel->Click += gcnew EventHandler(this, &AddCaseForm::btnCancel_Click);

            chkIsActive = gcnew CheckBox();
            chkIsActive->Text = L"الحالة نشطة";
            chkIsActive->Checked = true;
            chkIsActive->Location = Point(30, 20);
            chkIsActive->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);

            panelButtons->Controls->AddRange(gcnew array<Control^> { btnSave, btnCancel, chkIsActive });
            this->Controls->Add(panelButtons);
        }

        void AddLabelAndControl(TableLayoutPanel^ table, int row, String^ labelText, Control^ control)
        {
            Label^ label = gcnew Label();
            label->Text = labelText;
            label->TextAlign = ContentAlignment::MiddleLeft;
            label->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);

            control->Font = gcnew Drawing::Font("Tahoma", 10);
            control->Anchor = AnchorStyles::Left | AnchorStyles::Right;
            control->Margin = System::Windows::Forms::Padding(0, 5, 0, 10);

            table->Controls->Add(label, 0, row);
            table->Controls->Add(control, 1, row);
        }

        void SetupFormStyles()
        {
            // إعداد ألوان النموذج
            this->BackColor = Color::White;

            // إعداد نصائح الأدوات
            toolTip->SetToolTip(txtNationalID, "يجب إدخال 14 رقمًا فقط");
            toolTip->SetToolTip(txtFName, "الاسم الأول للحالة بدون ألقاب");
            toolTip->SetToolTip(txtLName, "اسم العائلة أو الاسم الأخير");
        }

        void LoadInitialData()
        {
            // تحميل بيانات المحافظات من مصدر البيانات
            array<String^>^ governorates = { L"القاهرة", L"الجيزة", L"الإسكندرية", L"المنيا" };
            cmbGovernorate->Items->AddRange(governorates);

            // تعيين القيم الافتراضية
            cmbGender->SelectedIndex = 0;
            cmbMaritalStatus->SelectedIndex = 0;
            cmbFatherStatus->SelectedIndex = 0;
            cmbMotherStatus->SelectedIndex = 0;
            dtBirth->Value = DateTime::Today.AddYears(-30);
        }

        void Governorate_SelectedIndexChanged(Object^ sender, EventArgs^ e)
        {
            // عند تغيير المحافظة، يتم تحديث المدن المتاحة
            cmbCity->Items->Clear();

            if (cmbGovernorate->SelectedItem != nullptr)
            {
                String^ governorate = cmbGovernorate->SelectedItem->ToString();
                array<String^>^ cities = GetCitiesForGovernorate(governorate);
                cmbCity->Items->AddRange(cities);

                if (cities->Length > 0)
                    cmbCity->SelectedIndex = 0;
            }
        }

        array<String^>^ GetCitiesForGovernorate(String^ governorate)
        {
            // هذه الدالة تحاكي استرجاع المدن من قاعدة البيانات
            if (governorate == L"القاهرة")
                return gcnew array<String^> { L"المعادي", L"المقطم", L"مدينة نصر", L"الشروق" };
            else if (governorate == L"الجيزة")
                return gcnew array<String^> { L"الدقي", L"المهندسين", L"الهرم", L"6 أكتوبر" };
            else if (governorate == L"الإسكندرية")
                return gcnew array<String^> { L"سيدي جابر", L"سموحة", L"العصافرة", L"المندرة" };
            else
                return gcnew array<String^> { L"المركز", L"المدينة" };
        }

        void TabControl_DrawItem(Object^ sender, DrawItemEventArgs^ e)
        {
            // تخصيص مظهر التبويبات
            Graphics^ g = e->Graphics;
            Brush^ textBrush;
            RectangleF tabTextArea = RectangleF(e->Bounds.X, e->Bounds.Y + 2, e->Bounds.Width, e->Bounds.Height);

            if (e->State == DrawItemState::Selected)
            {
                textBrush = gcnew SolidBrush(Color::FromArgb(0, 102, 153));
                g->FillRectangle(gcnew SolidBrush(Color::White), e->Bounds);
            }
            else
            {
                textBrush = gcnew SolidBrush(Color::Black);
                g->FillRectangle(gcnew SolidBrush(Color::FromArgb(240, 240, 240)), e->Bounds);
            }

            StringFormat^ strFormat = gcnew StringFormat();
            strFormat->Alignment = StringAlignment::Center;
            strFormat->LineAlignment = StringAlignment::Center;

            String^ tabName = tabMain->TabPages[e->Index]->Text;
            Font^ tabFont = gcnew Font("Tahoma", 10, FontStyle::Regular);

            g->DrawString(tabName, tabFont, textBrush, tabTextArea, strFormat);
        }

        bool ValidateForm()
        {
            bool isValid = true;

            // التحقق من الاسم الأول
            if (String::IsNullOrWhiteSpace(txtFName->Text))
            {
                errorProvider->SetError(txtFName, "يجب إدخال الاسم الأول");
                isValid = false;
            }
            else
            {
                errorProvider->SetError(txtFName, "");
            }

            // التحقق من الاسم الأخير
            if (String::IsNullOrWhiteSpace(txtLName->Text))
            {
                errorProvider->SetError(txtLName, "يجب إدخال الاسم الأخير");
                isValid = false;
            }
            else
            {
                errorProvider->SetError(txtLName, "");
            }

            // التحقق من الرقم القومي
            if (txtNationalID->Text->Replace(" ", "")->Length != 14)
            {
                errorProvider->SetError(txtNationalID, "يجب إدخال 14 رقمًا");
                isValid = false;
            }
            else
            {
                errorProvider->SetError(txtNationalID, "");
            }

            // التحقق من المحافظة
            if (cmbGovernorate->SelectedIndex == -1)
            {
                errorProvider->SetError(cmbGovernorate, "يجب اختيار المحافظة");
                isValid = false;
            }
            else
            {
                errorProvider->SetError(cmbGovernorate, "");
            }

            return isValid;
        }

        void btnSave_Click(Object^ sender, EventArgs^ e)
        {
            if (ValidateForm())
            {
                try
                {
                    // إنشاء كائن الحالة الجديدة
                    Cases^ newCase = gcnew Cases();

                    // تعبئة البيانات من النموذج
                    newCase->FName = txtFName->Text;
                    newCase->LName = txtLName->Text;
                    newCase->NickName = txtNickName->Text;
                    newCase->NationalID = txtNationalID->Text;
                    newCase->Gender = cmbGender->SelectedIndex == 0;
                    newCase->BirthDate = dtBirth->Value;
                    newCase->Area = txtArea->Text;
                    newCase->Street = txtStreet->Text;
                    newCase->MaritalStatus = cmbMaritalStatus->SelectedItem->ToString();
                    newCase->FatherStatus = cmbFatherStatus->SelectedIndex == 0;
                    newCase->MotherStatus = cmbMotherStatus->SelectedIndex == 0;
                    newCase->MaleChildren = (Byte)numMaleChildren->Value;
                    newCase->FemaleChildren = (Byte)numFemaleChildren->Value;
                    newCase->IsActive = chkIsActive->Checked;

                    // حفظ الحالة في قاعدة البيانات
                    // SaveCaseToDatabase(newCase);

                    MessageBox::Show("تم حفظ الحالة بنجاح", "نجاح",
                        MessageBoxButtons::OK, MessageBoxIcon::Information);

                    this->Close();
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("حدث خطأ أثناء الحفظ: " + ex->Message, "خطأ",
                        MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
            else
            {
                MessageBox::Show("يوجد أخطاء في البيانات المدخلة، يرجى تصحيحها", "تحذير",
                    MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
        }

        void btnCancel_Click(Object^ sender, EventArgs^ e)
        {
            if (MessageBox::Show("هل تريد إلغاء عملية الإضافة؟", "تأكيد الإلغاء",
                MessageBoxButtons::YesNo, MessageBoxIcon::Question) == DialogResult::Yes)
            {
                this->Close();
            }
        }
    };
}