#include "Rect.h"
#include <cmath>
#include <iostream>
using namespace std;

void Rect::Create(int ax, int ay, int bx, int by)
{
	a.MoveTo(ax, ay);
	b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy)
{
	a.Translate(dx, dy);
	b.Translate(dx, dy);
}

void Rect::Size()
{
	cout << "Base: " << abs(a.X() - b.X()) << " Altura: " << abs(a.Y() - b.Y()) << endl;
}
