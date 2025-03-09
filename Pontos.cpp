#include <iostream>
#include "Coord.h"



int main() {

	
	Coord ponto;
	ponto.MoveTo(10, 10);
	std::cout << "(" << ponto.x << ", " << ponto.y << ")" << std::endl;

	ponto.Translate(2, 5);
	std::cout << "(" << ponto.x << ", " << ponto.y << ")" << std::endl;

	return 0;
}
	
