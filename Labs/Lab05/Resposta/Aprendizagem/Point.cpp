#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int x_, int y_)
{
	x = x_;
	y = y_;
}

void Point::MoveTo(int px, int py)
{
	x = px;
	y = py;
}

void Point::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Point::Print()
{
	cout << "X: " << x << " Y: " << y << endl;
}
