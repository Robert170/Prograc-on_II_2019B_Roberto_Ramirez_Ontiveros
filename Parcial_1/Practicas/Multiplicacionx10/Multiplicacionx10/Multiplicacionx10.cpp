#include <iostream>

int main()
{
	//Declaramos la variable y le pedimos al usuario que ingrese un numero
	unsigned int Numero;
	std::cout << "introduce un numero y lo multiplicaremos por 10: " << std::endl;
	std::cin >> Numero;

	Numero = Numero & 1;

	//Numero=Numero+Numero+Numero+Numero+Numero+Numero+Numero+Numero+Numero+Numero;
	std::cin.get();
	std::cin.ignore();
	return 0;
}