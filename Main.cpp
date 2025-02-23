#include <iostream>

int main() {

    int A[10] = {46,78, 40, 96, 74, 58, 32, 56, 91, 6};
    int (*ptr)[10] = &A;

    std::cout << "Address: " << "0x" << ptr << std::endl;
    std::cout << "[1] Normal" << std::endl;
    for (size_t i = 0, j = 1; i < 9; i = i = i +2, j = j +2) {
        
        std::cout << " [" << A[i] << ", " << A[j] << "]";
    }
    std::cout << std::endl;
    std::cout << "[2] Ponteiro" << std::endl;
    for (size_t iptr = 0, jptr = 1; iptr < 9; iptr = iptr = iptr + 2, jptr = jptr + 2) {

        std::cout << " [" << (*ptr)[iptr] << ", " << (*ptr)[jptr] << "]";
    }

	
    return 0;
}
