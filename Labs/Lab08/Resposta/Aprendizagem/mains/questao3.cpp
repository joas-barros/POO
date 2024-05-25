#include <iostream>
#include "Pilha.h"
#include <string>
using namespace std;

int operacao(int a, int b, char op) {
	switch (op)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}

int main() {
	string exp;
	cout << "Expressão: ";
	cin >> exp;
	Pilha pilha;
	for (int i = 0; exp[i]; i++) {
		if (isdigit(exp[i])) {
			pilha.Empilhar(exp[i] - '0');
		}
		else {
			char a, b;
			pilha.Desempilhar(a);
			pilha.Desempilhar(b);
			int r = operacao(b, a, exp[i]);
			pilha.Empilhar(r);
		}
	}

	char final;
	pilha.Desempilhar(final);
	cout << "Resultado: " << int(final);
	return 0;
}