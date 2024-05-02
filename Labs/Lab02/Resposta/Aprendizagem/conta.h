#pragma once
#include <string>
using namespace std;

class ContaBancaria
{
private:
	string nome;
	int idConta;
	float saldo;
public:
	void criarConta(const string& titular, int id);
	void exibirConta();
	void depositar(float valor);
	void sacar(float valor);
};
