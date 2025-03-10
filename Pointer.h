#pragma once
#include <iostream>


class Point
{
public:
	Point();
	// Metodos para alterar x e y
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	// Métodos para acessar os valores de x e y (necessários pois x e y são privados)
	int getX() const; // Declaração correta
	int getY() const;
private:
	int x;
	int y;
};

inline int Point::getX() const { return x; }
inline int Point::getY() const { return y; }
