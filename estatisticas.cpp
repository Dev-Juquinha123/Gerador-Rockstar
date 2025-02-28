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

	// Vetor dinamico de Participantes
	Participantes* vetDnP = new Participantes[Nparticipantes];

	Drawline('*', 50);
	Drawline('-', 10);

	// Coletando informacoes
	for (size_t i = 0; i < Nparticipantes; i++)
	{
		std::cout << "Participante[" << i+1 << "]: ";
		std::cin >> vetDnP[i].nome;
		vetDnP[i].ptrquest = new Questoes[Nquestoes]; // Criando vetor dinâmico de questões para cada participante
		for (size_t j = 0; j < Nquestoes; j++) {
			char questaoLetra = 'A' + j; // Gera letras A, B, C...
			Drawline('-', 10);
			std::cout << "Questao " << questaoLetra << std::endl;
			std::cout << "\tDificuldade: ";
			std::cin >> vetDnP[i].ptrquest[j].Graudificuldade;
			std::cout << "\tInicio: ";
			std::cin >> vetDnP[i].ptrquest[j].inicio.hora >> vetDnP[i].ptrquest[j].inicio.minuto;
			std::cout << "\tFim: ";
			std::cin >> vetDnP[i].ptrquest[j].fim.hora >> vetDnP[i].ptrquest[j].fim.minuto;
			
		}

		Drawline('-', 10);
	}
	
	std::cout << std::endl;
	Drawline('*', 50);
	Drawline('-', 10);
	std::cout << "Resumo por Participante" << std::endl;
	Drawline('-', 10);
	for (size_t i = 0; i < Nparticipantes; i++) {
		std::cout << vetDnP[i].nome << ":" << std::endl;
		ResumoParticipantes(vetDnP[i].ptrquest, Nquestoes);
	}
	Drawline('-', 10);
	std::cout << std::endl;
	Drawline('-', 10);
	std::cout << "Resumo por Questao" << std::endl;
	Drawline('-', 10);
	Drawline('-', 10);


	// Evitar Memory leaker
	for (int i = 0; i < Nparticipantes; i++) {
		delete[] vetDnP[i].ptrquest; // Deleta as questões do participante
	}
	delete[] vetDnP; // Deleta o vetor de participantes

	Drawline('*', 50);
    return 0;
}
