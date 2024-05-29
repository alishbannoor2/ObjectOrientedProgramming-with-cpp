#include "Person.h"

#include"Name.h"
#include"Address.h"

Person::Person()
{

}
Person::Person(Name n, Address* a, int g){
	age = g;
	name = n;
	address = a;
}
void Person::display(){
	cout << "Name: " << name.getFirstName() << " " << name.getLastName() << endl;
	cout << "Address: " << getAddress();
}
Name Person::getName(){
	return name;
}
Address* Person::getAddress(){
	return address;
}
int Person::getAge(){
	return age;
}
void Person::setName(Name n){
	name = n;
}
void Person::setAddress(Address* a){
	address = a;
}
void Person::setAge(int a){
	age = a;
}

Person::~Person()
{
}
