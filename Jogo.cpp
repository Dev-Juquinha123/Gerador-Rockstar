#include "Jogo.h"
#include <iostream>

// Construtor padr�o
Atleta::Atleta() {
    acertos = 0;
    tentativas = 0;
    percentual = 0.0f;
    std::cout << "Construtor";
}

// Construtor com argumentos
Atleta::Atleta(int acertos_, int tentativas_) {
    acertos = acertos_;
    tentativas = tentativas_;
    calcular();
}

// Destrutor
Atleta::~Atleta() {
    // Nada a liberar neste exemplo
    // Liberar memoria alocada
    std::cout << "Destrutor chamado";
}

// Fun��o privada de c�lculo
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
    std::cout << std::endl;
}


// Fun��o amiga
Atleta& acumular(Atleta& soma, const Atleta& atl) {
    // Calculos
    soma.acertos += atl.acertos;
    soma.tentativas += atl.tentativas;
    soma.calcular();
    return soma;
}
