#include "Jogo.h"
#include <iostream>

void calcular(Atleta& atl)
{
	if (atl.tentativas != 0)
		atl.percentual = 100.0f * atl.acertos / atl.tentativas;
	else
		atl.percentual = 0
}

void exibir(const Atleta& atl)
{
	std::cout << "Acertos: " << atl.acertos << "  ";
	std::cout << "Tentativas: " << atl.tentativas << "  ";
	std::cout << " Percentual: " << atl.percentual << "\n";
}

Atleta& acumular(Atleta& soma, const Atleta& atl)
{
	soma.tentativas += atl.tentativas;
	soma.acertos += atl.acertos;
	calcular(soma);
	return soma;
}

