#include <iostream>



int main() {

    double litros = 3.4;

    double* ptr = &litros;
    std::cout << "O valor de litros e " << *ptr << " seu address " << ptr << std::endl;

    return 0;
}
