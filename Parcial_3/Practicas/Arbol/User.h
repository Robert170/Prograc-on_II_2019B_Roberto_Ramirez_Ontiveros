#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

template<class T>
class Nodo
{
public:

	//Mienbros
	T Dato;
	Nodo<T> *Rigth = nullptr;
	Nodo<T> *Left = nullptr;
	Nodo<T> *Ant = nullptr;
	int Nivel = 0;
	int balIzq = 0;
	int balDer = 0;
	int pesoAct = 0;

	//Metodos
	
	void PreordenLeft();
	void PreordenRigth();
	void Inorden();
	void Postorden();
	int Push(Nodo<T>*, Nodo<T>*);
	void Balance(int);
	void Rotacion();

	bool operator < (Nodo<T>&);
	bool operator > (Nodo<T>&);
	bool operator == (Nodo<T>&);

	int Pull(Nodo<T>*, Nodo<T>*);
	Nodo Desplazar(Nodo<T>*);
	Nodo(T);
	Nodo();
	~Nodo();
	
};

