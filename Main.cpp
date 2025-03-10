#include <iostream>
#include "Rect.h"


int main()
{
    Rect r;

    // Cria o ret�ngulo com coordenadas (0, 0) e (10, 10)
    r.Create(0, 0, 10, 10);
    r.Print();  // Mostra as coordenadas dos pontos

    // Mover o ret�ngulo
    r.Translate(5, 5);  // Move os pontos para a direita e para cima
    r.Print();  // Mostra as novas coordenadas dos pontos
    std::cout << std::endl;


}
