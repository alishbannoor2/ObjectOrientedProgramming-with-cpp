#include<iostream>
#include"Name.h"
using namespace std;

int main()
{
	Name obj1;
	Name obj2(obj1);
	char* f_name;
	char* l_name;
	cout << "Enter the first name:";
	cin >> f_name;
	cout << "Enter your last name:";
	cin >> l_name;
	Name(f_name, l_name);
	obj1.validateName(f_name,l_name);
	obj1.camelCase(f_name, l_name);
	obj1.toUpper(f_name, l_name);
	obj1.toLower(f_name, l_name);
	char* fullName=obj1.fullName(f_name, l_name);
	cout<<"Your name length is: "<<obj1.nameLength(fullName);
	obj1.swapNames(f_name, l_name);

	system("pause");
	return 0;
}