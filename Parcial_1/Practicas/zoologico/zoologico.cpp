#include <iostream>


class Animales
{
public:
	virtual void Comer() = 0;
	virtual void Desplazamiento() = 0;
	virtual void Reproduccion() = 0;
};

class Mamiferos : public Animales
{
	void Comer()
	{
		bool Obnivoras;
		bool Carnivoras;
		bool Hervivoras;
	}
	void Despazamiento()
	{
		bool Nadan;
		bool Caminan;
	}
	void Reproduccion()
	{
		bool Vivipara;
	}
};

class Reptiles : public Animales
{
	void Comer()
	{
		bool Insectivoras;
		bool Carnivoras;
	}
	void Despazamiento()
	{
		bool Nadan;
		bool Caminan;
	}
	void Reproduccion()
	{
		bool Huevos;
	}
};

class Anfibios : public Animales
{
	void Comer()
	{
		bool insectivoras;
		bool Carnivoras;
	}
	void Despazamiento()
	{
		bool Nadan;
		bool Caminan;

	}
	void Reproduccion()
	{
		bool Huevos;
	}
};

class  Aves : public Animales
{
	void Comer()
	{
		bool Carnivoras;
		bool Hervivoras;
		bool insectivoras;
		bool Obnivoras;
	}
	void Despazamiento()
	{
		bool Vuelan;
		bool Nadan;
		bool Caminan;
	}
	void Reproduccion()
	{
		bool Huevos;
	}
};

class Peces : public Animales
{
	void Comer()
	{
		bool Carnivoros;
		bool Coral;
		bool Algas;
	}
	void Despazamiento()
	{
		bool Nadan;
	}
	void Reproduccion()
	{
		bool Huevos;
	}
};

int main()
{
	return 0;
}





