#pragma once


class Point
{
public:
	// Metodos para alterar x e y
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	void showvalues();
private:
	int x;
	int y;
};

