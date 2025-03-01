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
// size_t tipo inteiro
void ResumoParticipantes(Questoes* ptrvpart, size_t Npart) {
    // Sem nome do participante
    for (size_t p = 0; p < Npart; p++) {
        char questaoLetraM = 'A' + p;
        std::cout << "\t" << questaoLetraM << " (" << ptrvpart[p].Graudificuldade << ") "
            << ptrvpart[p].inicio << " as " << ptrvpart[p].fim; // Usa operador << sobrecarregado

        // Calculo de tempo
        int calcmin = ptrvpart[p].fim - ptrvpart[p].inicio;
        int positivo = (calcmin < 0) ? -calcmin : calcmin;
        std::cout << " (" << positivo << " min" << ")";
        std::cout << std::endl;
    }
}


// Função auxiliar para calcular a diferença entre horários em minutos
double calcularDiferencaMinutos(Horario inicio, Horario fim) {
    int inicioTotalMin = inicio.hora * 60 + inicio.minuto;
    int fimTotalMin = fim.hora * 60 + fim.minuto;
    return fimTotalMin - inicioTotalMin;
}

// Função para calcular a média das questões
Media CalcularResumoQuestoes(Questoes* ptrvquest, const int tamvet, size_t IndiceInitial, size_t Passo) {
    Media resultado = { 0.0, 0.0 };  // Inicializa a struct com zeros

    if (!ptrvquest || tamvet <= 0 || IndiceInitial >= tamvet) {
        std::cerr << "Parâmetros inválidos.\n";
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

std::cout << std::endl;
