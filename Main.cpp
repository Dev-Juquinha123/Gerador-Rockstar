#include <iostream>
#include "Rect.h"

int main()
{
    Rect r;

    // Criando um ret�ngulo com coordenadas (0,0) e (10,10)
    r.Create(0, 0, 10, 10);
    std::cout << "Ret�ngulo inicial:\n";
    r.Print();

    // Movendo o ret�ngulo 5 unidades para a direita e 5 para cima
    r.Translate(5, 5);
    std::cout << "\nAp�s a transla��o:\n";
    r.Print();

    return 0;
}
