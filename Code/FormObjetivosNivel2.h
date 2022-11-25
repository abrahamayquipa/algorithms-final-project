#pragma once
#include "FormJuegoNivel2.h"
namespace AdventureForest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormObjetivosNivel1
	/// </summary>
	public ref class FormObjetivosNivel2 : public System::Windows::Forms::Form
	{
	public:
		FormObjetivosNivel2(void)
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
		~FormObjetivosNivel2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ BtnNext;
	private: System::Windows::Forms::Panel^ panel2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormObjetivosNivel2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BtnNext = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(182, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 48);
			this->panel1->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(473, 251);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(53, 59);
			this->panel5->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(783, 48);
			this->label2->TabIndex = 13;
			this->label2->Text = L"- Captura los items en 30 segundos.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 184);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(595, 48);
			this->label1->TabIndex = 14;
			this->label1->Text = L"- No dejes que te eliminen.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(11, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(442, 48);
			this->label3->TabIndex = 15;
			this->label3->Text = L"- Presiona la tecla";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(529, 249);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(312, 48);
			this->label4->TabIndex = 16;
			this->label4->Text = L"para invocar";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DimGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(12, 316);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(318, 48);
			this->label5->TabIndex = 17;
			this->label5->Text = L"a tus aliados";
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
			this->BtnNext->Location = System::Drawing::Point(644, 372);
			this->BtnNext->Name = L"BtnNext";
			this->BtnNext->Size = System::Drawing::Size(125, 41);
			this->BtnNext->TabIndex = 18;
			this->BtnNext->UseVisualStyleBackColor = false;
			this->BtnNext->Click += gcnew System::EventHandler(this, &FormObjetivosNivel2::BtnNext_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(579, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(94, 71);
			this->panel2->TabIndex = 19;
			// 
			// FormObjetivosNivel2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(859, 446);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->BtnNext);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Name = L"FormObjetivosNivel2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormObjetivosNivel2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void BtnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		FormJuegoNivel2^ formJuegoNivel2 = gcnew FormJuegoNivel2();
		Hide();
		formJuegoNivel2->ShowDialog();
		Close();
		delete formJuegoNivel2;
	}
};
}
