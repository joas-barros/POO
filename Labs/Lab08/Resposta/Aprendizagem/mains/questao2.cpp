#include <iostream>
#include "Pilha.h"
#include <string>
using namespace std;

int main() {
	string exp;
	cout << "Express�o: ";
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
		cout << "[Erro] Par�ntese n�o foi aberto";
	}
	else {
		if (!pilha.Vazia()) {
			cout << "[Erro] Par�ntese n�o foi fechado";
		}
		else {
			cout << "[Ok] Par�nteses corretos";
		}
	}
	return 0;
}