#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

enum HEALTH
{
	good=2, bad=1, critical=0
};

class Animales
{
public:
	void Nombre(string N)
	{
		name = N;
	}
	void Años(char A)
	{
		age = A;
	}
	void Salud(HEALTH D)
	{
		health = D;
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

	bool operator = (string nom) {
		return name == nom;
	}

	bool operator = (char a) {
		return age == a;
	}

	bool operator = (HEALTH h) {
		return health = h;
	}

	bool operator < (string nom) {
		return name < nom;
	}

	bool operator < (char a) {
		return age < a;
	}

	bool operator < (HEALTH h) {
		return health < h;
	}

	bool operator > (string nom) {
		return name > nom;
	}

	bool operator > (char a) {
		return age > a;
	}

	bool operator > (HEALTH h) {
		return health > h;
	}


protected:
	string name;
	char age;
	HEALTH health;
};
