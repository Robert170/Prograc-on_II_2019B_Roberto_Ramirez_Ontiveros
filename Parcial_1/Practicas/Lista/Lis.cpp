#include "Lis.h"

inline void Lis::Push(Nodo *No)
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

Nodo* Lis::Pull()
{
	if (FirstNod != nullptr)
	{
		Temp = FirstNod;
		FirstNod = FirstNod->GetNodo();
		return Temp;
	}
	else
	{
		cout << "Sin nodo, no se elimino nada" << endl;
	}

}

inline void Lis::Print()
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

inline void Lis::Clear()
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
