#include "User.h"



User::User(string Nom, string Ape, int Ed)
{
	nombre = Nom;
	apellido = Ape;
	edad = Ed;
}

int User::PushLeft(User * U)
{
	char Eleccion = ' ';
	if (Left == nullptr)
	{
		Left = U;
	}
	else
	{
		if (Left->Left == nullptr || Left->Rigth == nullptr)
		{
			if (Left->Left == nullptr)
			{
				cout << "Quieres ingresar el valor en el nodo Izquierdo? y/n" << endl;
				cin >> Eleccion;
				Eleccion = tolower(Eleccion);
				if (Eleccion == 'y')
				{
					Left->Left = U;
					return 0;
				}
			}
			if (Left->Rigth == nullptr)
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
						Left->Rigth = U;
						return 0;
					}
				}
			}
		}

		cout << "Quieres ir al nodo izquierdo(1) o al nodo derecho(2)" << endl;
		cin >> Eleccion;
		if (Eleccion == '1')
		{
			Left->PushLeft(U);
		}
		else if (Eleccion == '2')
		{
			Left->PushRigth(U);
		}
	}
	return 0;
}

int User::PushRigth(User * U)
{
	char Eleccion = ' ';
	if (Rigth == nullptr)
	{
		Rigth = U;
	}
	else
	{
		if (Rigth->Left == nullptr || Rigth->Rigth == nullptr)
		{
			if (Rigth->Left == nullptr)
			{
				cout << "Quieres ingresar el valor en el nodo Izquierdo? y/n" << endl;
				cin >> Eleccion;
				Eleccion = tolower(Eleccion);
				if (Eleccion == 'y')
				{
					Rigth->Left = U;
					return 0;
				}
			}
			if (Rigth->Rigth == nullptr)
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
						Rigth->Rigth = U;
						return 0;
					}
				}
			}
		}

		cout << "Quieres ir al nodo izquierdo(1) o al nodo derecho(2)" << endl;
		cin >> Eleccion;
		if (Eleccion == '1')
		{
			Rigth->PushLeft(U);
		}
		else if (Eleccion == '2')
		{
			Rigth->PushRigth(U);
		}
	}
	return 0;
}

void User::PreordenLeft()
{
	if (Left != nullptr)
	{
		cout << "Apellido: " << Left->apellido << endl;
		cout << "Nombre: " << Left->nombre << endl;
		cout << "Edad: " << Left->edad << endl;
		Left->PreordenLeft();
		if (Left->Rigth != nullptr)
		{
			cout << "Apellido: " << Left->Rigth->apellido << endl;
			cout << "Nombre: " << Left->Rigth->nombre << endl;
			cout << "Edad: " << Left->Rigth->edad << endl;
			Left->Rigth->PreordenLeft();
		}
	}
}

void User::PreordenRigth()
{
	if (Rigth != nullptr)
	{
		cout << "Apellido: " << Rigth->apellido << endl;
		cout << "Nombre: " << Rigth->nombre << endl;
		cout << "Edad: " << Rigth->edad << endl;
		Rigth->PreordenLeft();
		if (Rigth->Rigth != nullptr)
		{
			cout << "Apellido: " << Rigth->Rigth->apellido << endl;
			cout << "Nombre: " << Rigth->Rigth->nombre << endl;
			cout << "Edad: " << Rigth->Rigth->edad << endl;
			Rigth->Rigth->PreordenLeft();
		}
	}
	
}

void User::Inorden()
{
	if (Left != nullptr)
	{
		Left->Inorden();
	}
	cout << "Apellido: " << apellido << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	if (Rigth != nullptr)
	{
		Rigth->Inorden();
	}
}

void User::Postorden()
{
	if (Left != nullptr)
	{
		Left->Postorden();
	}
	if (Rigth != nullptr)
	{
		Rigth->Postorden();
	}
	cout << "Apellido: " << apellido << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}




User::User()
{
}


User::~User()
{
}
