#pragma once
#include "Nodo.h"
class Lis
{
public:
	//Miembros

	Nodo*FirstNod = nullptr;
	Nodo*Temp = new Nodo();
	//Metodos
	void Push(Nodo *No);
	Nodo* Pull();
	void Print();
	void Clear();
	Lis();
	~Lis();
};

