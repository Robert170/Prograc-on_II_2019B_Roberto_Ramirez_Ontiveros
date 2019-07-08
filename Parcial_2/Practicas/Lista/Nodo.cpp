#include "Nodo.h"


Nodo::Nodo(string Nom, unsigned short E)
{
	m_Nombre = Nom;
	m_Edad = E;
	SigNodo = nullptr;
}

Nodo::Nodo()
{
	
}


Nodo::~Nodo()
{
	if (SigNodo != nullptr)
	{
		cout << "Deleting name: " << SigNodo->m_Nombre << endl;
		delete SigNodo;
	}
}

void Nodo::Push(Nodo * Ante, Nodo * No)
{
	SigNodo = No;
	AnteNodo = Ante;
}

void Nodo::Add(Nodo *&No, Nodo *&Ant, unsigned short Pos, unsigned short Con)
{
	Con++;
	if (Pos==Con && SigNodo==nullptr)
	{
		SigNodo = No;
		AnteNodo = Ant;
	}
	else if (Pos == Con && SigNodo != nullptr)
	{
		Temp = SigNodo;
		SigNodo = No;
		SigNodo->Push(SigNodo, Temp);

	}
	else
	{
		SigNodo->Add(No, SigNodo, Pos, Con);
	}
 }

Nodo * Nodo::GetNodo()
{
		return SigNodo;
}

Nodo * Nodo::Pull(unsigned short Pos, unsigned short Con, Nodo *&Ant)
{
	Con++;
	if (Pos == Con)
	{
		Temp = SigNodo;
		SigNodo=SigNodo->GetNodo();
		AnteNodo = Ant;
		Temp->SigNodo = nullptr;
		Temp->AnteNodo = nullptr;
		return Temp;
	}
	else if (SigNodo != nullptr && Pos != Con)
	{
		SigNodo->Pull(Pos, Con, SigNodo);
	}
	
}


void Nodo::Mostrar()
{
	if (SigNodo != nullptr)
	{
		cout << "Nombre: " << SigNodo->m_Nombre << endl;
		cout << "Edad: " << SigNodo->m_Edad << endl;
		SigNodo->Mostrar();
	}
}

bool Nodo::operator < (Nodo * n)
{
	return m_Nombre < n->m_Nombre;
}

bool Nodo::operator > (Nodo * n)
{
	return m_Nombre > n->m_Nombre;
}

Nodo* Nodo::Get(int i)
{
	if (i == 0) {
		return SigNodo;
	} else {
		return SigNodo->Get(--i);
	}
}