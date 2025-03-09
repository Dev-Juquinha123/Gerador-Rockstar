#include <iostream>
#include "Jogo.h"



int main() {

	// Variavel do tipo Jogo
	Jogo gow;
	Jogo down;

	// Chamando metodos
	gow.adquirir("Gow", 160.0f);
	gow.exibir();


	gow.jogar(5);
	gow.exibir();
	
	gow.jogar(3);
	gow.exibir();

	gow.jogar(5);
	gow.exibir();
	return 0;
}
	
