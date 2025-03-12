#pragma once


class Atleta
{
public:
	// Construtores e Destrutor
	Atleta(); // Construtor padrão
	Atleta(int acertos_, int tentativas_); // Construtor com argumentos
	~Atleta();
private:
	// Atributos
	int acertos;
	int tentativas;
	float percentual;
	inline void calcular();
};

// Construtor padrão
Atleta::Atleta() {
	acertos = 0;
	tentativas = 0;
	percentual = 0.0f;
}

// Construtor com argumentos
Atleta::Atleta(int acertos_, int tentativas_) {
	acertos = acertos_;
	tentativas = tentativas_;
	if (tentativas != 0)
		percentual = (float(acertos) / tentativas) * 100.0f;
	else
		percentual = 0.0f;
}

// Destrutor
Atleta::~Atleta() {
	// Nada a liberar neste exemplo
}

// Função inline
inline void Atleta::calcular() {
	if (tentativas != 0)
		percentual = 100.0f * acertos / tentativas;
	else
		percentual = 0.0f;
}