#include <iostream>


class Pet
{
public:
	virtual void talk() = 0;
};


class Dog : public Pet // esto es para heredar de otra clase
{
public:
	void talk()
	{
		std::cout << "guau" << std::endl;
	}
};



int increment(int i)
{
	return ++i;
}

void incrementp(int*i)
{
	(*i)++;
}

//incrementa la variable
void incrementr(int& i)
{
	i++;
}

int main()
{
	/*int var = 9;
	int*ptr = &var;
	*ptr = 10;

	char*buffer = new char[8];
	memset(buffer, 'A', 8);
	delete[]buffer;*/

	/*short *a = new short;
	short *b = new short;
	short *c = new short;

	*a = 1;
	*b = 2;
	*c = 3;

	delete a;
	delete b;
	delete c;

	void*ptr = &c;*/

	//int var = 5;
	//int*ptr = &var;
	//int& ref = var;
	//ref = 10;

	//var = increment(var);
	//incrementp(&var);
	//incrementr(var);


	int i = 0;
	int*ptr = &i;
	int**intptr = &ptr;

	Dog firulais;;
	std::cout << "hello world!!" << std::endl;
	std::cin.get();
	return 0;
}