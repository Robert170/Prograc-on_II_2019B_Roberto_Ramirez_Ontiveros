#include "Animales.h"

class Mamiferos : public Animales
{
public:
	virtual void Nombre() = 0;
	virtual void Comer() = 0;
	virtual void Desplasar() = 0;
	void  Reproducir()
	{
		std::cout << "Se reproduce de manera vivipara" << std::endl;
	}
};