#include <iostream>
#include "Atleta.h"
using namespace std;

int main() {
	Atleta time[] = {
		Atleta(10, 14),
		Atleta(10, 16),
		Atleta(12, 15),
		Atleta(15, 20),
	};

	cout << "Elenco: " << endl;
	for (int i = 0; i < 4; i++)
		time[i].exibir();

	Atleta melhor = time[0];
	for (int i = 1; i < 4; i++) {
		if (time[i].comparar(melhor))
			melhor = time[i];
	}

	cout << "Melhor atleta: " << endl;
	melhor.exibir();
	return 0;
}