#include "Mamiferos.h"

class Delfin : public Mamiferos
{
public:
	void Nombre()
	{
		std::cout << "Delfin y sus datos: " << std::endl;
	}
	void Comer()
	{
		std::cout << "Come peces" << std::endl;
	}
	void Desplasar()
	{
		std::cout << "Este mamifero nada a traves del oceano" << std::endl;
	}
};
