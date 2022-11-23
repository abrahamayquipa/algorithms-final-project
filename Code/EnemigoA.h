#pragma once
#include "Entidad.h"

class EnemyA : public Entidad {
private:
	bool collision;
public:
	EnemyA(int width, int height) : Entidad(width, height) {
		direction = rand() % 2;
		dx = dy = 20;
		x = rand() % 900;
		y = rand() % 200;
		idX = idY = 0;
		collision = false;
	}

	~EnemyA() {}

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
