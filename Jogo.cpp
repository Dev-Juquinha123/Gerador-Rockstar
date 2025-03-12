#include "Jogo.h"
#include <iostream>




Atleta& acumular(Atleta& soma, const Atleta& atl)
{
	soma.tentativas += atl.tentativas;
	soma.acertos += atl.acertos;
	calcular(soma);
	return soma;
}

