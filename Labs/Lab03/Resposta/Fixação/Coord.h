#pragma once

class Coord
{
private:
	int posicaoX;
	int posicaoY;
public:
	void translate(int dx, int dy);
	void moveTo(int px, int py);
	void exibir();
};

