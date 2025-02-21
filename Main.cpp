#include <iostream>


int main() {
    
    int x, * p, ** q;
    p = &x;
    q = &p;
    x = 10;
    std::cout << **q << std::endl;


    return 0;
}

