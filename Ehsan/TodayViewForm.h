// TodayViewForm.h - بعد إصلاح الأخطاء
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Globalization;

namespace Ehsan {

	public ref class TodayViewForm : public Form
	{
	public:
		TodayViewForm(void)
		{
			InitializeComponent();
			StartCountdown();
			LoadSampleCards();
		}

	protected:
		~TodayViewForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Label^ lblStats;
		Label^ lblCountdown;
		Label^ lblAlert;
		FlowLayoutPanel^ pnlSeasonal;
		FlowLayoutPanel^ pnlPeriodic;
		FlowLayoutPanel^ pnlSpecial;
		GroupBox^ grpSeasonal;
		GroupBox^ grpPeriodic;
		GroupBox^ grpSpecial;
		TextBox^ txtSearchSeasonal;
		TextBox^ txtSearchPeriodic;
		TextBox^ txtSearchSpecial;
		Button^ btnBack;
		Button^ btnExport;
		Button^ btnDailyReport;
		ToolTip^ tip;
		System::Windows::Forms::Timer^ countdownTimer;

		void InitializeComponent(void)
		{
			this->Text = L"عرض اليوم";
			this->ClientSize = System::Drawing::Size(1000, 760);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::White;
			this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			tip = gcnew ToolTip();

			lblTitle = gcnew Label();
			lblTitle->Text = L"📋 الحالات المستحقة للمساعدة اليوم";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
			lblTitle->ForeColor = Color::White;
			lblTitle->BackColor = Color::Teal;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			this->Controls->Add(lblTitle);

			lblStats = gcnew Label();
			lblStats->Text = L"🧮 عدد الحالات: 3 | مالية: 2 | عينية: 1";
			lblStats->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Italic);
			lblStats->ForeColor = Color::DimGray;
			lblStats->Location = Point(30, 65);
			lblStats->AutoSize = true;
			this->Controls->Add(lblStats);

			lblCountdown = gcnew Label();
			lblCountdown->Text = L"⏳ متبقي حتى نهاية اليوم: ...";
			lblCountdown->Location = Point(30, 90);
			lblCountdown->Font = gcnew Drawing::Font("Segoe UI", 9);
			lblCountdown->ForeColor = Color::DarkSlateGray;
			lblCountdown->AutoSize = true;
			this->Controls->Add(lblCountdown);

			lblAlert = gcnew Label();
			lblAlert->Text = L"⚠️ يوجد مساعدات متأخرة لم تُسلّم بعد";
			lblAlert->BackColor = Color::LightYellow;
			lblAlert->ForeColor = Color::Maroon;
			lblAlert->Location = Point(30, 115);
			lblAlert->Size = Drawing::Size(400, 30);
			this->Controls->Add(lblAlert);

			grpSeasonal = CreateGroupBox(L"🎁 مساعدات موسمية", Point(30, 160), Color::DarkGreen, txtSearchSeasonal, pnlSeasonal);
			grpPeriodic = CreateGroupBox(L"🔁 مساعدات دورية", Point(345, 160), Color::Navy, txtSearchPeriodic, pnlPeriodic);
			grpSpecial = CreateGroupBox(L"⭐ مساعدات خاصة", Point(660, 160), Color::DarkRed, txtSearchSpecial, pnlSpecial);

			this->Controls->Add(grpSeasonal);
			this->Controls->Add(grpPeriodic);
			this->Controls->Add(grpSpecial);

			btnExport = gcnew Button();
			btnExport->Text = L"📄 تصدير PDF";
			btnExport->BackColor = Color::PaleGreen;
			btnExport->Location = Point(800, 670);
			btnExport->Size = Drawing::Size(140, 35);
			this->Controls->Add(btnExport);

			btnDailyReport = gcnew Button();
			btnDailyReport->Text = L"📊 تقرير اليوم";
			btnDailyReport->BackColor = Color::LightSkyBlue;
			btnDailyReport->Location = Point(640, 670);
			btnDailyReport->Size = Drawing::Size(140, 35);
			this->Controls->Add(btnDailyReport);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(30, 670);
			btnBack->Size = Drawing::Size(140, 35);
			btnBack->Click += gcnew EventHandler(this, &TodayViewForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}

		GroupBox^ CreateGroupBox(String^ title, Point location, Color foreColor, TextBox^% searchBox, FlowLayoutPanel^% panel)
		{
			GroupBox^ group = gcnew GroupBox();
			group->Text = title;
			group->Size = Drawing::Size(300, 480);
			group->Location = location;
			group->Font = gcnew Drawing::Font("Segoe UI", 11, FontStyle::Bold);
			group->ForeColor = foreColor;

			searchBox = gcnew TextBox();
			searchBox->Text = L"ابحث هنا...";
			searchBox->ForeColor = Color::Gray;
			searchBox->Dock = DockStyle::Top;
			searchBox->GotFocus += gcnew EventHandler(this, &TodayViewForm::ClearSearchPlaceholder);
			searchBox->LostFocus += gcnew EventHandler(this, &TodayViewForm::RestoreSearchPlaceholder);
			tip->SetToolTip(searchBox, "اكتب اسم الحالة للبحث");
			group->Controls->Add(searchBox);

			panel = gcnew FlowLayoutPanel();
			panel->Dock = DockStyle::Fill;
			panel->AutoScroll = true;
			tip->SetToolTip(panel, "عرض الحالات المستحقة");
			group->Controls->Add(panel);

			return group;
		}

		void StartCountdown()
		{
			countdownTimer = gcnew System::Windows::Forms::Timer();
			countdownTimer->Interval = 1000;
			countdownTimer->Tick += gcnew EventHandler(this, &TodayViewForm::UpdateCountdown);
			countdownTimer->Start();
			UpdateCountdown(nullptr, nullptr);
		}

		void UpdateCountdown(Object^ sender, EventArgs^ e)
		{
			TimeSpan remaining = DateTime::Today.AddDays(1).Subtract(DateTime::Now);
			lblCountdown->Text = String::Format(L"⏳ متبقي: {0} ساعات و {1} دقيقة",
				remaining.Hours.ToString(), remaining.Minutes.ToString());
		}

		void ClearSearchPlaceholder(Object^ sender, EventArgs^ e)
		{
			TextBox^ box = safe_cast<TextBox^>(sender);
			if (box->Text == L"ابحث هنا...") {
				box->Text = L"";
				box->ForeColor = Color::Black;
			}
		}

		void RestoreSearchPlaceholder(Object^ sender, EventArgs^ e)
		{
			TextBox^ box = safe_cast<TextBox^>(sender);
			if (box->Text->Trim() == L"") {
				box->Text = L"ابحث هنا...";
				box->ForeColor = Color::Gray;
			}
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}

		void LoadSampleCards()
		{
			pnlPeriodic->Controls->Add(CreateCard("أحمد مصطفى", "مالي", "راتب شهري: 1200 جنيه", 5, Color::LightBlue));
			pnlSeasonal->Controls->Add(CreateCard("محمد علي", "عيني", "بطانية - موسم الشتاء", 4, Color::LightGreen));
			pnlSpecial->Controls->Add(CreateCard("خالد حسن", "مالي", "مساعدة إيجار طارئة: 1000 جنيه", 6, Color::MistyRose));
		}

		Panel^ CreateCard(String^ name, String^ aidType, String^ details, int familyCount, Color backColor)
		{
			Panel^ card = gcnew Panel();
			card->Size = Drawing::Size(270, 135);
			card->BackColor = backColor;
			card->BorderStyle = BorderStyle::FixedSingle;
			card->Margin = Windows::Forms::Padding(10);
			tip->SetToolTip(card, "اضغط لمعرفة المزيد أو تحديد كمُسلّمة");

			Label^ lblName = gcnew Label();
			lblName->Text = "👤 " + name;
			lblName->Location = Point(10, 10);
			lblName->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
			lblName->AutoSize = true;

			Label^ lblType = gcnew Label();
			lblType->Text = "💡 نوع: " + aidType;
			lblType->Location = Point(10, 35);
			lblType->AutoSize = true;

			Label^ lblDetails = gcnew Label();
			lblDetails->Text = "📦 " + details;
			lblDetails->Location = Point(10, 60);
			lblDetails->AutoSize = true;

			Label^ lblFamily = gcnew Label();
			lblFamily->Text = "👨‍👩‍👧‍👦 أفراد: " + familyCount.ToString();
			lblFamily->Location = Point(10, 85);
			lblFamily->AutoSize = true;

			Button^ btnDone = gcnew Button();
			btnDone->Text = "✅ تم";
			btnDone->Size = Drawing::Size(50, 25);
			btnDone->Location = Point(210, 95);
			btnDone->BackColor = Color::WhiteSmoke;
			tip->SetToolTip(btnDone, "علّم هذه الحالة كمُسلّمة");

			card->Controls->Add(lblName);
			card->Controls->Add(lblType);
			card->Controls->Add(lblDetails);
			card->Controls->Add(lblFamily);
			card->Controls->Add(btnDone);

			return card;
		}
	};
}
