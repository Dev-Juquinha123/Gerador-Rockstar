#include "Jogo.h"

int main() {
    Atleta a1(8, 10);
    Atleta a2(7, 10);
    Atleta total;

    acumular(total, a1);
    acumular(total, a2);

    total.exibir();

    return 0;
}
