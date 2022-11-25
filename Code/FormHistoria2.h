#pragma once
#include "FormHistoria2.h"
namespace AdventureForest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormHistoria1
	/// </summary>
	public ref class FormHistoria1 : public System::Windows::Forms::Form
	{
	public:
		FormHistoria1(void)
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
		~FormHistoria1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnNext;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormHistoria1::typeid));
			this->BtnNext = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BtnNext
			// 
			this->BtnNext->BackColor = System::Drawing::Color::Transparent;
			this->BtnNext->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnNext.BackgroundImage")));
			this->BtnNext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnNext->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnNext->FlatAppearance->BorderSize = 0;
			this->BtnNext->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnNext->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnNext->ForeColor = System::Drawing::Color::White;
			this->BtnNext->Location = System::Drawing::Point(579, 381);
			this->BtnNext->Name = L"BtnNext";
			this->BtnNext->Size = System::Drawing::Size(125, 41);
			this->BtnNext->TabIndex = 3;
			this->BtnNext->UseVisualStyleBackColor = false;
			this->BtnNext->Click += gcnew System::EventHandler(this, &FormHistoria1::BtnNext_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(0, 284);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(165, 166);
			this->panel2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(105, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(538, 48);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Dame una mano con darle";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(147, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(454, 48);
			this->label1->TabIndex = 15;
			this->label1->Text = L"medicamentos a los ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(221, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(306, 48);
			this->label3->TabIndex = 16;
			this->label3->Text = L"antivacunas";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(21, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(766, 258);
			this->panel1->TabIndex = 4;
			// 
			// FormHistoria1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 448);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->BtnNext);
			this->Controls->Add(this->panel1);
			this->Name = L"FormHistoria1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormHistoria1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		FormHistoria2^ formHistoria2 = gcnew FormHistoria2();
		Hide();
		formHistoria2->ShowDialog();
		Close();
		delete formHistoria2;
	}
};
}
