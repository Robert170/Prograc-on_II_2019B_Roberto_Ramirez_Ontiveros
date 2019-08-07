#include "Arbol.h"
#include "Persona.h"


template<class T>
Arbol<T>::Arbol()
{
	Raiz = nullptr;
}

template<class T>
Arbol<T>::Arbol(Nodo<T>* U)
{
	Raiz = U;
}

template<class T>
Arbol<T>::~Arbol()
{
	if (Raiz != nullptr)
	{
		delete Raiz;
	}
}

template<class T>
int Arbol<T>::Push(Nodo<T> * U)
{
	if (Raiz == nullptr)
	{
		Raiz = U;
	}
	else
	{
		if (*U > *Raiz)
		{
			if (Raiz->Rigth == nullptr)
			{
				Raiz->Rigth = U;
				Raiz->Rigth->Ant = Raiz;
			}
			else
			{
				Raiz->Push(U, Raiz);
			}
			return 0;
		}

		if (*U < *Raiz)
		{
			if (Raiz->Left == nullptr)
			{
				Raiz->Left = U;
				Raiz->Left->Ant = Raiz;
			}
			else
			{
				Raiz->Push(U, Raiz);
			}
			return 0;
		}
	}
		
	return 0;
}

template<class T>
void Arbol<T>::Inorden()
{
	if (Raiz != nullptr)
	{
		Raiz->Inorden();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

template<class T>
void Arbol<T>::Preorden()
{
	if (Raiz != nullptr)
	{
		/*cout << "Apellido: " << Raiz->apellido << endl;
		cout << "Nombre: " << Raiz->nombre << endl;
		cout << "Edad: " << Raiz->edad << endl;*/
		Raiz->PreordenLeft();
		Raiz->PreordenRigth();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

template<class T>
void Arbol<T>::Postorden()
{
	if (Raiz != nullptr)
	{
		Raiz->Postorden();
	}
	else
	{
		cout << "Arbol vacio" << endl;
	}
}

template<class T>
void Arbol<T>::Balance()
{
	if (Raiz->Left != nullptr) 
	{
		Cont++;
		Raiz->Left->Balance(Cont);
		if (Raiz->Left->balDer != Raiz->Left->balIzq)
		{
			cout << "Lado izquierdo dezbalanceado" << endl;
		}
		Raiz->balIzq = Raiz->Left->balDer + Raiz->Left->balIzq;
	}
	if (Raiz->Rigth != nullptr)
	{
		Cont = 0;
		Cont++;
		Raiz->Rigth->Balance(Cont);
		if (Raiz->Rigth->balDer != Raiz->Rigth->balIzq)
		{
			cout << "Lado derecho no balanceado" << endl;
		}
		Raiz->balDer = Raiz->Rigth->balDer + Raiz->Rigth->balIzq;
	}
	if (Raiz->balDer == Raiz->balIzq)
	{
		cout << "Arbol balanceado" << endl;
	}
	else
	{
		cout << "Arbol no balanceado" << endl;
	}
}

template<class T>
void Arbol<T>::Pull(Nodo<T>* U)
{
	if (Raiz == nullptr)
	{
		cout << "Abol vacio" << endl;
	}
	else
	{
		Nodo<T> * Temp = new Nodo<T>();
		if (*U > *Raiz)
		{
			Temp = Raiz->Left;
			Raiz->Left->Pull(U, Temp);
		}
		if (*U < *Raiz)
		{
			Temp = Raiz->Rigth;
			Raiz->Rigth->Pull(U, Temp);
		}
	}
}

template<class T>
void Arbol<T>::Rotacion()
{
	Balance();
	
	//se rota a la derecha
	if (Raiz->Left != nullptr)
	{
		Raiz->Left->Rotacion();
	}
	if (Raiz->Rigth != nullptr)
	{
		Raiz->Rigth->Rotacion();
	}
	if (Raiz->balDer < Raiz->balIzq)
	{
		//El nodo izquierdo se vulve la raiz
		Nodo<T>*Temp = Raiz->Left->Rigth;
		if (Temp != nullptr)
		{
			Temp->Ant = Raiz;
		}
		Raiz->Ant = Raiz->Left;
		Raiz->Left->Rigth = Raiz;
		Raiz->Left = Temp;
		Raiz = Raiz->Ant;
	}
	//se rota a la izquierda
	if (Raiz->balIzq < Raiz->balDer)
	{
		//El nodo derecho se vuelve la raiz
		Nodo<T>*Temp = Raiz->Rigth->Left;
		if (Temp != nullptr)
		{
			Temp->Ant = Raiz;
		}
		Raiz->Ant = Raiz->Rigth;
		Raiz->Rigth->Left = Raiz;
		Raiz->Rigth = Temp;
		Raiz = Raiz->Ant;
	}


}

template class Arbol<Persona>;