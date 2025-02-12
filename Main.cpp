#include <iostream>

int main() {

    int horario;
   

    std::cout << "Entre com o numero de segundos: ";
    std::cin >> horario;
    
    int dias = horario / 86400;         // 1 dia tem 86400 segundos (24 * 60 * 60)
    int horas = (horario % 86400) / 3600; // O resto da divisão por 86400 dá o tempo restante, e dividimos por 3600 para obter horas
    int minutos = (horario % 3600) / 60;  // O resto da divisão por 3600 dá os segundos restantes, dividimos por 60 para obter minutos
    int segundos = horario % 60;         // O resto da divisão por 60 dá os segundos restantes


    std::cout << horario << " Segundos = " << dias << " dias, " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos";
    return 0;
}

