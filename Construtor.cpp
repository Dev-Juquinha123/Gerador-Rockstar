#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
	// objeto da classe Jogo
	Jogo gta = Jogo("Grand Theft Auto", 90.0f, 10);

	// chamando m�todos
	gta.atualizar(100.0f);
	gta.jogar(2);
	gta.exibir();
}