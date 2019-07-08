#pragma once
#include "Nodo.h"
class Lis
{
public:
	//Miembros
	Nodo*LastNod = nullptr;
	Nodo*FirstNod = nullptr;
	Nodo*Temp = new Nodo();
	int contador;

	//Metodos
	void Push(Nodo *No, unsigned short Pos);
	Nodo* Pull(unsigned short Pos);
	Nodo* Get(int);
	void Print();
	void Clear();
	int Size();


	Lis();
	~Lis();
};

