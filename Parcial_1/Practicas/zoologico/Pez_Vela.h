#pragma once
#include "Peces.h"

class Pez_Vela : public Peces
{
public:
	Pez_Vela(string N, char A, HEALTH H);
	~Pez_Vela();
};

Pez_Vela::Pez_Vela(string N, char A, HEALTH H)
{
	name = N;
	age = A;
	health = H;
}

Pez_Vela::~Pez_Vela()
{
}
