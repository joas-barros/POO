#pragma once
#include "Point.h"

class Rect
{
private: 
	Point a;
	Point b;
public:
	Rect();
	Rect(Point _a, Point _b);
	Rect(int ax, int ay, int bx, int by);
	void Translate(int dx, int dy);
	void Size();
};
