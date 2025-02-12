#include <iostream>
#include<iomanip>

int main() {

    float number;
    std::cout << "Digite um numero float: ";
    std::cin >> number;
    std::cout << "Notacao padrao: " << number << std::endl;
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Notacao decimal: " << number << std::endl;
    std::cout << std::scientific;
    std::cout << "Notacao cientifico: " << number << std::endl;
    return 0;
}

