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
            this->ClientSize = Drawing::Size(900, 700); // زيادة حجم النافذة قليلاً
            this->StartPosition = FormStartPosition::CenterScreen;
            this->Font = gcnew Drawing::Font("Tahoma", 10);
            this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->RightToLeftLayout = true;
            this->MinimizeBox = false;
            this->MaximizeBox = false;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
            this->BackColor = Color::White;

            // إعداد أدوات المساعدة
            toolTip = gcnew ToolTip();
            errorProvider = gcnew ErrorProvider();
            errorProvider->BlinkStyle = ErrorBlinkStyle::NeverBlink;

            // شريط العنوان
            lblTitle = gcnew Label();
            lblTitle->Text = L"إضافة حالة جديدة";
            lblTitle->Font = gcnew Drawing::Font("Tahoma", 16, FontStyle::Bold);
            lblTitle->TextAlign = ContentAlignment::MiddleCenter;
            lblTitle->Dock = DockStyle::Top;
            lblTitle->Height = 60;
            lblTitle->BackColor = Color::FromArgb(0, 102, 153);
            lblTitle->ForeColor = Color::White;
            lblTitle->Padding = System::Windows::Forms::Padding(0, 10, 0, 10);
            this->Controls->Add(lblTitle);

            // تبويبات النموذج
            tabMain = gcnew TabControl();
            tabMain->Dock = DockStyle::Fill;
            tabMain->Padding = Point(20, 15);
            tabMain->Alignment = TabAlignment::Right;
            tabMain->SizeMode = TabSizeMode::Fixed;
            tabMain->ItemSize = Drawing::Size(25, 120);
            tabMain->DrawMode = TabDrawMode::OwnerDrawFixed;
            tabMain->DrawItem += gcnew DrawItemEventHandler(this, &AddCaseForm::TabControl_DrawItem);

            // تبويب المعلومات الشخصية
            tabPersonalInfo = gcnew TabPage();
            tabPersonalInfo->Text = L"معلومات شخصية";
            tabPersonalInfo->BackColor = Color::White;
            tabPersonalInfo->Padding = System::Windows::Forms::Padding(15);

            // تبويب معلومات العنوان
            tabAddressInfo = gcnew TabPage();
            tabAddressInfo->Text = L"معلومات العنوان";
            tabAddressInfo->BackColor = Color::White;
            tabAddressInfo->Padding = System::Windows::Forms::Padding(15);

            // تبويب معلومات الأسرة
            tabFamilyInfo = gcnew TabPage();
            tabFamilyInfo->Text = L"معلومات الأسرة";
            tabFamilyInfo->BackColor = Color::White;
            tabFamilyInfo->Padding = System::Windows::Forms::Padding(15);

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
            tableLayout->Padding = System::Windows::Forms::Padding(15);
            tableLayout->BackColor = Color::White;
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 30));
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 70));

            // زيادة الهوامش بين الصفوف
            for (int i = 0; i < tableLayout->RowCount; i++)
            {
                tableLayout->RowStyles->Add(gcnew RowStyle(SizeType::AutoSize));
            }

            // إضافة عناصر التحكم مع تحسينات التنسيق
            AddLabelAndControl(tableLayout, 0, L"الاسم الأول:", txtFName = gcnew TextBox());
            txtFName->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 1, L"الاسم الأخير:", txtLName = gcnew TextBox());
            txtLName->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 2, L"اللقب:", txtNickName = gcnew TextBox());
            txtNickName->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 3, L"الرقم القومي:", txtNationalID = gcnew MaskedTextBox());
            txtNationalID->Mask = "00000000000000";
            txtNationalID->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 4, L"الجنس:", cmbGender = gcnew ComboBox());
            cmbGender->Items->AddRange(gcnew array<Object^> { L"ذكر", L"أنثى" });
            cmbGender->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbGender->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 5, L"تاريخ الميلاد:", dtBirth = gcnew DateTimePicker());
            dtBirth->Format = DateTimePickerFormat::Custom;
            dtBirth->CustomFormat = "dd/MM/yyyy";
            dtBirth->MaxDate = DateTime::Today.AddYears(-10);
            dtBirth->MinDate = DateTime::Today.AddYears(-100);
            dtBirth->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            tabPersonalInfo->Controls->Add(tableLayout);
        }

        void SetupAddressInfoTab()
        {
            TableLayoutPanel^ tableLayout = gcnew TableLayoutPanel();
            tableLayout->Dock = DockStyle::Fill;
            tableLayout->ColumnCount = 2;
            tableLayout->RowCount = 5;
            tableLayout->Padding = System::Windows::Forms::Padding(15);
            tableLayout->BackColor = Color::White;
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 30));
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 70));

            for (int i = 0; i < tableLayout->RowCount; i++)
            {
                tableLayout->RowStyles->Add(gcnew RowStyle(SizeType::AutoSize));
            }

            AddLabelAndControl(tableLayout, 0, L"المحافظة:", cmbGovernorate = gcnew ComboBox());
            cmbGovernorate->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbGovernorate->SelectedIndexChanged += gcnew EventHandler(this, &AddCaseForm::Governorate_SelectedIndexChanged);
            cmbGovernorate->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 1, L"المدينة:", cmbCity = gcnew ComboBox());
            cmbCity->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbCity->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 2, L"المنطقة:", txtArea = gcnew TextBox());
            txtArea->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 3, L"الشارع:", txtStreet = gcnew TextBox());
            txtStreet->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 4, L"تفاصيل العنوان:", txtAddressDetails = gcnew TextBox());
            txtAddressDetails->Multiline = true;
            txtAddressDetails->Height = 80;
            txtAddressDetails->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            tabAddressInfo->Controls->Add(tableLayout);
        }

        void SetupFamilyInfoTab()
        {
            TableLayoutPanel^ tableLayout = gcnew TableLayoutPanel();
            tableLayout->Dock = DockStyle::Fill;
            tableLayout->ColumnCount = 2;
            tableLayout->RowCount = 5;
            tableLayout->Padding = System::Windows::Forms::Padding(15);
            tableLayout->BackColor = Color::White;
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 30));
            tableLayout->ColumnStyles->Add(gcnew ColumnStyle(SizeType::Percent, 70));

            for (int i = 0; i < tableLayout->RowCount; i++)
            {
                tableLayout->RowStyles->Add(gcnew RowStyle(SizeType::AutoSize));
            }

            AddLabelAndControl(tableLayout, 0, L"الحالة الاجتماعية:", cmbMaritalStatus = gcnew ComboBox());
            cmbMaritalStatus->Items->AddRange(gcnew array<Object^> { L"أعزب", L"متزوج", L"مطلق", L"أرمل" });
            cmbMaritalStatus->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbMaritalStatus->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 1, L"حالة الأب:", cmbFatherStatus = gcnew ComboBox());
            cmbFatherStatus->Items->AddRange(gcnew array<Object^> { L"على قيد الحياة", L"متوفى" });
            cmbFatherStatus->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbFatherStatus->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 2, L"حالة الأم:", cmbMotherStatus = gcnew ComboBox());
            cmbMotherStatus->Items->AddRange(gcnew array<Object^> { L"على قيد الحياة", L"متوفية" });
            cmbMotherStatus->DropDownStyle = ComboBoxStyle::DropDownList;
            cmbMotherStatus->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 3, L"عدد الأبناء الذكور:", numMaleChildren = gcnew NumericUpDown());
            numMaleChildren->Maximum = 20;
            numMaleChildren->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            AddLabelAndControl(tableLayout, 4, L"عدد البنات الإناث:", numFemaleChildren = gcnew NumericUpDown());
            numFemaleChildren->Maximum = 20;
            numFemaleChildren->Margin = System::Windows::Forms::Padding(0, 5, 0, 15);

            tabFamilyInfo->Controls->Add(tableLayout);
        }

        void SetupControlButtons()
        {
            Panel^ panelButtons = gcnew Panel();
            panelButtons->Dock = DockStyle::Bottom;
            panelButtons->Height = 80;
            panelButtons->BackColor = Color::FromArgb(248, 249, 250);
            panelButtons->Padding = System::Windows::Forms::Padding(20, 15, 20, 15);

            // زر الحفظ
            btnSave = gcnew Button();
            btnSave->Text = L"حفظ البيانات (Enter)";
            btnSave->Image = ResizeImage(SystemIcons::Information->ToBitmap(), 24, 24);
            btnSave->ImageAlign = ContentAlignment::MiddleLeft;
            btnSave->TextImageRelation = TextImageRelation::ImageBeforeText;
            btnSave->Size = Drawing::Size(180, 45);
            btnSave->Location = Point(550, 15);
            btnSave->BackColor = Color::FromArgb(13, 110, 253);
            btnSave->ForeColor = Color::White;
            btnSave->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);
            btnSave->FlatStyle = FlatStyle::Flat;
            btnSave->FlatAppearance->BorderSize = 0;
            btnSave->FlatAppearance->MouseOverBackColor = Color::FromArgb(11, 94, 215);
            btnSave->FlatAppearance->MouseDownBackColor = Color::FromArgb(10, 88, 202);
            btnSave->Cursor = Cursors::Hand;
            btnSave->Click += gcnew EventHandler(this, &AddCaseForm::btnSave_Click);

            // زر الإلغاء
            btnCancel = gcnew Button();
            btnCancel->Text = L"إلغاء (Esc)";
            btnCancel->Image = ResizeImage(SystemIcons::Error->ToBitmap(), 24, 24);
            btnCancel->ImageAlign = ContentAlignment::MiddleLeft;
            btnCancel->TextImageRelation = TextImageRelation::ImageBeforeText;
            btnCancel->Size = Drawing::Size(180, 45);
            btnCancel->Location = Point(330, 15);
            btnCancel->BackColor = Color::FromArgb(108, 117, 125);
            btnCancel->ForeColor = Color::White;
            btnCancel->FlatStyle = FlatStyle::Flat;
            btnCancel->FlatAppearance->BorderSize = 0;
            btnCancel->FlatAppearance->MouseOverBackColor = Color::FromArgb(92, 99, 106);
            btnCancel->FlatAppearance->MouseDownBackColor = Color::FromArgb(84, 91, 98);
            btnCancel->Cursor = Cursors::Hand;
            btnCancel->Click += gcnew EventHandler(this, &AddCaseForm::btnCancel_Click);

            // خيار الحالة النشطة
            chkIsActive = gcnew CheckBox();
            chkIsActive->Text = L"الحالة نشطة";
            chkIsActive->Checked = true;
            chkIsActive->Location = Point(40, 30);
            chkIsActive->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);
            chkIsActive->ForeColor = Color::FromArgb(33, 37, 41);

            panelButtons->Controls->AddRange(gcnew array<Control^> { btnSave, btnCancel, chkIsActive });
            this->Controls->Add(panelButtons);

            // إعداد اختصارات لوحة المفاتيح
            this->AcceptButton = btnSave;
            this->CancelButton = btnCancel;
        }

        // دالة مساعدة لتغيير حجم الصور
        Bitmap^ ResizeImage(Bitmap^ image, int width, int height)
        {
            Bitmap^ result = gcnew Bitmap(width, height);
            Graphics^ g = Graphics::FromImage(result);
            g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
            g->DrawImage(image, 0, 0, width, height);
            //g->Dispose();
            return result;
        }

        void AddLabelAndControl(TableLayoutPanel^ table, int row, String^ labelText, Control^ control)
        {
            Label^ label = gcnew Label();
            label->Text = labelText;
            label->TextAlign = ContentAlignment::MiddleLeft;
            label->Font = gcnew Drawing::Font("Tahoma", 10, FontStyle::Bold);
            label->ForeColor = Color::FromArgb(33, 37, 41);

            control->Font = gcnew Drawing::Font("Tahoma", 10);
            control->Anchor = AnchorStyles::Left | AnchorStyles::Right;
            control->Height = 35;

            table->Controls->Add(label, 0, row);
            table->Controls->Add(control, 1, row);
        }

        void SetupFormStyles()
        {
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
                textBrush = gcnew SolidBrush(Color::FromArgb(73, 80, 87));
                g->FillRectangle(gcnew SolidBrush(Color::FromArgb(248, 249, 250)), e->Bounds);
            }

            StringFormat^ strFormat = gcnew StringFormat();
            strFormat->Alignment = StringAlignment::Center;
            strFormat->LineAlignment = StringAlignment::Center;

            String^ tabName = tabMain->TabPages[e->Index]->Text;
            System::Drawing::Font^ tabFont = gcnew System::Drawing::Font("Tahoma", 10, FontStyle::Regular);

            g->DrawString(tabName, tabFont, textBrush, tabTextArea, strFormat);
        }

        bool ValidateForm()
        {
            bool isValid = true;
            errorProvider->Clear();

            // التحقق من الاسم الأول
            if (String::IsNullOrWhiteSpace(txtFName->Text))
            {
                errorProvider->SetError(txtFName, "يجب إدخال الاسم الأول");
                isValid = false;
            }

            // التحقق من الاسم الأخير
            if (String::IsNullOrWhiteSpace(txtLName->Text))
            {
                errorProvider->SetError(txtLName, "يجب إدخال الاسم الأخير");
                isValid = false;
            }

            // التحقق من الرقم القومي
            if (txtNationalID->Text->Replace(" ", "")->Length != 14)
            {
                errorProvider->SetError(txtNationalID, "يجب إدخال 14 رقمًا");
                isValid = false;
            }

            // التحقق من المحافظة
            if (cmbGovernorate->SelectedIndex == -1)
            {
                errorProvider->SetError(cmbGovernorate, "يجب اختيار المحافظة");
                isValid = false;
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
                    //newCase->Governorate = cmbGovernorate->SelectedItem->ToString();
                    //newCase->City = cmbCity->SelectedItem != nullptr ? cmbCity->SelectedItem->ToString() : "";
                    newCase->Area = txtArea->Text;
                    newCase->Street = txtStreet->Text;
                    //newCase->AddressDetails = txtAddressDetails->Text;
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
                MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
            {
                this->Close();
            }
        }
    };
}