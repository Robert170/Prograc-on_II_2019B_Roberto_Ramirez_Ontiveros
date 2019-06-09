#include "Avestrus.h"
#include "Delfin.h"
#include "Sapo.h"
#include "Pez_Vela.h"
#include "Camaleon.h"

Animales* Busqueda(Animales *Array[], int Primero, int Ultimo, string Nom) //busqueda por nombre
{
	int Pivote = sizeof(Array) / 2;                             
	int inf = 0;
	int Sup = sizeof(Array) - 1;

	while (true)
	{
		if (*Array[Pivote] = Nom)//revisamos el valor del medio
		{
			return Array[Pivote];
		}
		if (*Array[Pivote] > Nom)
		{
			Sup = Pivote - 1;
			Pivote = (inf + Sup) / 2;
			Sup--;
		}
		else if (*Array[Pivote] < Nom) //usar sobrecarga
		{
			inf = Pivote + 1;
			Pivote = (inf + Sup) / 2;
			inf++;
		}
		if (inf > Ultimo || Sup < Primero)//si el tamaño se sale del arreglo salimos
		{
			cout << "No esta el animal buscado" << endl;
			return nullptr;
		}
	}
}

Animales* Busqueda(Animales *Array[], int Primero, int Ultimo, char Edad)//busqueda por edad
{
	int Pivote = sizeof(Array) / 2;
	int inf = 0;
	int Sup = sizeof(Array) - 1;

	while (true)
	{
		if (*Array[Pivote] = Edad)//revisamos el valor del medio
		{
			return Array[Pivote];
		}
		if (*Array[Pivote] > Edad)
		{
			Sup = Pivote - 1;
			Pivote = (inf + Sup) / 2;
			Sup--;
		}
		else if (*Array[Pivote] < Edad) //usar sobrecarga
		{
			inf = Pivote + 1;
			Pivote = (inf + Sup) / 2;
			inf++;
		}
		if (inf > Ultimo || Sup < Primero)//si el tamaño se sale del arreglo salimos
		{
			cout << "No esta el animal buscado" << endl;
			return nullptr;
		}
	}
}

Animales* Busqueda(Animales *Array[], int Primero, int Ultimo, HEALTH Sal) //busqueda por salud
{
	int Pivote = sizeof(Array) / 2;
	int inf = 0;
	int Sup = sizeof(Array) - 1;

	while (true)
	{
		if (*Array[Pivote] = Sal)//revisamos el valor del medio
		{
			return Array[Pivote];
		}
		if (*Array[Pivote] > Sal)
		{
			Sup = Pivote - 1;
			Pivote = (inf + Sup) / 2;
			Sup--;
		}
		else if (*Array[Pivote] < Sal) //usar sobrecarga
		{
			inf = Pivote + 1;
			Pivote = (inf + Sup) / 2;
			inf++;
		}
		if (inf > Ultimo || Sup < Primero)//si el tamaño se sale del arreglo salimos
		{
			cout << "No esta el animal buscado" << endl;
			return nullptr;
		}
	}
}

void Quicksort(Animales *Array[], int Primero, int Ultimo, string Nom) //acomodo por nombre
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
			if (Array[j]->DevolverNombre() == Pivote->DevolverNombre() && Array[j]->DevolverEdad() > Pivote->DevolverEdad())
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;

			}
			else if (Array[j]->DevolverEdad() < Pivote->DevolverEdad())
			{
				i++;
				j--;
			}
			else
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;
			}
			//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
			
		}
	}

	if (Primero < j)
	{
		Quicksort(Array, Primero, j,Nom);
	}
	if (i < Ultimo)
	{
		Quicksort(Array, i, Ultimo,Nom);
	}

}

void Quicksort(Animales *Array[], int Primero, int Ultimo,char Edad) //acomodo por edad 
{
	Animales *Temp;
	Animales *Pivote = Array[Ultimo];
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (Array[i]->DevolverEdad() < Pivote->DevolverEdad()) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (Array[j]->DevolverEdad() > Pivote->DevolverEdad()) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
			if (Array[j]->DevolverEdad()== Pivote->DevolverEdad() && Array[j]->DevolverNombre() > Pivote->DevolverNombre())
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;

			}
			else if (Array[j]->DevolverNombre() < Pivote->DevolverNombre())
			{
				i++;
				j--;
			}
			else
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;
			}
			//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
			
		}
	}

	if (Primero < j)
	{
		Quicksort(Array, Primero, j, Edad);
	}
	if (i < Ultimo)
	{
		Quicksort(Array, i, Ultimo,Edad);
	}

}

void Quicksort(Animales *Array[], int Primero, int Ultimo, int Sa) //acomodo por salud
{
	Animales *Temp;
	Animales *Pivote = Array[Ultimo];
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (Array[i]->DevolverSalud() < Pivote->DevolverSalud()) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (Array[j]->DevolverSalud() > Pivote->DevolverSalud()) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
				//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
			if (Array[j]->DevolverSalud() == Pivote->DevolverSalud() && Array[j]->DevolverNombre() > Pivote->DevolverNombre())
			{
				Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
				i++;
				j--;

			}
			else if (Array[j]->DevolverNombre() < Pivote->DevolverNombre())
			{
				i++;
				j--;
			}
			else
			{
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
		Quicksort(Array, Primero, j,Sa);
	}
	if (i < Ultimo)
	{
		Quicksort(Array, i, Ultimo,Sa);
	}

}

