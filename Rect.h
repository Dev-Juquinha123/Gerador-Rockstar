#pragma once
#include <iostream>
#include "Point.h"

class Rect {
private:
    int x1, y1, x2, y2;
    bool valid;

public:
    Rect();
    void Create(int x1, int y1, int x2, int y2);
    void Print() const;
    void Translate(int dx, int dy);
    void Scale(double factor);
    int GetArea() const;
    bool IsValid() const;
};


