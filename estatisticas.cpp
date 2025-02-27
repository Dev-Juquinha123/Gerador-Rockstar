#include <iostream>
#include "concurso.h"


int main() {
   
	Drawline('*', 50);
	std::cout << "Concurso de Programacao" << std::endl;
	int Nparticipantes;
	int Nquestoes;

	// Coletando informacoes
	std::cout << "Qual o numero de participantes? ";
	std::cin >> Nparticipantes;
	std::cout << "Qual o numero de questoes? ";
	std::cin >> Nquestoes;

	// Vetor dinamico onde guarda
	Questoes* vetDnQ = new Questoes[Nparticipantes];

	Drawline('*', 50);
    return 0;
}
