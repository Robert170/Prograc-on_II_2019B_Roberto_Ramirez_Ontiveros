#include "Reptiles.h"

class Camaleon : public Reptiles
{
public:
	void Nombre()
	{
		std::cout << "Camaleon y sus datos: " << std::endl;
	}
	void Comer()
	{
		std::cout << "Come insectos" << std::endl;
	}
	void Desplasar()
	{
		std::cout << "Se desplaza por los oceanos a altas velocidades" << std::endl;
	}
};