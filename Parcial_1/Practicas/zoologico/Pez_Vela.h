#include "Peces.h"

class Pez_Vela : public Peces
{
public:
	void Nombre(string N)
	{
		Nom = N;
	}
	void Desplasar(string D)
	{
		Moverse = D;
	}
	void Reproducir(string R)
	{
		Nacer = R;
	}
	void A�os(int A)
	{
		Edad = A;
	}
};