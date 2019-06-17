#include "Lis.h"

void Lis::Push(Nodo *No)
{
	if (FirstNod == nullptr)
	{
		FirstNod = No;
	}
	else
	{
		FirstNod->Add(No, FirstNod);
	}
}

Nodo* Lis::Pull(unsigned short Pos, unsigned short Con)
{
	
	if (FirstNod == nullptr )
	{
		cout << "Sin nodo, no se elimino nada" << endl;
	}
	else if (FirstNod != nullptr && Pos==Con)
	{
		Temp = FirstNod;
		FirstNod = FirstNod->GetNodo();
		return Temp;
	}
	else if(FirstNod != nullptr && Pos != Con)
	{
		FirstNod->GetNodo2(Pos,Con);
	}
}

void Lis::Print()
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

void Lis::Clear()
{
	if (FirstNod != nullptr)
	{
		delete FirstNod;
	}
}

Lis::Lis()
{
}


Lis::~Lis()
{
	Clear();
}
