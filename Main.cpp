#include <iostream>


int main()
{

	char name[] = "Marcoasdasdasdawdasd4fasdfs";
	char othername[] = { 'a', 'b', 'c', 'd', 'e' }; // nao tem \0 mostra lixo ate encontrar outro
	
	std::cout << name << std::endl;
	std::cout << othername << std::endl;

	return 0;
}
