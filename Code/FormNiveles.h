#pragma once
#include "FormObjetivosNivel1.h"
#include "FormObjetivosNivel2.h"

namespace AdventureForest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormNiveles
	/// </summary>
	public ref class FormNiveles : public System::Windows::Forms::Form
	{
	public:
		FormNiveles(void)
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
		~FormNiveles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ BtnNivel1;
	private: System::Windows::Forms::Button^ BtnNivel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormNiveles::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BtnNivel1 = (gcnew System::Windows::Forms::Button());
			this->BtnNivel2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(207, 68);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 59);
			this->panel1->TabIndex = 1;
			// 
			// BtnNivel1
			// 
			this->BtnNivel1->BackColor = System::Drawing::Color::Transparent;
			this->BtnNivel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnNivel1.BackgroundImage")));
			this->BtnNivel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnNivel1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnNivel1->FlatAppearance->BorderSize = 0;
			this->BtnNivel1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnNivel1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnNivel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnNivel1->ForeColor = System::Drawing::Color::White;
			this->BtnNivel1->Location = System::Drawing::Point(128, 339);
			this->BtnNivel1->Name = L"BtnNivel1";
			this->BtnNivel1->Size = System::Drawing::Size(199, 41);
			this->BtnNivel1->TabIndex = 2;
			this->BtnNivel1->UseVisualStyleBackColor = false;
			this->BtnNivel1->Click += gcnew System::EventHandler(this, &FormNiveles::BtnNivel1_Click);
			// 
			// BtnNivel2
			// 
			this->BtnNivel2->BackColor = System::Drawing::Color::Transparent;
			this->BtnNivel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnNivel2.BackgroundImage")));
			this->BtnNivel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnNivel2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnNivel2->FlatAppearance->BorderSize = 0;
			this->BtnNivel2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnNivel2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnNivel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnNivel2->ForeColor = System::Drawing::Color::White;
			this->BtnNivel2->Location = System::Drawing::Point(474, 339);
			this->BtnNivel2->Name = L"BtnNivel2";
			this->BtnNivel2->Size = System::Drawing::Size(191, 41);
			this->BtnNivel2->TabIndex = 3;
			this->BtnNivel2->UseVisualStyleBackColor = false;
			this->BtnNivel2->Click += gcnew System::EventHandler(this, &FormNiveles::BtnNivel2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(459, 146);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(220, 185);
			this->panel3->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(117, 145);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 185);
			this->panel2->TabIndex = 7;
			// 
			// FormNiveles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(797, 449);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->BtnNivel2);
			this->Controls->Add(this->BtnNivel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormNiveles";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormNiveles";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BtnNivel1_Click(System::Object^ sender, System::EventArgs^ e) {
		FormObjetivosNivel1^ formObjetivosNivel1 = gcnew FormObjetivosNivel1();
		Hide();
		formObjetivosNivel1->ShowDialog();
		Close();
		delete formObjetivosNivel1;
	}
	private: System::Void BtnNivel2_Click(System::Object^ sender, System::EventArgs^ e) {
		FormObjetivosNivel2^ formObjetivosNivel2 = gcnew FormObjetivosNivel2();
		Hide();
		formObjetivosNivel2->ShowDialog();
		Close();
		delete formObjetivosNivel2;
	}
};
}
