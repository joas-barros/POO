#include <iostream>
#include "Pilha.h"
#include <string>
using namespace std;

int main() {
	string exp;
	cout << "Expressão: ";
	cin >> exp;

	Pilha pilha;
	bool zeta = true;
	char frescura;

	for (int i = 0; exp[i]; i++) {
		if (exp[i] == '(')
			pilha.Empilhar(exp[i]);
		if (exp[i] == ')')
			zeta = pilha.Desempilhar(frescura);
	}

	if (!zeta) {
		cout << "[Erro] Parêntese não foi aberto";
	}
	else {
		if (!pilha.Vazia()) {
			cout << "[Erro] Parêntese não foi fechado";
		}
		else {
			cout << "[Ok] Parênteses corretos";
		}
	}
	return 0;
}