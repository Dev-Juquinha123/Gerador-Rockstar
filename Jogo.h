// ===============================================
// Arquivo: Jogo.h
// Descrição: Declaração da classe Atleta, que representa
// um jogador com número de acertos, tentativas e cálculo
// do percentual de aproveitamento.
// ===============================================

#pragma once

#ifndef JOGO_H
#define JOGO_H

class Atleta {
public:
    /// Construtor padrão: inicializa acertos, tentativas e percentual.
    Atleta();

    /// Construtor com parâmetros para acertos e tentativas.
    Atleta(int acertos_, int tentativas_);

    /// Destrutor da classe Atleta.
    ~Atleta();

    /// Exibe os dados do atleta no console.
    void exibir() const;

    /// Função amiga que acumula os dados de dois atletas.
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