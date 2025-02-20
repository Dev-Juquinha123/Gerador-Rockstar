#include <iostream>



union indetificador
{
    char ch;
    int num;
    double frac;
};

int main() {
    
	indetificador id;
	id.ch = 'A';
	std::cout << "id.ch = " << id.ch << std::endl;
	id.num = 65;
	std::cout << "id.num = " << id.num << std::endl;
	std::cout << "id.ch = " << id.ch << std::endl;


    return 0;
}

