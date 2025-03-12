#include "Jogo.h"

int main() {
    Atleta rick(13, 14);
    Atleta john(10, 16);
    Atleta mark(7, 9);
    Atleta time;

    acumular(time, rick);
    acumular(time, john);
    acumular(time, mark);

    time.exibir();

    return 0;
}
