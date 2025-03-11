#include "Jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome = titulo;
    preco = valor;
    if (tempo > 0)
    {
        horas = tempo;
    }
    else
    {
        cout << "Valor invalido inicie jogo com tempo de jogo!";
    }
    
    custo = preco;
}

void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas = horas + tempo;
    calcular();
}

void Jogo::exibir()
{
    cout << fixed;
    cout.precision(2);
    if (horas > 0) {
        cout << nome << " R$"
            << preco << " "
            << horas << "h = R$"
            << custo << "/h\n";
    }
   
}

// -----------------------------------------------