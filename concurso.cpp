// Implementacoes de funcoes definidas em concurso.h

#include "concurso.h"  // Inclu�mos o cabe�alho
#include <iostream>

void Drawline(char item, int vezesdwl) {
	for (size_t i = 0; i < vezesdwl; i++)
	{
		std::cout << item;
	}
}
