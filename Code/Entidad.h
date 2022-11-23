#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;
using namespace System::Drawing;

class Entidad {
protected:
	int x, y;
	int dx, dy;
	int idX, idY;
	int width, height;
	char direction;
	int live;
	int vaccine;
	bool collision;
public:
	Entidad(int width, int height) {
		this->width = width;
		this->height = height;
		collision = false;
	}

	~Entidad() {}

	Rectangle getRectangle() {
		return Rectangle(x, y, width * 1.0, height * 1.0);
	}

	int getX() { return x; }
	int getY() { return y; }

	void setCollision(bool v) { collision = v; }
	bool getCollision() { return collision; }
};
