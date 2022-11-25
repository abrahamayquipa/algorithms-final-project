#pragma once
#include "FormNiveles.h"

namespace AdventureForest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormInstrucciones
	/// </summary>
	public ref class FormInstrucciones : public System::Windows::Forms::Form
	{
	public:
		FormInstrucciones(void)
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
		~FormInstrucciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ BtnNext;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormInstrucciones::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BtnNext = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(211, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 48);
			this->panel1->TabIndex = 0;
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
			this->BtnNext->Location = System::Drawing::Point(580, 381);
			this->BtnNext->Name = L"BtnNext";
			this->BtnNext->Size = System::Drawing::Size(125, 41);
			this->BtnNext->TabIndex = 2;
			this->BtnNext->UseVisualStyleBackColor = false;
			this->BtnNext->Click += gcnew System::EventHandler(this, &FormInstrucciones::BtnNext_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(383, 184);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(53, 59);
			this->panel3->TabIndex = 10;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(329, 244);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(53, 59);
			this->panel4->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(383, 244);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(53, 59);
			this->panel5->TabIndex = 11;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(437, 244);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(53, 59);
			this->panel6->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(58, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(254, 48);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Izquierda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(508, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 48);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Derecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(340, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 48);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Abajo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(321, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 48);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Arriba";
			// 
			// FormInstrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(798, 445);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->BtnNext);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormInstrucciones";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormInstrucciones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		FormNiveles^ formNiveles = gcnew FormNiveles();
		Hide();
		formNiveles->ShowDialog();
		Close();
		delete formNiveles;
	}
};
}
