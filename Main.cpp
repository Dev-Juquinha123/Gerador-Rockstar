#include <iostream>

int bitsAltos(int bits);

int main() {
 
    unsigned int valorinteiro;
    int result;

    std::cout << "Digite um valor inteiro ";
    std::cin >> valorinteiro;
    result = bitsAltos(valorinteiro);
    std::cout << "Os 16 bits mais altos desse valor correspondem ao numero " << result << "." << std::endl;

    return 0;
}

int bitsAltos(int bitss)
{
    // 32 bits [0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0][0]
    // bitss vai comparar os bits do numero bitss com a expressao
    // ((1 << 16)  Move um único bit 1 para a posição 16 
    // - 1 Subtrai 1, o que preenche os 16 bits menos significativos com 
    // Isso desloca os 16 bits 1 para as posições de 16 a 31 (16 + 16 = 32)
    // >> 16 voltamos com bits modificados 1011001010110000 para posicao original e temos novo numero

    unsigned int resultado = (bitss & (((1 << 16) - 1) << 16)) >> 16;


    return resultado;
}
