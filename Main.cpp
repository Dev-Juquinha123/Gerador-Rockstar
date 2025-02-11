#include <iostream>

char charada(char value, int numericoancii);

int main() {
  
    int numerocaracter;
    char receive;
    char newvarible;

    std::cout << "Digite um ch: ";
    std::cin >> receive;
    std::cout << "Distancia de: ";
    std::cin >> numerocaracter;

    newvarible = charada(receive, numerocaracter);
    std::cout << "Seu numero na tabela ascii 5 a frente e: " << newvarible << std::endl;
    return 0;
}

char charada(char caracter , int codigonumerico)
{
    // Calcular distancia
    int novaposicao;
    novaposicao = codigonumerico + caracter;
    return novaposicao;
}