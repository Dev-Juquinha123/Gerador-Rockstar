#include <iostream>
#include "functions.h"

int main() {

    char vetorlista[10];
    // Parte crescente
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Parte decrescente
    for (int i = 4; i >= 1; i--) {
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
