#include <iostream>
#include "Rect.h"

int main()
{
    Rect r;
    Rect as;

    std::cout << &as << std::endl;


    // Criando um ret�ngulo com coordenadas (0,0) e (10,10)
    r.Create(0, 0, 10, 10);

    if (!r.IsValid()) {
        std::cerr << "Erro: Ret�ngulo inv�lido!\n";
        return 1;
    }


    std::cout << "Ret�ngulo inicial:\n";
    r.Print();
    std::cout << "�rea: " << r.GetArea() << "\n\n";

    // Movendo o ret�ngulo
    r.Translate(5, 5);
    std::cout << "Ap�s a transla��o:\n";
    r.Print();
    std::cout << "�rea: " << r.GetArea() << "\n\n";



    std::cout << std::endl;

    // Redimensionando o ret�ngulo
    r.Scale(2); // Dobra o tamanho
    std::cout << "Ap�s escalonamento (x2):\n";
    r.Print();
    std::cout << "�rea: " << r.GetArea() << "\n\n";


    return 0;
}
