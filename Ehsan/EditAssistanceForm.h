#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

namespace Ehsan {

	public ref class EditAssistanceForm : public System::Windows::Forms::Form
	{
	public:
		EditAssistanceForm(void)
		{
			InitializeComponent();
		}

	protected:
		~EditAssistanceForm()
		{
			if (components)
				delete components;
		}

	private:
		System::ComponentModel::Container^ components;
		Label^ lblTitle;
		Button^ btnBack;

		void InitializeComponent(void)
		{
			this->Text = L"تعديل مساعدة";
			this->ClientSize = System::Drawing::Size(600, 400);
			this->BackColor = Color::WhiteSmoke;
			this->Font = gcnew Drawing::Font(L"Segoe UI", 10);
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;

			lblTitle = gcnew Label();
			lblTitle->Text = L"✏ تعديل مساعدة";
			lblTitle->Font = gcnew Drawing::Font("Segoe UI", 16, FontStyle::Bold);
			lblTitle->ForeColor = Color::DarkSlateBlue;
			lblTitle->TextAlign = ContentAlignment::MiddleCenter;
			lblTitle->Dock = DockStyle::Top;
			lblTitle->Height = 60;
			this->Controls->Add(lblTitle);

			btnBack = gcnew Button();
			btnBack->Text = L"🔙 العودة";
			btnBack->BackColor = Color::LightSteelBlue;
			btnBack->Location = Point(230, 320);
			btnBack->Size = Drawing::Size(140, 35);
			btnBack->Click += gcnew EventHandler(this, &EditAssistanceForm::btnBack_Click);
			this->Controls->Add(btnBack);
		}

		void btnBack_Click(Object^ sender, EventArgs^ e)
		{
			this->Close();
		}
	};
}
