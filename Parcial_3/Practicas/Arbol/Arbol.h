#pragma once
#include "User.h";
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

template<class T>
class Arbol
{
public:
	//Mienbros
	Nodo<T>*Raiz = nullptr;
	int Cont = 0;


	//Metodos
	Arbol();
	Arbol(Nodo<T>*);
	~Arbol();

	int Push(Nodo<T>*);
	void Inorden();
	void Preorden();
	void Postorden();
	void Balance();
	void Pull(Nodo<T>*);
	void Rotacion();

};

