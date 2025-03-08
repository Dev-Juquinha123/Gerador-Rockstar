// Definicao da class Jogo
#include <iostream>
#include "Jogo.h"

void Jogo::adquirir(const std::string& titulo, float valor)
{
	nome = titulo;
	preco = valor;
	horas = 0;
	calcular();
}

void Jogo::atualizar(float valor)
{
	preco = valor;
	calcular();
}

void Jogo::jogar(int tempo)
{
	horas += tempo;
	calcular();
}

void Jogo::exibir()
{
	std::cout << nome << " R$" << preco << " " << horas << "h = R$" << custo << "/h\n";
}