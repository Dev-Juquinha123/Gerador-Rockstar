#include <iostream>


int main() {

    double x1;
    double x2;
    int newvalue;

    std::cout << "Digite valor para x1: ";
    std::cin >> x1;
    std::cout << std::endl;
    std::cout << "Digite valor para x2: ";
    std::cin >> x2;
    newvalue = (int)x1 + (int)x2;
    std::cout << "A adicao inteira dos valores e " << newvalue;


    return 0;
}

