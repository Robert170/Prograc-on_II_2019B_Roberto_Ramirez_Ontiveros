#include <iostream>
#include <vector>



using std::cout;
using std::cin;
using std::endl;
using std::vector;

void Llenar(int Cant, int Array[])
{
	int Num;
	//llenamos el vector con  valores que ingrese el usuario
	cout << "Ingrese sus valores: " << endl;
	for (int i = 0; i < Cant; i++)
	{
		cout << "Ingrese numero   [" << i << "]:  ";
		cin >> Num;
		Array[i] = Num;
	}
}

void Burbuja(int Tam, int Array[])
{
	//mientras i sea menor al tamaño menos 1 entrara en el primer for, el tamaño menos 1 es para que no verifique el ultimo digito acomodado
	for (int i = Tam - 1; i > 0; i--)
	{
		//mientras j sea menor a i entrara al segundo for
		for (int j = 0; j < i; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}

int main()
{
	
	int Cant = 0;
	cout << "De que tamanio sera su vector?" << endl;
	cin >> Cant;
	int*Arreglo = new int[Cant];
	
	Llenar(Cant, Arreglo);
	Burbuja(Cant, Arreglo);


	cout << "Su vector ordenado es: " << endl;
	for (int i = 0; i < Cant; i++)
	{
		cout << "[" << Arreglo[i] << "]" << " ";
	}

	cin.ignore();
	cin.get();
	delete [] Arreglo;
	return 0;

}