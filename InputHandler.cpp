#include "InputHandler.h"

// Função para obter uma mensagem do usuário
std::string InputHandler::getUserMessage() {
    std::string message;
    std::cout << "Digite sua mensagem: ";
    std::cin.ignore();
    std::getline(std::cin, message);
    return message;
}

// Função para obter a quantidade de repetições
int InputHandler::getUserCount() {
    int count;
    std::cout << "Quantas vezes deseja repetir? ";
    std::cin >> count;

    if (count < 1) {
        std::cout << "Número inválido! Usando 1 por padrão." << std::endl;
        count = 1;
    }
    return count;
}
