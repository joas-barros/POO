#include "Complexo.h"

Complexo::Complexo()
{
	Real = 0;
	Imaginario = 0;
}

Complexo::Complexo(double real, double imaginario)
{
	Real = real;
	Imaginario = imaginario;
}

Complexo Complexo::operator+(const Complexo& c)
{
	return Complexo{Real + c.Real, Imaginario + c.Imaginario};
}

Complexo Complexo::operator-(const Complexo& c)
{
	return Complexo{ Real - c.Real, Imaginario - c.Imaginario };
}

Complexo Complexo::operator*(const Complexo& c)
{
	return Complexo{Real * c.Real - Imaginario * c.Imaginario, Imaginario * c.Real + Real * c.Imaginario};
}

Complexo Complexo::operator*(int num)
{
	return Complexo(Real * num, Imaginario * num);
}

Complexo Complexo::operator~()
{
	return Complexo{Real, -Imaginario};
}

ostream& operator<<(ostream& os, const Complexo& c)
{
	// TODO: insert return statement here
	os << c.Real;
	os.setf(ios::showpos);
	os << c.Imaginario << "i";
	return os;
}

istream& operator>>(istream& is, Complexo& c)
{
	// TODO: insert return statement here
	is >> c.Real;
	is.ignore();
	is >> c.Imaginario;
	is.ignore();
	is.ignore();
	return is;
}

Complexo operator*(int num, const Complexo& c)
{
	return Complexo(c.Real * num, c.Imaginario * num);
}
