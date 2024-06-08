#pragma once
#include <iostream>
using namespace std;

class Cor
{
private:
	unsigned R;
	unsigned G;
	unsigned B;
public:
	Cor(unsigned r, unsigned g, unsigned b);
	Cor();
	Cor operator* (const Cor& c);

	friend istream& operator>>(istream& is, Cor& c);
	friend ostream& operator<<(ostream& os,const Cor& c);
};

