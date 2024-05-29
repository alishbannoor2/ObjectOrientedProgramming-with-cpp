#include<iostream>
#include"Car.h"
using namespace std;
#include<string>

int main()
{
	Car *c1=new Car[3];

	c1[0] = Car("Chevrolet", "Silver", 50);
	c1[1] = Car("Audi", "Black", 100);
	c1[2] = Car("MG", "White", 20);
	for (int i = 0; i < 3; i++)
		c1[i].display();
	

	system("pause");
	return 0;
}