int main()
{
	string Nom;
	int Edad;
	int Sa;
	char Eleccion;
	Avestrus A;
	Delfin D;
	Sapo S;  //usuario ingrese datos
	Pez_Vela P;
	Camaleon C;

	cout << "Ingresa el Nombre del avestrus: " << endl;
	cin >> Nom;
	A.Nombre(Nom);
	cout << "Ingresa la Edad del avestrus: " << endl;
	cin >> Edad;
	A.Años(Edad);
	cout << "Ingresa la Salud del avestrus (0 para Critical, 1 para Bad, 2 para Good): " << endl;
	cin >> Sa;
	switch (Sa)
	{
	case 0:
		A.Salud(critical);
		break;
	case 1:
		A.Salud(bad);
		break;
	case 2:
		A.Salud(good);
		break;
	default:
		cout << "Dato invalido, no se puede continuar, adios" << endl;
		return -1;
	}

	cout << "Ingresa el Nombre del Delfin: " << endl;
	cin >> Nom;
	D.Nombre(Nom);
	cout << "Ingresa la Edad del Delfin: " << endl;
	cin >> Edad;
	D.Años(Edad);
	cout << "Ingresa la Salud del Delfin (0 para Critical, 1 para Bad, 2 para Good): " << endl;
	cin >> Sa;
	switch (Sa)
	{
	case 0:
		D.Salud(critical);
		break;
	case 1:
		D.Salud(bad);
		break;
	case 2:
		D.Salud(good);
		break;
	default:
		cout << "Dato invalido, no se puede continuar, adios" << endl;
		return -1;
	}

	cout << "Ingresa el Nombre del Sapo: " << endl;
	cin >> Nom;
	S.Nombre(Nom);
	cout << "Ingresa la Edad del Sapo: " << endl;
	cin >> Edad;
	S.Años(Edad);
	cout << "Ingresa la Salud del Sapo (0 para Critical, 1 para Bad, 2 para Good): " << endl;
	cin >> Sa;
	switch (Sa)
	{
	case 0:
		S.Salud(critical);
		break;
	case 1:
		S.Salud(bad);
		break;
	case 2:
		S.Salud(good);
		break;
	default:
		cout << "Dato invalido, no se puede continuar, adios" << endl;
		return -1;
	}

	cout << "Ingresa el Nombre del Pez Vela: " << endl;
	cin >> Nom;
	P.Nombre(Nom);
	cout << "Ingresa la Edad del Pez Vela: " << endl;
	cin >> Edad;
	P.Años(Edad);
	cout << "Ingresa la Salud del Pez Vela (0 para Critical, 1 para Bad, 2 para Good): " << endl;
	cin >> Sa;
	switch (Sa)
	{
	case 0:
		P.Salud(critical);
		break;
	case 1:
		P.Salud(bad);
		break;
	case 2:
		P.Salud(good);
		break;
	default:
		cout << "Dato invalido, no se puede continuar, adios" << endl;
		return -1;
	}

	cout << "Ingresa el Nombre del Camaleon: " << endl;
	cin >> Nom;
	C.Nombre(Nom);
	cout << "Ingresa la Edad del Camaleon: " << endl;
	cin >> Edad;
	C.Años(Edad);
	cout << "Ingresa la Salud del Camaleon (0 para Critical, 1 para Bad, 2 para Good): " << endl;
	cin >> Sa;
	switch (Sa)
	{
	case 0:
		C.Salud(critical);
		break;
	case 1:
		C.Salud(bad);
		break;
	case 2:
		C.Salud(good);
		break;
	default:
		cout << "Dato invalido, no se puede continuar, adios" << endl;
		return -1;
	}
	Animales *Array[5];
	Array[0] = &A;
	Array[1] = &D;
	Array[2] = &S;
	Array[3] = &P;
	Array[4] = &C;

	cout << "Si quieres ordenarlos por Nombre pulsa 1, por Edad 2 o por Salud 3:" << endl;
	cin >> Eleccion;
	if (Eleccion == '1')
	{
		system("cls");
		cout << "Escribe el nombre del animal que quieres buscar" << endl;
		cin >> Nom;
		Quicksort(Array, 0, 4, Nom);
		Animales* encontrado = Busqueda(Array, 0, 4, Nom);
		if (encontrado != nullptr)
		{
			cout << "(0 para Critical, 1 para Bad, 2 para Good)" << endl;
			cout << "Nombre:" << encontrado->DevolverNombre() << endl;
			cout << "Edad:" << int(encontrado->DevolverEdad()) << endl;
			cout << "Salud:" << encontrado->DevolverSalud() << endl;
		}
	}
	if (Eleccion == '2')
	{
		system("cls");
		cout << "Escribe la edad del animal que quieres buscar" << endl;
		cin >> Edad;
		Quicksort(Array, 0, 4, char(Edad));
		Animales* encontrado = Busqueda(Array, 0, 4, char(Edad));
		if (encontrado != nullptr)
		{
			cout << "(0 para Critical, 1 para Bad, 2 para Good)" << endl;
			cout << "Nombre:" << encontrado->DevolverNombre() << endl;
			cout << "Edad:" << int(encontrado->DevolverEdad()) << endl;
			cout << "Salud:" << HEALTH(encontrado->DevolverSalud()) << endl;
		}
	}
	if (Eleccion == '3')
	{
		system("cls");
		cout << "Escribe la Salud del animal que quiera buscar (0 para Critical, 1 para Bad, 2 para Good):" << endl;
		cin >> Sa;
		Quicksort(Array, 0, 4, Sa);
		Animales* encontrado = Busqueda(Array, 0, 4, HEALTH(Sa));
		if (encontrado != nullptr)
		{
			cout << "(0 para Critical, 1 para Bad, 2 para Good)" << endl;
			cout << "Nombre:" << encontrado->DevolverNombre() << endl;
			cout << "Edad:" << int(encontrado->DevolverEdad()) << endl;
			cout << "Salud:" << encontrado->DevolverSalud() << endl;
		}
	}

	cin.get();
	cin.ignore();
	return 0;
}