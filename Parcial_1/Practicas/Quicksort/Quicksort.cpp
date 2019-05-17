#include <iostream>



using std::cout;
using std::cin;
using std::endl;




void Quicksort(int Array[], int Primero, int Ultimo)
{
	int Temp;
	int Pivote = Array[Ultimo]; 
	int i = Primero;
	int j = Ultimo;

	while (i < j)
	{
		while (Array[i] < Pivote) //si elvalor es más pequeño que el pivote i amenta uno hasta encontrar uno mayor o igual 
		{
			i++;
		}
		while (Array[j] > Pivote) //si elvalor es más grande que el pivote j disminuye uno hasta encontrar uno menor o igual 
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

	

	if (Primero < j )
	{
		Quicksort(Array, Primero, j);
	}
	if (i < Ultimo)
	{
		Quicksort(Array, i, Ultimo);
	}
		
}


void Llenar(int n, int Array[])
{
	//llenar el arreglo
	int Numero;
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese numero   [" << i << "]:  ";  
		cin >> Numero;
		Array[i] = Numero;
	}
}

void Imprimir(int n, int Array[])
{
	//imprime el resultado
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "[" << Array[i] << "]  ";
	}
}

int main()
{
	int n;

	cout << "Tamaño del vector:"; cin >> n;
	int*Arreglo = new int[n];
	Llenar(n, Arreglo);  //ingreso de datos en array
	Quicksort(Arreglo, 0, n - 1); // '0' es el primer elemento y n-1 es ultimo
	cout << endl << "Su vector acomodado es: " << endl;
	Imprimir(n, Arreglo); //muestra array ordenado

	cin.ignore();
	cin.get();
	delete[]Arreglo;
	return 0;
}


