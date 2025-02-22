#include <iostream>



int main() {


	int* ptr = new int(100);

	std::cout << "Conteudo armazendo: " << *ptr << std::endl;
	std::cout << "Digite novo valor para esse bloco de memoria: ";
	std::cin >> *ptr;
	std::cout << *ptr << " 0x" <<  ptr << std::endl;

    return 0;
}
