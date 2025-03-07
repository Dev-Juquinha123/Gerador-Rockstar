#include <iostream>
#include <string>
#include <iomanip>
#include "concurso.h"

struct Jogo
{
	std::string nome;
	float perco;
	int horas;
	float custo;
};

Jogo adquirir(const std::string& nome, float perco, int horas, float custo);
void atualziar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

int main() {


	
    return 0;
}
