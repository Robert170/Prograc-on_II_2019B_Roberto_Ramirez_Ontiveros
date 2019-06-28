#include "Lis.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void Quicksort(int Primero, int Ultimo, Lis *&L)
{
	Nodo*Temp;
	Nodo *Pivote = L->LastNod;
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (L->Get(Pivote)) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			
		}
		while (Array[j] > Pivote) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
			//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
		/*	Temp = Array[i];
			Array[i] = Array[j];
			Array[j] = Temp;
			i++;
			j--;*/
		}
	}



	if (Primero < j)
	{
		Quicksort(Primero, j,L);
	}
	if (i < Ultimo)
	{
		Quicksort(i, Ultimo,L);
	}

}


int Menu(Lis *&L, unsigned char Eleccion, string Nombre, unsigned short Edad, unsigned short Posicion, unsigned short Contador)
{
	

	while (true)
	{
		cout << "----------------------------------" << endl;
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento (1)" << endl;
		cout << "Eliminar el un elemento (2)" << endl;
		cout << "Mostrar la lista (3)" << endl;
		cout << "Limpiar la lista (4)" << endl;
		cout << "Ordenar la lista (5)" << endl;
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
			Contador++;
			break;
		}
		case '2':
		{
			cout << "Que elemento de la lista quieres eliminar, ingresa su posicion" << endl;
			cin >> Posicion;
			if (Posicion > Contador || Posicion < 0)
			{
				cout << "Posicion no valida" << endl;
			}
			else
			{
				Nodo*Temp = L->Pull(Posicion, Contador);
				if (Temp == nullptr)
				{
					cout << "Sin nodo, no se elimino nada" << endl;
				}
				else
				{
					cout << "El elemento sustraido y sus datos son: " << endl;
					cout << Temp->m_Nombre << endl;
					cout << Temp->m_Edad << endl;
				}
			}
			break;
		}
		case '3':
			cout << "--------------------" << endl;
			L->Print();
			cout << "--------------------" << endl;
			break;
		case '4':
			L->Clear();
			L->FirstNod = nullptr;
			break;
		case '5':
			Quicksort(1,Contador, *&L);
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