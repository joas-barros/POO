#pragma once
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x_, int y_);
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	void Print();
	int X();										
	int Y();
};

inline int Point::X() { return x; }
inline int Point::Y() { return y; }
