#include <iostream>



union indetificador
{
    char ch;
    int num;
    double frac;
};

int main() {
    
	indetificador id;
	std::cout << sizeof(id) << std::endl;


    return 0;
}

