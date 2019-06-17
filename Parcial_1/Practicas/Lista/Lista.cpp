#include "Lis.h"
#include "Nodo.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu(Lis *&L, unsigned char Eleccion, string Nombre, unsigned short Edad)
{
	

	while (true)
	{
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento (1)" << endl;
		cout << "Eliminar el primer elemento (2)" << endl;
		cout << "Mostrar la lista (3)" << endl;
		cout << "Limpiar la lista (4)" << endl;
		cout << "Salir (0)" << endl;
		cin >> Eleccion;
		switch (Eleccion)
		{
		case '1':
		{
			cout << "ingresa el un nombre: "; cin >> Nombre;
			cout << "ingresa el una edad: "; cin >> Edad;
			Nodo*N = new Nodo(Nombre, Edad);
			L->Push(N);
			break;
		}
		case '2':
		{
			Nodo*Temp = L->Pull();
			cout << "El primer elemento sustraido y sus datos son: " << endl;
			cout << Temp->m_Nombre << endl;
			cout << Temp->m_Edad << endl;
			delete Temp;
			break;
		}
		case '3':
			L->Print();
			break;
		case '4':
			L->Clear();
			break;
		case '0':
			cout << "Gracias por usar este programa, adios" << endl;
			break;
		case '*':
			Menu(*&L, Eleccion, Nombre, Edad);
			break;
		}

		system("cls");
	}
	return 0;
}


int main()
{
	//creacion de puntaros e inicializacion de variables
	Lis*L = new Lis();
	
	unsigned char Eleccion = ' ';
	string Nombre = " ";
	unsigned short Edad = 0;

	Menu(*&L,Eleccion, Nombre, Edad); //llamada al menu

	delete L;
	cin.ignore();
	cin.get();
	return 0;
}