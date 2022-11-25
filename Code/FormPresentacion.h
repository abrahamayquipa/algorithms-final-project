#pragma once
#include "FormHistoria1.h"
#include "FormInstrucciones.h"
#include "FormCreditos.h"
#include "FormJuegoNivel1.h"

namespace AdventureForest {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Summary for FormPresentacion
	/// </summary>
	public ref class FormPresentacion : public System::Windows::Forms::Form
	{
	public:
		FormPresentacion(void)
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
		~FormPresentacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnStart;
	private: System::Windows::Forms::Button^ BtnCreditos;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ BtnSalir;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		SoundPlayer^ music = gcnew SoundPlayer("Music\\musica.wav");
	private: System::Windows::Forms::Panel^ panel2;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormPresentacion::typeid));
			this->BtnStart = (gcnew System::Windows::Forms::Button());
			this->BtnCreditos = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BtnSalir = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// BtnStart
			// 
			this->BtnStart->BackColor = System::Drawing::Color::Transparent;
			this->BtnStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnStart.BackgroundImage")));
			this->BtnStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnStart->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnStart->FlatAppearance->BorderSize = 0;
			this->BtnStart->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnStart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnStart->ForeColor = System::Drawing::Color::White;
			this->BtnStart->Location = System::Drawing::Point(310, 284);
			this->BtnStart->Name = L"BtnStart";
			this->BtnStart->Size = System::Drawing::Size(168, 41);
			this->BtnStart->TabIndex = 0;
			this->BtnStart->UseVisualStyleBackColor = false;
			this->BtnStart->Click += gcnew System::EventHandler(this, &FormPresentacion::BtnStart_Click);
			// 
			// BtnCreditos
			// 
			this->BtnCreditos->BackColor = System::Drawing::Color::Transparent;
			this->BtnCreditos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnCreditos.BackgroundImage")));
			this->BtnCreditos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnCreditos->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnCreditos->FlatAppearance->BorderSize = 0;
			this->BtnCreditos->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnCreditos->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnCreditos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnCreditos->ForeColor = System::Drawing::Color::White;
			this->BtnCreditos->Location = System::Drawing::Point(282, 328);
			this->BtnCreditos->Name = L"BtnCreditos";
			this->BtnCreditos->Size = System::Drawing::Size(224, 41);
			this->BtnCreditos->TabIndex = 0;
			this->BtnCreditos->UseVisualStyleBackColor = false;
			this->BtnCreditos->Click += gcnew System::EventHandler(this, &FormPresentacion::BtnCreditos_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(204, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(380, 64);
			this->panel1->TabIndex = 1;
			// 
			// BtnSalir
			// 
			this->BtnSalir->BackColor = System::Drawing::Color::Transparent;
			this->BtnSalir->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnSalir.BackgroundImage")));
			this->BtnSalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BtnSalir->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->BtnSalir->FlatAppearance->BorderSize = 0;
			this->BtnSalir->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BtnSalir->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BtnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnSalir->ForeColor = System::Drawing::Color::White;
			this->BtnSalir->Location = System::Drawing::Point(313, 367);
			this->BtnSalir->Name = L"BtnSalir";
			this->BtnSalir->Size = System::Drawing::Size(162, 51);
			this->BtnSalir->TabIndex = 0;
			this->BtnSalir->UseVisualStyleBackColor = false;
			this->BtnSalir->Click += gcnew System::EventHandler(this, &FormPresentacion::BtnSalir_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(322, 27);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(144, 124);
			this->panel3->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(301, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 41);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormPresentacion::BtnStart_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(10, 117);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(306, 347);
			this->panel2->TabIndex = 4;
			// 
			// FormPresentacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 445);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->BtnStart);
			this->Controls->Add(this->BtnCreditos);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->BtnSalir);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormPresentacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormPresentacion";
			this->ResumeLayout(false);
			//
			// Music
			//
			this->music->PlayLooping();
		}
#pragma endregion
	private: System::Void BtnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		FormHistoria1^ formHistoria1 = gcnew FormHistoria1();
		Hide();
		formHistoria1->ShowDialog();
		Close();
		delete formHistoria1;
	}
	private: System::Void BtnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		FormCreditos^ formCreditos = gcnew FormCreditos();
		Hide();
		formCreditos->ShowDialog();
		Close();
		delete formCreditos;
	}
	private: System::Void BtnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
