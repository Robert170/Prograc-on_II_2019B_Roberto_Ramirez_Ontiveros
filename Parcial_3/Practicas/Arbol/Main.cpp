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
				//Limpiamos la pantalla
				system("cls");

				//User * U = new User(Nombre, Apellido, Edad);
				Nodo<Persona>*N = new Nodo<Persona>(Persona());
				A->Push(N);
				break;
			}

			//mostrar arbol en inorden
			case '2':
				//Limpiamos la pantalla
				system("cls");

				A->Inorden();
				break;

			//mostrar arbol en preorden
			case '3':
				//Limpiamos la pantalla
				system("cls");

				A->Preorden();
				break;

			//mostrar arbol en postorden
			case '4':
				//Limpiamos la pantalla
				system("cls");

				A->Postorden();
				break;

			//Mostrar si el arbol esta balanceado
			case '5':
				//Limpiamos la pantalla
				system("cls");

				A->Balance();
				break;

			//eliminar el nodo que el usuario ingrese
			case '6':
			{
				//Limpiamos la pantalla
				system("cls");
			
				//Creamos un nuevo nodo el cual N va a tener el nombre, apellido y edad
				Nodo<Persona>*N = new Nodo<Persona>(Persona());

				//Finalmente A va 
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
	//Llamada al menu
	Menu(); 

	
	cin.ignore();
	cin.get();
	return 0;
}