#include <iostream>
#include "Rect.h"
using namespace std;

int main() {
	Rect r;
	r.Create(10, 10, 15, 15);
	r.Size();

	r.Translate(7, 8);
	r.Size();
	return 0;
}