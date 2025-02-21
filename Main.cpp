#include <iostream>

enum mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };


int main() {
    
	char meses[12][10] = 
    {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
		"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	};

	for (mes ind = JAN; ind <= DEZ; ind = mes(ind +1))
	{
		std::cout << meses[ind] << std::endl;
	}

    return 0;
}

