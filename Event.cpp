#include "Event.h"
#include<iostream>
using namespace std;
int Event::count = 0;
Event::Event()
{
	Event_name = "";
	Event_date = 00;
	Event_month = 00;
	Event_year = 1900;
	cout << "---Default constructor called---\n";
	count++;
}
Event::Event(char* n, int d, int m, int y):Event_date(d),Event_month(m),Event_year(y){
	setName(n);
	/*setDate(d);
	setMonth(m);
	setYear(y);*/
	cout << "---Parameterized constructor called---\n";
}
Event::Event(const Event &obj){
	Event_year = obj.getYear();
	Event_month = obj.getMonth();
	Event_date = obj.getDate();
	int size = 0;
	char* n = obj.getName();
	for (int i = 0; i < n[i]; i++)
		size++;
	Event_name = new char[size + 1];
	for (int i = 0; i < size; i++)
		Event_name[i] = n[i];
	Event_name[size] = '\0';
	cout << "---Copy constructor called---\n";
}
void Event::setName(char* n){
	int size = 0;
	//deep copy of character pointer 
	for (int i = 0; n[i] != '\0'; i++)
		size++;
	Event_name = new char[size + 1];
	for (int i = 0; i < size; i++)
		Event_name[i] = n[i];
	Event_name[size] = '\0';
}
char* Event::getName() const{
	return Event_name;
}
void Event::setDate(int d){
	Event_date = d;
}
int Event::getDate() const{
	return Event_date;
}
void Event::setMonth(int m){
	Event_month = m;
}
int Event::getMonth() const{
	return Event_month;
}
void Event::setYear(int y){
	Event_year = y;
}
int Event::getYear() const{
	return Event_year;
}
void Event::display() const{
	cout << "Event Name: " << Event_name << endl;
	cout << "Event Date: " << getDate() << " - " << getMonth() << " - " << getYear() << endl;
	cout << "Number of events created: " << count << endl<<endl;
}
void Event::searchEvent(char* e_name){
	if (e_name = Event_name)
	{
		cout << "Event found.\n";
		cout << "Event Name: " << Event_name << endl;
		cout << "Event Date: " << Event_date << " - " << Event_month << " - " << Event_year << endl;
	}
	else
	cout << "Event is not found.\n";
}
Event::~Event()
{
	Event_name = nullptr;
	delete[] Event_name;
	cout << "---Destructor called---\n";
}
