// ===============================================
// Arquivo: Jogo.h
// Descri��o: Declara��o da classe Atleta, que representa
// um jogador com n�mero de acertos, tentativas e c�lculo
// do percentual de aproveitamento.
// ===============================================

#pragma once

#ifndef JOGO_H
#define JOGO_H

class Atleta {
public:
    /// Construtor padr�o: inicializa acertos, tentativas e percentual.
    Atleta();

    /// Construtor com par�metros para acertos e tentativas.
    Atleta(int acertos_, int tentativas_);

    /// Destrutor da classe Atleta.
    ~Atleta();

    /// Exibe os dados do atleta no console.
    void exibir() const;

    /// Fun��o amiga que acumula os dados de dois atletas.
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