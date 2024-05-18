#include <iostream>
#include "Rect.h"
using namespace std;

int main() {
	Rect r;
	Rect r2 = Rect(10, 10, 15, 15);
	Rect r3 = { {10, 10}, {20, 20} };
	Rect r4 = Rect(Point(5, 5), Point(10, 10));
	cout << "R: ";
	r.Size();
	cout << "R2: ";
	r2.Size();
	cout << "R3: ";
	r3.Size();
	cout << "R4: ";
	r4.Size();

	return 0;
}