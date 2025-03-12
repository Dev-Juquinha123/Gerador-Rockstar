#include "Jogo.h"
#include <iostream>


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

