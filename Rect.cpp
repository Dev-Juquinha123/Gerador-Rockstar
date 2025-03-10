#include <iostream>
#include "Rect.h"

Rect::Rect() : valid(false) {}

void Rect::Create(int x1, int y1, int x2, int y2) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    valid = (x1 != x2 && y1 != y2);
}

bool Rect::IsValid() const {
    return valid;
}

void Rect::Print() const {
    if (!valid) {
        std::cout << "Retângulo inválido!\n";
        return;
    }
    std::cout << "Cantos: (" << x1 << "," << y1 << ") até (" << x2 << "," << y2 << ")\n";
    std::cout << "Largura: " << (x2 - x1) << ", Altura: " << (y2 - y1) << "\n";
}

void Rect::Translate(int dx, int dy) {
    if (!valid) return;
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
}

void Rect::Scale(double factor) {
    if (!valid || factor <= 0) return;
    x2 = x1 + static_cast<int>((x2 - x1) * factor);
    y2 = y1 + static_cast<int>((y2 - y1) * factor);
}

int Rect::GetArea() const {
    if (!valid) return 0;
    return (x2 - x1) * (y2 - y1);
}
