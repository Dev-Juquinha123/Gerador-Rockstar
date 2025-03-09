#include <iostream>
#include "Jogo.h"



int main() {

	// Variavel do tipo Jogo
	Jogo gear;
	Jogo doom;

	// Chamando metodos
	gear.adquirir("Gears", 75);
	gear.jogar(5);
	gear.exibir();
	std::cout << "Mem. : " << &gear << std::endl;

	std::cout << "----------------------------------\n";

	doom.adquirir("Doom", 90);
	doom.jogar(3);
	doom.exibir();
	std::cout << "Mem. : " << &doom << std::endl;

	return 0;
}
	
