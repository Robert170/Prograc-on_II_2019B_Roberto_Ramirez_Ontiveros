#include "Avestrus.h"
#include "Delfin.h"
#include "Sapo.h"
#include "Pez_Vela.h"
#include "Camaleon.h"

void Busqueda(Animales *Array[],int Primero, int Ultimo)
{
	int Tam = Ultimo / 2;
	int Age;
	cout << "Escribe la edad del animal que quieres buscar" << endl;
	cin >> Age;
	cout << "///////////////////" << endl;

	if (Array[Primero]->Edad == Age) // En caso de ser el primer digito el buscado
	{
		cout <<"Nombre: "<<Array[Primero]->Nom<< endl;
		cout <<"Como se desplaza: " << Array[Primero]->Moverse << endl;
		cout <<"Como se reproducen: " << Array[Primero]->Nacer << endl;
		cout <<"Edad: " << Array[Primero]->Edad << endl;
	}
	else if (Array[Ultimo]->Edad == Age) //En caso de ser el ultimo digito el buscado
	{
		cout << "Nombre: " << Array[Ultimo]->Nom << endl;
		cout << "Como se desplaza: " << Array[Ultimo]->Moverse << endl;
		cout << "Como se reproducen: " << Array[Ultimo]->Nacer << endl;
		cout << "Edad: " << Array[Ultimo]->Edad << endl;
	}
	else// si no es el primero o el ultimo
	{
		while (true)
		{
			if (Array[Tam]->Edad == Age)//revisamos el valor del medio
			{
				cout << "Nombre: " << Array[Tam]->Nom << endl;
				//cout << "Como se desplaza: " << Array[Tam]->Desplasar << endl;
				//cout << "Como se reproducen: " << Array[Tam]->Reproducir << endl;
				cout << "Edad: " << Array[Tam]->Edad << endl;
				break;
			}
			if (Array[Tam]->Edad > Age)//si el valor verificado es más grande que el que buscamos hacemos mas pequeño el valor a verificar
			{
				Tam--;
			}
			else if (Array[Tam]->Edad < Age)//si el valor verificado es más pequeño que el que buscamos hacemos mas grande el valor a verificar
			{
				Tam++;
			}
			if (Tam > Ultimo)//si el tamaño se sale del arreglo salimos
			{
				cout << "No esta el animal buscado" << endl;
				break;
			}
			if (Tam < Primero)//si el tamaño se sale del arreglo salimos
			{
				cout << "No esta el animal buscado" << endl;
				break;
			}
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
		while (Array[i]->Edad < Pivote->Edad) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (Array[j]->Edad > Pivote->Edad) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
		{
			j--;
		}
		if (i <= j)
		{
			//al igual que en acomodo burbuja cambiamos los valores por las posiciones dadas anteriormente
			Temp = Array[i];
			Array[i] = Array[j];
			Array[j] = Temp;
			i++;
			j--;
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
	Avestrus A;
	Delfin D;
	Sapo S;
	Pez_Vela P;
	Camaleon C;

	string Name;
	string Movimiento;
	string Reprodiccion;
	int Age;

	cout << "Nombre de tu avestrus" << endl;
	cin >> Name;
	A.Nombre(Name);
	cout << "Como se desplaza" << endl;
	cin >> Movimiento;
	A.Desplasar(Movimiento);
	cout << "Como se reproduce" << endl;
	cin >> Reprodiccion;
	A.Reproducir(Reprodiccion);
	cout << "Cual es su edad?" << endl;
	cin >> Age;
	A.Años(Age);
	cout << "////////////////" << endl;

	cout << "Nombre de tu Delfin" << endl;
	cin >> Name;
	D.Nombre(Name);
	cout << "Como se desplaza" << endl;
	cin >> Movimiento;
	D.Desplasar(Movimiento);
	cout << "Como se reproduce" << endl;
	cin >> Reprodiccion;
	D.Reproducir(Reprodiccion);
	cout << "Cual es su edad?" << endl;
	cin >> Age;
	D.Años(Age);
	cout << "////////////////" << endl;

	cout << "Nombre de tu Sapo" << endl;
	cin >> Name;
	S.Nombre(Name);
	cout << "Como se desplaza" << endl;
	cin >> Movimiento;
	S.Desplasar(Movimiento);
	cout << "Como se reproduce" << endl;
	cin >> Reprodiccion;
	S.Reproducir(Reprodiccion);
	cout << "Cual es su edad?" << endl;
	cin >> Age;
	S.Años(Age);
	cout << "////////////////" << endl;

	cout << "Nombre de tu Pez Vela" << endl;
	cin >> Name;
	P.Nombre(Name);
	cout << "Como se desplaza" << endl;
	cin >> Movimiento;
	P.Desplasar(Movimiento);
	cout << "Como se reproduce" << endl;
	cin >> Reprodiccion;
	P.Reproducir(Reprodiccion);
	cout << "Cual es su edad?" << endl;
	cin >> Age;
	P.Años(Age);
	cout << "////////////////" << endl;

	cout << "Nombre de tu Camaleon" << endl;
	cin >> Name;
	C.Nombre(Name);
	cout << "Como se desplaza" << endl;
	cin >> Movimiento;
	C.Desplasar(Movimiento);
	cout << "Como se reproduce" << endl;
	cin >> Reprodiccion;
	C.Reproducir(Reprodiccion);
	cout << "Cual es su edad?" << endl;
	cin >> Age;
	C.Años(Age);

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





