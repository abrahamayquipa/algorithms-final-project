#pragma once
#include "Player.h"
#include "Controller.h"
#include "FormGameOver.h"
#include "FormYouWin.h"
#include "File.h"
#include <ctime>
using namespace System::Diagnostics;
using namespace System;

namespace AdventureForest {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class FormJuegoNivel2 : public System::Windows::Forms::Form
	{
	public:
		FormJuegoNivel2(void)
		{
			InitializeComponent();
			srand(time(NULL));
			g = pnlCanvas->CreateGraphics();
			space = BufferedGraphicsManager::Current;

			buffer = space->Allocate(g, pnlCanvas->ClientRectangle);
			bmpPlayer = gcnew Bitmap("Images\\player.png");
			bmpEnemyA = gcnew Bitmap("Images\\enemiesA.png");
			bmpEnemyB = gcnew Bitmap("Images\\enemiesB.png");
			bmpAllies = gcnew Bitmap("Images\\allies.png");
			bmpMap = gcnew Bitmap("Images\\escenario4.jpg");
			bmpVacc = gcnew Bitmap("Images\\vaccine.png");
			bmpRemedy = gcnew Bitmap("Images\\remedy.png");

			file = new File();
			file->readData();

			controller = new Controller(bmpPlayer);
			controller->createEnemiesA(bmpEnemyA->Width / 4, bmpEnemyA->Height / 4, numberOfEnemies);
			controller->createEnemiesB(bmpEnemyB->Width / 4, bmpEnemyB->Height / 4, numberOfEnemies);
		}
	protected:
		~FormJuegoNivel2()
		{
			if (components)
			{
				delete components;
			}
			delete this->g, this->space, this->buffer, this->bmpPlayer, this->bmpAllies, this->bmpEnemyA, this->bmpEnemyB, this->bmpMap, this->controller, this->bmpVacc, this->bmpRemedy;
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ pnlCanvas;
	protected:
	private: System::ComponentModel::IContainer^ components;
	private:
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

		Bitmap^ bmpPlayer;
		Bitmap^ bmpEnemyA;
		Bitmap^ bmpEnemyB;
		Bitmap^ bmpAllies;
		Bitmap^ bmpMap;
		Bitmap^ bmpVacc;
		Bitmap^ bmpRemedy;

		Controller* controller;

		Stopwatch^ cronometro = gcnew Stopwatch();
		SoundPlayer^ music = gcnew SoundPlayer("Music\\musica.wav");

		File* file;

		int numberOfEnemies = 8;
	private: System::Windows::Forms::Label^ LblSegundos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LblMinutos;
	private: System::Windows::Forms::Label^ LblItems;
	private: System::Windows::Forms::Label^ LblVidas;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Timer^ timerVaccine;
	private: System::Windows::Forms::Timer^ TimerCronometro;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormJuegoNivel2::typeid));
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->pnlCanvas = (gcnew System::Windows::Forms::Panel());
			   this->LblSegundos = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->LblMinutos = (gcnew System::Windows::Forms::Label());
			   this->LblItems = (gcnew System::Windows::Forms::Label());
			   this->LblVidas = (gcnew System::Windows::Forms::Label());
			   this->TimerCronometro = (gcnew System::Windows::Forms::Timer(this->components));
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->timerVaccine = (gcnew System::Windows::Forms::Timer(this->components));
			   this->SuspendLayout();
			   // 
			   // timer1
			   // 
			   this->timer1->Enabled = true;
			   this->timer1->Tick += gcnew System::EventHandler(this, &FormJuegoNivel2::timer1_Tick);
			   // 
			   // pnlCanvas
			   // 
			   this->pnlCanvas->BackColor = System::Drawing::Color::LightGray;
			   this->pnlCanvas->Location = System::Drawing::Point(0, 45);
			   this->pnlCanvas->Margin = System::Windows::Forms::Padding(4);
			   this->pnlCanvas->Name = L"pnlCanvas";
			   this->pnlCanvas->Size = System::Drawing::Size(1280, 1115);
			   this->pnlCanvas->TabIndex = 0;
			   // 
			   // LblSegundos
			   // 
			   this->LblSegundos->AutoSize = true;
			   this->LblSegundos->BackColor = System::Drawing::Color::Transparent;
			   this->LblSegundos->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LblSegundos->ForeColor = System::Drawing::Color::White;
			   this->LblSegundos->Location = System::Drawing::Point(1139, 0);
			   this->LblSegundos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LblSegundos->Name = L"LblSegundos";
			   this->LblSegundos->Size = System::Drawing::Size(91, 60);
			   this->LblSegundos->TabIndex = 4;
			   this->LblSegundos->Text = L"00";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(1101, 0);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(39, 60);
			   this->label1->TabIndex = 5;
			   this->label1->Text = L":";
			   // 
			   // LblMinutos
			   // 
			   this->LblMinutos->AutoSize = true;
			   this->LblMinutos->BackColor = System::Drawing::Color::Transparent;
			   this->LblMinutos->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LblMinutos->ForeColor = System::Drawing::Color::White;
			   this->LblMinutos->Location = System::Drawing::Point(1020, -2);
			   this->LblMinutos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LblMinutos->Name = L"LblMinutos";
			   this->LblMinutos->Size = System::Drawing::Size(91, 60);
			   this->LblMinutos->TabIndex = 6;
			   this->LblMinutos->Text = L"00";
			   // 
			   // LblItems
			   // 
			   this->LblItems->AutoSize = true;
			   this->LblItems->BackColor = System::Drawing::Color::Transparent;
			   this->LblItems->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LblItems->ForeColor = System::Drawing::Color::White;
			   this->LblItems->Location = System::Drawing::Point(817, -5);
			   this->LblItems->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LblItems->Name = L"LblItems";
			   this->LblItems->Size = System::Drawing::Size(58, 60);
			   this->LblItems->TabIndex = 10;
			   this->LblItems->Text = L"0";
			   // 
			   // LblVidas
			   // 
			   this->LblVidas->AutoSize = true;
			   this->LblVidas->BackColor = System::Drawing::Color::Transparent;
			   this->LblVidas->Font = (gcnew System::Drawing::Font(L"ArcadeClassic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LblVidas->ForeColor = System::Drawing::Color::White;
			   this->LblVidas->Location = System::Drawing::Point(520, -2);
			   this->LblVidas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->LblVidas->Name = L"LblVidas";
			   this->LblVidas->Size = System::Drawing::Size(58, 60);
			   this->LblVidas->TabIndex = 11;
			   this->LblVidas->Text = L"0";
			   // 
			   // TimerCronometro
			   // 
			   this->TimerCronometro->Enabled = true;
			   this->TimerCronometro->Tick += gcnew System::EventHandler(this, &FormJuegoNivel2::TimerCronometro_Tick);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::Transparent;
			   this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			   this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panel1->Location = System::Drawing::Point(433, 2);
			   this->panel1->Margin = System::Windows::Forms::Padding(4);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(60, 53);
			   this->panel1->TabIndex = 12;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::Transparent;
			   this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			   this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panel2->Location = System::Drawing::Point(725, 4);
			   this->panel2->Margin = System::Windows::Forms::Padding(4);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(73, 53);
			   this->panel2->TabIndex = 13;
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::Color::Transparent;
			   this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			   this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->panel3->Location = System::Drawing::Point(965, 5);
			   this->panel3->Margin = System::Windows::Forms::Padding(4);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(51, 53);
			   this->panel3->TabIndex = 14;
			   // 
			   // timerVaccine
			   // 
			   this->timerVaccine->Enabled = true;
			   this->timerVaccine->Tick += gcnew System::EventHandler(this, &FormJuegoNivel2::timerVaccine_Tick);
			   // 
			   // FormJuegoNivel2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1280, 1055);
			   this->Controls->Add(this->panel3);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->LblVidas);
			   this->Controls->Add(this->LblItems);
			   this->Controls->Add(this->LblMinutos);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->LblSegundos);
			   this->Controls->Add(this->pnlCanvas);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"FormJuegoNivel2";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"FormJuegoNivel2";
			   this->Load += gcnew System::EventHandler(this, &FormJuegoNivel2::FormJuegoNivel1_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormJuegoNivel2::presionar);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   int timeInterval = 0;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//clear
		buffer->Graphics->Clear(Color::WhiteSmoke);
		//collision
		controller->collision(buffer->Graphics);
		//se resta una vida al jugador cada vez que colisiona con los enemigos dentro de un intervalo de medio segundo
		if (controller->getPlayer()->getIntervaloColision() == true) {
			timeInterval++;
			if (timeInterval == 5) {
				controller->getPlayer()->setIntervaloColision(false);
				timeInterval = 0;
			}
		}

