#include <iostream>

int main() {
    char name[20];
    char lastname[20];
    std::cout << "Primeiro nome? ";
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "Segundo nome? ";
    std::cin >> lastname;
    std::cout << std::endl;
    std::cout << "Bom dia, " << name << " " << lastname << "." << std::endl;
    std::cout << "Seja bem vindo " << name[0] << lastname[0];
  
    return 0;
}
