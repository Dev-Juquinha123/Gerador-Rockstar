#include <iostream>


int main() {

    int valor = 10, * temp, soma = 0;
    temp = &valor; // 0x43c5
    *temp = 20; // valor = 20
    temp = &soma; // 0x54c5 == 0
    *temp = valor; //soma = valor = 20 novamente
    std::cout << "Valor: " << valor << "\nsoma: " << soma << std::endl;
   
    return 0;
}
