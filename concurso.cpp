// Implementacoes de funcoes definidas em concurso.h

#include "concurso.h"
#include <iostream>

void Drawline(char item, int vezesdwl) {
	for (size_t i = 0; i < vezesdwl; i++)
	{
		std::cout << item;
	}
	std::cout << std::endl;
}

void ResumoQuestoes(Questoes* ptrquest, size_t Nquestoes) {
	// Sem nome do participante
	for (size_t p = 0; p < Nquestoes; p++) {
		char questaoLetraM = 'A' + p;
		std::cout << "\t" << questaoLetraM << "(" << ptrquest[p].Graudificuldade << ") " << ptrquest[p].inicio.hora << ":" << ptrquest[p].inicio.minuto << " as " << ptrquest[p].fim.hora << ":" << ptrquest[p].fim.minuto;
		// Calculo de tempo
	}
}