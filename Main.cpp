#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{

	char number1[10];
	int number2;
	std::cout << "-------------------------" << std::endl;
	std::cout << "Entre com dois numeros: ";
	std::cin >> number1;
	std::cin >> number2;
	int i = atoi(number1);
	std::cout << "A Multiplicacao entre eles e " << i * number2 << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------" << std::endl;



	return 0;
}
