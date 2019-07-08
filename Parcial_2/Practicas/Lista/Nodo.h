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
	Nodo*Temp;
	unsigned short m_Edad;
	string m_Nombre;

	//Metodos
	Nodo(string Nom, unsigned short E);
	Nodo();
	~Nodo();

	void Push(Nodo *Ante, Nodo *No);
	void Add(Nodo *&No,Nodo *&Ant, unsigned short Pos, unsigned short Con);
	Nodo* Pull(unsigned short Pos, unsigned short Con, Nodo *&Ant);
	Nodo* GetNodo();
	Nodo* Get(int);
	void Mostrar();

	bool operator < (Nodo*);
	bool operator > (Nodo*);
};

