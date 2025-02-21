#include <iostream>

enum mes { Jan=1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre };


int main() {
    
	mes inicio, fim;
    
	inicio = Febrero;
	fim = Noviembre;

	std::cout << "Digite o numero do mes atual: ";
	int atual;
	std::cin >> atual;

	if (atual >= inicio && atual <= fim)
	{
		std::cout << "Voce esta em periodo de aulas.\n";
	}
	else
	{
		std::cout << "Ferias!\n";
	}

    return 0;
}

