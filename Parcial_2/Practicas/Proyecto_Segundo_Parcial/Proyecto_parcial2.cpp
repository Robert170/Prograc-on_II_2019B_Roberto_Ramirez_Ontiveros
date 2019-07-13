#include "List.h"
#include "Sort.h"
#include <string> 
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu_Lista_Simple(SingleList &Sl)
{
	Sort B;
	char Seleccion;
	unsigned short Pos;
	
	while (true)
	{
		/*cout << "----------------------------------\n";
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento al final (1)" << endl;
		cout << "Agregar un elemento en un lugar especifico (2)" << endl;
		cout << "Eliminar el ultimo elemento (3)" << endl;
		cout << "Eliminar el un elemento especifico (4)" << endl;
		cout << "Remover el ultimo elemento (5)" << endl;
		cout << "Remover un elemento especifico (6)" << endl;
		cout << "Mostrar la lista (7)" << endl;
		cout << "Limpiar la lista (8)" << endl;
		cout << "Ordenar la lista (9)" << endl;
		cout << "Salir (0)" << endl;*/
		cin.get(Seleccion);
		switch (Seleccion)
		{
		case '1':
		{
			SingleNode * N = new SingleNode();
			cin >> *N;
			Sl.push(N);
			N = nullptr;
		}
		break;
		case '2':
		{
			SingleNode * N = new SingleNode();
			cout << "Tamaño de la lista: " << Sl.size() << endl;
			cin >> *N;
			cout << "Ingrese la posicion donde quiere ingresar el nodo: ";
			cin >> Pos;
			Sl.push(N, Pos);
			break;
		}
		case '3':
		{
			SingleNode*Temp = Sl.pull();
			if (Temp == nullptr)
			{
				cout << "No hay elementos" << endl;
			}
			else
			{
				cout << *Temp;
			}
			delete Temp;
			break;
		}
		case '4':
		{
			cout << "Tamaño de la lista: " << Sl.size() << endl;
			cout << "Ingrese la posicion donde quiere eliminar el nodo: ";
			cin >> Pos;
			SingleNode*Temp = Sl.pull(Pos);
			if (Temp == nullptr)
			{
				cout << "No hay elementos" << endl;
			}
			else
			{
				cout << *Temp;
			}
			break;
		}
		case '5':
			Sl.remove();
			break;
		case '6':
			cout << "Tamaño de la lista: " << Sl.size() << endl;
			cout << "Ingrese la posicion del nodo que quiere remover:  ";
			cin >> Pos;
			Sl.remove(Pos);
			break;
		case '7':
			cout << Sl;
			break;
		case '8':
			Sl.clear();
			break;
		case '9':
		{
			SingleNode * N = new SingleNode();
			cin >> *N;
			Sl.push(N);
			SingleNode * O = new SingleNode();
			cin >> *O;
			Sl.push(O);
			B.bubble(Sl);
		}
			break;
		case '0':
			cout << "Gracias por usar este programa, adios" << endl;
			return 0;
		}
	}
	
}



int Menu_Lista_Doble(DoubleList &Dl, unsigned char &Eleccion)
{
	unsigned short Pos;

	while (true)
	{
		cout << "----------------------------------" << endl;
		cout << "Que quiere hacer?" << endl;
		cout << "Agregar un elemento al final (1)" << endl;
		cout << "Agregar un elemento en un lugar especifico (2)" << endl;
		cout << "Eliminar el ultimo elemento (3)" << endl;
		cout << "Eliminar el un elemento especifico (4)" << endl;
		cout << "Remover el ultimo elemento (5)" << endl;
		cout << "Remover un elemento especifico (6)" << endl;
		cout << "Mostrar la lista (7)" << endl;
		cout << "Limpiar la lista (8)" << endl;
		cout << "Ordenar la lista (9)" << endl;
		cout << "Salir (0)" << endl;
		cin >> Eleccion;
		switch (Eleccion)
		{
		case '1':
		{
			DoubleNode * N = new DoubleNode();
			cin >> *N;
			Dl.push(N);
			break;
		}
		case '2':
		{
			DoubleNode * N = new DoubleNode();
			cout << "Tamaño de la lista: " << Dl.size() << endl;
			cin >> *N;
			cout << "Ingrese la posicion donde quiere ingresar el nodo: ";
			cin >> Pos;
			Dl.push(N, Pos);
			break;
		}
		case '3':
		{
			DoubleNode*Temp = Dl.pull();
			if (Temp == nullptr)
			{
				cout << "No hay elementos" << endl;
			}
			else
			{
				cout << *Temp;
			}
			delete Temp;
			break;
		}
		case '4':
		{
			cout << "Tamaño de la lista: " << Dl.size() << endl;
			cout << "Ingrese la posicion donde quiere eliminar el nodo: ";
			cin >> Pos;
			DoubleNode*Temp = Dl.pull(Pos);
			if (Temp == nullptr)
			{
				cout << "No hay elementos" << endl;
			}
			else
			{
				cout << *Temp;
			}
			break;
		}
		case '5':
			Dl.remove();
			break;
		case '6':
			cout << "Tamaño de la lista: " << Dl.size() << endl;
			cout << "Ingrese la posicion del nodo que quiere remover:  ";
			cin >> Pos;
			Dl.remove(Pos);
			break;
		case '7':
			cout << Dl;
			break;
		case '8':
			Dl.clear();
			break;
		case '9':


			break;
		case '0':
			cout << "Gracias por usar este programa, adios" << endl;
			return 0;
		}
	}
}


int main()
{
	unsigned char Eleccion='1';
	SingleList Sl;
	DoubleList Dl;

	while (Eleccion!='0') //seleccion de a que lista quieres ingresar
	{
		cout << "Quiere acceder a la lista normal (1)" << endl;
		cout << "Quiere acceder a la lista doblemte enlazada (2)" << endl;
		cout << "Slair (0)" << endl;
		cout << "Eleccion: "; cin >> Eleccion;
	
		switch (Eleccion)
		{
		case '1':
			system("cls");
			Menu_Lista_Simple(Sl); //llamada al menu de la lista simple
			break;
		case '2':
			system("cls");
			Menu_Lista_Doble(Dl, Eleccion); //llamada al menu de la lista doble
			break;
		case '0':
			system("cls");
			cout << "Gracias por usar este programa, adios" << endl;
			break;
		default:
			system("cls");
			cout << "***Opcion no valida***" << endl << endl;
			break;
		}
	}

	cin.ignore();
	cin.get();
	return 0;

}