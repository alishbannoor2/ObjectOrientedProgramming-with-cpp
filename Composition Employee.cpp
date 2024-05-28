#include "Employee.h"
#include<iostream>
using namespace std;


Employee::Employee(char*fn, char*ln, Date birth, Date hire)
:firstName(fn), lastName(ln), birthDate(birth), hireDate(hire)
{
}
void Employee::setFirstName(char* fn){
	int size = 0;
	for (int i = 0; fn[i] != '\0'; i++)
		size++;
	firstName = new char[size + 1];
	for (int i = 0; i < size; i++)
		firstName[i] = fn[i];
	firstName[size] = '\0';
}
void Employee::setLastName(char* ln)
{
	int size = 0;
	for (int i = 0; ln[i] != '\0'; i++)
		size++;
	lastName = new char[size + 1];
	for (int i = 0; i < size; i++)
		lastName[i] = ln[i];
	lastName[size] = '\0';
}
char* Employee::getFirstName()
{
	return firstName;
}
char* Employee::getLastName()
{
	return lastName;
}
void Employee::display()
{
	cout << "First name is " << getFirstName() << endl;
	cout << "Last Name is " << getLastName() << endl;
	cout << "Hired: ";
	hireDate.Display();
	cout << "Birthday:";
	birthDate.Display();
}

Employee::~Employee()
{
	firstName = nullptr;
	lastName = nullptr;
	delete[] firstName;
	delete[] lastName;
}
