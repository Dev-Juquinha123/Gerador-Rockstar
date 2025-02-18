#include <iostream>
#include <cstring>

struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

void exibir(jogador);


int main()
{

	jogador romario = { "Romario", 200000, 1000 };
	exibir(romario);

	return 0;
}

void exibir(jogador j)
{
	std::cout << "Nome: " << j.nome << std::endl;
	std::cout << "Salario: " << j.salario << std::endl;
	std::cout << "Gols: " << j.gols << std::endl;
}
