#include <iostream>
#include <iomanip>
#include <cstring>


struct Horario
{
	unsigned int hora;
	unsigned int minuto;
};

// Sobrecarga do operador >> para Horario
std::istream& operator>>(std::istream& in, Horario& h) {
	in >> h.hora >> h.minuto;
	return in;
}

// Sobrecarga do operador << para Horario
std::ostream& operator<<(std::ostream& out, const Horario& h) {
	out << h.hora << ":" << h.minuto;
	return out;
}

struct Descricao
{
	char desc[18];
};

// Sobrecarga do operador >> para Descricao
std::istream& operator>>(std::istream& in, Descricao& d) {
	in.ignore(); // Remove caracteres pendentes no buffer
	in.getline(d.desc, sizeof(d.desc)); // Lê uma linha inteira com espaços
	return in;
}

// Sobrecarga do operador << para Descricao
std::ostream& operator<<(std::ostream& out, const Descricao& d) {
	out << d.desc;
	return out;
}


struct Data
{
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;

	Horario horario;
	Descricao descricao;
};



int main() {
    
	Data data[10];
	
	std::cout << "Entre com 2 eventos: " << std::endl;
	std::cout << "#1 " << std::endl;
	for (size_t i = 0; i < 2; i++)
	{
		std::cout << "Data: ";
		std::cin >> data[i].dia;
		std::cin >> data[i].mes;
		std::cin >> data[i].ano;
		std::cout << std::endl;
		std::cout << "Hora: ";
		std::cin >> data[i].horario;
		std::cout << std::endl;
		std::cout << "Desc: ";
		std::cin >> data[i].descricao;
		std::cout << "#2 " << std::endl;
	}
	
	//
	std::cout << "--------------------" << std::endl;
	std::cout << "Eventos Cadastrados" << std::endl;
	for (size_t i = 0; i < 2; i++) {
		std::cout << data[i].dia << "/" << data[i].mes << ":" << data[i].ano << " "
			<< data[i].horario << " "
			<< data[i].descricao << std::endl;
	}


    return 0;
}

