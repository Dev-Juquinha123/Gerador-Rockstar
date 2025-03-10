// Prototipos da funcoes metodos da classe
#include <iostream>
#include "Rect.h"


void Rect::Create(int ax, int ay, int bx, int by) {
	a = Point(ax, ay);  // Define as coordenadas do ponto A
	b = Point(bx, by);  // Define as coordenadas do ponto B
}

void Rect::Translate(int dx, int dy) {
    // Movimenta os pontos A e B
    a += dx;  // Move o ponto A
    b += dx;  // Move o ponto B
    a += dy;  // Move o ponto A
    b += dy;  // Move o ponto B
}

void Rect::Print() const {
    std::cout << "Ponto A: (" << a.x << ", " << a.y << ")\n";
    std::cout << "Ponto B: (" << b.x << ", " << b.y << ")\n";
}