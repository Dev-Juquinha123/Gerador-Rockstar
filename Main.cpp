#include <iostream>

int main() {

    double vzlsf = 245.795;
    double receiveint = (int)vzlsf;
    
    receiveint = receiveint * 100;
    vzlsf = vzlsf * 100;
    std::cout << "New value: " << receiveint << std::endl;

    std::cout << "New value2: " << vzlsf << std::endl;

    return 0;
}

