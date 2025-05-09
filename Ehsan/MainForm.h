#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Globalization;
using namespace System::Drawing::Drawing2D;

#include "TodayViewForm.h"
#include "AssistanceTypeForm.h"
#include "AddCaseForm.h"
#include "SearchCaseForm.h"
#include "ManageCasesForm.h"
#include "ManageAssistancesForm.h"
#include "ReportsForm.h"

namespace Ehsan {

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
            CustomizeUI();
            StartClock();
        }

    protected:
        ~MainForm()
        {
            if (components)
                delete components;
        }

    private:
        Label^ lblTitle;
        Label^ lblDateTime;
        array<Button^>^ buttons;
        Timer^ clockTimer;
        FlowLayoutPanel^ panelButtons;
        FlowLayoutPanel^ panelIndicators;
        array<Label^>^ indicators;
        Button^ btnExport;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->Text = L"برنامج إحسان - الرئيسية";
            this->ClientSize = System::Drawing::Size(980, 720);
            this->StartPosition = FormStartPosition::CenterScreen;
            this->BackColor = Color::FromArgb(245, 250, 255);
            this->Font = gcnew Drawing::Font(L"Segoe UI", 11);
            this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->RightToLeftLayout = true;

            ToolTip^ tip = gcnew ToolTip();

            lblTitle = gcnew Label();
            lblTitle->Text = L"🕌 نظام إحسان الخيري - الصفحة الرئيسية";
            lblTitle->Font = gcnew Drawing::Font("Segoe UI", 20, FontStyle::Bold);
            lblTitle->ForeColor = Color::White;
            lblTitle->BackColor = Color::FromArgb(0, 105, 140);
            lblTitle->TextAlign = ContentAlignment::MiddleCenter;
            lblTitle->Dock = DockStyle::Top;
            lblTitle->Height = 70;
            this->Controls->Add(lblTitle);

            lblDateTime = gcnew Label();
            lblDateTime->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Italic);
            lblDateTime->ForeColor = Color::DimGray;
            lblDateTime->BackColor = Color::Transparent;
            lblDateTime->Location = Point(20, 75);
            lblDateTime->AutoSize = true;
            this->Controls->Add(lblDateTime);

            panelIndicators = gcnew FlowLayoutPanel();
            panelIndicators->Location = Point(20, 110);
            panelIndicators->Size = Drawing::Size(940, 130);
            panelIndicators->WrapContents = true;
            panelIndicators->FlowDirection = FlowDirection::LeftToRight;
            panelIndicators->Anchor = AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;
            this->Controls->Add(panelIndicators);

            indicators = gcnew array<Label^>(7);
            array<String^>^ texts = {
                L"🧍 الحالات: 102",
                L"🎁 المساعدات: 270",
                L"💵 المصروفات: 185000 جنيه",
                L"📦 الأكثر شيوعًا: بطاطين",
                L"📅 مساعدات اليوم: 6",
                L"⏱️ آخر مساعدة: منذ 3 أيام",
                L"💡 نصيحة: راجع الحالات غير النشطة"
            };
            for (int i = 0; i < indicators->Length; i++)
            {
                indicators[i] = gcnew Label();
                indicators[i]->Text = texts[i];
                indicators[i]->AutoSize = false;
                indicators[i]->Size = Drawing::Size(180, 50);
                indicators[i]->BackColor = Color::White;
                indicators[i]->ForeColor = Color::FromArgb(0, 64, 100);
                indicators[i]->TextAlign = ContentAlignment::MiddleCenter;
                indicators[i]->Margin = System::Windows::Forms::Padding(10);
                indicators[i]->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
                indicators[i]->Padding = System::Windows::Forms::Padding(3);
                indicators[i]->BorderStyle = BorderStyle::FixedSingle;
                panelIndicators->Controls->Add(indicators[i]);
            }

            panelButtons = gcnew FlowLayoutPanel();
            panelButtons->Location = Point(270, 260);
            panelButtons->Size = Drawing::Size(450, 400);
            panelButtons->FlowDirection = FlowDirection::TopDown;
            panelButtons->Anchor = AnchorStyles::Top | AnchorStyles::Bottom | AnchorStyles::Left | AnchorStyles::Right;
            this->Controls->Add(panelButtons);

            buttons = gcnew array<Button^>(8);
            array<String^>^ titles = {
                L"🗓 عرض اليوم", L"🔍 البحث عن حالة", L"➕ إضافة حالة",
                L"🧾 إدارة الحالات", L"🎁 إدارة المساعدات", L"⚙️ إدارة أنواع المساعدات",
                L"📊 التقارير والإحصاءات", L"🔙 العودة للرئيسية"
            };
            array<String^>^ tooltips = {
                L"عرض الحالات المستحقة لهذا اليوم",
                L"البحث عن حالة باستخدام الاسم أو الرقم القومي",
                L"إضافة حالة جديدة لقاعدة البيانات",
                L"عرض وتعديل الحالات الحالية",
                L"إضافة أو حذف أو تعديل المساعدات",
                L"إدارة قائمة أنواع المساعدات",
                L"عرض تقارير المساعدات والإحصاءات",
                L"العودة للصفحة الرئيسية"
            };
            array<Color>^ colors = {
                Color::LightSkyBlue, Color::LightGray, Color::LightGreen,
                Color::Lavender, Color::Honeydew, Color::LightYellow,
                Color::White, Color::WhiteSmoke
            };

            for (int i = 0; i < titles->Length; i++)
            {
                buttons[i] = gcnew Button();
                buttons[i]->Text = titles[i];
                buttons[i]->Size = Drawing::Size(300, 40);
                buttons[i]->BackColor = colors[i];
                buttons[i]->Font = gcnew Drawing::Font("Segoe UI", 12);
                buttons[i]->FlatStyle = FlatStyle::Flat;
                buttons[i]->FlatAppearance->BorderSize = 0;
                buttons[i]->TextAlign = ContentAlignment::MiddleCenter;
                buttons[i]->Cursor = Cursors::Hand;
                tip->SetToolTip(buttons[i], tooltips[i]);
                panelButtons->Controls->Add(buttons[i]);
            }

            btnExport = gcnew Button();
            btnExport->Text = L"📄 تصدير البيانات";
            btnExport->BackColor = Color::White;
            btnExport->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
            btnExport->Size = Drawing::Size(180, 35);
            btnExport->Location = Point(770, 660);
            btnExport->Anchor = AnchorStyles::Bottom | AnchorStyles::Right;
            tip->SetToolTip(btnExport, "تصدير جميع البيانات إلى Excel أو PDF");
            this->Controls->Add(btnExport);

            buttons[0]->Click += gcnew EventHandler(this, &MainForm::OpenTodayViewForm);
            buttons[1]->Click += gcnew EventHandler(this, &MainForm::OpenSearchCaseForm);
            buttons[2]->Click += gcnew EventHandler(this, &MainForm::OpenAddCaseForm);
            buttons[3]->Click += gcnew EventHandler(this, &MainForm::OpenManageCasesForm);
            buttons[4]->Click += gcnew EventHandler(this, &MainForm::OpenManageAssistancesForm);
            buttons[5]->Click += gcnew EventHandler(this, &MainForm::OpenAssistanceTypeForm);
            buttons[6]->Click += gcnew EventHandler(this, &MainForm::OpenReportsForm);
        }

        void CustomizeUI()
        {
            for (int i = 0; i < buttons->Length; i++)
            {
                GraphicsPath^ path = gcnew GraphicsPath();
                path->AddArc(0, 0, 20, 20, 180, 90);
                path->AddArc(280, 0, 20, 20, 270, 90);
                path->AddArc(280, 20, 20, 20, 0, 90);
                path->AddArc(0, 20, 20, 20, 90, 90);
                path->CloseFigure();
                buttons[i]->Region = gcnew System::Drawing::Region(path);
            }
        }

        void StartClock()
        {
            clockTimer = gcnew Timer();
            clockTimer->Interval = 1000;
            clockTimer->Tick += gcnew EventHandler(this, &MainForm::UpdateDateTime);
            clockTimer->Start();
            UpdateDateTime(nullptr, nullptr);
        }

        void UpdateDateTime(Object^ sender, EventArgs^ e)
        {
            DateTime now = DateTime::Now;
            lblDateTime->Text = now.ToString("dddd، dd MMMM yyyy - hh:mm:ss tt", gcnew CultureInfo("ar-EG"));
        }

        // 👇 فتح النوافذ
        void OpenTodayViewForm(Object^ sender, EventArgs^ e) {
            TodayViewForm^ form = gcnew TodayViewForm(); form->ShowDialog();
        }

        void OpenSearchCaseForm(Object^ sender, EventArgs^ e) {
            SearchCaseForm^ form = gcnew SearchCaseForm(); form->ShowDialog();
        }

        void OpenAddCaseForm(Object^ sender, EventArgs^ e) {
            AddCaseForm^ form = gcnew AddCaseForm(); form->ShowDialog();
        }

        void OpenManageCasesForm(Object^ sender, EventArgs^ e) {
            ManageCasesForm^ form = gcnew ManageCasesForm(); form->ShowDialog();
        }

        void OpenManageAssistancesForm(Object^ sender, EventArgs^ e) {
            ManageAssistancesForm^ form = gcnew ManageAssistancesForm(); form->ShowDialog();
        }

        void OpenAssistanceTypeForm(Object^ sender, EventArgs^ e) {
            AssistanceTypeForm^ form = gcnew AssistanceTypeForm(); form->ShowDialog();
        }

        void OpenReportsForm(Object^ sender, EventArgs^ e) {
            ReportsForm^ form = gcnew ReportsForm(); form->ShowDialog();
        }
    };
}
