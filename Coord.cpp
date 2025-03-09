// Definicao da class Jogo
#include <iostream>
#include "Coord.h"


void Coord::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Coord::MoveTo(int px, int py)
{
	x = px;
	y = py;
}
