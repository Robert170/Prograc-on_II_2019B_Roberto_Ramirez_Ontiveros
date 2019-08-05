#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
class Persona
{
public:
	std::string apellido;
	std::string nombre;
	int edad;
	
	bool operator < (Persona&);
	bool operator > (Persona&);
	bool operator == (Persona&);
	friend std::ostream & operator << (std::ostream & os, Persona & P);
	Persona(std::string, std::string, int);
	Persona();
	~Persona();
};

