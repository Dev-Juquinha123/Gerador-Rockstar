#include <iostream>

int main() {
    
    double precoproduto[3] = { 1.50, 2.00, 1.00 };
    double quantidadedesejada[3] = {};
    std::cout << "Prezado Cliente," << std::endl;
    std::cout << "Digite a quantidade de quilos desejados: " << std::endl;
    std::cout << "Alface: ";
    std::cin >> quantidadedesejada[0];
    std::cout << "Beterraba: ";
    std::cin >> quantidadedesejada[1];
    std::cout << "Cenoura: ";
    std::cin >> quantidadedesejada[2];
    std::cout << std::endl;
    double valortotal;
    std::cout << "Resumo da Compra" << std::endl;
    std::cout << "-----------------" << std::endl;
    valortotal = precoproduto[0] * quantidadedesejada[0];
    std::cout << "Alface\t = R$" << valortotal << std::endl;
    valortotal = precoproduto[1] * quantidadedesejada[1];
    std::cout << "Beterraba\t = R$" << valortotal << std::endl;
    valortotal = precoproduto[2] * quantidadedesejada[2];
    std::cout << "Cenoura\t = R$" << precoproduto[2] * quantidadedesejada[2] << std::endl;
    std::cout << "-----------------";
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Total: \t=  R$" <<(precoproduto[0] * quantidadedesejada[0] + precoproduto[1] * quantidadedesejada[1] + precoproduto[2] * quantidadedesejada[2]);
    return 0;
}
