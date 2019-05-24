#include "Avestrus.h"
#include "Delfin.h"
#include "Sapo.h"
#include "Pez_Vela.h"
#include "Camaleon.h"

int main()
{
	Avestrus A;
	Delfin D;
	Sapo S;
	Pez_Vela P;
	Camaleon C;
	char Eleccion;
	std::cout << "Que especies quiere conocer?" << std::endl;
	std::cout << "Mamiferos(1)" << std::endl;
	std::cout << "Aves(2)" << std::endl;
	std::cout << "Anfibios(3)" << std::endl;
	std::cout << "Peces(4)" << std::endl;
	std::cout << "Reptiles(5)" << std::endl;
	std::cin >> Eleccion;
	switch (Eleccion)
	{
	case '1':
		D.Nombre();
		D.Comer();
		D.Desplasar();
		D.Reproducir();
		break;
	case '2':
		A.Nombre();
		A.Comer();
		A.Desplasar();
		A.Reproducir();
		break;
	case '3':
		S.Nombre();
		S.Comer();
		S.Desplasar();
		S.Reproducir();
		break;
	case '4':
		P.Nombre();
		P.Comer();
		P.Desplasar();
		P.Reproducir();
		break;
	case '5':
		C.Nombre();
		C.Comer();
		C.Desplasar();
		C.Reproducir();
		break;
	default:
		break;
	}
	std::cin.get();
	std::cin.ignore();
	return 0;
}





