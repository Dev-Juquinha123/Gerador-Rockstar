#include <iostream>
#include "concurso.h"


int main() {
   
	Drawline('*', 50);
	std::cout << "\033[36mConcurso de Programacao\033[0m" << std::endl;
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
		std::cout << "\033[1;33mParticipante[" << i+1 << "]:\033[0m ";
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
	std::cout << "\033[36mResumo por Participante\033[0m" << std::endl;
	Drawline('-', 10);
	for (size_t i = 0; i < Nparticipantes; i++) {
		std::cout << vetDnP[i].nome << ":" << std::endl;
		ResumoParticipantes(vetDnP[i].ptrquest, Nquestoes);
	}
	Drawline('-', 10);
	std::cout << std::endl;
	Drawline('-', 10);
	std::cout << "\033[36mResumo por Questoes\033[0m" << std::endl;
	Drawline('-', 10);
	for (size_t i = 0; i < Nquestoes; i++)
	{
		int tamvet = Nquestoes; // Definição correta do tamanho do vetor
		Media resultado = CalcularResumoQuestoes(vetDnP[i].ptrquest, tamvet, 1, 2);

		char questaoLetra = 'A' + i;
		std::cout << "Questao " << questaoLetra << std::endl;
		for (size_t jers = 0; jers < Nparticipantes; jers++)
		{
			std::cout << "\t" << vetDnP[jers].nome << " (" << vetDnP[i].ptrquest[jers].Graudificuldade << ") " << vetDnP[i].ptrquest[jers].inicio.hora << ":" << vetDnP[i].ptrquest[jers].inicio.minuto << " as " << vetDnP[i].ptrquest[jers].fim.hora << ":" << vetDnP[i].ptrquest[jers].fim.minuto;
			int calcmin;
			calcmin = vetDnP[i].ptrquest[jers].inicio.minuto - vetDnP[i].ptrquest[jers].fim.minuto;
			int positivo = (calcmin < 0) ? -calcmin : calcmin;
			std::cout << " (" << positivo << " min" << ")";
			std::cout << std::endl;


			std::cout << "Média Dificuldade: " << resultado.mediaGrauDificuldade << "\n";
			std::cout << "Média Tempo: " << resultado.mediaTempo << " minutos\n";
		}
	}


	// Evitar Memory leaker
	for (int i = 0; i < Nparticipantes; i++) {
		delete[] vetDnP[i].ptrquest; // Deleta as questões do participante
	}
	delete[] vetDnP; // Deleta o vetor de participantes

	Drawline('*', 50);
    return 0;
}
