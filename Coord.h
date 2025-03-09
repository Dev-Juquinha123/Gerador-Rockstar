#pragma once
class Coord
{
public:
	int x;
	int y;
public:
	void Translate(int dx, int dy);
	void MoveTo(int px, int py);
};

