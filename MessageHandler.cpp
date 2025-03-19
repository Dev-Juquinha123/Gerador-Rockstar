#include "MessageHandler.h"
#include <chrono>
#include <thread>


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
        std::cout << "\033[1;32mMensagem salva com sucesso!\033[0m" << std::endl;
        if (message.empty()) {
            std::cout << "A mensagem não pode estar vazia!" << std::endl;
            return;
        }
        if (!file.is_open()) {
            std::cerr << "Erro: Não foi possível abrir o arquivo para escrita!" << std::endl;
        }

    }
    else {
        std::cout << "Erro ao abrir o arquivo!" << std::endl;
    }
}

// Função para carregar mensagens de um arquivo
void MessageHandler::loadMessagesFromFile() {
    std::ifstream file("messages.txt");
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Erro: Não foi possível abrir 'messages.txt'. Verifique se o arquivo existe." << std::endl;
        return;
    }

    if (file.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "O arquivo está vazio!" << std::endl;
        return;
    }

    messages.clear();  // Limpa mensagens antigas antes de carregar novas

    while (std::getline(file, line)) {
        messages.push_back(line);
    }

    file.close();
    std::cout << "Total de mensagens carregadas: " << messages.size() << std::endl;
}


// Função para limpar todas as mensagens do arquivo
void MessageHandler::clearMessages() {
    char confirm;
    std::cout << "Tem certeza que deseja apagar todas as mensagens? (s/n): ";
    std::cin >> confirm;
    if (confirm != 's' && confirm != 'S') return;
    std::ofstream file("messages.txt", std::ofstream::trunc);
    file.close();
    messages.clear();
    std::cout << "Mensagens apagadas!" << std::endl;
}
