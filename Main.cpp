#include <iostream>


int main() {

    int tam;
    std::cout << "Digite o numero de alunos (minimo 2): ";
    std::cin >> tam;
    double* alunos = new double[tam];
    std::cout << "Digite a nota de dois alunos: ";
    // Preenchendo o vetor com dados do usuário
    for (int i = 0; i < 2; i++) {
        std::cout << "Digite a nota do aluno " << i + 1 << ": ";
        std::cin >> alunos[i];
    }
    std::cout << "As notas digitadas foram " << alunos[0] << " e " << alunos[1];
    delete[] alunos;

    return 0;
}
