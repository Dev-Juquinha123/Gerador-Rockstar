#include <iostream>

char ultimo(char texto[]);

int main()
{
	std::cout << "Digite uma palavra: ";
	char palavra[20];
	std::cin >> palavra;

	std::cout << "Em " << palavra << " a ultima letra e " << ultimo(palavra) << "." << std::endl;

	return 0;
}

char ultimo(char texto[])
{
	// posi��o da �ltima letra
	int pos = strlen(texto) - 1;

	return texto[pos];
}