#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include "concurso.h"

void coletarDadosParticipantes(std::vector<Participantes>& participantes, int Nquestoes) {
    for (size_t i = 0; i < participantes.size(); i++) {
        std::cout << "\033[1;33mParticipante[" << i + 1 << "]:\033[0m ";
        std::cin >> participantes[i].nome;
        participantes[i].ptrquest.resize(Nquestoes);

        for (size_t j = 0; j < Nquestoes; j++) {
            char questaoLetra = 'A' + j;
            Drawline('-', 10);
            std::cout << "Questao " << questaoLetra << std::endl;
            std::cout << "\tDificuldade: ";
            std::cin >> participantes[i].ptrquest[j].Graudificuldade;
            std::cout << "\tInicio: ";
            std::cin >> participantes[i].ptrquest[j].inicio;
            std::cout << "\tFim: ";
            std::cin >> participantes[i].ptrquest[j].fim;
        }
        Drawline('-', 10);
    }
}

void exibirResumoParticipantes(const std::vector<Participantes>& participantes, int Nquestoes) {
    Drawline('*', 50);
    Drawline('-', 10);
    std::cout << "\033[36mResumo por Participante\033[0m" << std::endl;
    Drawline('-', 10);

    for (const auto& p : participantes) {
        std::cout << p.nome << ":" << std::endl;
        ResumoParticipantes(p.ptrquest.data(), Nquestoes);
    }
}

void exibirResumoQuestoes(const std::vector<Participantes>& participantes, int Nquestoes) {
    Drawline('-', 10);
    std::cout << "\033[36mResumo por Questoes\033[0m" << std::endl;
    Drawline('-', 10);

    for (size_t i = 0; i < Nquestoes; i++) {
        char questaoLetra = 'A' + i;
        std::cout << "Questao " << questaoLetra << std::endl;

        for (size_t j = 0; j < participantes.size(); j++) {
            std::cout << "\t" << participantes[j].nome << " ("
                << participantes[j].ptrquest[i].Graudificuldade << ") "
                << participantes[j].ptrquest[i].inicio << " as "
                << participantes[j].ptrquest[i].fim;

            int tempo = std::abs(participantes[j].ptrquest[i].fim - participantes[j].ptrquest[i].inicio);
            std::cout << " (" << tempo << " min)" << std::endl;
        }
    }
}

void calcularEstatisticas(const std::vector<Participantes>& participantes, int Nquestoes) {
    Drawline('-', 10);
    std::cout << "\033[36mEstatísticas\033[0m" << std::endl;
    Drawline('-', 10);
    std::cout << std::fixed << std::setprecision(2);

    for (size_t i = 0; i < Nquestoes; i++) {
        double somaDificuldade = 0.0, somaTempo = 0.0;
        int totalParticipantes = participantes.size();

        for (const auto& p : participantes) {
            somaDificuldade += p.ptrquest[i].Graudificuldade;
            somaTempo += calcularDiferencaMinutos(p.ptrquest[i].inicio, p.ptrquest[i].fim);
        }

        double mediaDificuldade = somaDificuldade / totalParticipantes;
        double mediaTempo = somaTempo / totalParticipantes;

        char questaoLetra = 'A' + i;
        std::cout << "Questao " << questaoLetra << ": Dificuldade (" << mediaDificuldade
            << ") - Tempo (" << mediaTempo << " minutos)" << std::endl;
    }

    // Média geral
    double dificuldadeTotal = 0.0, tempoTotal = 0.0;
    int totalQuestoes = participantes.size() * Nquestoes;

    for (const auto& p : participantes) {
        for (const auto& q : p.ptrquest) {
            dificuldadeTotal += q.Graudificuldade;
            tempoTotal += calcularDiferencaMinutos(q.inicio, q.fim);
        }
    }

    std::cout << "Concurso: Dificuldade (" << (dificuldadeTotal / totalQuestoes)
        << ") - Tempo (" << (tempoTotal / totalQuestoes) << " minutos)" << std::endl;
}

int main() {
    Drawline('*', 50);
    std::cout << "\033[36mConcurso de Programacao\033[0m" << std::endl;

    int Nparticipantes, Nquestoes;

    std::cout << "Qual o numero de participantes? ";
    std::cin >> Nparticipantes;
    std::cout << "Qual o numero de questoes? ";
    std::cin >> Nquestoes;

    std::vector<Participantes> participantes(Nparticipantes);

    Drawline('*', 50);
    coletarDadosParticipantes(participantes, Nquestoes);
    exibirResumoParticipantes(participantes, Nquestoes);
    exibirResumoQuestoes(participantes, Nquestoes);
    calcularEstatisticas(participantes, Nquestoes);

    Drawline('-', 50);
    return 0;
}
