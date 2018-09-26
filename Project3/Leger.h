#pragma once
# include  < iostream >

#include <conio.h>
#include <Windows.h>
using  namespace  std;
using namespace System;

class  L1
{
public:
	L1(int VELOCIDAD, int X, int Y, int DX);
	~L1();

	// ///
	int getvelocidad;
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; };

	void  setvelocidad() {}
	void  setx() {}
	void  sety() {}
	void  setdx() {}

	void  dibujar();
	void  mover();
	void  borrar();

protected:
	int velocidad;
	int x, y;
	int dx;

};


L1::L1(int VELOCIDAD, int X, int Y, int DX)
{
	velocidad = VELOCIDAD;
	x = X;
	y = Y;
	dx = DX;

}
L1 :: ~L1()
{

}

void  L1::dibujar()
{

	Console::SetCursorPosition(x, y);
	cout << " __ ";
	Console::SetCursorPosition(x, y + 1);
	cout << " .-'--` -._ ";
	Console::SetCursorPosition(x, y + 2);
	cout << " '-O --- O--' ";

}
void  L1::mover()
{
	x = x + dx;

}
void  L1::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << "   ";
	Console::SetCursorPosition(x, y + 1);
	cout << "          ";
	Console::SetCursorPosition(x, y + 2);
	cout << "           ";

}

//clase hijo
class  L2 : public L1
{
public:
	L2(int velocidad, int x, int y, int dx);
	~L2();
	int getvelocidad;
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; }

	void  setvelocidad() {}
	void  setx() {}
	void  sety() {}
	void  setdx() {}

	void  dibujar();
	void  mover();
	void  borrar();

};
L2::L2(int velocidad, int x, int y, int dx): L1(velocidad,x,y,dx)
{

}

void  L2::dibujar()
{
	
	Console::SetCursorPosition(x, y);
	cout << " .-'--` -._ ";
	Console::SetCursorPosition(x, y + 1);
	cout << " '-O --- O--' ";

}
void  L2::mover()
{
	x = x + dx;

}
void  L2::borrar()
{

	Console::SetCursorPosition(x, y);
	cout << "          ";
	Console::SetCursorPosition(x, y +1);
	cout << "           ";

}
L2::~L2()
{

}