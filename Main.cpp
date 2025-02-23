#include <iostream>

int main() {
    int vtam;
    std::cout << "Quantos valores deseja guardar: ";
    std::cin >> vtam;

    int* ptrvet = new int[vtam];
    std::cout << std::endl;
    std::cout << "Quais valores? ";

    for (int contador = 0; contador < vtam; contador++) {
        std::cin >> ptrvet[contador];
    }

    // Exibe todos os valores armazenados em uma única mensagem
    std::cout << "Os valores armazenados sao: ";
    for (int is = 0; is < vtam; is++) {
        std::cout << ptrvet[is];
        if (is < vtam - 1) {  // Adiciona vírgula entre os valores, exceto no último
            std::cout << ", ";
        }
    }
    std::cout << "Foram armazenados";
    std::cout << std::endl;

    delete[] ptrvet;  // Libera a memória alocada
    return 0;
}
