#include "Coord.h"
#include <iostream>
using namespace std;

void Coord::translate(int dx, int dy)
{
	if (((dx + posicaoX) < 0 || (dx + posicaoX) > 1920) || ((dy + posicaoY) < 0 || (dy + posicaoY) > 1920)) {
		cout << "Invalid coordenate" << endl;
	}
	else {
		posicaoX += dx;
		posicaoY += dy;
	}
}

void Coord::moveTo(int px, int py)
{
	if ((px < 0 || px > 1920) || (py < 0 || py > 1920)) {
		cout << "Invalid coordenate" << endl;
	} 
	else {
		posicaoX = px;
		posicaoY = py;
	}
}

void Coord::exibir()
{
	cout << "("
		<< posicaoX
		<< ","
		<< posicaoY
		<< ")"
		<< endl;
}
