#include "Arbol.h"



Arbol::Arbol()
{
}


Arbol::~Arbol()
{
	if (Raiz != nullptr)
	{
		delete Raiz;
	}
}

int Arbol::Push(User * U)
{
	if (Raiz == nullptr)
	{
		Raiz = U;
	}
	else
	{
		if (*U > *Raiz)
		{
			if (Raiz->Left == nullptr)
			{
				Raiz->Left = U;
				Raiz->Left->Ant = Raiz;
			}
			else
			{
				Raiz->Push(U, Raiz);
			}
			return 0;
		}

		if (*U < *Raiz)
		{
			if (Raiz->Rigth == nullptr)
			{
				Raiz->Rigth = U;
				Raiz->Rigth->Ant = Raiz;
			}
			else
			{
				Raiz->Push(U, Raiz);
			}
			return 0;
		}
	}
		
	return 0;
}

void Arbol::Inorden()
{
	if (Raiz != nullptr)
	{
		Raiz->Inorden();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

void Arbol::Preorden()
{
	if (Raiz != nullptr)
	{
		cout << "Apellido: " << Raiz->apellido << endl;
		cout << "Nombre: " << Raiz->nombre << endl;
		cout << "Edad: " << Raiz->edad << endl;
		Raiz->PreordenLeft();
		Raiz->PreordenRigth();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

void Arbol::Postorden()
{
	if (Raiz != nullptr)
	{
		Raiz->Postorden();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

void Arbol::Balance()
{
	if (Raiz->Left != nullptr) 
	{
		Cont++;
		Raiz->Left->Balance(Cont);
		if (Raiz->Left->balDer != Raiz->Left->balIzq)
		{
			cout << "Lado izquierdo dezbalanceado" << endl;
		}
		Raiz->balIzq = Raiz->Left->balDer + Raiz->Left->balIzq;
	}
	if (Raiz->Rigth != nullptr)
	{
		Cont = 0;
		Cont++;
		Raiz->Rigth->Balance(Cont);
		if (Raiz->Rigth->balDer != Raiz->Rigth->balIzq)
		{
			cout << "Lado derecho no balanceado" << endl;
		}
		Raiz->balDer = Raiz->Rigth->balDer + Raiz->Rigth->balIzq;
	}
	if (Raiz->balDer == Raiz->balIzq)
	{
		cout << "Arbol balanceado" << endl;
	}
	else
	{
		cout << "Arbol no balanceado" << endl;
	}
}

void Arbol::Pull(User * U)
{
	if (Raiz == nullptr)
	{
		cout << "Abol vacio" << endl;
	}
	else
	{
		User * Temp = new User();
		if (*U > *Raiz)
		{
			Temp = Raiz->Left;
			Raiz->Left->Pull(U, Temp);
		}
		if (*U < *Raiz)
		{
			Temp = Raiz->Rigth;
			Raiz->Rigth->Pull(U, Temp);
		}
	}
}
