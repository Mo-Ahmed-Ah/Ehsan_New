#pragma once

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SelectAidForm
	/// </summary>
	public ref class SelectAidForm : public System::Windows::Forms::Form
	{
	public:
		SelectAidForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SelectAidForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ SelectAidPageTitleLabel;
	protected:
	private: System::Windows::Forms::Panel^ SelectAidPageTitlePanal;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SelectAidPageTitleLabel = (gcnew System::Windows::Forms::Label());
			this->SelectAidPageTitlePanal = (gcnew System::Windows::Forms::Panel());
			this->SelectAidPageTitlePanal->SuspendLayout();
			this->SuspendLayout();
			// 
			// SelectAidPageTitleLabel
			// 
			this->SelectAidPageTitleLabel->AutoSize = true;
			this->SelectAidPageTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SelectAidPageTitleLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->SelectAidPageTitleLabel->Location = System::Drawing::Point(250, 5);
			this->SelectAidPageTitleLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SelectAidPageTitleLabel->Name = L"SelectAidPageTitleLabel";
			this->SelectAidPageTitleLabel->Size = System::Drawing::Size(219, 33);
			this->SelectAidPageTitleLabel->TabIndex = 0;
			this->SelectAidPageTitleLabel->Text = L"أختار نوع المساعدة";
			// 
			// SelectAidPageTitlePanal
			// 
			this->SelectAidPageTitlePanal->BackColor = System::Drawing::SystemColors::Highlight;
			this->SelectAidPageTitlePanal->Controls->Add(this->SelectAidPageTitleLabel);
			this->SelectAidPageTitlePanal->Location = System::Drawing::Point(-3, -1);
			this->SelectAidPageTitlePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->SelectAidPageTitlePanal->Name = L"SelectAidPageTitlePanal";
			this->SelectAidPageTitlePanal->Size = System::Drawing::Size(725, 45);
			this->SelectAidPageTitlePanal->TabIndex = 4;
			// 
			// SelectAidForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 557);
			this->Controls->Add(this->SelectAidPageTitlePanal);
			this->Name = L"SelectAidForm";
			this->Text = L"SelectAidForm";
			this->SelectAidPageTitlePanal->ResumeLayout(false);
			this->SelectAidPageTitlePanal->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
