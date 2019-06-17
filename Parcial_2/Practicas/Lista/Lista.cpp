#include "Lis.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu(Lis *&L, unsigned char Eleccion, string Nombre, unsigned short Edad, unsigned short Posicion, unsigned short Contador)
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
			cout << "Que elemento de la lista quieres eliminar, ingresa su posicion" << endl;
			cin >> Posicion;
			Nodo*Temp = L->Pull(Posicion,Contador);
			cout << "El elemento sustraido y sus datos son: " << endl;
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
			return 0;
		}
		
		
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
	unsigned short Posicion = 0;
	unsigned short Contador = 0;

	Menu(*&L,Eleccion, Nombre, Edad, Posicion, Contador); //llamada al menu

	delete L;
	cin.ignore();
	cin.get();
	return 0;
}