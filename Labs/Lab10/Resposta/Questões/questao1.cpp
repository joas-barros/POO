#include <iostream>
#include "Cor.h"
#include <string>
using namespace std;

const string normal = "\x1b[0m";

int main()
{
	Cor azul{ 0, 163, 215 };
	Cor laranja{ 255, 170, 0 };
	cout << "Entre com o código de uma cor:\n";
	Cor cor; cin >> cor; Cor verde = azul * laranja;
	cout << verde << "VERDE" << endl;
	cout << cor << "SUA COR" << endl; 
	// volta para a cor padrão 
	cout << normal;

}
