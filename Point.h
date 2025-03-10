#pragma once
// Prototipo
class Point
{
public:
    int x, y;
    // Point(int ax = 0, int ay = 0) : x(ax), y(ay) {}

    // Sobrecarga do operador += para mover o ponto
    void operator+=(const Point& p) {
        x += p.x;
        y += p.y;
    }

    // Sobrecarga do operador - para subtrair pontos
    void operator-=(const Point& p) {
        x -= p.x;
        y -= p.y;
    }

    // Sobrecarga de operadores para facilitar operações com inteiros
    void operator+=(int dx) {
        x += dx;
        y += dx;
    }

    void operator-=(int dx) {
        x -= dx;
        y -= dx;
    }
private:
	int a;
	int b;
};

