#pragma once
#include <iostream>

class Point
{
public:
	// Metodos para alterar x e y
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	inline int showvalues() {  // Função inline
		std::cout << "x " << x << " y " << y;
		return x,y;
	}

private:
	int x;
	int y;
};

