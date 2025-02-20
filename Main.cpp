#include <iostream>
#include <string>
#include <limits>

struct Livro {
    unsigned paginas;
    unsigned capitulos;
    char titulo[100];
    char autor[100];
    int ano_publicacao;
};

struct Jogo {
    float vida;
    float colete;
    unsigned inventario;
    char nome[50];
    char genero[50];
    float tempo_jogado;
};

int main() {
    Jogo jogosemprestados[5];
    Livro livrosemprestados[5];
    unsigned int escolha;
    int jogosCount = 0, livrosCount = 0;

    std::cout << "O que voce deseja [0] Jogo / [1] Livro: ";
    std::cin >> escolha;

    if (std::cin.fail()) {
        std::cout << "Entrada invalida! Digite apenas numeros inteiros sem sinal." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }

    if (escolha == 0) {  // Adicionar um jogo
        if (jogosCount < 5) {  // Evitar ultrapassar o vetor
            std::cout << "Digite o nome do jogo: ";
            std::cin.ignore();
            std::cin.getline(jogosemprestados[jogosCount].nome, 50);
            std::cout << "Digite o genero do jogo: ";
            std::cin.getline(jogosemprestados[jogosCount].genero, 50);
            jogosemprestados[jogosCount].vida = 100.0f;  // Exemplo de valor padrão
            jogosemprestados[jogosCount].colete = 50.0f;
            jogosemprestados[jogosCount].inventario = 10;
            jogosemprestados[jogosCount].tempo_jogado = 0.0f;

            std::cout << "Jogo adicionado com sucesso!\n";
            jogosCount++;
        }
        else {
            std::cout << "Lista de jogos emprestados cheia!\n";
        }
    }
    else if (escolha == 1) {  // Adicionar um livro
        if (livrosCount < 5) {
            std::cout << "Digite o titulo do livro: ";
            std::cin.ignore();
            std::cin.getline(livrosemprestados[livrosCount].titulo, 100);
            std::cout << "Digite o nome do autor: ";
            std::cin.getline(livrosemprestados[livrosCount].autor, 100);
            std::cout << "Digite o ano de publicacao: ";
            std::cin >> livrosemprestados[livrosCount].ano_publicacao;
            livrosemprestados[livrosCount].paginas = 300;
            livrosemprestados[livrosCount].capitulos = 10;

            std::cout << "Livro adicionado com sucesso!\n";
            livrosCount++;
        }
        else {
            std::cout << "Lista de livros emprestados cheia!\n";
        }
    }
    else {
        std::cout << "Opcao invalida!\n";
    }

    return 0;
}
