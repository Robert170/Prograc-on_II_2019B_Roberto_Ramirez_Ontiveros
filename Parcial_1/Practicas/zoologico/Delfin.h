#pragma once
#include "Mamiferos.h"

class Delfin : public Mamiferos
{
public:
	Delfin(string N,char A,HEALTH H);
	~Delfin();
};

Delfin::Delfin(string N, char A, HEALTH H)
{
	name = N;
	age = A;
	health = H;
}

Delfin::~Delfin()
{
}

