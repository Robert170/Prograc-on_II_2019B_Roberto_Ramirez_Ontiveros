#include <iostream>
#include <string>
#include "Arbol_AVL.h"
#include "Arbol_Bin.h"
#include "Persona.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int arbol_avl();
int arbol_bin();

int main()
{
	unsigned int menu = 0;

	cout << "\nIngresa \n0-Salir \n1-Para un arbol binario \n2-Para un arbol binario AVL" << endl;
	cin >> menu;

	switch (menu)
	{
	case 0:
		exit(0);
		//Caso para el arbol binario
	case 1:
		system("cls");
		arbol_bin();
		return main();

		//Caso para el arbol binario AVL
	case 2:
		system("cls");
		arbol_avl();
		return main();

	default:
		system("cls");
		cout << "Ingresa un valor correcto" << endl;
		return main();
	}

	cin.get();
	cin.ignore();
	return 0;
}

//Función menu para el árbol AVL
int arbol_avl()
{
	char eleccion;
	Arbol_AVL<Persona> arbol;
	unsigned int forzar_salida = 0;

	while (forzar_salida == 0)
	{
		system("cls");
		cout << "Salir(0)" << endl;
		cout << "Agregar un elemento(1)" << endl;
		cout << "Mostrar el arbol in_orden(2)" << endl;
		cout << "Mostrar el arbol pre_orden(3)" << endl;
		cout << "Mostrar el arbol post_orden(4)" << endl;
		cout << "Eliminar un nodo(5)" << endl;
		cin >> eleccion;

		switch (eleccion)
		{

		case '0':
			exit(0);

			//ingresar nodos
		case '1':
		{
			//Limpiamos la pantalla
			system("cls");

			Nodos<Persona>*nodo_temp = new Nodos<Persona>(Persona());
			arbol.ingresar(nodo_temp);
			break;
		}

		//mostrar arbol en inorden
		case '2':
			//Limpiamos la pantalla
			system("cls");

			arbol.in_orden();
			forzar_salida++;
			break;

			//mostrar arbol en preorden
		case '3':
			//Limpiamos la pantalla
			system("cls");

			arbol.pre_orden();
			forzar_salida++;
			break;

			//mostrar arbol en postorden
		case '4':
			//Limpiamos la pantalla
			system("cls");

			arbol.post_orden();
			forzar_salida++;
			break;


			//eliminar el nodo que el usuario ingrese
		case '5':
		{
			//Limpiamos la pantalla
			system("cls");

			//Creamos un nuevo nodo el cual nodo_temp va a tener el nombre, apellido y edad
			Nodos<Persona>*nodo_temp = new Nodos<Persona>(Persona());

			//Finalmente arbol va 
			arbol.eliminar(nodo_temp);
			forzar_salida++;
			arbol.balancear();
			break;
		}

		default:
			system("cls");
			cout << "Ingresa un valor correcto" << endl;
			return arbol_avl();
		}
	}
}




//Función menu para el árbol binario 
int arbol_bin()
{
	char eleccion;
	Arbol_Bin<Persona> arbol;
	unsigned int forzar_salida = 0;

	while (forzar_salida == 0)
	{
		system("cls");
		cout << "Salir(0)" << endl;
		cout << "Agregar un elemento(1)" << endl;
		cout << "Eliminar un nodo(2)" << endl;
		cout << "Mostrar el arbol in_orden(3)" << endl;
		cout << "Mostrar el arbol pre_orden(4)" << endl;
		cout << "Mostrar el arbol post_orden(5)" << endl;
		cin >> eleccion;

		switch (eleccion)
		{

		case '0':
			exit(0);

			//ingresar nodos
		case '1':
		{
			//Limpiamos la pantalla
			system("cls");

			//User * U = new User(Nombre, Apellido, Edad);
			Nodos<Persona>*nodo_temp = new Nodos<Persona>(Persona());
			arbol.ingresar(nodo_temp);
			break;
		}

		//eliminar el nodo que el usuario ingrese
		case '2':
		{
			//Limpiamos la pantalla
			system("cls");

			//Creamos un nuevo nodo el cual nodo_temp va a tener el nombre, apellido y edad
			Nodos<Persona>*nodo_temp = new Nodos<Persona>(Persona());

			//Finalmente arbol va 
			arbol.eliminar(nodo_temp);
			forzar_salida++;
			break;
		}

		//mostrar arbol en inorden
		case '3':
			//Limpiamos la pantalla
			system("cls");

			arbol.in_orden();
			forzar_salida++;
			break;

			//mostrar arbol en preorden
		case '4':
			//Limpiamos la pantalla
			system("cls");

			arbol.pre_orden();
			forzar_salida++;
			break;

			//mostrar arbol en postorden
		case '5':
			//Limpiamos la pantalla
			system("cls");

			arbol.post_orden();
			forzar_salida++;
			break;

		default:
			system("cls");
			cout << "\nIngresa un valor correcto" << endl;
			return arbol_bin();
		}
	}
}