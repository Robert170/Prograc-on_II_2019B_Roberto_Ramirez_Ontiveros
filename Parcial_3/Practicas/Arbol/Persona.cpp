#include "Persona.h"


bool Persona::operator<(Persona & U)
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

bool Persona::operator>(Persona & U)
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

bool Persona::operator==(Persona & P)
{
	if (apellido == P.apellido && nombre == P.nombre && edad == P.edad)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Persona::Persona(std::string N, std::string A, int E)
{
	nombre = N;
	apellido = A;
	edad = E;
}

Persona::Persona()
{
	std::cout << "Ingresa un nombre: "; std::cin >> nombre;
	std::cout << "Ingrsa un apellido: "; std::cin >> apellido;
	std::cout << "Ingresa una edad: "; std::cin >> edad;
}

Persona::~Persona()
{
}

std::ostream & operator<<(std::ostream & os, Persona & P)
{
	os << "Apellido: " << P.apellido << " Nombre: " << P.nombre << " Edad: " << P.edad << std::endl;
	return os;
}
