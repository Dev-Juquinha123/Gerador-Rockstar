#include <iostream>

char codificar(char cactere);
char decodificar(char othercharacter);


int main() {
    char valueuser;
    char showcharacter;
    int choice;

    std::cout << "Digite um caractere: ";
    std::cin >> valueuser;
    std::cout << "Carectere escolhido: " << valueuser << std::endl;
    std::cout << "Voce deseja codificar ou Decodificar? 0/1 >> ";
    std::cin >> choice;
    if (choice == true)
    {
        showcharacter = codificar(valueuser);
        std::cout << "New value " << showcharacter << std::endl;
    }
    else
    {
        showcharacter = decodificar(valueuser);
        std::cout << "New value decompiled " << showcharacter << std::endl;
    }
    

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