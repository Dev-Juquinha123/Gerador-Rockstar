#include <iostream>
#include <cstring>

struct contabancaria
{
	char nomecliente[40];
	unsigned saldo = 0;
};


int main()
{
	contabancaria jose;
	std::cout << "Digite o nome da conta: ";
	std::cin.getline(jose.nomecliente, 40);
	std::cout << "\033[1;32mLogin bem sucedido!\033[0m" << std::endl;
	std::cout << "Conta atual " << jose.nomecliente << " Saldo: " << jose.saldo << std::endl;
	char escolha[5];
    while (true) {
        std::cout << "Deseja fazer um deposito? S/N" << std::endl;
        std::cin >> escolha;
        std::cout << "\033[A\033[2K";
        if (strcmp(escolha, "s") == 0) {
            std::cout << "Digite o valor que deseja depositar: ";
            std::cin >> jose.saldo;
            std::cout << "\033[A\033[2K";
            std::cout << "Seu novo saldo apos deposito e: R$" << jose.saldo;
            break;  // Sai do loop se a resposta for válida
        }
        else if (strcmp(escolha, "n") == 0) {
            std::cout << "Conta finalizada." << std::endl;
            break;  // Sai do loop
        }
        else {
            std::cout << "\033[31mResposta invalida. Tente novamente.\033[0m" << std::endl;
        }
    }

   

	return 0;
}
