// Definicao da class Jogo
#include <iostream>
#include "Coord.h"

// Criar retangulo
void Rect::Create(int ax, int ay, int bx, int by)
{
	// Definiu tamanho
	a.a = ax;
	a.b = ay;
	b.a = bx;
	b.b = by;
}

// Movimentar retangulo
void Rect::Translate(int dx, int dy)
{
	a.a += dx;
	a.b += dy;
}
