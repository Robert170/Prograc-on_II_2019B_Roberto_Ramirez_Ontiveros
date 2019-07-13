#include "Sort.h"

SingleNode * Sort::swap(SingleNode * a, SingleNode * b)
{
	SingleNode * Temp;
	Temp = a;
	a->next = b->next;
	b->next = Temp;
	return b;
}

DoubleNode * Sort::swap(DoubleNode * a, DoubleNode * b)
{
	return nullptr;
}

void Sort::bubble(SingleList & L)
{
	SingleNode ** iter;
	SingleNode * a; 
	SingleNode * b;
	unsigned int size = L.s;
	bool swapped = false;

	for (unsigned int i = 0; i < size-1; i++) {
		iter = L.start;
		for (unsigned int j = 0; j < size - i -1; j++) {
			a = *iter;
			b = a->next;

			if (*a > *b) {
				swapped = true;
				*iter = swap(a, b);
			}

			iter = &(*iter)->next;
		}
		if (!swapped)
			break;
	}
}

void Sort::bubble(DoubleList &)
{
}

void Sort::quick(SingleList &)
{
}

void Sort::quick(DoubleList &)
{
}
