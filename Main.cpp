#include <iostream>
#include "functions.h"

int main() {

    for (size_t i = 1; i < 65; i = i *2)
    {
        std::cout << i << std::endl;
    }

    // Arquivo .h incluso
    std::cout << std::endl;
    std::cout << "By " << NOME << std::endl;
	
    return 0;
}
