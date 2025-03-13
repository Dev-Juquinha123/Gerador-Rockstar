#include <iostream>
#include "Jogo.h"

int main() {
    // Criando atletas com seus respectivos pontos e assistências
    Atleta atletaRick(13, 14);
    Atleta atletaJohn(10, 16);
    Atleta atletaMark(7, 9);

    // Criando um objeto Atleta que armazenará os totais acumulados
    Atleta totalTime;

    // Acumulando os dados de cada atleta no total da equipe
    acumular(totalTime, atletaRick);
    acumular(totalTime, atletaJohn);
    acumular(totalTime, atletaMark);

    // Exibindo os dados acumulados da equipe
    totalTime.exibir();

    std::cout << std::endl;
    return 0;
}
