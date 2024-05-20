#include <iostream>
#include "Jogo.h"
using namespace std;

int main() {

	Jogo colecao[3] = {
		Jogo("Geras", 90.0f, 30),
		Jogo("Doom", 60.0f, 120),
		Jogo("Halo", 20.0f, 40)
	};

	Jogo maisJogado = colecao[0],
		menorCusto = colecao[0],
		menorPreco = colecao[0];

	for (int i = 1; i < 3; i++) {
		if (colecao[i].Horas() > maisJogado.Horas())
			maisJogado = colecao[i];
		if (colecao[i].Custo() < menorCusto.Custo())
			menorCusto = colecao[i];
		if (colecao[i].Preco() < menorPreco.Preco())
			menorPreco = colecao[i];
	}

	cout << "Mais jogado: ";
	maisJogado.Exibir();
	cout << "Menor custo: ";
	menorCusto.Exibir();
	cout << "Menor preço: ";
	menorPreco.Exibir();

	cout << "\nFim\n";
	return 0;
}