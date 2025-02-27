// Implementacoes de funcoes definidas em concurso.h

#include "concurso.h"  // Incluímos o cabeçalho
#include <iostream>

void Drawline(char item, int vezesdwl) {
	for (size_t i = 0; i < vezesdwl; i++)
	{
		std::cout << item;
	}
}
