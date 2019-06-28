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
	Con = 1;
	
	if (FirstNod == nullptr )
	{
		return nullptr;
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

Nodo * Lis::Get(Nodo *Pivote)
{
	if(FirstNod < Pivote)
	{

	}
	
	return nullptr;
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
		cout << "!!!!!Lista vacia ingrese nodo!!!!!!!" << endl;
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
