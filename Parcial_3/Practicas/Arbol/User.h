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
	void PreordenLeft();
	void PreordenRigth();
	void Inorden();
	void Postorden();
	void Push(User*);
	User();
	~User();
	
};

