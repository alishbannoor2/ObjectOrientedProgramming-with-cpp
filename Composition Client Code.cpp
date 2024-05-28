#include<iostream>
#include"Employee.h"
using namespace std;

int main()
{
	char* f_name;
	char* l_name;
	int h_m, h_d, h_y, b_m, b_d, b_y;
	cout << "Enter Employee first name:";
	cin >> f_name;
	cout << "Last Name:";
	cin >> l_name;
	cout << "Hired month:";
	cin >> h_m;
	cout << "Hired day:";
	cin >> h_d;
	cout << "Hired year:";
	cin >> h_y;
	cout << "birth month:";
	cin >> b_m;
	cout << "birth day:";
	cin >> b_d;
	cout << "birth year:";
	cin >> b_y;
	Employee obj(f_name, l_name, h_m, h_d, h_y, b_m, b_d, b_y);
	obj.Display();

	system("pause");
	return 0;

