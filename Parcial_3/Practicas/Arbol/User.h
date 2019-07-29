#pragma once
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class User
{
public:

	//Mienbros
	string apellido;
	string nombre;
	int edad;
	User*Rigth = nullptr;
	User*Left = nullptr;
	int Nivel = 0;
	int balIzq = 0;
	int balDer = 0;
	int pesoAct = 0;

	//Metodos
	User(string, string, int);
	void PreordenLeft();
	void PreordenRigth();
	void Inorden();
	void Postorden();
	int Push(User*);
	void Balance(int);
	bool operator < (User*);
	User();
	~User();
	
};

