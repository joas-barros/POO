#include <iostream>
#include "conta.h"
using namespace std;

int main() {
	ContaBancaria conta;
	conta.criarConta("Joas", 111);
	conta.exibirConta();
	cout << "===========" << endl;
	conta.depositar(1000);
	conta.exibirConta();
	conta.sacar(200);
	cout << "===========" << endl;
	conta.exibirConta();
	return 0;
}