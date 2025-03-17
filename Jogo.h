#include <string>


// -----------------------------------------------
// Declara��o da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
    string nome;     // Nome do jogo
    float preco;     // Pre�o do jogo
    int horas;       // Quantidade de horas jogadas
    float custo;     // Valor por hora jogada

    void calcular(); // Calcular custo da hora jogada

public:
    Jogo(); // Construtor padr�o
    Jogo(const string& titulo, float valor = 0, int tempo = 0);
    ~Jogo(); // Destrutor

    void atualizar(float valor); // Atualizar pre�o do jogo
    void jogar(int tempo);       // Registrar horas jogadas
    void exibir() const;         // Mostrar informa��es

    // M�todos inline para retornar valores
    inline float rpreco() const { return preco; }
    inline int rhoras() const { return horas; }
    inline float rcusto() const { return custo; }
    inline string rnome() const { return nome; }
};

// Implementa��o do m�todo calcular
inline void Jogo::calcular()
{
    if (horas > 0)
        custo = preco / horas;
    else
        custo = preco; // Caso tenha 0 horas, o custo ser� igual ao pre�o
}

// Implementa��o do construtor
Jogo::Jogo(const string& titulo, float valor, int tempo)
    : nome(titulo), preco(valor), horas(tempo), custo(0)
{
    calcular();
}

// Implementa��o do destrutor
Jogo::~Jogo() {}

// Implementa��o do m�todo atualizar pre�o
void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

// Implementa��o do m�todo jogar (adicionar horas)
void Jogo::jogar(int tempo)
{
    horas += tempo;
    calcular();
}

// Implementa��o do m�todo exibir (mostrar informa��es do jogo)
void Jogo::exibir() const
{
    cout << "Nome: " << nome << endl;
    cout << "Pre�o: " << preco << endl;
    cout << "Horas jogadas: " << horas << endl;
    cout << "Custo por hora: " << custo << endl;
}
// -----------------------------------------------