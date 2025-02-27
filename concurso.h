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
	int inicio;
	int fim;
};

struct Media
{
	float mediaGrauDificuldade;
	float mediaTempo;
};

struct Participantes
{
	char nome;
	Questoes* ptrquest;
};
