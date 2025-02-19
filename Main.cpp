#include <iostream>

struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

void exibir(jogador);
jogador ler();


int main()
{
	std::cout << "Digite os dados do jogador: " << std::endl;
	jogador romario = ler();
	exibir(romario);

	return 0;
}

void exibir(jogador j)
{
	std::cout << "Nome: " << j.nome << std::endl;
	std::cout << "Salario: " << j.salario << std::endl;
	std::cout << "Gols: " << j.gols << std::endl;
	std::cout << "----------------------" << std::endl;	
}

jogador ler()
{
	jogador j;
	std::cout << "Nome: ";
	std::cin.getline(j.nome, 40);
	std::cout << "Salario: ";
	std::cin >> j.salario;
	std::cout << "Gols: ";
	std::cin >> j.gols;
	std::cin.ignore();
	return j;
}
