#pragma once
#include "Entidad.h"

class Remedy :public Entidad {
private:
	bool collision;
public:
	Remedy(int width, int height, char direction_player, int x, int y) : Entidad(width, height) {
		this->direction = direction_player;
		dx = dy = 30;
		this->x = x;
		this->y = y;
		idX = idY = 0;
		collision = false;
	}
	~Remedy() {}

	void move(Graphics^ g) {
		if (direction == 'S' && y + height * 0.5 <= g->VisibleClipBounds.Height) {
			y += dy;
		}
		if (direction == 'W' && y >= 0) {
			y -= dy;
		}
		if (direction == 'A' && x >= 0) {
			x -= dx;
		}
		if (direction == 'D' && x + width * 0.5 <= g->VisibleClipBounds.Width) {
			x += dx;
		}
	}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShow = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.5, height * 0.5);
		g->DrawImage(bmp, zoom, sectionShow, GraphicsUnit::Pixel);
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, width * 0.5, height * 0.5);
	}

	int getXWidth() { return x + width * 0.5; }
	int getYHeight() { return y + height * 0.5; }
};
