#pragma once

namespace haceriobrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextUrl;
	private: System::Windows::Forms::Button^ btnGo;
	protected:



	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnForward;
	private: System::Windows::Forms::Button^ btnRefresh;





	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextUrl = (gcnew System::Windows::Forms::TextBox());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TextUrl
			// 
			this->TextUrl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextUrl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TextUrl->Location = System::Drawing::Point(133, 8);
			this->TextUrl->Margin = System::Windows::Forms::Padding(5);
			this->TextUrl->Name = L"TextUrl";
			this->TextUrl->Size = System::Drawing::Size(1055, 20);
			this->TextUrl->TabIndex = 1;
			this->TextUrl->TextChanged += gcnew System::EventHandler(this, &MyForm::TextUrl_TextChanged);
			// 
			// btnGo
			// 
			this->btnGo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnGo->Location = System::Drawing::Point(1188, 2);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(76, 33);
			this->btnGo->TabIndex = 2;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::btnGo_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->CausesValidation = false;
			this->webBrowser1->Location = System::Drawing::Point(0, 52);
			this->webBrowser1->MinimumSize = System::Drawing::Size(100, 200);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(1264, 629);
			this->webBrowser1->TabIndex = 3;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 8);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(21, 20);
			this->btnBack->TabIndex = 4;
			this->btnBack->Text = L"<";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnForward
			// 
			this->btnForward->Location = System::Drawing::Point(39, 8);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(21, 20);
			this->btnForward->TabIndex = 5;
			this->btnForward->Text = L">";
			this->btnForward->UseVisualStyleBackColor = true;
			this->btnForward->Click += gcnew System::EventHandler(this, &MyForm::btnForward_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(66, 8);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(59, 20);
			this->btnRefresh->TabIndex = 6;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->btnRefresh);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->btnGo);
			this->Controls->Add(this->TextUrl);
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"hacerio browser";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(TextUrl->Text);
	}
private: System::Void btnForward_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->GoForward();
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->GoBack();
}
private: System::Void TextUrl_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Refresh();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Navigate("www.google.com.ua/?hl=ua");
}
};
}