		//Si hay enemigos curados se les va a convertir aliados
		if (controller->getRemedyEnemyA().size() != 0) {
			for (int i = 0; i < controller->getRemedyEnemyA().size(); i++) {
				controller->enemyAToAllie(bmpAllies, controller->getRemedyEnemyA().at(i));
			}
			controller->eraseRemedyEnemyA();
		}
		if (controller->getRemedyEnemyB().size() != 0) {
			for (int i = 0; i < controller->getRemedyEnemyB().size(); i++) {
				controller->enemyBToAllie(bmpAllies, controller->getRemedyEnemyB().at(i));
			}
			controller->eraseRemedyEnemyB();
		}

		//Mover para los aliados y enemigos
		controller->moveEverything(buffer->Graphics);
		//Dibujar
		buffer->Graphics->DrawImage(bmpMap, 0, 0, bmpMap->Width * 2.0, bmpMap->Height * 2.0);

		controller->drawEverything(buffer->Graphics, bmpAllies, bmpEnemyA, bmpEnemyB, bmpVacc, bmpRemedy);
		controller->getPlayer()->draw(buffer->Graphics, bmpPlayer);

		LblVidas->Text = Convert::ToString(controller->getPlayer()->getLives());
		LblItems->Text = Convert::ToString(controller->getPlayer()->getVaccine());

