#pragma once
#include "Player.h"
#include "EnemyA.h"
#include "EnemyB.h"
#include "Allie.h"
#include "Vaccine.h"
#include "Remedy.h"
#include <vector>

using namespace std;
class Controller {
private:
	Player* player;
	vector<EnemyA*>enemieA;
	vector<EnemyB*>enemieB;
	vector<Allie*>allie;
	vector<Vaccine*> vaccine;
	vector<Remedy*> remedy;
	//Vector que alamcena a los enemigos curados
	vector<EnemyA*> remedyEnemyA;
	vector<EnemyB*> remedyEnemyB;
	int numberOfEnemiesA;
	int numberOfEnemiesB;
public:
	Controller(Bitmap^ bmpPlayer) {
		player = new Player(bmpPlayer->Width / 4, bmpPlayer->Height / 4);
	}

	~Controller() {}

	void createEnemiesA(int width, int height, int numberOfEnemiesA) {
		for (int i = 0; i < numberOfEnemiesA; i++) {
			EnemyA* enemiesTipeA = new EnemyA(width, height);
			enemieA.push_back(enemiesTipeA);
		}
	}
	void createEnemiesB(int width, int height, int numberOfEnemiesB) {
		for (int i = 0; i < numberOfEnemiesB; i++) {
			EnemyB* enemiesTipeB = new EnemyB(width, height);
			enemieB.push_back(enemiesTipeB);
		}
	}

	void createAllies(int width, int height, int x, int y) {
		Allie* a = new Allie(width, height, rand() % 2, x, y);
		allie.push_back(a);
	}

	//Convertir enemigoA a aliados
	void enemyAToAllie(Bitmap^ bmpAllies, EnemyA* enemieA) {
		Allie* a = new Allie(bmpAllies->Width / 4, bmpAllies->Height / 4, enemieA->getX(), enemieA->getY());
		allie.push_back(a);
	}

	//Convertir enemigoB a aliados
	void enemyBToAllie(Bitmap^ bmpAllies, EnemyB* enemieB) {
		Allie* b = new Allie(bmpAllies->Width / 4, bmpAllies->Height / 4, enemieB->getX(), enemieB->getY());
		allie.push_back(b);
	}

	//Disparar remedio
	void shootRemedy(int width, int height, int x, int y) {
		Remedy* r = new Remedy(width, height, player->getDirection(), x, y);
		remedy.push_back(r);
	}

	//Vaccine
	void addVaccine(Vaccine* v) { vaccine.push_back(v); }

