//Realiza una función que dado como atributo un numero entero devuelva si es par o impar, retorna verdadero si es par, falso si es impar

#include <iostream>

int Par(int Numero);

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


int main()
{
	//Declaramos la variable y le pedimos al usuario que ingrese un numero
	unsigned int Numero;

	std::cout << "introduce un numero y te diremos si es par o impar: " << std::endl;
	std::cin >> Numero;

	Numero = Par(Numero);

	if (Numero == 0)
	{
		std::cout << "Tu numero es par" << std::endl;
	}
	else
	{
		std::cout << "Tu numero es imapar" << std::endl;
	}

	

	std::cin.get();
	std::cin.ignore();
	return 0;
}