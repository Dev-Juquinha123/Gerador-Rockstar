#include "Jogo.h"

// Construtor padrão
Atleta::Atleta() {
    acertos = 0;
    tentativas = 0;
    percentual = 0.0f;
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
    std::cout << "Percentual: " << percentual << "%\n";
}

// Função amiga
Atleta& acumular(Atleta& soma, const Atleta& atl) {
    soma.acertos += atl.acertos;
    soma.tentativas += atl.tentativas;
    soma.calcular();
    return soma;
}
