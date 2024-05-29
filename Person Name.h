#pragma once
#include<string>
#include<iostream>
using namespace std;
class Name
{
public:
	Name();
	Name(string, string);
	void display();
	void setFirstName(string);
	void setLastName(string);
	string getFirstName();
	string getLastName();
	~Name();
private:
	string FirstName;
	string LastName;
};

