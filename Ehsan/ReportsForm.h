#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Ehsan {

	public ref class ReportsForm : public System::Windows::Forms::Form
	{
	public:
		ReportsForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ReportsForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		FlowLayoutPanel^ panelIndicators;
		Button^ btnBack;
		ToolTip^ tip;

		void InitializeComponent(void)
		{
			this->Text = L"📊 تقارير وإحصائيات";
			this->ClientSize = Drawing::Size(1000, 600);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->BackColor = Color::WhiteSmoke;
			this->Font = gcnew Drawing::Font("Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			tip = gcnew ToolTip();

			lblTitle = gcnew Label();
			lblTitle->Text = L"📊 تقارير البرنامج وإحصائياته العامة";
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 18, FontStyle::Bold);
			lblTitle->ForeColor = Color::White;
			lblTitle->BackColor = Color::Teal;
			this->Controls->Add(lblTitle);

			// ✅ استخدام FlowLayoutPanel الصحيح
			panelIndicators = gcnew FlowLayoutPanel();
			panelIndicators->Location = Point(20, 80);
			panelIndicators->Size = Drawing::Size(950, 400);
			panelIndicators->FlowDirection = FlowDirection::RightToLeft;
			panelIndicators->WrapContents = true;
			this->Controls->Add(panelIndicators);

			// ✅ البيانات المؤقتة (ممكن تربطها لاحقاً بقاعدة البيانات)
			array<String^>^ reports = {
				L"📌 عدد الحالات: 120",
				L"🎁 عدد المساعدات: 270",
				L"💰 إجمالي المصروفات: 185000 جنيه",
				L"📦 أكثر مساعدات توزيعاً: بطاطين",
				L"⏱️ معدل الاستجابة: خلال 3 أيام",
				L"📊 نسبة الحالات النشطة: 80%",
				L"📅 مساعدات اليوم: 6",
				L"📈 تقارير شهر رمضان: جاهز للطباعة"
			};

			// ✅ إنشاء بطاقات مؤشرات التقارير
			for each (String ^ text in reports)
			{
				Label^ card = gcnew Label();
				card->Text = text;
				card->AutoSize = false;
				card->Size = Drawing::Size(220, 60);
				card->Margin = System::Windows::Forms::Padding(10);
				card->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
				card->BackColor = Color::White;
				card->ForeColor = Color::FromArgb(40, 60, 90);
				card->TextAlign = ContentAlignment::MiddleCenter;
				card->BorderStyle = BorderStyle::FixedSingle;
				tip->SetToolTip(card, "تقرير تفصيلي - غير متصل بقاعدة البيانات حاليًا");
				panelIndicators->Controls->Add(card);
			}

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة للرئيسية";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Size = Drawing::Size(160, 35);
			btnBack->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
			btnBack->Location = Point(410, 500);
			btnBack->Click += gcnew EventHandler(this, &ReportsForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}
	};
}
