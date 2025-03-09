#include <iostream>
#include "Rect.h"

void Rect::Create(int ax, int ay, int bx, int by)
{
    a.MoveTo(ax, ay);
    b.MoveTo(bx, by);
}

void Rect::Translate(int dx, int dy)
{
    a.Translate(dx, dy);
    b.Translate(dx, dy);
}

void Rect::Show()
{
    a.Show();
    b.Show();
}
