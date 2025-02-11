#include <iostream>

char codificar(char cactere);
char decodificar(char othercharacter);


int main() {
    char valueuser;
    char showcharacter;

    std::cout << "Digite um caractere: ";
    std::cin >> valueuser;
    std::cout << "Carectere escolhido: " << valueuser << std::endl;
    showcharacter = codificar(valueuser);
    std::cout << "New value " << showcharacter << std::endl;
    showcharacter = decodificar(valueuser);
    std::cout << "New value decompiled " << showcharacter << std::endl;

    return 0;
}

char codificar(char cactere)
{
    int cacterenw;
    cacterenw = cactere + 3;

    return cacterenw;
}

char decodificar(char crts)
{
    int value;
    value = crts - 3;

    return value;
}