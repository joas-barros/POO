#include "Lista.h"

void Lista::Expandir()
{
	Item* vet = new Item[2 * max + 1];

	for (int i = 0; i < max; i++)
		vet[i] = itens[i];

	delete[] itens;

	itens = vet;
	max = 2 * max + 1;
}

Lista::Lista()
{
	itens = nullptr;
	max = 0;
	topo = 0;
}

Lista::~Lista()
{
	delete[] itens;
}

bool Lista::Cheia()
{
	return max == topo;
}

bool Lista::Vazia()
{
	return topo == 0;
}

void Lista::Add(const Item& item)
{
	if (topo == max)
		Expandir();

	itens[topo++] = item;
}

void Lista::Visitar(void(*fn)(Item& i))
{
	fn(i);
}
