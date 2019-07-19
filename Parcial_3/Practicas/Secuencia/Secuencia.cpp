#include <iostream>


int Secuencia(int I, int P, int S)
{
	//Sacamos el numero de iteracions que hara el proceso
	int Iter = (P - I) / S;
	int Res = 0;
	//Sacamos el resultado
	Res = S * ((Iter*(Iter + 1)) / 2) + (I*(Iter + 1));

	return Res;
}


int main()
{
	//Declaracion de variables
	int Inicio;
	int Pivote;
	int Suma;

	//Pedir al usuario que ingrese los valores
	std::cout << "Ingresa el numero por donde quieras iniciar: "; std::cin >> Inicio; std::cout << std::endl;
	std::cout << "Ingresa el numero maximo: "; std::cin >> Pivote; std::cout << std::endl;
	std::cout << "Ingresa de cuanto en cuanto se sumara: "; std::cin >> Suma; std::cout << std::endl;

	//Mostrar resultado y llamar a la funcion
	std::cout << "Resultado: " << Secuencia(Inicio, Pivote, Suma);
	std::cin.ignore();
	std::cin.get();
	return 0;
}