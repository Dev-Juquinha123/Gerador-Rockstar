#pragma once
#include <iostream>

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
    void calcular();
};

// Função externa (prototipada aqui)
Atleta& acumular(Atleta& soma, const Atleta& atl);
