#include<iostream>
#include"Event.h"
using namespace std;

int main()
{
	Event* events = new Event[3];
	cout << endl;
	Event("OOP Exam", 22, 04, 2023);
	events[1].setDate(1);
	events[1].setMonth(3);
	events[1].setYear(2022);
	events[1].setName("DBS Exam");
	events[2]=events[0];
	cout << endl;
	events[0].display();
	events[1].display(); 
	events[2].display();
	cout << endl;
	events[0].searchEvent("OOP Exam");

	system("pause");
	return 0;
}