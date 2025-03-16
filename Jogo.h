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

    /// Retorna o percentual de acerto.
    float getPercentual() const;


    /// Reseta os dados do atleta para zero.
    void resetar();

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

  
    /// Retorna o número de acertos.
    int getAcertos() const;

    /// Retorna o número de tentativas.
    int getTentativas() const;

    /// Registra uma tentativa, com acerto ou erro.
    void adicionarTentativa(bool acertou);

    inline void calcular() {
        if (tentativas != 0)
            percentual = 100.0f * acertos / tentativas;
        else
            percentual = 0.0f;
    }

    /// Verifica se o atleta atual tem desempenho superior a outro.
    bool possuiDesempenhoSuperior(const Atleta& outro) const;

private:
    /// Atributos
    int acertos = 0;
    int tentativas = 0;
    float percentual = 0.0f;


    /// Método auxiliar para cálculo do percentual.
   

};

#endif /// JOGO_H