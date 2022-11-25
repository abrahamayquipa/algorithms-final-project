#pragma once
#include "Entidad.h"

class Vaccine :public Entidad {
private: 
	bool collision;
public: 
	Vaccine(int width, int height) : Entidad(width, height) {
		x = rand() % 800;
		y = rand() % 800;
		idX = idY = 0;
		collision = true;
	}
	~Vaccine(){}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShow = Rectangle(idX * width, idY * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 0.8, height * 0.8);
		g->DrawImage(bmp, zoom, sectionShow, GraphicsUnit::Pixel);
	}
};
