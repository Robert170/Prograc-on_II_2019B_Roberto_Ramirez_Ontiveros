#include <iostream>


using std::cout;
using std::cin;
using std::endl;


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

void Burbuja(int Tam, int Array[], bool flag)
{
	
	//mientras i sea menor al tamaño menos 1 entrara en el primer for, el tamaño menos 1 es para que no verifique el ultimo digito acomodado
	for (int i = Tam - 1; i > 0; i--)
	{
		flag = false;
		//mientras j sea menor a i entrara al segundo for
		for (int j = 0; j < i; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				flag = false;
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
}

void Imprimir(int Tam, int Array[])
{

	cout << "Su vector ordenado es: " << endl;
	for (int i = 0; i < Tam; i++)
	{
		cout << "[" << Array[i] << "]" << " ";
	}

}

int main()
{
	bool flag = true;;
	int Cant = 0;
	cout << "De que tamanio sera su vector?" << endl;
	cin >> Cant;
	int*Arreglo = new int[Cant];
	
	Llenar(Cant, Arreglo);
	Burbuja(Cant, Arreglo, flag);
	Imprimir(Cant, Arreglo);

	cin.ignore();
	cin.get();
	delete [] Arreglo;
	return 0;

}