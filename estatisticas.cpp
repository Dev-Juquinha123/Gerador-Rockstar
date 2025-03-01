#include <iostream>
#include <iomanip>
#include "concurso.h"


int main() {
   
	Drawline('*', 50);
	std::cout << "\033[36mConcurso de Programacao\033[0m" << std::endl;

	int Nparticipantes, Nquestoes;

	// Coletando informações
	std::cout << "Qual o numero de participantes? ";
	std::cin >> Nparticipantes;
	std::cout << "Qual o numero de questoes? ";
	std::cin >> Nquestoes;

	// Vetor dinâmico de Participantes
	Participantes* vetDnP = new Participantes[Nparticipantes];

	Drawline('*', 50);

	// Coletando informações
	for (size_t i = 0; i < Nparticipantes; i++) {
		std::cout << "\033[1;33mParticipante[" << i + 1 << "]:\033[0m ";
		std::cin >> vetDnP[i].nome;
		vetDnP[i].ptrquest = new Questoes[Nquestoes]; // Criando vetor dinâmico de questões para cada participante

		for (size_t j = 0; j < Nquestoes; j++) {
			char questaoLetra = 'A' + j; // Gera letras A, B, C...
			Drawline('-', 10);
			std::cout << "Questao " << questaoLetra << std::endl;
			std::cout << "\tDificuldade: ";
			std::cin >> vetDnP[i].ptrquest[j].Graudificuldade;

			std::cout << "\tInicio: ";
			std::cin >> vetDnP[i].ptrquest[j].inicio;

			std::cout << "\tFim: ";
			std::cin >> vetDnP[i].ptrquest[j].fim;

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
	for (size_t i = 0; i < Nquestoes; i++) {
		int tamvet = Nquestoes; // Definição correta do tamanho do vetor
		Media resultado = CalcularResumoQuestoes(vetDnP[0].ptrquest, tamvet, 1, 2);

		char questaoLetra = 'A' + i;
		std::cout << "Questao " << questaoLetra << std::endl;

		for (size_t jers = 0; jers + 1 < Nparticipantes; jers += 2) { // Garante que jers + 1 não ultrapasse Nparticipantes
			std::cout << "\t" << vetDnP[jers].nome << " ("
				<< vetDnP[jers].ptrquest[i].Graudificuldade << ") "
				<< vetDnP[jers].ptrquest[i].inicio.hora << ":"
				<< vetDnP[jers].ptrquest[i].inicio.minuto << " as "
				<< vetDnP[jers].ptrquest[i].fim.hora << ":"
				<< vetDnP[jers].ptrquest[i].fim.minuto;

			int calcmin = vetDnP[jers].ptrquest[i].fim.minuto - vetDnP[jers].ptrquest[i].inicio.minuto;
			int positivo = (calcmin < 0) ? -calcmin : calcmin;
			std::cout << " (" << positivo << " min)" << std::endl;

			// Exibe o segundo participante imediatamente após o primeiro
			std::cout << "\t" << vetDnP[jers + 1].nome << " ("
				<< vetDnP[jers + 1].ptrquest[i].Graudificuldade << ") "
				<< vetDnP[jers + 1].ptrquest[i].inicio.hora << ":"
				<< vetDnP[jers + 1].ptrquest[i].inicio.minuto << " as "
				<< vetDnP[jers + 1].ptrquest[i].fim.hora << ":"
				<< vetDnP[jers + 1].ptrquest[i].fim.minuto;

			calcmin = vetDnP[jers + 1].ptrquest[i].fim.minuto - vetDnP[jers + 1].ptrquest[i].inicio.minuto;
			positivo = (calcmin < 0) ? -calcmin : calcmin;
			std::cout << " (" << positivo << " min)" << std::endl;
		}
	}
	std::cout << std::endl;
	Drawline('-', 10);
	std::cout << "\033[36mEstatisticas\033[0m" << std::endl;
	Drawline('-', 10);

	for (size_t i = 0; i < Nquestoes; i++)
	{
		double somaDificuldade = 0.0;
		double somaTempo = 0.0;
		int totalParticipantes = 0;

		for (size_t j = 0; j < Nparticipantes; j++)
		{
			somaDificuldade += vetDnP[j].ptrquest[i].Graudificuldade;
			somaTempo += calcularDiferencaMinutos(vetDnP[j].ptrquest[i].inicio, vetDnP[j].ptrquest[i].fim);
			totalParticipantes++;
		}

		double mediaDificuldade = somaDificuldade / totalParticipantes;
		double mediaTempo = somaTempo / totalParticipantes;

		char questaoLetra = 'A' + i;
		std::cout << "Questao " << questaoLetra << ": ";
		std::cout << "Dificuldade (" << mediaDificuldade << ") - Tempo (" << mediaTempo << " minutos)" << std::endl;
	}

	// Média geral do concurso
	double dificuldadeTotal = 0.0;
	double tempoTotal = 0.0;
	int totalQuestoes = Nparticipantes * Nquestoes;

	for (size_t i = 0; i < Nparticipantes; i++)
	{
		for (size_t j = 0; j < Nquestoes; j++)
		{
			dificuldadeTotal += vetDnP[i].ptrquest[j].Graudificuldade;
			tempoTotal += calcularDiferencaMinutos(vetDnP[i].ptrquest[j].inicio, vetDnP[i].ptrquest[j].fim);
		}
	}

	double mediaGeralDificuldade = dificuldadeTotal / totalQuestoes;
	double mediaGeralTempo = tempoTotal / totalQuestoes;

	std::cout << "Concurso: ";
	std::cout << "Dificuldade (" << mediaGeralDificuldade << ") - Tempo (" << mediaGeralTempo << " minutos)" << std::endl;

	

	// Evitar Memory leaker
	for (int i = 0; i < Nparticipantes; i++) {
		delete[] vetDnP[i].ptrquest; // Deleta as questões do participante
	}
	delete[] vetDnP; // Deleta o vetor de participantes

	Drawline('*', 50);
    return 0;
}
