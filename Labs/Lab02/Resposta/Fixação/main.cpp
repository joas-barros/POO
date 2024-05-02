#include <iostream>
#include "Jogo.h"
using namespace std;

int main() {
	// vari�vel do tipo Jogo
	Jogo gow;

	// chamando m�todos 
	gow.adquirir("Gow", 160.0f);    // altera atributos do jogo
	gow.exibir();					// exibe os atributos do jogo

	cout << "=============" << endl;

	gow.jogar(5);					// altera horas jogadas
	gow.exibir();					// exibe os dados

	cout << "=============" << endl;

	gow.jogar(3);					// adiciona mais 3 horas jogadas
	gow.exibir();

	return 0;
}