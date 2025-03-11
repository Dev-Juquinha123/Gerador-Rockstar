#pragma once
#include <string>

using std::string;

// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;                                        // nome do jogo
	float preco;                                        // pre�o do jogo
	int horas;                                      // quantidade de horas jogadas
	float custo;                                        // valor por hora jogada

	void calcular();                                    // calcular custo da hora jogada

public:
	Jogo() { nome = ""; preco = 0.0f; horas = 0; custo = 0; } // Inicializando valores
	Jogo(const string& titulo, float valor, int tempo = 1);	// construtor da classe
	void atualizar(float valor);                        // atualizar pre�o do jogo
	void jogar(int tempo);                              // registrar horas jogadas
	void exibir();                                      // mostrar informa��es
};

// -----------------------------------------------
// M�todos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

// -----------------------------------------------