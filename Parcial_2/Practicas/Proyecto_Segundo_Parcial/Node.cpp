#include "Node.h"



const std::string Node::getName()
{
	return name;
}

void Node::setName(std::string Nom)
{
	name = Nom;
}

const std::string Node::getLastName()
{
	return lastName;
}

void Node::setLastName(std::string Last)
{
	lastName = Last;
}

const std::string Node::getEmail()
{
	return email;
}

void Node::setEmail(std::string Email)
{
	email = Email;
}

void Node::setBirthDate(unsigned char D, unsigned char M, unsigned char Y) 
{
	birthDay = (unsigned char)D;
	birthMonth = (unsigned char)M;
	birthYear = (unsigned char)Y;

}
const std::string Node::getFullName()
{
	return lastName + " " + name;
}

const unsigned int Node::getAge() 
{
	unsigned int age = 19;
	if (birthYear <= age) 
	{
		age = age - int((unsigned char)birthYear);
		return age;
	}
	else 
	{
		age = 0;
		return age;
	}
}

bool SingleNode::operator>(SingleNode & N)
{
	return this->getAge() > N.getAge();
}

bool SingleNode::operator<(SingleNode & N )
{
	return this->getAge() < N.getAge();
}

SingleNode::~SingleNode()
{
	if (next!=nullptr)
	{
		delete next;
	}
}

//Funcion para imprimir los nodos
std::ostream & operator<<(std::ostream &out,  SingleNode & N)
{
	out << "The name is:" << N.getFullName() << "\nThe age is: " << N.getAge() << "\nThe email is: " << N.getEmail() << std::endl;
	if (N.next == nullptr) 
	{
		return out;
	}
	else 
	{
		return out << N.next;
	}
	return out;
}

//Funcion para llenar los nodos
std::istream & operator>>(std::istream & inp, SingleNode & N)
{
	std::cout << "Ingrese su nombre: "; inp >> N.name;
	std::cout << "Ingrese su apellido: "; inp >> N.lastName;
	std::cout << "Ingrese su email: "; inp >> N.email;
	std::cout << "Ingrese el dia que naciste: "; inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: "; inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: "; inp >> N.birthYear;

	return inp;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

std::ostream & operator<<(std::ostream & out, DoubleNode & N)
{
	out << "The name is:" << N.getFullName() << "\nThe age is: " << N.getAge() << "\nThe email is: " << N.getEmail() << std::endl;
	if (N.next == nullptr)
	{
		return out;
	}
	else
	{
		return out << N.next;
	}
	return out;
}

std::istream & operator>>(std::istream & inp, DoubleNode & N)
{
	std::cout << "Ingrese su nombre: "; inp >> N.name;
	std::cout << "Ingrese su apellido: "; inp >> N.lastName;
	std::cout << "Ingrese su email: "; inp >> N.email;
	std::cout << "Ingrese el dia que naciste: "; inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: "; inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: "; inp >> N.birthYear;

	return inp;
}

bool DoubleNode::operator>(DoubleNode & N)
{
	return this->getAge() > N.getAge();
}

bool DoubleNode::operator<(DoubleNode & N)
{
	return this->getAge() < N.getAge();
}

DoubleNode::~DoubleNode()
{
	if (next != nullptr)
	{
		delete next;
	}
}

