#include <iostream>
#include "Jogo.h"


const int MAX = 3;

int main()
{
    // Criando um vetor de objetos da classe Jogo
    Jogo colecao[] = {
        Jogo("Gears", 90.0f, 30),
        Jogo("Doom", 60.0f, 120),
        Jogo("Halos", 80.0f, 40)
    };

    int tamanho = sizeof(colecao) / sizeof(colecao[0]);

    // Variáveis auxiliares para armazenar os índices dos jogos desejados
    int indiceMaisJogado = 0;
    int indiceMenorCusto = 0;
    int indiceMenorPreco = 0;


    // Percorrer o vetor e encontrar os jogos desejados
    for (int i = 1; i < tamanho; i++)
    {
        if (colecao[i].rhoras() > colecao[indiceMaisJogado].rhoras())
            indiceMaisJogado = i;

        if (colecao[i].rcusto() < colecao[indiceMenorCusto].rcusto())
            indiceMenorCusto = i;

        if (colecao[i].rpreco() < colecao[indiceMenorPreco].rpreco())
            indiceMenorPreco = i;
    }

    // Exibir os resultados
    std::cout << "=== Jogo mais jogado ===" << std::endl;
    colecao[indiceMaisJogado].exibir();
    std::cout << "------------------------\n";

    std::cout << "=== Jogo com menor custo por hora jogada ===" << std::endl;
    colecao[indiceMenorCusto].exibir();
    std::cout << "------------------------\n";

    std::cout << "=== Jogo com menor preço ===" << std::endl;
    colecao[indiceMenorPreco].exibir();
    std::cout << "------------------------\n";
}