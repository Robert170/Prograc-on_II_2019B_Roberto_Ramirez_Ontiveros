#include "Nodo.h"
#include "Fila.h"
#include "Pila.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu(Pila *&P, Fila *&F,unsigned char Eleccion, string Nombre, unsigned short Edad)
{
	bool Ciclo = true;

	while (Ciclo = true)
	{
		cout << "Quiere entrar a la fila pulse (1)" << endl;
		cout << "Quiere entrar a la pila pulse (2)" << endl;
		cout << "Eleccion: "; cin >> Eleccion;
		system("cls");

		if (Eleccion == '1')
		{
			cout << "Que quiere hacer?" << endl;
			cout << "Agregar un elemento (1)" << endl;
			cout << "Eliminar el primer elemento (2)" << endl;
			cout << "Mostrar la cola (3)" << endl;
			cout << "Limpiar la cola (4)" << endl;
			cout << "Salir (0)" << endl;
			cout << "Regresar a la opcion anterior (*)" << endl << endl;
			cin >> Eleccion;
			switch (Eleccion)
			{
			case '1':
			{
				cout << "ingresa el un nombre: "; cin >> Nombre;
				cout << "ingresa el una edad: "; cin >> Edad;
				Nodo*N = new Nodo(Nombre, Edad);
				F->Push(N);
				delete N;
				break;
			}
			case '2':
				F->Pull();
				break;
			case '3':
				F->Print();
				break;
			case '4':
				F->Clear();
				break;
			case '0':
				cout << "Gracias por usar este programa, adios" << endl;
				break;
			case '*':
				Menu(*&P, *&F, Eleccion, Nombre, Edad);
				break;
			}
		}

		else if (Eleccion == '2')
		{
			cout << "Que quiere hacer?" << endl;
			cout << "Agregar un elemento (1)" << endl;
			cout << "Eliminar el ultimo elemento (2)" << endl;
			cout << "Mostrar un elemento (3)" << endl;
			cout << "Limpiar la pila (4)" << endl;
			cout << "Salir (0)" << endl;
			cout << "Regresar a la opcion anterior (*)" << endl;
			switch (Eleccion)
			{
			case '1':
			{
				cout << "ingresa el un nombre: "; cin >> Nombre;
				cout << "ingresa el una edad: "; cin >> Edad;
				Nodo*N = new Nodo(Nombre, Edad);
				P->Push(N);
				delete N;
				break;
			}
			case '2':
				break;
			case '3':
				break;
			case '4':
				cout << "Gracias por usar este programa, adios" << endl;
				break;
			case '*':
				Menu(*&P, *&F, Eleccion, Nombre, Edad);
				break;
			}
		}

		else
		{
			cout << "Opcion no valida, adios" << endl;
			return -1;
		}

		cout << "Quiere continuar? y/n" << endl;
		cin >> Eleccion;
		if (Eleccion == 'y')
		{	
		}
		else if (Eleccion == 'n')
		{
			Ciclo = false;
		}
		else
		{
			cout << "Opcion no valida se tomara como 'y'" << endl;
		}
	}
	
}

int main()
{
	//creacion de puntaros e inicializacion de variables
	Pila*P = new Pila();
	Fila*F = new Fila();
	unsigned char Eleccion='1';
	string Nombre=" ";
	unsigned short Edad = 0;

	Menu(*&P, *&F, Eleccion, Nombre, Edad); //llamada al menu

	delete F;
	delete P;
	cin.ignore();
	cin.get();
	return 0;
}