	//Colisiones
	void collision(Graphics^ g) {
		//Colisión héroe vs enemigoA
		for (int i = 0; i < enemieA.size(); i++) {
			if (player->getRectangle().IntersectsWith(enemieA.at(i)->getRectangle()) && player->getIntervaloColision() == false) {
				player->diminishLives();
				player->setCollision(true);
				player->setIntervaloColision(true);
			}
		}
		//Colisión héroe vs enemigoB
		for (int i = 0; i < enemieB.size(); i++) {
			if (player->getRectangle().IntersectsWith(enemieB.at(i)->getRectangle()) && player->getIntervaloColision() == false) {
				player->diminishLives();
				player->setCollision(true);
				player->setIntervaloColision(true);
			}
		}

		//Colisión aliado vs enemigoA
		for (int i = 0; i < enemieA.size(); i++) {
			for (int j = 0; j < allie.size(); j++) {
				if (enemieA.at(i)->getRectangle().IntersectsWith(allie.at(j)->getRectangle())) {
					enemieA.at(i)->setCollision(true);
					allie.at(j)->setCollision(true);
				}
			}
		}

		//Colisión aliado vs enemigoB
		for (int i = 0; i < enemieB.size(); i++) {
			for (int j = 0; j < allie.size(); j++) {
				if (enemieB.at(i)->getRectangle().IntersectsWith(allie.at(j)->getRectangle())) {
					enemieB.at(i)->setCollision(true);
					allie.at(j)->setCollision(true);
				}
			}
		}

		//Colisión vaccine vs player
		for (int i = 0; i < vaccine.size(); i++) {
			if (player->getRectangle().IntersectsWith(vaccine.at(i)->getRectangle())) {
				player->increaseVaccine();
				vaccine.at(i)->setCollision(true);
			}
		}

		//colision remedy vs enemigoA
		int auxA = 1;
		for (int i = 0; i < enemieA.size(); i++) {
			for (int j = 0; j < remedy.size(); j++) {
				if (enemieA.at(i)->getRectangle().IntersectsWith(remedy.at(j)->getRectangle())) {
					remedy.at(j)->setCollision(true);
					enemieA.at(i)->setCollision(true);
					//Dentro del vector remedyEnemyA se almacenara el enemigo previamente curado
					if (enemieA.at(i)->getCollision() == true && auxA != i) {
						remedyEnemyA.push_back(enemieA.at(i));
						auxA = i;
					}
				}
			}
		}
		//colision remedy vs enemigoB
		int auxB = 1;
		for (int i = 0; i < enemieB.size(); i++) {
			for (int j = 0; j < remedy.size(); j++) {
				if (enemieB.at(i)->getRectangle().IntersectsWith(remedy.at(j)->getRectangle())) {
					remedy.at(j)->setCollision(true);
					enemieB.at(i)->setCollision(true);
					if (enemieB.at(i)->getCollision() == true && auxB != i) {
						remedyEnemyB.push_back(enemieB.at(i));
						auxB = i;
					}
				}
			}
		}

		//colision del remedy con el limite de la ventana
		for (int i = 0; i < remedy.size(); i++){
			if (remedy.at(i)->getX() <= 0 || remedy.at(i)->getXWidth() >= g->VisibleClipBounds.Width ||
				remedy.at(i)->getY() <= 0 || remedy.at(i)->getYHeight() >= g->VisibleClipBounds.Height) {
				remedy.at(i)->setCollision(true);
			}
		}

		//Eliminados por colisión
		for (int i = 0; i < enemieA.size(); i++) {
			if (enemieA.at(i)->getCollision()) {
				enemieA.erase(enemieA.begin() + i);
			}
		}
		for (int i = 0; i < enemieB.size(); i++) {
			if (enemieB.at(i)->getCollision()) {
				enemieB.erase(enemieB.begin() + i);
			}
		}
		for (int i = 0; i < allie.size(); i++) {
			if (allie.at(i)->getCollision()) {
				allie.erase(allie.begin() + i);
			}
		}
		for (int i = 0; i < vaccine.size(); i++) {
			if (vaccine.at(i)->getCollision()) {
				vaccine.erase(vaccine.begin() + i);
			}
		}
		for (int i = 0; i < remedy.size(); i++) {
			if (remedy.at(i)->getCollision()) {
				remedy.erase(remedy.begin() + i);
			}
		}
	}

	void drawEverything(Graphics ^ g, Bitmap ^ bmpAllies, Bitmap ^ bmpEnemyA, Bitmap ^ bmpEnemyB, Bitmap ^ bmpVaccine, Bitmap ^ bmpRemedy) {
		for (int i = 0; i < enemieA.size(); i++) enemieA.at(i)->draw(g, bmpEnemyA);
		for (int i = 0; i < enemieB.size(); i++) enemieB.at(i)->draw(g, bmpEnemyB);
		for (int i = 0; i < allie.size(); i++) allie.at(i)->draw(g, bmpAllies);
		for (int i = 0; i < vaccine.size(); i++) vaccine.at(i)->draw(g, bmpVaccine);
		for (int i = 0; i < remedy.size(); i++) remedy.at(i)->draw(g, bmpRemedy);
	}

	void moveEverything(Graphics^ g) {
		for (int i = 0; i < enemieA.size(); i++) enemieA.at(i)->move(g);
		for (int i = 0; i < enemieB.size(); i++) enemieB.at(i)->move(g);
		for (int i = 0; i < allie.size(); i++) allie.at(i)->move(g);
		for (int i = 0; i < remedy.size(); i++) remedy.at(i)->move(g);
	}

	Player* getPlayer() { return player; }
	int getVaccine() { return vaccine.size(); }
	
	//Retorna el vector de los enemigos curados
	vector<EnemyA*> getRemedyEnemyA() { return remedyEnemyA; }
	vector<EnemyB*> getRemedyEnemyB() { return remedyEnemyB; }

	//Borrar a los enemigos curados
	void eraseRemedyEnemyA() {
		for (int i = 0; i < remedyEnemyA.size(); i++) {
			remedyEnemyA.erase(remedyEnemyA.begin() + i);
		}
	}
	void eraseRemedyEnemyB() {
		for (int i = 0; i < remedyEnemyB.size(); i++) {
			remedyEnemyB.erase(remedyEnemyB.begin() + i);
		}
	}
};
