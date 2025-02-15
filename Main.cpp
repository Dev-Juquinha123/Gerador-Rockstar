#include <iostream>

int main() {
    const int tam = 15;
    char name[tam];
    char lastname[tam];
    std::cout << "Primeiro nome? ";
    std::cin >> name;
    std::cout << "Segundo nome? ";
    std::cin >> lastname;
    std::cout << std::endl;
    std::cout << "Bom dia, " << name << " " << lastname << "." << std::endl;
    std::cout << "Seja bem vindo " << name[0] << lastname[0];
  
    return 0;
}
