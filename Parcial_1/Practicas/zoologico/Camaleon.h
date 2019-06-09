#pragma once
#include "Reptiles.h"

class Camaleon : public Reptiles
{
public:
	Camaleon();
	Camaleon(string N, char A, HEALTH H);
	~Camaleon();
};

Camaleon::Camaleon(string N, char A, HEALTH H)
{
	name = N;
	age = A;
	health = H;
}

Camaleon::~Camaleon()
{
}
Camaleon::Camaleon()
{
}
