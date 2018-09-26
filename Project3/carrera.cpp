#include "Leger.h"
#include "Dynamic.h"
#include <math.h>
#include "Quatre.h"



void meta()
{
	Console::SetCursorPosition(75, 2);
	cout << "|";
	Console::SetCursorPosition(75, 3);
	cout << "|";
	Console::SetCursorPosition(75, 4);
	cout << "|";
	Console::SetCursorPosition(75, 5);
	cout << "|";
	Console::SetCursorPosition(75, 6);
	cout << "|";
	Console::SetCursorPosition(75, 7);
	cout << "|";
	Console::SetCursorPosition(75, 8);
	cout << "|";
	Console::SetCursorPosition(75, 9);
	cout << "|";
	Console::SetCursorPosition(75, 10);
	cout << "|";
	Console::SetCursorPosition(75, 11);
	cout << "|";
	Console::SetCursorPosition(75, 12);
	cout << "|";
	Console::SetCursorPosition(75, 13);
	cout << "|";
	Console::SetCursorPosition(75, 14);
	cout << "|";
	Console::SetCursorPosition(75, 15);
	cout << "|";
	Console::SetCursorPosition(75, 16);
	cout << "|";
	Console::SetCursorPosition(75, 17);
	cout << "|";
	Console::SetCursorPosition(75, 18);
	cout << "|";
	Console::SetCursorPosition(75, 19);
	cout << "|";
	Console::SetCursorPosition(75, 20);
	cout << "|";
	Console::SetCursorPosition(75, 21);
	cout << "|";
	Console::SetCursorPosition(75, 22);
	cout << "|";
	Console::SetCursorPosition(75, 23);
	cout << "|";
}
void ganador(int c1)
{
	system("cls");
	if (c1==1||c1==2)
	{
		cout << "Gano el primer carro" << endl;
	}
	if (c1 == 3 || c1 == 4)
	{
		cout << "Gano el segundo carro" << endl;
	}
	if (c1 == 5 || c1 == 6)
	{
		cout << "Gano el tercer carro" << endl;
	}
}
int main()
{
	Random r;
	int velocidad;
	L1*objL1;
	L2*objL2;
	D1*objD1;
	D2*objD2;
	Q1*objQ1;
	Q2*objQ2;
	int modeloL;
	int L1velocidad; 
	int L1x=2; 
	int L1dx=1;
	int L1y=5;
	int modeloD;
	int D1velocidad;
	int D1x=2;
	int D1dx=1;
	int D1y=10;
	int modeloQ;
	int Q1velocidad;
	int Q1x = 2;
	int Q1dx = 1;
	int Q1y = 16;
	cout << "\t DYNAMIC" << endl;
	cout << "Ingrese el tipo de modelo(1||2)" << endl;
	cin >> modeloD;
	cout << endl;
	cout << "\t LEGER" << endl;
	cout << "Ingrese el tipo de modelo(1||2)" << endl;
	cin >> modeloL;
	cout << endl;
	cout << "\t QUATRE" << endl;
	cout << "Ingrese el tipo de modelo(1||2)" << endl;
	cin >> modeloQ;
	cout << endl;
	objL1 = new L1(L1velocidad,L1x,L1y,L1dx);
	objL2= new L2(L1velocidad, L1x, L1y, L1dx);
	objD1= new D1(D1velocidad, D1x, D1y, D1dx);
	objD2= new D2(D1velocidad, D1x, D1y, D1dx);
	objQ1 = new Q1(Q1velocidad, Q1x, Q1y, Q1dx);
	objQ2 = new Q2(Q1velocidad, Q1x, Q1y, Q1dx);
	L1velocidad = r.Next(1, 6);
	D1velocidad = r.Next(1, 6);
	Q1velocidad = r.Next(1, 6);

	int aux1 = 1;
	int aux2 = 1;
	int aux3 = 1;
	int c1=0;
	system("cls");
	meta();
	Console::SetWindowSize(100, 25);
	while (1)
	{

		if (modeloD==1)
		{
			if (((D1velocidad*10000000)/aux1)==1)
			{
				objD1->borrar();
				objD1->mover();
				objD1->dibujar();
				aux1 = 1;
			
			}
			if (objD1->getx()==72)
			{
				c1 = 1;
				goto paso;
			}
			
			
		}
	
		if (modeloD == 2)
		{
			if (((D1velocidad * 10000000) / aux1) == 1)
			{
				objD2->borrar();
				objD2->mover();
				objD2->dibujar();
				aux1 = 1;
			}
			if (objD2->getx()>=72)
			{
				c1 = 2;
				goto paso;
			}
		}
		aux1++;
		if (modeloL==1)
		{
			if (((L1velocidad * 10000000) / aux2) == 1)
			{
				objL1->borrar();
				objL1->mover();
				objL1->dibujar();
				aux2 = 1;
			}
			if (objL1->getx()==72)
			{
				c1 = 3;
				goto paso;
			}
		}
		if (modeloL == 2)
		{
			if (((L1velocidad * 10000000) / aux2) == 1)
			{
				objL2->borrar();
				objL2->mover();
				objL2->dibujar();
				aux2 = 1;
			}
			if (objL2->getx()==72)
			{
				c1 = 4;
				goto paso;
			}
		}
		aux2++;
		if (modeloQ == 1)
		{
			if (((Q1velocidad * 10000000) / aux3) == 1)
			{
				objQ1->borrar();
				objQ1->mover();
				objQ1->dibujar();
				aux3 = 1;
			}
			if (objQ1->getx()==72)
			{
				c1 = 5;
				goto paso;
			}
		}
		if (modeloQ == 2)
		{
			if (((Q1velocidad * 10000000) / aux3) == 1)
			{
				objQ2->borrar();
				objQ2->mover();
				objQ2->dibujar();
				aux3 = 1;
			}
			if (objQ2->getx()==72)
			{
				c1 = 6;
				goto paso;
			}
		}
		aux3++;
	}
paso:
	ganador(c1);
	_getch();
}