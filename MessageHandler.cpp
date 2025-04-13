#include "MessageHandler.h"
#include <chrono>
#include <thread>
#include <fstream>
#include <vector>
#include <limits> // Para std::numeric_limits
#include <string>


bool MessageHandler::fileExists(const std::string& filename) {

    std::ifstream file(filename);

    return file.good();

}


MessageHandler::MessageHandler()
{
    //Initialization
}


// Função para imprimir uma mensagem várias vezes
void MessageHandler::printMessage(const std::string& message, int count) {

    for (int i = 0; i < count; i++) {

        std::cout << message << std::endl;

        std::cout << "discord.gg/community123";

    }
}



// Função para salvar uma mensagem em um arquivo
void MessageHandler::saveMessageToFile(const std::string& message) {
    if (message.empty()) {

        std::cout << "Erro: Mensagem vazia, não será salva. \n";

        return;
    }
    // new file for updates
    std::ofstream file("update.txt", std::ios::app);
    std::ofstream file("messages.txt", std::ios::app);
    if (!file) {
        std::cerr << "[Erro] ao abrir arquivo para escrita.\n";
        return;
    }


    file << message << std::endl;

    std::cout << "Mensagem salva com sucesso!\n";

}


/// Função para carregar mensagens de um arquivo
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
    std::cout << "Mensagens carregadas: " << std::endl;

    for (const auto& msg : messages) {

        std::cout << "- " << msg << std::endl;
    }

    std::cout << "Total de mensagens: " << messages.size() << std::endl;

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

