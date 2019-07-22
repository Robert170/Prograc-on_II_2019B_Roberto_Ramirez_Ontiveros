#include "Arbol.h"



Arbol::Arbol()
{
}


Arbol::~Arbol()
{
}

int Arbol::Push(User * U)
{
	char Eleccion = ' ';
	if (Raiz == nullptr)
	{
		Raiz = U;
	}
	else
	{
		if (Raiz->Left == nullptr || Raiz->Rigth == nullptr)
		{
			if (Raiz->Left == nullptr)
			{
				cout << "Quieres ingresar el valor en el nodo Izquierdo? y/n" << endl;
				cin >> Eleccion;
				Eleccion = tolower(Eleccion);
				if (Eleccion == 'y')
				{
					Raiz->Left = U;
					return 0;
				}
			}
			if (Raiz->Rigth == nullptr)
			{
				if (Eleccion == 'y')
				{
				}
				else
				{
					cout << "Quieres ingresar el valor en el nodo Derecho? y/n" << endl;
					cin >> Eleccion;
					Eleccion = tolower(Eleccion);
					if (Eleccion == 'y')
					{
						Raiz->Rigth = U;
						return 0;
					}
				}
			}
		}

		cout << "Quieres ir al nodo izquierdo(1) o al nodo derecho(2)" << endl;
		cin >> Eleccion;
		if (Eleccion == '1')
		{
			Raiz->PushLeft(U);
		}
		else if(Eleccion=='2')
		{
				Raiz->PushRigth(U);
		}
	}
	return 0;
}

void Arbol::Inorden()
{
	if (Raiz != nullptr)
	{
		Raiz->InordenLeft();
		cout << "Apellido: " << Raiz->apellido << endl;
		cout << "Nombre: " << Raiz->nombre << endl;
		cout << "Edad: " << Raiz->edad << endl;
		Raiz->InordenRigth();
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
		Raiz->PostordenLeft();
		Raiz->PostordenRigth();
		cout << "Apellido: " << Raiz->apellido << endl;
		cout << "Nombre: " << Raiz->nombre << endl;
		cout << "Edad: " << Raiz->edad << endl;
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}
