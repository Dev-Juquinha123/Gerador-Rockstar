#include "MessageHandler.h"
#include "InputHandler.h"

int main() {
    MessageHandler msgHandler;
    InputHandler inputHandler;

    char option;

    std::cout << "\n=================== MENU ===================\n";
    do {
        std::cout << "\nOpções:\n";
        std::cout << "1 - Imprimir mensagem\n";
        std::cout << "2 - Salvar mensagem\n";
        std::cout << "3 - Carregar mensagens\n";
        std::cout << "4 - Apagar mensagens\n";
        std::cout << "0 - Sair\n";
        std::cout << "Escolha: ";
        std::cin >> option;

        switch (option) {
        case '1': {
            std::string message = inputHandler.getUserMessage();
            int count = inputHandler.getUserCount();
            msgHandler.printMessage(message, count);
            break;
        }
        case '2': {
            std::string message = inputHandler.getUserMessage();
            msgHandler.saveMessageToFile(message);
            break;
        }
        case '3':
            msgHandler.loadMessagesFromFile();
            break;
        case '4':
            msgHandler.clearMessages();
            break;
        case '0':
            std::cout << "\nObrigado por usar o programa. Até mais!\n";
            break;
        default:
            std::cout << "Opção inválida!\n";
        }
    } while (option != '0');

    return 0;
}
