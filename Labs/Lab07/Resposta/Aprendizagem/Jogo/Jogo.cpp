#include "Jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo()
{
    nome = "";
    preco = 0;
    horas = 0;
}

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    horas = tempo;
    Calcular();
}

Jogo::~Jogo()
{
    cout << nome << " morreu" << endl;
}

void Jogo::Atualizar(float valor)
{
    preco = valor;
    Calcular();
}

void Jogo::Jogar(int tempo)
{
    horas = horas + tempo;
    Calcular();
}

void Jogo::Exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome << " R$"
        << preco << " "
        << horas << "h = R$"
        << custo << "/h\n";
}

// -----------------------------------------------