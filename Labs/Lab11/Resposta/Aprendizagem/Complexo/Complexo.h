#pragma once
#include <iostream>
using namespace std;

class Complexo
{
private:
	double Real;
	double Imaginario;
public:
	Complexo();
	Complexo(double real, double imaginario);

	Complexo operator+(const Complexo& c);
	Complexo operator-(const Complexo& c);
	Complexo operator*(const Complexo& c);
	Complexo operator*(int num);
	Complexo operator~();

	friend ostream& operator<<(ostream& os, const Complexo& c);
	friend istream& operator>>(istream& is, Complexo& c);
	friend Complexo operator*(int num, const Complexo& c);
};