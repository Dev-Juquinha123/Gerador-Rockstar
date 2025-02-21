#include <iostream>

enum mes { SEG, TER, QUAR, QUINT, SEX };


int main() {
    
	char meses[5][10] = 
    {
        "Segunda", "Terca", "Quarta", "Quinta", "sexta",
	};

	for (mes ind = SEG; ind <= SEX; ind = mes(ind +1))
	{
		std::cout << meses[ind] << std::endl;
	}

    return 0;
}

