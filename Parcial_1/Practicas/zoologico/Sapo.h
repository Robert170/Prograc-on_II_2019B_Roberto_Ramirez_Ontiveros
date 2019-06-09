#pragma once
#include "Anfibios.h"

class Sapo : public Anfibios
{
public:
	Sapo();
	Sapo(string N, char A, HEALTH H);
	~Sapo();
};

Sapo::Sapo(string N, char A, HEALTH H)
{
	name = N;
	age = A;
	health = H;
}

Sapo::~Sapo()
{
}
Sapo::Sapo()
{
}
