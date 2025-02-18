#include <iostream>

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

int main()
{

	jogador a = { "Ronaldo", 1000, 10 };
	jogador b = { "Messi", 2000, 20 };

	std::cout << "Nome: " << a.nome << std::endl;
	std::cout << "Salario: " << a.salario << std::endl;
	std::cout << "Gols: " << a.gols << std::endl;

	return 0;
}
