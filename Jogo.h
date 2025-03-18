#include <string>


// -----------------------------------------------
// Declaração da Classe Jogo
// -----------------------------------------------

class Jogo
{
private:
    std::string nome;     // Nome do jogo
    float preco;     // Preço do jogo
    int horas;       // Quantidade de horas jogadas
    float custo;     // Valor por hora jogada

    void calcular(); // Calcular custo da hora jogada

public:
    Jogo(); // Construtor padrão
    Jogo(const std::string& titulo, float valor = 0, int tempo = 0);
    ~Jogo(); // Destrutor

    void atualizar(float valor); // Atualizar preço do jogo
    void jogar(int tempo);       // Registrar horas jogadas
    void exibir() const;         // Mostrar informações

    // Métodos inline para retornar valores
    inline float rpreco() const { return preco; }
    inline int rhoras() const { return horas; }
    inline float rcusto() const { return custo; }
    inline std::string rnome() const { return nome; }
};

// Implementação do método calcular
inline void Jogo::calcular()
{
    if (horas > 0)
        custo = preco / horas;
    else
        custo = preco; // Caso tenha 0 horas, o custo será igual ao preço
}

// Implementação do construtor
Jogo::Jogo(const std::string& titulo, float valor, int tempo)
    : nome(titulo), preco(valor), horas(tempo), custo(0)
{
    calcular();
}

// Implementação do destrutor
Jogo::~Jogo() {}

// Implementação do método atualizar preço
void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}

// Implementação do método jogar (adicionar horas)
void Jogo::jogar(int tempo)
{
    horas += tempo;
    calcular();
}

// Implementação do método exibir (mostrar informações do jogo)
void Jogo::exibir() const
{
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Preço: " << preco << std::endl;
    std::cout << "Horas jogadas: " << horas << std::endl;
    std::cout << "Custo por hora: " << custo << std::endl;
}
// -----------------------------------------------