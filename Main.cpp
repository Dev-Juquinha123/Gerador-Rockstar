#include <iostream>

int main() {
    int vet[5] = { 15, 11, 39, 42, 57 };

    // Exibir o vetor
    std::cout << "Vetor atual: ";
    for (int i = 0; i < 5; i++) {
        std::cout << vet[i] << " ";
    }

    std::cout << std::endl;

    // Pedir ao usuário qual posição deseja alterar
    int alterarpos;
    std::cout << "Alterar posicao (0 a 4): ";
    std::cin >> alterarpos;

    // Verificar se a posição é válida
    if (alterarpos < 0 || alterarpos >= 5) {
        std::cout << "Posicao invalida!" << std::endl;
    }
    else {
        // Exibir o valor atual e pedir um novo valor
        std::cout << "Valor atual na posicao " << alterarpos << ": " << vet[alterarpos] << std::endl;
        std::cout << "Novo valor: ";
        int novovalor;
        std::cin >> novovalor;

        // Alterar o valor no vetor
        vet[alterarpos] = novovalor;

        // Exibir o vetor atualizado
        std::cout << "Vetor atualizado: ";
        for (int i = 0; i < 5; i++) {
            std::cout << vet[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
