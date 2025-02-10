# include <iostream>
using namespace std;

float calcular(float number1, float number2);

int main(int argc, char** argv)
{
	float n1;
	float n2;
	float result;

	std::cout << "Entre com um numero: ";
	std::cin >> n1;

	std::cout << "Entre com outro numero: ";
	std::cin >> n2;

	result = calcular(n1, n2);

	std::cout << "A media harmonica de dois numeros " << n1 << " e " << n2 << " e igual a " << result << std::endl;

	return 0;
}

float calcular(float number1, float number2)
{
	float result;

	result = 2.0 * number1 * number2 / (number1 + number2);

	return result;
}