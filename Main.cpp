#include <iostream>

int main() {
    int vet[5] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << vet[i] << std::endl;
    }

    return 0;
}
