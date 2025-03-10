#include <iostream>
#include "Rect.h"

int main()
{
    Rect r;

    // Criando um retângulo com coordenadas (0,0) e (10,10)
    r.Create(0, 0, 10, 10);
    std::cout << "Retângulo inicial:\n";
    r.Print();

    // Movendo o retângulo 5 unidades para a direita e 5 para cima
    r.Translate(5, 5);
    std::cout << "\nApós a translação:\n";
    r.Print();

    return 0;
}
