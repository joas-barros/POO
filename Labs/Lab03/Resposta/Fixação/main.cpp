#include <iostream>
#include "Coord.h"
using namespace std;

int main() {
	Coord coordenada;

	coordenada.moveTo(1, 1900);
	coordenada.exibir();

	coordenada.translate(-30, -100);
	coordenada.exibir();

	coordenada.translate(100, -200);
	coordenada.exibir();
	return 0;
}