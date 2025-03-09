#pragma once
struct Coord
{
	int x;
	int y;

	void Translate(int dx, int dy);
	void MoveTo(int px, int py);
};

