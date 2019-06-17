#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Pila
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
	Pila();
	~Pila();
};

inline void Pila::Push(Nodo *No)
{
	if (FirstNod == nullptr)
	{
		FirstNod = No;
	}
	else
	{
		FirstNod->Add(No);
	}
}

Nodo* Pila::Pull()
{
	if (FirstNod != nullptr)
	{
		Temp = FirstNod;
		FirstNod = FirstNod->GetNodo();
		return Temp;
	}
	else
	{
		cout << "Sin nodo no se elimino nada" << endl;
	}
}

inline void Pila::Print()
{
}

inline void Pila::Clear()
{
	FirstNod->~Nodo();
}

Pila::Pila()
{
}


Pila::~Pila()
{
}

