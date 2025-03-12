#pragma once
#include <iostream>

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
    void calcular();
};

// Fun��o externa (prototipada aqui)
Atleta& acumular(Atleta& soma, const Atleta& atl);
