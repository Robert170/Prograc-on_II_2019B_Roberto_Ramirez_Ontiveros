#include "Aves.h"

class Avestrus : public Aves
{
public:
	void Nombre()
	{
		std::cout << "Avestrus y sus datos: " << std::endl;
	}
	void Comer()
	{
		std::cout << "Come insectos y semillas" << std::endl;
	}
	void Desplasar()
	{
		std::cout << "Esta ave camina en lugar de volar" << std::endl;
	}
};


