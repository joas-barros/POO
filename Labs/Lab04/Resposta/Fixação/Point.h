#pragma once
class Point
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	int X() { return x; };
	int Y() { return y; };
};
