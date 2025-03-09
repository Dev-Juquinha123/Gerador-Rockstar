#include <iostream>
#include "Rect.h"

int main()
{
	Rect r;
	r.Create(10, 10, 20, 20);
	r.Translate(5, 5);
	r.Show();
}
