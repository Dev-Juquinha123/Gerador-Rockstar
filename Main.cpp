# include <iostream>

int main()
{
	int a, b, c = 0;

	a = 1;
	b = 2;
	a = c;
	b = a;
	
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	return 0;
}