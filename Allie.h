#pragma once
#include "Entidad.h"

class Allie : public Entidad {
private:
	bool collision;
public:
	Allie(int width, int height, int d, int x, int y) : Entidad(width, height) {
		direction = d;
		dx = dy = ((rand() % 2) == 1) ? 20 : -20;
		this->x = x + rand() % 121 - 60;
		this->y = y + rand() % 121 - 60;
		idX = idY = 0;
		collision = false;
	}

	Allie(int width, int height, int x, int y) : Entidad(width, height) {
		direction = rand() % 2;
		dx = dy = ((rand() % 2) == 1) ? 20 : -20;
		this->x = x;
		this->y = y;
		idX = idY = 0;
		collision = false;
	}

	~Allie() {}

	void move(Graphics^ g) {
		//horizontal
		if (direction == 1) { // los enemigos se mueven de izquierda a derecha
			if (x + width * 1.0 > g->VisibleClipBounds.Width || x < 0) dx *= -1;
			if (dx > 0) { //dx=20
				idY = 2;
			}
			else // dx=-20
				idY = 1;
			x += dx;
		}
		//vertical
		else {
			if (y + height * 1.0 > g->VisibleClipBounds.Height || y < 0) dy *= -1;
			if (dy > 0) {
				idY = 0;
			}
			else
				idY = 3;
			y += dy;
		}
		idX++;
		if (idX > 3)
			idX = 0;
	}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShow = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.4, height * 1.4);
		g->DrawImage(bmp, zoom, sectionShow, GraphicsUnit::Pixel);
	}
};
