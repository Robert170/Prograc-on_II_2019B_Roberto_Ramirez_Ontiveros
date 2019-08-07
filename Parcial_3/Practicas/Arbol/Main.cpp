#include "Arbol.h"
#include "Persona.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu()
{
	
	char Eleccion;
	Arbol<Persona>*A = new Arbol<Persona>();

	while (true)
	{
		
		cout << "----------------------------------" << endl;
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento (1)" << endl;
		cout << "Mostrar el arbol Inorden(2)" << endl;
		cout << "Mostrar el arbol Preorden(3)" << endl;
		cout << "Mostrar el arbol Postorden(4)" << endl;
		cout << "Revisar si el arbol esta balanceado(5)" << endl;
		cout << "Eliminar un nodo(6)" << endl;
		cout << "Rotar el arbol(7)" << endl;
		cout << "Salir (0)" << endl;
		cin >> Eleccion;

		switch (Eleccion)
		{
		case '1'://ingresar nodos
		{
			system("cls");
			//User * U = new User(Nombre, Apellido, Edad);
			Nodo<Persona>*N = new Nodo<Persona>(Persona());
			A->Push(N);
			break;
		}
		case '2'://mostrar arbol en inorden
			system("cls");
			A->Inorden();
			break;
		case '3'://mostrar arbol en preorden
			system("cls");
			A->Preorden();
			break;
		case '4'://mostrar arbol en postorden
			system("cls");
			A->Postorden();
			break;
		case '5'://Mostrar si el arbol esta balanceado
			system("cls");
			A->Balance();
			break;
		case '6'://eliminar el nodo que el usuario ingrese
		{
			system("cls");
		
			Nodo<Persona>*N = new Nodo<Persona>(Persona());
			A->Pull(N);
			break;
		}
		case '7':
			A->Rotacion();
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
	

	Menu(); //llamada al menu

	
	cin.ignore();
	cin.get();
	return 0;
}