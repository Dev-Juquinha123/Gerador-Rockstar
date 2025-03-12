#include "Jogo.h"
#include <iostream>
using namespace std;

int main()
{
	const Jogo ratchet = Jogo("Ratchet & Clank", 150.0f);
	/*ratchet.atualizar(125.0f);
	ratchet.jogar(5);*/
	ratchet.exibir();
}