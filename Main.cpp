#include <iostream>


int Incrementar(int value);

int Mais(int* ptr);

int main() {
    int initialvalue;
    int* ptr = &initialvalue;
    std::cout << "Digite um valor;";
    std::cin >> initialvalue;
   
    int newvalue = Mais(&initialvalue);
    std::cout << "Resultado apos mais: " << newvalue << std::endl;
    int novovalor = Incrementar(newvalue);

    std::cout << "Resultado apos Icrementar: " << novovalor;
    return 0;
}

int Mais(int* ptr)
{
    *ptr = *ptr += 1;
    return *ptr;
}

int Incrementar(int value)
{
    value = value += 1;
    return value;
};
