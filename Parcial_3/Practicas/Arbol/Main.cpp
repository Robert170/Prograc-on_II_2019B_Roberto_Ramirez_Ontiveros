#include "Arbol.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu(Arbol * A)
{
	unsigned short Edad;
	string Nombre;
	string Apellido;
	char Eleccion;

	while (true)
	{
		
		cout << "----------------------------------" << endl;
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento (1)" << endl;
		cout << "Mostrar el arbol Inorden(2)" << endl;
		cout << "Mostrar el arbol Preorden(3)" << endl;
		cout << "Mostrar el arbol Postorden(4)" << endl;
		cout << "Salir (0)" << endl;
		cin >> Eleccion;

		switch (Eleccion)
		{
		case '1':
		{
			system("cls");
			cout << "Ingresa un nombre: "; cin >> Nombre;
			cout << "Ingrsa un apellido: "; cin >> Apellido;
			cout << "Ingresa una edad: "; cin >> Edad;
			User * U = new User(Nombre, Apellido, Edad);
			A->Push(*&U);
			break;
		}
		case '2':
			system("cls");
			A->Inorden();
			break;
		case '3':
			system("cls");
			A->Preorden();
			break;
		case '4':
			system("cls");
			A->Postorden();
			break;
		case '0':
			return 0;
			break;
		default:
			break;
		}
	}
	return 0;
}


int main()
{
	//creacion de puntaros e inicializacion de variables
	Arbol * A = new Arbol();

	Menu(*&A); //llamada al menu

	delete A;
	cin.ignore();
	cin.get();
	return 0;
}