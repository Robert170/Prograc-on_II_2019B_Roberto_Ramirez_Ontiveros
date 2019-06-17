#pragma once
#include <string> 
using std::string;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Nodo
{
public:
	//Miembros
	Nodo*SigNodo;
	Nodo*AnteNodo;
	unsigned short m_Edad;
	string m_Nombre;

	//Metodos
	Nodo(string Nom, unsigned short E);
	Nodo();
	~Nodo();
	void Add(Nodo *&No,Nodo *&Ant);
	Nodo* GetNodo();
	Nodo* GetNodo2(unsigned short Pos, unsigned short Con);
	void Mostrar();
};

