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
		delete SigNodo;
	}
}

void Nodo::Add(Nodo *&No, Nodo *&Ant)
{
	if (SigNodo == nullptr)
	{
		SigNodo = No;
		AnteNodo = Ant;
	}
	else
	{
		SigNodo->Add(No, SigNodo);
	}
 }

Nodo * Nodo::GetNodo()
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

Nodo * Nodo::GetNodo2(unsigned short Pos, unsigned short Con)
{
	
	Con++;
	if (SigNodo == nullptr)
	{
		return nullptr;
	}
	else if (SigNodo != nullptr && Pos == Con)
	{
		Temp = SigNodo;
		SigNodo=SigNodo->GetNodo();
		return Temp;
	}
	else if (SigNodo != nullptr && Pos != Con)
	{
		SigNodo->GetNodo2(Pos, Con);
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