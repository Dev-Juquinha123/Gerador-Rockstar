// Prototipos da funcoes metodos da classe
#include <iostream>
#include "Pointer.h"

void Point::MoveTo(int px, int py) // Recebe as novas coordenadas x e y serao movidos
{
	x = px;  // Atualiza a posição X
	y = py;  // Atualiza a posição Y
}

void Point::Translate(int dx, int dy) // Quanto queremos mover o ponto
{
	// Sem alterar seu tamanho
	// Deve chamar MoveTo primeiro para definir as coordenadas adicionar mais sem alterar tamanho basta somar com "Atual"
	// x = x + dx
	x += dx;  // Move o ponto horizontalmente
	y += dy;  // Move o ponto verticalmente
}

//void Point::showvalues()
//{
//	// Mostrando valores privados usando metodos
//	std::cout << "Verify value: x" << x << " y " << y;
//}
