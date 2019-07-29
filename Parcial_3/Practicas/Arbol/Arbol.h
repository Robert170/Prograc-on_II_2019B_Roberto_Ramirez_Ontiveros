#pragma once
#include "User.h";
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Arbol
{
public:
	//Mienbros
	User*Raiz = nullptr;
	int Cont = 0;

	//Metodos
	Arbol();
	~Arbol();
	int Push(User*);
	void Inorden();
	void Preorden();
	void Postorden();
	void Balance();

};

