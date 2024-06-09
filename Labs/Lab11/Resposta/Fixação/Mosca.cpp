#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Vetor.h"
using namespace std;

int main() {
	srand(unsigned(time(0)));

	const int magnitudeMax = 10;
	const int anguloMax = 360;

	cout << "Entre com a distância alvo: ";
	double distancia;
	cin >> distancia;

	Vetor resultante;
	double magnitude;
	double direcao;

	int cont = 0;
	ofstream fout{ "voo.txt" };
	fout << "Distância alvo: " << distancia << endl;

	// escreva a solução aqui
	while (resultante.Magnitude() < distancia)
	{
		magnitude = rand() % magnitudeMax;
		direcao = rand() % anguloMax;
		Vetor voo{ magnitude, direcao, Vetor::POL };
		resultante = resultante + voo;
		++cont;
		fout << cont << ": " << resultante << endl;
	}

	fout << "------------------------------------------------------" << endl;
	fout << "Foram " << cont << " passos de simulação para chegar em :" << endl;
	fout << resultante << endl;
	resultante.SetCoord(Vetor::POL);
	fout << resultante << endl;
	fout << "------------------------------------------------------" << endl;
	fout << "Distancia média por passo: " << distancia / cont << endl;

	fout.close();
	return 0;
}