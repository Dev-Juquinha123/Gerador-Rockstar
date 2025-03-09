// Definicao da class Jogo
#include <iostream>
#include "Coord.h"


void Coord::Translate(int dx, int dy)
{
	if (x >= 0 && x <= 1919 && y >= 0 && y <= 1079)
	{
		x += dx;
		y += dy;
	}
	else
	{
		std::cout << "Coordenadas fora da tela" << std::endl;
	}
	
}

void Coord::MoveTo(int px, int py)
{
	if (x >= 0 && x <= 1919 && y >= 0 && y <= 1079)
	{
		x = px;
		y = py;
	}
	else
	{
		std::cout << "Coordenadas fora da tela" << std::endl;
	}
}
