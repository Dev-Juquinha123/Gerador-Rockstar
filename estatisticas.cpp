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

	// Vetor dinamico de Questoes
	Questoes* vetDnQ = new Questoes[Nquestoes];

	// Vetor dinamico de Participantes
	Participantes* vetDnP = new Participantes[Nparticipantes];
	Drawline('-', 10);
	for (size_t i = 0; i < Nparticipantes; i++)
	{
		
		std::cout << "Participante[" << i+1 << "]: ";
		std::cin >> vetDnP->nome;
		Drawline('-', 10);
	}
	


	// Evitar Memory leaker
	/*delete[]vetDnQ;
	delete[]vetDnP;*/

	Drawline('*', 50);
    return 0;
}
