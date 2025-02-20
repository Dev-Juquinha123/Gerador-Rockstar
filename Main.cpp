#include <iostream>
#include <string>
#include <sstream>


struct data
{
    unsigned int dia;
    unsigned int mes;
    unsigned int ano;
};

struct horario
{
    unsigned int hora;
    unsigned int minutos;
    unsigned int segundos;
};

struct  evento
{
    data encontro;
    horario timeevento;
	char local[50];
};


int main() {
    
    evento pascoa;

	std::cout << "Nome do evento: "; std::cin >> pascoa.local;
	std::cout << std::endl;
	std::cout << "Inicio horario: "; std::cin >> pascoa.timeevento.hora; std::cout << ":"; std::cin >> pascoa.timeevento.minutos; std::cout << ":"; std::cin >> pascoa.timeevento.segundos;
    std::cout << "Data: "; std::cin >> pascoa.encontro.dia; std::cout << ":"; std::cin >> pascoa.encontro.mes; std::cout << ":"; std::cin >> pascoa.encontro.ano;
	std::cout << pascoa.local << " - " << pascoa.timeevento.hora << ":" << pascoa.timeevento.minutos << ":" << pascoa.timeevento.segundos << " - " << pascoa.encontro.dia << "/" << pascoa.encontro.mes << "/" << pascoa.encontro.ano << std::endl;



    return 0;
}

