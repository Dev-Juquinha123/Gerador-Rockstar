#include <iostream>



union Charint
{
    char ch;
    short num;
};

int main() {
    
    Charint val = { 0 };
	std::cout << "Enter a character: ";
	std::cin >> val.ch;
    std::cout << "Valor na tabela ASCII" << std::endl;
	std::cout << "CODIGO ASCII: " << val.num << std::endl;


    return 0;
}

