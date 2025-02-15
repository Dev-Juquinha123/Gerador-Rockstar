#include <iostream>
#include <string>

int main()
{

	const char senha[] = {'c', 'm', '1', '2', '3', '\0'};
	char tryesenha[10];

	std::cout << "Digite a senha: ";
	std::cin >> tryesenha;


	if (strcmp(tryesenha, senha) == 0)
	{
		std::cout << "Senha Correta";
	}
	else
		std::cout << "Senha incorreta";

	

	return 0;
}
