#pragma once
#include "Aves.h"
class Avestrus : public Aves
{
public:
	Avestrus();
	Avestrus(string N, char A, HEALTH H);
	~Avestrus();
};

Avestrus::Avestrus(string N, char A, HEALTH H)
{
	name = N;
	age = A;
	health = H;
}

Avestrus::~Avestrus()
{
}

Avestrus::Avestrus()
{
}