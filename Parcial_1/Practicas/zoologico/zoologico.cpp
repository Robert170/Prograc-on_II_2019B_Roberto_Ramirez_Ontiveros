#include "Avestrus.h"
#include "Delfin.h"
#include "Sapo.h"
#include "Pez_Vela.h"
#include "Camaleon.h"

int Busqueda(Animales *Array[], int Primero, int Ultimo)
{
	int Pivote = sizeof(Array) / 2;                             
	int inf = 0;
	int Sup = sizeof(Array) - 1;
	string Nom;
	cout << "Escribe el nombre del animal que quieres buscar" << endl;
	cin >> Nom;

	while (true)
	{
		if (Array[Pivote]->DevolverNombre() == Nom)//revisamos el valor del medio
		{
			return Pivote;
		}
		if (Array[Pivote]->DevolverNombre() > Nom)
		{
			Sup = Pivote - 1;
			Pivote = (inf + Sup) / 2;
			Sup--;
		}
		else if (Array[Pivote]->DevolverNombre() < Nom)
		{
			inf = Pivote + 1;
			Pivote = (inf + Sup) / 2;
			inf++;
		}
		if (inf > Ultimo || Sup < Primero)//si el tamaño se sale del arreglo salimos
		{
			cout << "No esta el animal buscado" << endl;
			return -1;
		}
	}
}


void Quicksort(Animales *Array[], int Primero, int Ultimo)
{
	Animales *Temp;
	Animales *Pivote = Array[Ultimo];
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (Array[i]->DevolverNombre() < Pivote->DevolverNombre()) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (Array[j]->DevolverNombre() > Pivote->DevolverNombre()) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
			if (Array[i]->DevolverNombre() == Array[j]->DevolverNombre())
			{
				if (Array[i]->DevolverEdad() > Array[j]->DevolverEdad())
				{
				
					i++;
					j--;
				}
				else if (Array[i]->DevolverEdad() < Array[j]->DevolverEdad())
				{
					Temp = Array[i];
					Array[i] = Array[j];
					Array[j] = Temp;
					i++;
					j--;
				}
			}
			else
			{
				//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;
			}
		}
	}

	if (Primero < j)
	{
		Quicksort(Array, Primero, j);
	}
	if (i < Ultimo)
	{
		Quicksort(Array, i, Ultimo);
	}

}

int main()
{
	Avestrus A("Pedro",'8',good);
	Delfin D("Lucas", '9', critical);
	Sapo S("Pedro",'9',bad);
	Pez_Vela P("Max", '3',good);
	Camaleon C("Luis",'1', good);

	Animales *Array[5];
	Array[0] = &A;
	Array[1] = &D;
	Array[2] = &S;
	Array[3] = &P;
	Array[4] = &C;

	Quicksort(Array, 0, 4);
	Busqueda(Array, 0, 4);


	cin.get();
	cin.ignore();
	return 0;
}