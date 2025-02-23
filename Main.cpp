#include <iostream>

int main() {

    int A[10] = {46,78, 40, 96, 74, 58, 32, 56, 91, 6};

    for (size_t i = 0, j = 1; i < 9; i = i = i +2, j = j +2) {
        std::cout << " [" << A[i] << ", " << A[j] << "]";
    }

	
    return 0;
}
