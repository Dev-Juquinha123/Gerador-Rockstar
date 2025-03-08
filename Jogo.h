#pragma once
#include <string>

class Jogo
{
public:
	void adquirir(const std::string& titulo, float valor);
	void atualizar(float valor);
	void jogar(int tempo);
	void exibir();

private:
	std::string nome;
	float preco;
	int horas;
	float custo;
	void calcular()
	{
		if (horas > 0)
		{
			custo = preco / horas;
		}
	}
};

