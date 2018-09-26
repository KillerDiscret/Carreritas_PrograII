#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
using namespace System;
//clase padre
class D1
{
protected:
	int velocidad;
	int x, y;
	int dx;
public:
	D1(int VELOCIDAD,int X, int Y,int DX);
	int getx();
	int gety();
	void dibujar();
	void mover();
	void borrar();
	~D1();


};
D1::D1(int VELOCIDAD, int X, int Y, int DX)
{
	velocidad = VELOCIDAD;
	x = X;
	y = Y;
	dx = DX;
}
int D1::getx()
{
	return x;
}
int D1::gety()
{
	return y;
}
void D1::dibujar()
{
	
	Console::SetCursorPosition(x, y);
	//3espacios
	cout << " __";
	Console::SetCursorPosition(x, y+1);
	//5 espacios
	cout << "| _\_";
	Console::SetCursorPosition(x, y + 2);
	//5espacios
	cout << "Lo_oJ";

}
void D1::borrar()
{
	Console::SetCursorPosition(x, y);
	//3espacios
	cout << "   ";
	Console::SetCursorPosition(x, y + 1);
	//5 espacios
	cout << "     ";
	Console::SetCursorPosition(x, y + 2);
	//5espacios
	cout << "     ";
}
void D1::mover()
{
	x = x + dx;
}

D1::~D1()
{

}
//clas hijo
class D2: public D1
{
public:
	D2(int velocidad, int x, int y, int dx);
	int getx();
	int gety();
	void dibujar();
	void mover();
	void borrar();
	~D2();
};
D2::D2(int velocidad, int x, int y, int dx) :D1(velocidad, x, y,dx)
{

}
int D2::getx()
{
	return x;
}
int D2::gety()
{
	return y;
}
void D2::dibujar()
{

	Console::SetCursorPosition(x, y);
	//4espacios
	cout << "  __";
	Console::SetCursorPosition(x, y+1);
	cout << " _ | = \\__";
	Console::SetCursorPosition(x, y + 2);
	cout << "/ o____o_\\";
}
void D2::borrar()
{
	Console::SetCursorPosition(x, y);
	cout << "    ";
	Console::SetCursorPosition(x, y + 1);
	cout << "          ";
	Console::SetCursorPosition(x, y + 2);
	cout << "          ";
}
void D2::mover()
{
	x = x + dx;
}
D2::~D2()
{

}