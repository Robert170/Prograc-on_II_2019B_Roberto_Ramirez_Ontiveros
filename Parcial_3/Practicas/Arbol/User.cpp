#include "User.h"



User::User(string Nom, string Ape, int Ed)
{
	nombre = Nom;
	apellido = Ape;
	edad = Ed;
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

int User::Push(User * U)
{
	if (U->apellido < apellido)
	{
		if (Left == nullptr)
		{
			Left = U;
		}
		else
		{
			Left->Push(U);
		}
		return 0;
	}
	if (U->apellido > apellido)
	{
		if (Rigth == nullptr)
		{
			Rigth = U;
		}
		else
		{
			Rigth->Push(U);
		}
		return 0;
	}
	else if (U->nombre < nombre)
	{
		if (Left == nullptr)
		{
			Left = U;
		}
		else
		{
			Left->Push(U);
		}
	}
	else if (U->nombre > nombre)
	{
		if (Rigth == nullptr)
		{
			Rigth = U;
		}
		else
		{
			Rigth->Push(U);
		}
		return 0;
	}
	else if (U->edad < edad)
	{
		if (Left == nullptr)
		{
			Left = U;
		}
		else
		{
			Left->Push(U);
		}
		return 0;
	}

	else if (U->edad > edad)
	{
		if (Rigth == nullptr)
		{
			Rigth = U;
		}
		else
		{
			Rigth->Push(U);
		}
		return 0;
	}
	return 0;

}

void User::Balance(int Cont)
{
	Nivel = Cont;
	if (Left != nullptr) 
	{

		Cont++;
		Left->Balance(Cont);
		Cont--;
		balIzq = Left->pesoAct;
		pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
		//temp->balIzq = pesoAct;
	}
	
	if (Rigth != nullptr) 
	{
		Cont++;
		Rigth->Balance(Cont);
		Cont--;
		balDer = Rigth->pesoAct;
		pesoAct = ((Nivel * balIzq) + (Nivel * balDer));
		//temp->balDer = pesoAct;
	}
	else
	{
		pesoAct = Nivel;
	}
	
}

bool User::operator < (User * U)
{
	if (apellido < U->apellido)
	{
		return true;
	}
	else if (nombre < U->nombre)
	{
		return true;
	}
	else if (edad < U->edad)
	{
		return true;
	}
	else
	{
		return false;
	}
}




User::User()
{
	if (Left != nullptr)
	{
		delete Left;
	}
	if (Rigth != nullptr)
	{
		delete Rigth;
	}
}


User::~User()
{
}
