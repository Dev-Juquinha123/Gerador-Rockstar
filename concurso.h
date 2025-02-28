#pragma once

// Prototipos de funcoes e Registros
void Drawline(char item, int vezesdwl);



struct Horario
{
	int hora;
	int minuto;
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