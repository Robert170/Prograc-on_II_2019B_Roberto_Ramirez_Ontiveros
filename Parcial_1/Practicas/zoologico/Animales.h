#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Animales
{
public:
	string Nom;
	int Edad;
	string Nacer;
	string Moverse;
	virtual void Nombre(string) = 0;
	virtual void Desplasar(string) = 0;
	virtual void Reproducir(string) = 0;
	virtual void Años(int) = 0;
};