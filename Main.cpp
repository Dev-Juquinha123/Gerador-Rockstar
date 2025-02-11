#include <iostream>
#include <climits>
#include <limits.h>


bool isShort(int);
bool isInt(int);

int main() {
    int numbertest;
    std::cout << "Digite um valor inteiro: ";
    std::cin >> numbertest;


    if (isShort(numbertest))
    {
        std::cout << numbertest << " Cabe em 16 bits" << std::endl;

    }
    else {
        std::cout << numbertest << " Nao Cabe em 16 bits" << std::endl;
    }

    if (isInt(numbertest)) {
        std::cout << numbertest << " Cabe em 32 bits" << std::endl;
    }
    else {
        std::cout << numbertest << " Nao Cabe em 32 bits" << std::endl;
    }
    
    
    return 0;
}

bool isInt(int number1)
{
    if (number1 > INT_MIN && number1 < INT_MAX){
        return true;
    }
    else {
        return false;
    }
        
   

}

bool isShort(int number)
{

    if (number > SHRT_MIN && number < SHRT_MAX){
        return true;
    }
    else {
        return false;
    }

    

}
