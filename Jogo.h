// ===============================================
// Arquivo: Jogo.h
// Descri��o: Declara��o da classe Atleta, que representa
// um jogador com n�mero de acertos, tentativas e c�lculo
// do percentual de aproveitamento.
// ===============================================

#pragma once
#include <iostream>

#ifndef JOGO_H
#define JOGO_H

class Atleta {
public:
    // Construtores e Destrutor
    Atleta(); // Construtor padr�o
    Atleta(int acertos_, int tentativas_); // Construtor com argumentos
    ~Atleta();

    void exibir() const;

    // Fun��o amiga
    friend Atleta& acumular(Atleta& soma, const Atleta& atl);

private:
    // Atributos
    int acertos;
    int tentativas;
    float percentual;

    // M�todo auxiliar
    inline void calcular();
};

// Fun��o externa (prototipada aqui)
Atleta& acumular(Atleta& soma, const Atleta& atl);
#endif // JOGO_H