#pragma once
// definição do tipo Item
using Item = char;

// ----------------------------------
// Declaração da Classe Pilha
// ----------------------------------

class Pilha
{
private:                      
	Item * itens;						
	int topo;    
	int max;

	void Expandir();

public:
	Pilha();
	Pilha(int tam);                                // construtor
	~Pilha();

	bool Vazia() const;                     // verifica se a pilha está vazia

	void Empilhar(const Item& item);		// adiciona item na pilha									
	bool Desempilhar(Item& item);			// remove item da pilha
};

// ----------------------------------
