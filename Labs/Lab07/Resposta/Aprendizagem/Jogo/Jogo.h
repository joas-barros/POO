#pragma once
#include <string>
using std::string;

class Jogo
{
private:
	string nome; // nome do jogo
	float preco; // preço do jogo
	int horas; // quantidade de horas jogadas
	float custo; // valor por hora jogada
	void Calcular();
public:
	Jogo();
	Jogo(const string& titulo, float valor = 0, int tempo = 0);
	~Jogo();
	float Preco();
	float Custo();
	int Horas();
	void Atualizar(float valor);
	void Jogar(int tempo);
	void Exibir() const;
};

inline void Jogo::Calcular()
{
	if (horas > 0)
		custo = preco / horas;
	else
		custo = 0;
}

inline float Jogo::Preco()
{
	return preco;
}

inline float Jogo::Custo()
{
	return custo;
}

inline int Jogo::Horas()
{
	return horas;
}
