
// -----------------------------------------------
// Declara��o da Classe Point
// -----------------------------------------------

class Point
{
private:
	int x;											// posi��o no eixo x
	int y;											// posi��o no eixo y

public:
	void MoveTo(int px, int py);		            // move ponto para posi��o (px,py)
	void Translate(int dx, int dy);					// desloca ponto por (dx,dy)
	int X();										// retorna coordenada x do ponto
	int Y();										// retorna coordenada y do ponto
};

// -----------------------------------------------
// M�todos Inline
// -----------------------------------------------

inline int Point::X() { return x; }
inline int Point::Y() { return y; }

// -----------------------------------------------