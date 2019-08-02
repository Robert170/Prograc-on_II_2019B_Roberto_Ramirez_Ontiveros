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

int User::Push(User * U, User * Ante)
{
	if (*U > *this)
	{
		if (Left == nullptr)
		{
			Left = U;
			Left->Ant = Ante;
		}
		else
		{
			Left->Push(U, Left);
		}
		return 0;
	}
	if (*U < *this)
	{
		if (Rigth == nullptr)
		{
			Rigth = U;
			Rigth->Ant = Ante;
		}
		else
		{
			Rigth->Push(U,Rigth);
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
	}
	
	if (Rigth != nullptr) 
	{
		Cont++;
		Rigth->Balance(Cont);
		Cont--;
		balDer = Rigth->pesoAct;
		pesoAct = ((Nivel * balIzq) + (Nivel * balDer));
	
	}
	if(Left==nullptr && Rigth==nullptr)
	{
		pesoAct = Nivel;
	}
	
}

bool User::operator < (User & U)
{
	if (U.apellido != apellido)
	{
		return U.apellido < apellido;
	}
	else if (U.nombre != nombre)
	{
		return U.nombre < nombre;
	}
	else if (U.edad != edad)
	{
		return U.edad < edad;
	}
}

bool User::operator > (User & U)
{
	if (U.apellido != apellido)
	{
		return U.apellido > apellido;
	}
	else if (U.nombre != nombre)
	{
		return U.nombre > nombre;
	}
	else if (U.edad != edad)
	{
		return U.edad > edad;
	}
}

bool User::operator = (User & U)
{
	if (U.apellido == apellido && U.nombre==nombre && U.edad==edad)
	{
		return true;
	}
	else
	{

		return false;
	}
}

int User::Pull(User * U, User * Temp)
{
	if (*U > *Temp)
	{
		Temp = Left;
		Left->Pull(U, Temp);
		return 0;
	}
	if (*U < *Temp)
	{
		Temp = Rigth;
		Rigth->Pull(U, Temp);
		return 0;
	}
	if (*U = *Temp)
	{
		if (Temp->Left == nullptr && Temp->Rigth == nullptr)
		{
			if (Temp->Ant->apellido < Temp->apellido)
			{
				Temp->Ant->Rigth = nullptr;
			}
			else if (Temp->Ant->apellido > Temp->apellido)
			{
				Temp->Ant->Left = nullptr;
			}
			Temp->Ant = nullptr;
			delete Temp;
			return 0;
		}
		else
		{
			if (Temp->Left != nullptr && Temp->Rigth == nullptr)
			{
				if (Temp->Ant->apellido < Temp->apellido)
				{
					Temp->Ant->Rigth = Temp->Left;
					Temp->Left->Ant = Temp->Ant;
				}
				else if (Temp->Ant->apellido > Temp->apellido)
				{
					Temp->Ant->Left = Temp->Left;
					Temp->Left->Ant = Temp->Ant;
				}
				Temp->Left = nullptr;
				delete Temp;
				return 0;
			}
			if (Temp->Left == nullptr && Temp->Rigth != nullptr)
			{
				if (Temp->Ant->apellido < Temp->apellido)
				{
					Temp->Ant->Rigth = Temp->Rigth;
					Temp->Rigth->Ant = Temp->Ant;
				}
				else if (Temp->Ant->apellido > Temp->apellido)
				{
					Temp->Ant->Left = Temp->Rigth;
					Temp->Rigth->Ant = Temp->Ant;
				}
				Temp->Rigth = nullptr;
				delete Temp;
				return 0;
			}

			if (Temp->Left != nullptr && Temp->Rigth != nullptr)
			{
				Temp->Rigth->Desplazar(Temp);

				return 0;
			}
		}
	}
	return 0;
}

void User::Desplazar(User  * Temp)
{
	if (this->Left != nullptr)
	{
		Left->Desplazar(Temp);
	}
	else
	{
		Temp = this;
		this->Ant = nullptr;
		delete this;
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
