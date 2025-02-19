#include <iostream>
#include <string>

struct Palavra
{
	std::string portugues;
	std::string ingles;
	std::string espanhol;
};



int main()
{

	Palavra dicionario[10] = {
		{"Laranja", "Orange", "Naranja"},
		{"Maca", "Apple", "Manzana"},
	};

	std::cout << "Entre com mais uma palavra: " << std::endl;
	std::cout << "Portugues; ";
	std::cin >> dicionario[2].portugues;
	std::cout << "Ingles; ";
	std::cin >> dicionario[2].ingles;
	std::cout << "Espanhol; ";
	std::cin >> dicionario[2].espanhol;
	std::cout << "Mostrando toda lista" << std::endl;
	std::cout << "" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << dicionario[i].portugues << "\n";
		std::cout << dicionario[i].ingles;
		std::cout << dicionario[i].espanhol;
	}

   

	return 0;
}
