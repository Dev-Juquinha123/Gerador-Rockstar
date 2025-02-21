#include <iostream>


int main() {
    
    char caracter = 'a';

    char *ptr = &caracter;

    std::cout << *ptr << std::endl;
    *ptr = 'b';
    std::cout << *ptr << std::endl;
    std::cout << &ptr << std::endl; // endereco
    return 0;
}

