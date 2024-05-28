#pragma once
#include"Date.h"
class Employee
{
private:
	char* firstName;
	char*  lastName;
	Date birthDate, hireDate;

public:
	Employee();
	Employee(char*, char*, Date, Date);
	void setFirstName(char*);
	void setLastName(char*);
	char* getFirstName();
	char* getLastName();
	void display();
	~Employee();
};

