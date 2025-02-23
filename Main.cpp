#include <iostream>

int main() {

    int B[10] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64};
	
    for (size_t i = 0, j = 9; i < 5; i++, j--) {
        std::cout << " [" << B[i] << ", " << B[j] << "]";
    }

	
    return 0;
}
