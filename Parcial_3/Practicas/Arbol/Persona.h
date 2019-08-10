#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

class Persona
{
	public:
		//Miembros
		std::string apellido;
		std::string nombre;
		int edad;
		
		//Sobrecarga de operadores
		bool operator < (Persona&);
		bool operator > (Persona&);
		bool operator == (Persona&);

		//Sobrecarga del operador out
		friend std::ostream & operator << (std::ostream & os, Persona & P);

		//Constructores
		Persona(std::string, std::string, int);
		Persona();

		//Destructor
		~Persona();
};

