#include <iostream>


struct balao
{
    float diametro;  // diametro em metros
    char marca[20];  // nome da marca
    int modelo;      // numero do modelo
};

int main() {

    balao amarelo;

    balao* ptr = &amarelo;
    std::cout << "Entre com os dados: " << std::endl;
    std::cout << "Diametro: ";
    std::cin >> ptr->diametro;
    std::cout << std::endl;
    std::cout << "Marca: ";
    std::cin >> ptr->marca;
    std::cout << "Modelo: ";
    std::cin >> ptr->modelo;
    std::cout << "Conteudo diametro: " << ptr->diametro << "\n";
    std::cout << "Conteudo marca: " << ptr->marca << "\n";
    std::cout << "Conteudo modelo: " << ptr->modelo << "\n";

    return 0;
}
