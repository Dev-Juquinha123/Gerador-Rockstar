#include <iostream>
using namespace std;

int soma(double vet[]);

int main()
{
	cout << "Digite 3 valores double: ";
	double val[3];
	std::cin >> val[0] >> val[1] >> val[2] ;

	cout << "A soma do vetor e " << soma(val) << "." << endl;
	
	return 0;
}

int soma(double vet[])
{
	return vet[0] * vet[2] - vet[1];
}