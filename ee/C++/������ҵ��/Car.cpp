#include "Car.h"

Car::Car()
{
	Size = 5;
	color = "°×É«";
	type = "±¦Âí";
}
int Car::getSize()
{
	return Size;
}
string Car::getColor()
{
	return color;
}
string Car::getType()
{
	return type;
}


void Car::printCar()
{
	cout << "Size:" << Size << " color" << color << " type:" << type << endl;
}

int Lorry::getCapacity()
{
	return capacity;
}
void Lorry::setCapacity(int capacity)
{
	this->capacity = capacity;
}

int Lorry::getRank()
{
	return rank;
}
void Lorry::setRank(int rank)
{
	this->rank = rank;
}

string Lorry::getType()
{
	return type;
}
void Lorry::setType(string type)
{
	this->type = type;
}

void Lorry::printfLorry()
{
	cout << "capacity:" << capacity << endl;
	cout << "rank:" << rank << endl;
	cout << "type:" << type << endl;
}
