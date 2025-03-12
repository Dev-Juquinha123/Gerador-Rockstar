#include <string>
using std::string;

class Atleta
{
public:
	// Construtor & Destrutor
	Atleta();
	~Atleta();

private:
	// Atributos
	int acertos;
	int tentativas;
	float percentual;
};

// Construtor padroa
Atleta::Atleta()
{
	acertos = 0;
	tentativas = 0;
	percentual = 0;
}


Atleta::~Atleta()
{
}