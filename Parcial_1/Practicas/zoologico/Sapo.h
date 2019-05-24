
#include "Anfibios.h"

class Sapo : public Anfibios
{
public:
	void Nombre()
	{
		std::cout << "Sapo y sus datos: " << std::endl;
	}
	void Comer()
	{
		std::cout << "Come insectos" << std::endl;
	}
	void Desplasar()
	{
		std::cout << "Puede desplazarse en tierra o en agua sin problemas" << std::endl;
	}
};