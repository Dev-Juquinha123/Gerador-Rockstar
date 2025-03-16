// ===============================================
// Arquivo: Jogo.cpp
// Descrição: Implementação dos métodos da classe Atleta,
// responsável por armazenar e exibir informações de desempenho
// de um jogador.
// ===============================================

#include "Jogo.h"
#include <iostream>


// Construtor padrão
Atleta::Atleta() : acertos(0), tentativas(0), percentual(0.0f) {
    std::cout << "Construtor\n";
}


// Construtor com argumentos
Atleta::Atleta(int acertos_, int tentativas_)
    : acertos(acertos_ < 0 ? 0 : acertos_),
    tentativas(tentativas_ < 0 ? 0 : tentativas_),
    percentual(0.0f) {
    calcular();
}



// Destrutor
Atleta::~Atleta() {
    // Nada a liberar neste exemplo
    // Liberar memoria alocada
    std::cout << "Destrutor chamado";
}

// Função privada de cálculo
inline void Atleta::calcular() {
    if (tentativas != 0)
        percentual = 100.0f * acertos / tentativas;
    else
        percentual = 0.0f;
}

// Exibir dados
void Atleta::exibir() const {
    std::cout << "Acertos: " << acertos << "  ";
    std::cout << "Tentativas: " << tentativas << "  ";
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << "Percentual: " << percentual << "%\n";
    std::cout << "-----------------------------\n\n";
}


// Função amiga
Atleta& acumular(Atleta& soma, const Atleta& atl) {
    // Calculos
    soma.acertos += atl.acertos;
    soma.tentativas += atl.tentativas;
    soma.calcular();
    return soma;
}

void Atleta::resetar() {
    acertos = 0;
    tentativas = 0;
    percentual = 0.0f;
}

float Atleta::getPercentual() const {
    return percentual;
}

