#include <iostream>

enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };

union jogador
{
    char nome[25];
    int numero;
};

struct gol
{
    jogador jog;        // identificador do jogador
	float x, y, z;      // posicao da bola nas coordenadas
	trave local;        // onde a bola entrou
	float velo;         // velocidade da bola
	float acel;         // aceleracao da bola
};

int main() {
    
	gol estatisca[10]; // estatistica para ate 10 gols


    return 0;
}

