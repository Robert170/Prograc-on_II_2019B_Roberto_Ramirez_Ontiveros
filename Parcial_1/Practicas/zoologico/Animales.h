#pragma once
#include <iostream>

class Animales
{
public:
	virtual void Nombre() = 0;
	virtual void Comer() = 0;
	virtual void Desplasar() = 0;
	virtual void Reproducir() = 0;
};