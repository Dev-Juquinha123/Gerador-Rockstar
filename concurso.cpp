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

void ResumoQuestoes(Questoes *vetorP, int QuantiQuest) {
	// Sem nome do participante
	for (size_t p = 0; p < QuantiQuest; p++) {
		char questaoLetraM = 'A' + p;
		std::cout << "Questao " << questaoLetraM << std::endl;
		std::cout << vetorP[i].ptrquest[j].inicio.hora;
}