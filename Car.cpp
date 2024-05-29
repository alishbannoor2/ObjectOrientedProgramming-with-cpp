#include "Car.h"
#include<iostream>
using namespace std;

Car::Car()
{
	name = "";
	color = "";
	price = 0.0;
}
Car::Car(char* n, char* c, float p)
{
	setName(n), setColor(c), setPrice(p);
}
void Car::setName(char* n)
{
	int size = 0;
	for (int i = 0;n[i]!='\0'; i++)
		size++;
	name = new char[size + 1];
	for (int i = 0; i < size; i++)
		name[i] = n[i];
	name[size] = '\0';
}
void Car::setColor(char* c)
{
	int size = 0;
	for (int i = 0; c[i]!='\0'; i++)
		size++;
	color = new char[size + 1];
	for (int i = 0; i < size; i++)
		color[i] = c[i];
	color[size] = '\0';
}
void Car::setPrice(float p)
{
	price = p;
}
char* Car::getName() const
{
	return name;
}
char* Car::getColor() const
{
	return color;
}
float Car::getPrice() const
{
	return price;
}
void Car::display() const
{
	cout << "Car Name: " << getName() << endl;
	cout << "Car Color: " << getColor() << endl;
	cout << "Car Price: " << getPrice() << endl<<endl;
}

Car::~Car()
{
	name = nullptr, color = nullptr;
	delete[] name, delete[] color;
}
