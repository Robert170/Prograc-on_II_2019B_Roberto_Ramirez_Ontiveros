#include "Lis.h"

void Lis::Push(Nodo *No, unsigned short Pos)
{
	int Cont = 1;
	if (FirstNod == nullptr)
	{
		FirstNod = No;
	}
	
	else if (Pos == Cont)
	{
		Temp = FirstNod;
		FirstNod = No;
		FirstNod->Push(FirstNod, Temp);
	}
	else
	{
		FirstNod->Add(No, FirstNod, Pos, Cont);
	}
	LastNod = No;
	contador++;
}

Nodo* Lis::Pull(unsigned short Pos)
{
	int Con = 1;
	
	if (Pos <= 0 || FirstNod == nullptr) {
		return nullptr;
	}
	else if (Pos == Con)
	{
		Temp = FirstNod;
		FirstNod = FirstNod->GetNodo();
		Temp->SigNodo = nullptr;
		Temp->AnteNodo = nullptr;
		contador--;
		return Temp;
	}
	else if(Pos != Con)
	{
		contador--;
		return FirstNod->Pull(Pos, Con,FirstNod);
	}
}

Nodo * Lis::Get(int i)
{
	if (i == 0) {
		return FirstNod;
	} else {
		return FirstNod->Get(--i);
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
		cout << "!!!!!Lista vacia ingrese nodo!!!!!!!" << endl;
	}
}

void Lis::Clear()
{
	if (FirstNod != nullptr)
	{
		cout << "Deleating name: " << FirstNod->m_Nombre << endl;
		delete FirstNod;
		contador = 0;
	}
	

}

int Lis::Size() {
	return contador;
}


Lis::Lis()
{
	contador = 0;
}


Lis::~Lis()
{
	Clear();
}
