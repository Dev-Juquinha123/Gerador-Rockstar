#include <iostream>
#include "Rect.h"

int main()
{
    Rect r;
    Rect as;

    std::cout << &as << std::endl;


    // Criando um retângulo com coordenadas (0,0) e (10,10)
    r.Create(0, 0, 10, 10);

    if (!r.IsValid()) {
        std::cerr << "Erro: Retângulo inválido!\n";
        return 1;
    }


    std::cout << "Retângulo inicial:\n";
    r.Print();
    std::cout << "Área: " << r.GetArea() << "\n\n";

    // Movendo o retângulo
    r.Translate(5, 5);
    std::cout << "Após a translação:\n";
    r.Print();
    std::cout << "Área: " << r.GetArea() << "\n\n";



    std::cout << std::endl;

    // Redimensionando o retângulo
    r.Scale(2); // Dobra o tamanho
    std::cout << "Após escalonamento (x2):\n";
    r.Print();
    std::cout << "Área: " << r.GetArea() << "\n\n";


    return 0;
}
