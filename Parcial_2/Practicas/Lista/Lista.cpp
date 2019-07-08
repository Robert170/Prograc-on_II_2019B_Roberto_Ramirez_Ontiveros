#include "Lis.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void Quicksort(Lis* l, int Primero, int Ultimo)
{
	Nodo** TempAnt1;
	Nodo** TempSig1;
	Nodo** TempAnt2;
	Nodo** TempSig2;
	Nodo* Temp1;
	Nodo* Temp2;
	Nodo* Pivote = l->Get(Ultimo);
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (l->Get(i)->m_Nombre < Pivote->m_Nombre) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (l->Get(j)->m_Nombre > Pivote->m_Nombre) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
			//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
			Temp1 = l->Get(j);
			Temp2 = l->Get(i);

			TempAnt1 = &Temp1->AnteNodo;
			TempSig1 = &Temp1->SigNodo;

			TempAnt2 = &Temp2->AnteNodo;
			TempSig2 = &Temp2->SigNodo;

			Temp1->AnteNodo = *TempAnt2;
			Temp1->SigNodo = *TempSig2;

			Temp2->AnteNodo = *TempAnt1;
			Temp2->SigNodo = *TempSig1;

			i++;
			j--;
		}
	}



	if (Primero < j)
	{
		Quicksort(l, Primero, j);
	}
	if (i < Ultimo)
	{
		Quicksort(l, i, Ultimo);
	}

}

void Burbuja(int Tam, Lis* l, bool flag)
{
	Nodo** TempAnt1;
	Nodo** TempSig1;
	Nodo** TempAnt2;
	Nodo** TempSig2;
	Nodo* Temp1;
	Nodo* Temp2;

	//mientras i sea menor al tamaño menos 1 entrara en el primer for, el tamaño menos 1 es para que no verifique el ultimo digito acomodado
	for (int i = Tam - 1; i > 0; i--)
	{
		flag = false;
		//mientras j sea menor a i entrara al segundo for
		for (int j = 0; j < i; j++)
		{
			if (l->Get(j)->m_Nombre > l->Get(j+1)->m_Nombre)
			{
				flag = false;
				Temp1 = l->Get(j);
				Temp2 = l->Get(i);

				TempAnt1 = &Temp1->AnteNodo;
				TempSig1 = &Temp1->SigNodo;

				TempAnt2 = &Temp2->AnteNodo;
				TempSig2 = &Temp2->SigNodo;

				Temp1->AnteNodo = *TempAnt2;
				Temp1->SigNodo = *TempSig2;

				Temp2->AnteNodo = *TempAnt1;
				Temp2->SigNodo = *TempSig1;
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
}

int Menu(Lis *&L, unsigned char Eleccion, string Nombre, unsigned short Edad, unsigned short Posicion)
{

	//inicio del menu y ciclo hasta que el usuario quiera salir
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
			if (L->Size() == 0)
			{
				cout << "ingresa un nombre: "; cin >> Nombre;
				cout << "ingresa una edad: "; cin >> Edad;
				Nodo*N = new Nodo(Nombre, Edad);
				L->Push(N, Posicion);
				continue;
			}

			cout << "En que posicion de la lista quieres agregar su nodo, ingresa su posicion" << endl;
			cout << "Tamanio actual de la lista: " << L->Size() << endl;
			cin >> Posicion;

			if (Posicion > L->Size() + 1 || Posicion == 0)
			{
				cout << "Posicion no valida" << endl;
			}
			else
			{

				cout << "ingresa un nombre: "; cin >> Nombre;
				cout << "ingresa una edad: "; cin >> Edad;
				Nodo*N = new Nodo(Nombre, Edad);
				L->Push(N, Posicion);
			}
			break;
		}
		case '2':
		{
			cout << "Que elemento de la lista quieres eliminar, ingresa su posicion" << endl;
			cin >> Posicion;
			if (Posicion > L->Size() || Posicion == 0)
			{
				cout << "Posicion no valida." << endl;
			}
			else
			{
				Nodo*Temp = L->Pull(Posicion);
				if (Temp == nullptr)
				{
					cout << "Sin nodo, no se elimino nada." << endl;
				}
				else
				{
					cout << "El elemento sustraido y sus datos son: " << endl;
					cout << Temp->m_Nombre << endl;
					cout << Temp->m_Edad << endl;
					delete Temp;
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
			cout << "De que manera lo quieres ordenar?" << endl;
			cout << "Quicksort (1)" << endl;
			cout << "Metodo burbuja (2)" << endl;
			cin >> Eleccion;
			if (Eleccion == '1')
			{
				Quicksort(L, 0, L->Size());
			}
			if (Eleccion == '2')
			{
				Burbuja(L->Size(),L, true);
			}
			
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

	Menu(*&L,Eleccion, Nombre, Edad, Posicion); //llamada al menu

	delete L;
	cin.ignore();
	cin.get();
	return 0;
}