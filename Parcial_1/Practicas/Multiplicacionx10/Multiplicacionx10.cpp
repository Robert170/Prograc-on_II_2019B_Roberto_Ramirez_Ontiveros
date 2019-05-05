//Realiza una función que reciba como argumento un numero entero y devuelva el numero multiplicado por diez
#include <iostream>

int main()
{
	//Declaramos la variable y le pedimos al usuario que ingrese un numero
	int Numero;
	std::cout << "introduce un numero y lo multiplicaremos por 10: " << std::endl;
	std::cin >> Numero;


	std::cout << "Tu numero  multiplicado por diez es: "<< Numero << "0" << std::endl;

	std::cin.get();
	std::cin.ignore();
	return 0;
}