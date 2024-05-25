#include <iostream>
#include "Pilha.h"
using namespace std;

int main() {
	char palavra[50];
	cout << "Digite uma palavra: ";
	cin >> palavra;

	Pilha pilha;

	// Empilhando
	for (int i = 0; palavra[i]; i++)
		pilha.Empilhar(palavra[i]);

	int num = 0;
	int count = 0;

	cout << "Empilhando e desempilhando fica : ";
	while (!pilha.Vazia())
	{
		Item i;
		pilha.Desempilhar(i);
		if (palavra[num++] != i)
			++count;
		cout << i;
	}

	cout << endl;
	if (count > 0)
		cout << "A palavra não é um palíndromo.";
	else
		cout << "A palavra é um palíndromo.";

	return 0;
}