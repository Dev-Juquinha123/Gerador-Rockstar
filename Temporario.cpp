#include <iostream>
#include "Jogo.h"

int main() {
    // Criando atletas com seus respectivos pontos e assistências
    Atleta rick(13, 14);
    Atleta john(10, 16);
    Atleta mark(7, 9);
    Atleta lucas(12, 11);


    // Criando um objeto Atleta que armazenará os totais acumulados
    Atleta time;

    // Acumulando os dados de cada atleta no total da equipe
    acumular(time, rick);
    acumular(time, john);
    acumular(time, mark);
    acumular(time, lucas);

    
    // Exibindo os dados acumulados da equipe
    time.exibir();

    std::cout << std::endl;
    return 0;
}
