#pragma once

class Point
{
private:
	
public:
	int x;
	int y;

	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	void Show();
};

