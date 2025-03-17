#include <string>
using std::string;

// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
	string nome;									// nome do jogo
	float preco;									// pre�o do jogo
	int horas;										// quantidade de horas jogadas
	float custo;									// valor por hora jogada

	void calcular();								// calcular custo da hora jogada
	float rpreco();
	int rhoras();
	float rcusto();

public:
	Jogo();											// construtor padr�o
	Jogo(const string& titulo,						// construtor da classe
		float valor = 0,
		int tempo = 0);
	~Jogo();										// destrutor

	void atualizar(float valor);					// atualizar pre�o do jogo
	void jogar(int tempo);							// registrar horas jogadas
	void exibir() const;							// mostrar informa��es
};

// -----------------------------------------------
// M�todos Inline
// -----------------------------------------------

inline void Jogo::calcular()
{
	if (horas > 0)
		custo = preco / horas;
}

inline float Jogo::rpreco()
{
	return preco;
}
inline int Jogo::rhoras()
{
	return horas;
}

inline float Jogo::rcusto()
{
	return custo;
}



// -----------------------------------------------