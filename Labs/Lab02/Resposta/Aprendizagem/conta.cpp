#include <iostream>
#include <string>
#include "conta.h"
using namespace std;

void ContaBancaria::criarConta(const string& titular, int id) {
	nome = titular;
	idConta = id;
	saldo = 0;
}

void ContaBancaria::exibirConta() {
	cout << fixed;
	cout.precision(2);
	cout << "Titular: " << nome << ". Id: " << idConta << ". Saldo: R$" << saldo << endl;
}

void ContaBancaria::depositar(float valor) {
	saldo += valor;
}

void ContaBancaria::sacar(float valor) {
	saldo -= valor;
}