#include "User.h"



User::User(string Nom, string Ape, int Ed)
{
	nombre = Nom;
	apellido = Ape;
	edad = Ed;
}

int User::PushLeft(User * U)
{
	
	if (U->apellido < Left->apellido)
	{
		if (Left->Left == nullptr)
		{
			Left->Left = U;
		}
		else
		{
			Left->PushLeft(U);
		}
	}
	if (U->apellido > Left->apellido)
	{
		if (Left->Rigth == nullptr)
		{
			Left->Rigth = U;
		}
		else
		{
			Left->PushRigth(U);
		}
	}

	return 0;
}

int User::PushRigth(User * U)
{
	if (U->apellido < Rigth->apellido)
	{
		if (Rigth->Left == nullptr)
		{
			Rigth->Left = U;
		}
		else
		{
			Rigth->PushLeft(U);
		}
	}
	if (U->apellido > Rigth->apellido)
	{
		if (Rigth->Rigth == nullptr)
		{
			Rigth->Rigth = U;
		}
		else
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
