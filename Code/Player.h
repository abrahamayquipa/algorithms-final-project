#pragma once
#include "Entidad.h"

class Player: public Entidad {
private:
	bool collision;
	bool collisionInterval;
public:
	Player(int width, int height) : Entidad(width, height) {
		dx = dy = 15;
		x = 70;
		y = 305;
		idX = idY = 0;
		direction = 'S';
		live = 3;
		vaccine = 0;
		collision = false;
		collisionInterval = false;
	}

	~Player() {}

	void move(Graphics^ g, char i) {
		switch (i) {
		case 'A':
			if (x > 0) {
				idY = 1;
				x -= dx;
				direction = 'A';
			}
			break;
		case 'D':
			if (x + width * 1.0 < g->VisibleClipBounds.Width - 10) {
				idY = 2;
				x += dx;
				direction = 'D';
			}
			break;
		case 'W':
			if (y > 0) {
				idY = 3;
				y -= dy;
				direction = 'W';
			}
			break;
		case 'S':
			if (y + height * 1.0 < g->VisibleClipBounds.Height - 20) {
				idY = 0;
				y += dy;
				direction = 'S';
			}
			break;
		}
		idX++;
		if (idX > 3) idX = 0;
	}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShow = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.4, height * 1.4);
		g->DrawImage(bmp, zoom, sectionShow, GraphicsUnit::Pixel);
	}

	bool getIntervaloColision() { return collisionInterval; }
	void setIntervaloColision(bool colision) { this->collisionInterval = colision; }

	char getDirection() { return direction; }

	void diminishLives() { live--; }
	void setLives(int v) { live = v; }
	int getLives() { return live; }

	void increaseVaccine() { vaccine++; }
	void setVaccine(int v) { vaccine = v; }
	int getVaccine() { return vaccine; }
};
