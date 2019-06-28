#pragma once
#include "Nodo.h"
class Lis
{
public:
	//Miembros
	Nodo*LastNod = nullptr;
	Nodo*FirstNod = nullptr;
	Nodo*Temp = new Nodo();
	//Metodos
	void Push(Nodo *No);
	Nodo* Pull(unsigned short Pos, unsigned short Con);
	Nodo*Get(Nodo *Pivote);
	void Print();
	void Clear();
	Lis();
	~Lis();
};