		FormGameOver^ formGameOver = gcnew FormGameOver();
		if (controller->getPlayer()->getLives() == 0) {
			this->timer1->Enabled = false;
			Hide();
			music->Stop();
			formGameOver->ShowDialog();
			this->timer1->Enabled = true;
			controller->getPlayer()->setCollision(false);
		}

		FormYouWin^ formYouWin = gcnew FormYouWin();
		if (controller->getPlayer()->getVaccine() == 3) {
			this->timer1->Enabled = false;
			Hide();
			music->Stop();
			formYouWin->ShowDialog();
		}

		//Render
		buffer->Render(g);
	}
	private: System::Void TimerCronometro_Tick(System::Object^ sender, System::EventArgs^ e) {
		TimeSpan^ duracion = gcnew TimeSpan(0, 0, 0, 0, (int)cronometro->ElapsedMilliseconds);
		if (duracion->Minutes < 10) LblMinutos->Text = ("0") + duracion->Minutes.ToString();
		if (duracion->Minutes >= 10) LblMinutos->Text = duracion->Minutes.ToString();
		if (duracion->Seconds < 10) LblSegundos->Text = ("0") + duracion->Seconds.ToString();
		if (duracion->Seconds >= 10) LblSegundos->Text = duracion->Seconds.ToString();

		cronometro->Start();

		FormGameOver^ formGameOver = gcnew FormGameOver();
		if (duracion->Seconds == 30 && controller->getPlayer()->getVaccine() != 3) {
			Hide();
			this->TimerCronometro->Enabled = false;
			formGameOver->ShowDialog();
		}

		if (controller->getPlayer()->getLives() == 0) {
			cronometro->Stop();
		}
	}
	private: System::Void panel4_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void presionar(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::A: controller->getPlayer()->move(buffer->Graphics, 'A'); break;
		case Keys::D: controller->getPlayer()->move(buffer->Graphics, 'D'); break;
		case Keys::S: controller->getPlayer()->move(buffer->Graphics, 'S'); break;
		case Keys::W: controller->getPlayer()->move(buffer->Graphics, 'W'); break;
		case Keys::E:
			controller->createAllies(bmpAllies->Width / 4, bmpAllies->Height / 4, controller->getPlayer()->getX(), controller->getPlayer()->getY()); break;
		case Keys::Space:
			controller->shootRemedy(bmpRemedy->Width, bmpRemedy->Height, controller->getPlayer()->getX(), controller->getPlayer()->getY()); break;
		}
	}
	private: System::Void timerVaccine_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (controller->getVaccine() < 3) { //Cantidad de vacunas
			controller->addVaccine(new Vaccine(bmpVacc->Width, bmpVacc->Height));
		}
	}
	private: System::Void FormJuegoNivel1_Load(System::Object^ sender, System::EventArgs^ e) {
		timerVaccine->Interval = file->getTime() * 5; //Intervalo en el tiempo que aparece
	}
	};
}
