#include "Name.h"
#include<iostream>
using namespace std;

Name::Name()
{

}
Name::Name(char* first , char* last )
{
	//copying first name
	firstName = first;
	int size1 = 0;
	for (int i = 0; first[i] != '\0'; i++)
	{
		size1++;
	}
	this->firstName = new char[size1 + 1];
	for (int i = 0; i < size1 + 1; i++)
	{
		firstName[i] = first[i];
	}
	firstName[size1] = '\0';
	//copying last name
	lastName = last;
	int size2 = 0;
	for (int i = 0; last[i] != '\0'; i++)
	{
		size2++;
	}
	lastName = new char[size2 + 1];
	for (int i = 0; i < size2 + 1; i++)
	{
		lastName[i] = last[i];
	}
	lastName[size2] = '\0';
}

bool Name::validateName(char* first, char* last)
{
	bool valid = true;
	//validating first name
	for (int i = 0; first[i] != '\0'; i++)
	{
		if (int(first[i]) > 64 && int(first[i]) < 91)
			valid = true;
		else
		{
			valid = false;
			break;
		}
	}
	//validating last name
	for (int i = 0; last[i] != '\0'; i++)
	{
		if ((int(last[i]) > 64 && int(last[i]) < 91) || (int(last[i]) > 96 && int(last[i]) < 123))
			valid = true;
		else
		{
			valid = false;
			break;
		}
	}
	if (!valid)
		cout << "You've entered an invalid name./n";
	return valid;
}

void Name::toUpper(char* first, char* last)
{
	char* temp_first = first;
	for (int i = 0; temp_first[i] != '\0'; i++)
	{
		if (int(temp_first[i] > 'a') && int(temp_first[i] < 'z'))
		{
			first[i] += 32;
		}
	}

	char* temp_last = last;
	for (int i = 0; temp_last[i] != '\0'; i++)
	{
		if (int(temp_last[i] > 'a') && int(temp_last[i] < 'z'))
		{
			last[i] -= 32;
		}
	}
	cout << "Your name in upper case is: " << first << " " << last << endl;

}

void Name::toLower(char* first, char* last)
{
	char* temp_first = first;
	for (int i = 0; temp_first[i] != '\0'; i++)
	{
		if (int(temp_first[i] > 'A') && int(temp_first[i] < 'Z'))
		{
			first[i] += 32;
		}
	}

	char* temp_last = last;
	for (int i = 0; temp_last[i] != '\0'; i++)
	{
		if (int(temp_last[i] > 'A') && int(temp_last[i] < 'Z'))
		{
			last[i] += 32;
		}
	}
	cout << "Your name in lower case is: " << first << " " << last << endl;

}

char* Name::fullName(char* first, char* last)
{
	char* fullName=nullptr;
	int size = 0;
	for (int i = 0; first[i]!='\0'; i++)
	{
		fullName[i] = first[i];
		size++;
	}
	fullName[size + 1] = ' ';
	for (int i = 0; last[i] != '\0'; i++)
	{
		fullName[size + 1 + i] = last[i];
	}
	return fullName;
}

int Name::nameLength(char* name)
{
	int length = strlen(name);
	return length;
}


void Name::camelCase(char* first, char* last)
{
	char* temp_first = first;
		if (int(temp_first[0] > 'a') && int(temp_first[0] < 'z'))
		{
			first[0] -= 32;
		}

	char* temp_last = last;
		if (int(temp_last[0] > 'a') && int(temp_last[0] < 'a'))
		{
			last[0] -= 32;
		}
	cout << "Your name in lower case is: " << first << " " << last << endl;

}

void Name::swapNames(char* first, char* last)
{
	char* temp = first;
	first = last;
	last = temp;
	cout << "Your swapped name is: " << first << " " << last << endl;
}

void display()
{
}

Name::~Name()
{
}
