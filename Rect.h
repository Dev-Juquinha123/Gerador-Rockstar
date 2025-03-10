#pragma once
#include <iostream>
#include "Point.h"

class Rect
{
public:

	void Create(int ax, int ay, int bx, int by);
	void Translate(int dx, int dy);
	void Print() const;

	
private:
	// Ao inves de ja declarar aqui declara em outra classe (Point)
	Point a;  // Ponto A (x, y)
	Point b;  // Ponto B (x, y)

};

