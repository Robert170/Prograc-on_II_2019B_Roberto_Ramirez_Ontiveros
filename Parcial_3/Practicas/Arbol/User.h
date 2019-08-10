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

		Nodo<T> *Rigth;
		Nodo<T> *Left;
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
		void Balance(int);
		void Rotacion();

		int Push(Nodo<T>*, Nodo<T>*);
		int Pull(Nodo<T>*, Nodo<T>*);

		//Sobrecarga de operadores 
		bool operator < (Nodo<T>&);
		bool operator > (Nodo<T>&);
		bool operator == (Nodo<T>&);
	

		Nodo Desplazar(Nodo<T>*);

		//Constructores
		Nodo(T);
		Nodo();

		//Destructor
		~Nodo();	
};

