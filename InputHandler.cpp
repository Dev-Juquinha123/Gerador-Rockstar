#include "InputHandler.h"

// Fun��o para obter uma mensagem do usu�rio
std::string InputHandler::getUserMessage() {
    std::string message;
    std::cout << "Digite sua mensagem: ";
    std::cin.ignore();
    std::getline(std::cin, message);
    return message;
}

// Fun��o para obter a quantidade de repeti��es
int InputHandler::getUserCount() {
    int count;
    std::cout << "Quantas vezes deseja repetir? ";
    std::cin >> count;

    if (count < 1) {
        std::cout << "N�mero inv�lido! Usando 1 por padr�o." << std::endl;
        count = 1;
    }
    return count;
}
