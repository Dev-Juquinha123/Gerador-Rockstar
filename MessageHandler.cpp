#include "MessageHandler.h"
#include <chrono>
#include <thread>


// Fun��o para imprimir uma mensagem v�rias vezes
void MessageHandler::printMessage(const std::string& message, int count) {
    for (int i = 0; i < count; i++) {
        std::cout << message << std::endl;
    }
}

// Fun��o para salvar uma mensagem em um arquivo
void MessageHandler::saveMessageToFile(const std::string& message) {
    std::ofstream file("messages.txt", std::ios::app);
    if (file.is_open()) {
        file << message << std::endl;
        file.close();
        std::cout << "\033[1;32mMensagem salva com sucesso!\033[0m" << std::endl;
        if (message.empty()) {
            std::cout << "A mensagem n�o pode estar vazia!" << std::endl;
            return;
        }

    }
    else {
        std::cout << "Erro ao abrir o arquivo!" << std::endl;
    }
}

// Fun��o para carregar mensagens de um arquivo
void MessageHandler::loadMessagesFromFile() {
    std::ifstream file("messages.txt");
    std::string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            messages.push_back(line);
        }
        file.close();
        std::cout << "Total de mensagens carregadas: " << messages.size() << std::endl;
    }
    else {
        std::cout << "Nenhum arquivo encontrado!" << std::endl;
    }
}

// Fun��o para limpar todas as mensagens do arquivo
void MessageHandler::clearMessages() {
    std::ofstream file("messages.txt", std::ofstream::trunc);
    file.close();
    messages.clear();
    std::cout << "Mensagens apagadas!" << std::endl;
}
