#include <iostream>
#include "Pointer.h"


int main()
{
	Point square;
	// Move valor inicial 50 / 50
	square.MoveTo(50, 50);

	std::cout << " x " << square.getX();
	std::cout << " y " << square.getY();
	std::cout << std::endl;

	// Move para nova posicao sem alterar valor anterior
	square.Translate(5, 15);

	std::cout << " x " << square.getX();
	std::cout << " y " << square.getY();

}
