#include <iostream>
#include "Jogo.h"

int main() {
    // Criando atletas com seus respectivos pontos e assistências
    Atleta rick(13, 14);
    Atleta john(10, 16);
    Atleta mark(7, 9);
    Atleta lucas(12, 11);
    Atleta ana(15, 13);
    Atleta carla(8, 10);
    Atleta pedro(9, 7);
    Atleta julia(11, 12);

    // Criando um objeto Atleta que armazenará os totais acumulados
    Atleta time;

    // Acumulando os dados de cada atleta no total da equipe
    acumular(time, rick);
    acumular(time, john);
    acumular(time, mark);
    acumular(time, lucas);
    acumular(time, ana);
    acumular(time, carla);
    acumular(time, pedro);
    acumular(time, julia);

    // Exibindo os dados acumulados da equipe
    time.exibir();

    std::cout << std::endl;
    return 0;
}
