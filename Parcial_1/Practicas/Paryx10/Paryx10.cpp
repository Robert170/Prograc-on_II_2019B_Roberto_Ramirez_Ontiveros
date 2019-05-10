#include <iostream>




int Par(int Numero)
{

	//Cambia el valor del numero a 0 o 1, si da 0 es par de lo contrario es impar
	Numero = Numero & 1;

	//Vemos que resultado nos dio para saber si es par o impar
	if (Numero == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int X10(int Numero2)
{
	int Val1;
	int Val2;

	Val1 = Numero2 << 1;
	Val2 = Numero2 << 3;
	return(Val1 + Val2);
}


int main()
{
	int Numero;
	int Numero2;
	std::cout << "Ingrese un numero: " << std::endl;
	std::cin >> Numero;
	Numero2 = Numero;

	Numero = Par(Numero);
	Numero2 = X10(Numero2);

	if (Numero == 0)
	{
		std::cout << "Tu numero es par" << std::endl;
		std::cout << "Tu numero multiplicado por 10 es:" << Numero2 << std::endl;
	}
	else
	{
		std::cout << "Tu numero es imapar" << std::endl;
		std::cout << "Tu numero multiplicado por 10 es:" << Numero2 << std::endl;
	}



	std::cin.get();
	std::cin.ignore();
	return 0;
}

