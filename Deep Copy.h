#pragma once
#include<iostream>
class Name
{
private:
	char* firstName;
	char* lastName;
public:
	Name();
	Name(char* , char*);
	Name valueName(const Name&);
	void copyName(Name);
	bool validateName(char* first, char* last);
	void camelCase(char* first, char* last);
	void toLower(char*, char*);
	void toUpper(char*, char*);
	char* fullName(char*, char*);
	int nameLength(char*);
	void swapNames(char*,char*);

	~Name();
};

