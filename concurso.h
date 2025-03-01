#pragma once
#include <iostream>
#include <iomanip>

// Prototipos de funcoes e Registros
void Drawline(char item, int vezesdwl);


struct Horario
{
	int hora;
	int minuto;

    // Sobrecarga do operador de entrada (cin)
    friend std::istream& operator>>(std::istream& in, Horario& h) {
        char separador; // Para lidar com formato HH:MM
        in >> h.hora >> separador >> h.minuto;
        return in;
    }

    // Sobrecarga do operador de saída (cout)
    friend std::ostream& operator<<(std::ostream& out, const Horario& h) {
        out << std::setw(2) << std::setfill('0') << h.hora << ":"
            << std::setw(2) << std::setfill('0') << h.minuto;
        return out;
    }

    // Sobrecarga do operador de subtração (-) para calcular a diferença em minutos
    int operator-(const Horario& h) const {
        return (hora * 60 + minuto) - (h.hora * 60 + h.minuto);
    }
};

struct Questoes
{
	int Graudificuldade;
	Horario inicio;
	Horario fim;
};

struct Media
{
	double mediaGrauDificuldade;
	double mediaTempo;
};

struct Participantes
{
	char nome[50];
	Questoes* ptrquest; // Aponta para questoes (Cada participante tem)
};

void ResumoParticipantes(Questoes* ptrvpart, size_t Npart);

double calcularDiferencaMinutos(Horario inicio, Horario fim);

Media CalcularResumoQuestoes(Questoes* ptrvquest, const int tamvet, size_t IndiceInitial, size_t Passo);