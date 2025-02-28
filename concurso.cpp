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

// Fun��o auxiliar para calcular a diferen�a entre hor�rios em minutos
double calcularDiferencaMinutos(Horario inicio, Horario fim) {
    int inicioTotalMin = inicio.hora * 60 + inicio.minuto;
    int fimTotalMin = fim.hora * 60 + fim.minuto;
    return fimTotalMin - inicioTotalMin;
}

// Fun��o para calcular a m�dia das quest�es
Media CalcularResumoQuestoes(Questoes* ptrvquest, const int tamvet, size_t IndiceInitial, size_t Passo) {
    Media resultado = { 0.0, 0.0 };  // Inicializa a struct com zeros

    if (!ptrvquest || tamvet <= 0 || IndiceInitial >= tamvet) {
        std::cerr << "Par�metros inv�lidos.\n";
        return resultado; // Retorna valores zerados em caso de erro
    }

    double somaDificuldade = 0.0;
    double somaTempo = 0.0;
    int count = 0;

    for (size_t i = IndiceInitial; i < tamvet; i += Passo) {
        somaDificuldade += ptrvquest[i].Graudificuldade;
        somaTempo += calcularDiferencaMinutos(ptrvquest[i].inicio, ptrvquest[i].fim);
        count++;
    }

    if (count > 0) {
        resultado.mediaGrauDificuldade = somaDificuldade / count;
        resultado.mediaTempo = somaTempo / count;
    }

    return resultado;
}