#include "Arbol.h"



Arbol::Arbol()
{
}


Arbol::~Arbol()
{
}

int Arbol::Push(User * U)
{
	if (Raiz == nullptr)
	{
		Raiz = U;
	}
	else
	{
		if (U->apellido < Raiz->apellido)
		{
			if (Raiz->Left == nullptr)
			{
				Raiz->Left = U;
			}
			else
			{
				Raiz->Push(U);
			}
		}
		else if (U->nombre < Raiz->nombre)
		{
			if (Raiz->Left == nullptr)
			{
				Raiz->Left = U;
			}
			else
			{
				Raiz->Push(U);
			}
		}
		else if (U->edad < Raiz->edad)
		{
			if (Raiz->Left == nullptr)
			{
				Raiz->Left = U;
			}
			else
			{
				Raiz->Push(U);
			}
		}


		if (U->apellido > Raiz->apellido)
		{
			if (Raiz->Rigth == nullptr)
			{
				Raiz->Rigth = U;
			}
			else
			{
				Raiz->Push(U);
			}
		}
		else if (U->nombre > Raiz->nombre)
		{
			if (Raiz->Rigth == nullptr)
			{
				Raiz->Rigth = U;
			}
			else
			{
				Raiz->Push(U);
			}
		}
		else if (U->edad > Raiz->edad)
		{
			if (Raiz->Rigth == nullptr)
			{
				Raiz->Rigth = U;
			}
			else
			{
				Raiz->Push(U);
			}
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
