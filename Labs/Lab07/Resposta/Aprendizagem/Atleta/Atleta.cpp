#include "Atleta.h"
#include <iostream>
using namespace std;

Atleta::Atleta()
{
	acertos = 0;
	tentativas = 0;
	calcular();
}

Atleta::~Atleta()
{
	cout << "Atleta destruido" << endl;
}

Atleta::Atleta(int _acertos, int _tentativas)
{
	acertos = _acertos;
	tentativas = _tentativas;
	calcular();
}

bool Atleta::comparar(const Atleta& atl) const
{
	if (this->percentual > atl.percentual) {
		return true;
	}
	else
	{
		return false;
	}
}

void Atleta::exibir() const
{
	cout << "Acertos: " << acertos << " ";
	cout << " Tentativas: " << tentativas << " ";
	cout << " Percentual: " << percentual << "\n";
}

void Atleta::acumular(const Atleta& atl)
{
	acertos += atl.acertos;
	tentativas += atl.tentativas;
	calcular();
}