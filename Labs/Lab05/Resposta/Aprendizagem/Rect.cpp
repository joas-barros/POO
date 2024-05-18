#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
{
	a = Point(0, 0);
	b = Point(0, 0);
}

Rect::Rect(Point _a, Point _b)
{
	a = _a;
	b = _b;
}

Rect::Rect(int ax, int ay, int bx, int by)
{
	a = Point(ax, ay);
	b = Point(bx, by);
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
