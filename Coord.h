#pragma once
class Coord
{
private:
	int x = 0;
	int y = 0;
public:
	void Translate(int dx, int dy);
	void MoveTo(int px, int py);
};

