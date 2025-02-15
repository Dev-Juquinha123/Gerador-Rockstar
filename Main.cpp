#include <iostream>
#include <cstring>

int main() {
    char nome[] = "c++ Primer Plus";
    std::cout << "Tamanho do vetor e: " << strlen(nome) << std::endl;
    std::cout << "Tamanho de bityes e: " << sizeof(nome);
    return 0;
}
