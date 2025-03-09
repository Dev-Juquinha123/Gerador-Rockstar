#pragma once

class Point
{
public:
	int a;
	int b;

private:

};

class Rect
{
private:
	Point a;
	Point b;
	
public:
	void Create(int ax, int ay, int bx, int by);
	void Translate(int dx, int dy);
};

