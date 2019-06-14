#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Fila
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
	Fila();
	~Fila();
};

inline void Fila::Push(Nodo *No)
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

 Nodo* Fila::Pull()
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

inline void Fila::Print()
{
	if (FirstNod != nullptr)
	{
		cout << "Nombre:" << FirstNod->m_Nombre << endl;
		cout << "Edad: " << FirstNod->m_Edad << endl;
		FirstNod->Mostrar();
	}
	else
	{
		cout << "!!!!!Cola vacia ingrese nodos¡¡¡¡" << endl;
	}
}

inline void Fila::Clear()
{
	FirstNod->~Nodo();
}

Fila::Fila()
{
}

Fila::~Fila()
{
}
