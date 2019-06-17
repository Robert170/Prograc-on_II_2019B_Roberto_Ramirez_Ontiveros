#pragma once
#include <string> 
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Nodo
{
public:
	//Miembros
	Nodo*SigNodo;
	unsigned short m_Edad;
	string m_Nombre;

	//Metodos
	Nodo(string Nom, unsigned short E);
	Nodo();
	~Nodo();
	void Add(Nodo *&No);
	Nodo* GetNodo();
	void Mostrar();
};


Nodo::Nodo(string Nom, unsigned short E)
{
	m_Nombre = Nom;
	m_Edad = E;
	SigNodo = nullptr;
}

inline Nodo::Nodo()
{
}


Nodo::~Nodo()
{
	if (SigNodo != nullptr)
	{
		delete SigNodo;
	}
}

void Nodo::Add(Nodo *&No)
{
	if (SigNodo == nullptr)
	{
		SigNodo = No;
	}
	else
	{
		SigNodo->Add(No);
	}
}

inline Nodo * Nodo::GetNodo()
{
	if (SigNodo == nullptr)
	{
		return nullptr;
	}
	else
	{
		return SigNodo;
	}
}

inline void Nodo::Mostrar()
{
	if (SigNodo != nullptr)
	{
		cout << "Nombre: " << SigNodo->m_Nombre << "/n";
		cout << "Edad: " << SigNodo->m_Edad << "/n";
		SigNodo->Mostrar();
	}
}
