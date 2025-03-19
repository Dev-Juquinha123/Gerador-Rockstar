#include "MessageHandler.h"

// Função para imprimir uma mensagem várias vezes
void MessageHandler::printMessage(const std::string& message, int count) {
    for (int i = 0; i < count; i++) {
        std::cout << message << std::endl;
    }
}

// Função para salvar uma mensagem em um arquivo
void MessageHandler::saveMessageToFile(const std::string& message) {
    std::ofstream file("messages.txt", std::ios::app);
    if (file.is_open()) {
        file << message << std::endl;
        file.close();
        std::cout << "Mensagem salva com sucesso!" << std::endl;
    }
    else {
        std::cout << "Erro ao abrir o arquivo!" << std::endl;
    }
}

// Função para carregar mensagens de um arquivo
void MessageHandler::loadMessagesFromFile() {
    std::ifstream file("messages.txt");
    std::string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            messages.push_back(line);
        }
        file.close();
        std::cout << "Mensagens carregadas com sucesso!" << std::endl;
    }
    else {
        std::cout << "Nenhum arquivo encontrado!" << std::endl;
    }
}

// Função para limpar todas as mensagens do arquivo
void MessageHandler::clearMessages() {
    std::ofstream file("messages.txt", std::ofstream::trunc);
    file.close();
    messages.clear();
    std::cout << "Mensagens apagadas!" << std::endl;
}
