#pragma once
#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class Q1
{
public:
	Q1(int velocidad, int x, int y, int dx);
	~Q1();

	int getvelocidad;
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; }

	void setvelocidad() {}
	void setx() {}
	void sety() {}
	void setdx() {}

	void dibujar();
	void mover();
	void borrar();

protected:
	int velocidad;
	int x, y;
	int dx;

};

Q1::Q1(int velocidad, int x, int y, int dx)
{
	this->velocidad = velocidad;
	this->x = x;
	this->y = y;
	this->dx = dx;
}

Q1::~Q1()
{

}


void Q1::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "____|~\_";
	Console::SetCursorPosition(x, y + 1);
	cout << "[4x4_|_|-]";
	Console::SetCursorPosition(x, y + 2);
	cout << " (_)   (_)";

}
void Q1::mover()
{
	x = x + dx;

}
void Q1::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << "       ";
	Console::SetCursorPosition(x, y + 1);
	cout << "          ";
	Console::SetCursorPosition(x, y + 2);
	cout << "          ";

}

//////
class Q2 :public Q1
{
public:
	Q2::Q2(int velocidad, int x, int y, int dx);
	Q2::~Q2();
	/////
	int getvelocidad;
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; }

	void setvelocidad() {}
	void setx() {}
	void sety() {}
	void setdx() {}

	void dibujar();
	void mover();
	void borrar();

protected:
	int velocidad;
	int x, y;
	int dx;
};

Q2::Q2(int velocidad, int x, int y, int dx) :Q1(velocidad, x, y, dx)
{
	this->velocidad = velocidad;
	this->x = x;
	this->y = y;
	this->dx = dx;
}

Q2::~Q2()
{
}

void Q2::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << " _.-.___\__";
	Console::SetCursorPosition(x, y + 1);
	cout << "|  _      _`-. ";
	Console::SetCursorPosition(x, y + 2);
	cout << "'-(_)----(_)--`";

}
void Q2::mover()
{
	x = x + dx;

}
void Q2::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << "          ";
	Console::SetCursorPosition(x, y + 1);
	cout << "               ";
	Console::SetCursorPosition(x, y + 2);
	cout << "               ";

}