#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

enum HEALTH
{
	good, bad, critical
};

class Animales
{
public:
	void Nombre(string N)
	{
		name = N;
	}
	void Salud(HEALTH D)
	{
		health = D;
	}
	void Años(char A)
	{
		age = A;
	}
	
	string DevolverNombre()
	{
		return name;
	}
	HEALTH DevolverSalud()
	{
		return health;
	}
	char DevolverEdad()
	{
		return age;
	}
protected:
	string name;
	char age;
	HEALTH health;
};
