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

	//Metodos
	User(string, string, int);
	int PushLeft(User*);
	int PushRigth(User*);
	void PreordenLeft();
	void PreordenRigth();
	void InordenLeft();
	void InordenRigth();
	void PostordenLeft();
	void PostordenRigth();
	User();
	~User();
	
};

