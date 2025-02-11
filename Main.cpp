#include <iostream>

int bitsBaixos(int valuebits);


int main() {
   
    int valuebts;
    unsigned int result;
    std::cout << "Digite um valor inteiro: ";
    std::cin >> valuebts;
   
    result = bitsBaixos(valuebts);
    std::cout << "Os 16 bits mais altos desse valor correspondem ao numero: " << result << std::endl;

    return 0;
}

int bitsBaixos(int bits)
{
    int resultado = bits & ((1 << 16) - 1);  // Máscara para isolar os n bits

    return resultado;
}
