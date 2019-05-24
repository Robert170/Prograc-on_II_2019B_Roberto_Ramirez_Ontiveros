#include "Peces.h"

class Pez_Vela : public Peces
{
public:
	void Nombre()
	{
		std::cout << "Pez vela y sus datos: " << std::endl;
	}
	void Comer()
	{
		std::cout << "Come otros peces" << std::endl;
	}
	void Desplasar()
	{
		std::cout << "Se desplaza por los oceanos a altas velocidades" << std::endl;
	}
};