#pragma once
#include "Nodo.h"
class Lis
{
public:
	//Miembros
	Nodo*FirstNodAnt = nullptr;
	Nodo*FirstNod = nullptr;
	Nodo*Temp = new Nodo();
	//Metodos
	void Push(Nodo *No);
	Nodo* Pull(unsigned short Pos, unsigned short Con);
	void Print();
	void Clear();
	Lis();
	~Lis();
};

