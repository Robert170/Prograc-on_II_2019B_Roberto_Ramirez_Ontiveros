#include "List.h"


void SingleList::push(SingleNode * N)
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		while (Temp!=nullptr)
		{
			Prev = Temp;
			Temp = Temp->next;
		}
		Prev->next = N;
	}
	else
	{
		start = &N;
	}
	s++;
}

void SingleList::push(SingleNode * N, unsigned int Pos)
{
	if (Pos <= s)
	{
		unsigned int cont = 0;
		if (start != nullptr)
		{
			SingleNode *Temp = *start;
			SingleNode *Prev = nullptr;

			while (cont < Pos)
			{
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == Pos)
			{
				Prev->next = N;
				N->next = Temp;
			}
		}
		else
		{
			start = &N;
		}
		s++;
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

SingleNode * SingleList::pull()
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		s--;
		return Temp;
	}
	else
	{
		return nullptr;
	}
	
}

SingleNode *SingleList::pull(unsigned int Pos)
{
	if (Pos <= s)
	{
		if (start != nullptr)
		{
			SingleNode * Temp = *start;
			SingleNode * Prev = nullptr;
			unsigned int cont = 0;

			while (cont < Pos)
			{
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == Pos)
			{
				Prev->next = Temp->next;
				Temp->next = nullptr;
				return Temp;
			}
			s--;
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
		return nullptr;
	}
}

void SingleList::remove()
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		delete Temp;
		s--;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
	
}

void SingleList::remove(unsigned int Pos)
{
	if (Pos <= s)
	{
		if (start != nullptr)
		{
			SingleNode * Temp = *start;
			SingleNode * Prev = nullptr;
			unsigned int cont = 0;

			while (cont < Pos)
			{
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == Pos)
			{
				Prev->next = Temp->next;
				Temp->next = nullptr;
				delete Temp;
				s--;
			}
		}
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

void SingleList::clear()
{
	if ((*start)->next!=nullptr)
	{
		delete *start;
	}
}

unsigned int SingleList::size()
{
	return s;
}

SingleList::~SingleList()
{
	clear();
}

std::ostream & operator<<(std::ostream & out, SingleList & N)
{
	return out << **N.start;
}

std::ostream & operator<<(std::ostream & out, DoubleList & Dn)
{
	return out << **Dn.start;
}

void DoubleList::push(DoubleNode * N)
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;

		while (Temp->next != nullptr)
		{
			Temp->prev = Temp;
			Temp->next = Temp->next->next;
			Temp = Temp->next;

		}
		Temp->next = N;
		N->prev = Temp;
		Temp->next = nullptr;

	}
	else
	{
		start = &N;
	}
	s++;
}

void DoubleList::push(DoubleNode * N, unsigned int Pos)
{
	if (Pos < s)
	{
		if (start != nullptr)
		{
			unsigned int cont = 0;
			DoubleNode * Temp = *start;

			while (cont < Pos)
			{
				Temp->prev = Temp;
				Temp->next = Temp->next->next;
				Temp = Temp->next;
			}
			if (cont == Pos)
			{
				Temp->next->prev = N;
				N->next = Temp->next;
				Temp->next = N;
				N->prev = Temp;
			}
		}
		else
		{
			start = &N;
		}
		s++;
	}
	else
	{
		std::cout << "Fuera de rango" << std::endl;
	}
}

DoubleNode * DoubleList::pull()
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Temp = Temp->next;
			Cont++;
		}
		Temp->prev->next = nullptr;
		Temp->prev = nullptr;
		s--;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

DoubleNode * DoubleList::pull(unsigned int Pos)
{
	if (start != nullptr)
	{
		DoubleNode*Temp = *start;
		int cont = 0;
		while (cont != Pos)
		{
			Temp = Temp->next;
			cont++;
		}
		if (cont == Pos)
		{
			Temp->prev->next = Temp->next;
			Temp->next->prev = Temp->prev;
			Temp->next = nullptr;
			Temp->prev = nullptr;
			s--;

		}
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

void DoubleList::remove()
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;
		while (Temp->next != nullptr)
		{
			Temp->prev = Temp;
			Temp = Temp->next;
			Temp->next = Temp->next->next;
		}
		Temp->prev->next = nullptr;
		Temp->prev = nullptr;
		delete Temp;
		s--;
	}
	else
	{
		std::cout << "No hay valores que eliminar" << std::endl;
	}
}

void DoubleList::remove(unsigned int Pos)
{
	if (Pos < s)
	{
		if (start != nullptr)
		{
			DoubleNode * Temp = *start;
			unsigned int Cont = 0;
			while (Cont < Pos)
			{
				Temp->prev = Temp;
				Temp = Temp->next;
				Temp->next = Temp->next->next;
			}
			Temp->prev->next = nullptr;
			Temp->prev = nullptr;
			delete Temp;
			s--;
		}
		else
		{
			std::cout << "No hay valores a eliminar ya que la lista esta vacia" << std::endl;
		}
	}
	else
	{
		std::cout << "La posicion especificada es invalida" << std::endl;
	}
}

void DoubleList::clear()
{
	if ((*start)->next != nullptr)
	{
		delete *start;
	}
}

unsigned int DoubleList::size()
{
	return s;
}

DoubleList::~DoubleList()
{
	clear();
}
