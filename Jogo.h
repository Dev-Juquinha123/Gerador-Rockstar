// ===============================================
// Arquivo: Jogo.h
// Descrição: Declaração da classe Atleta, que representa
// um jogador com número de acertos, tentativas e cálculo
// do percentual de aproveitamento.
// ===============================================

#pragma once
#include <iostream>

#ifndef JOGO_H
#define JOGO_H

class Atleta {
public:
    // Construtores e Destrutor
    Atleta(); // Construtor padrão
    Atleta(int acertos_, int tentativas_); // Construtor com argumentos
    ~Atleta();

    void exibir() const;

    // Função amiga
    friend Atleta& acumular(Atleta& soma, const Atleta& atl);

private:
    // Atributos
    int acertos;
    int tentativas;
    float percentual;

    // Método auxiliar
    inline void calcular();
};

// Função externa (prototipada aqui)
Atleta& acumular(Atleta& soma, const Atleta& atl);
#endif // JOGO_H