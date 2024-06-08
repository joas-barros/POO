#include "Packet.h"
#include <iostream>
using std::cout;
using std::endl;

Packet::Packet()
{
	data = { 0,0,0,0 };
	index = 0;
}

void Packet::begin()
{
    index = 0;
}

void Packet::end()
{
    index = 0;
}


short& Packet::operator[](int index)
{
	// TODO: insert return statement here
	switch (index)
	{
	case 0: return data.part.x;
	case 1: return data.part.y;
	case 2: return data.part.z;
	case 3: return data.part.w;
	}
}

void Packet::send()
{
	cout << data.all << endl;
}

istream& operator>>(istream& is, Packet& p)
{
	// TODO: insert return statement here
	is >> p.data.part.x >> p.data.part.y >> p.data.part.z >> p.data.part.w;
	return is;
}

ostream& operator<<(ostream& os, const Packet& p)
{
	// TODO: insert return statement here
	os << p.data.part.x << " " << p.data.part.y << " " << p.data.part.z << " " << p.data.part.w;
	return os;
}
