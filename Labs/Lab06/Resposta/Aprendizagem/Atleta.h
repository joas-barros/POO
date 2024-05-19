#pragma once
class Atleta
{
private:
	int acertos;
	int tentativas;
	float percentual;
public:
	void calcular() {
		if (tentativas != 0)
			percentual = 100.0f * acertos / tentativas;
		else
			percentual = 0;
	}
	Atleta();
	~Atleta();
	Atleta(int _acertos, int _tentativas);
	void exibir() const;
	void acumular(const Atleta& atl);
};