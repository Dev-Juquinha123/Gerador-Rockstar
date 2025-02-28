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

void ResumoParticipantes(Questoes* ptrvpart, size_t Npart) {
	// Sem nome do participante
	for (size_t p = 0; p < Npart; p++) {
		char questaoLetraM = 'A' + p;
		std::cout << "\t" << questaoLetraM << " (" << ptrvpart[p].Graudificuldade << ") " << ptrvpart[p].inicio.hora << ":" << ptrvpart[p].inicio.minuto << " as " << ptrvpart[p].fim.hora << ":" << ptrvpart[p].fim.minuto;
		// Calculo de tempo
		int calcmin;
		calcmin = ptrvpart[p].inicio.minuto - ptrvpart[p].fim.minuto;
		int positivo = (calcmin < 0) ? -calcmin : calcmin;
		std::cout << " (" << positivo << " min" << ")";
		std::cout << std::endl;
	}
}

void ResumoQuestoes(Questoes* ptrvquest, size_t Nquestoes) {

}