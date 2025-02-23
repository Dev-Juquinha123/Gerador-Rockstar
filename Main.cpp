#include <iostream>
#include "functions.h"

int main() {
    int numlinhas;
    int j;
    std::cout << "Entre com o numero de linhas: ";
    std::cin >> numlinhas;
    std::cout << std::endl;


    // Colunas
    for (int i = 1; i <= numlinhas; i++) {
        // Imprimir pontos (4)
        for (int j = 0; j < numlinhas - i; j++) {
            std::cout << ".";
        }

        // Imprimir asteriscos
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }


    // Arquivo .h incluso
    std::cout << std::endl;
    std::cout << "By " << NOME << std::endl;
	
    return 0;
}
