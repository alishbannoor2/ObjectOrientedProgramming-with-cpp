#include "Address.h"


Address::Address()
{
	houseNumber = 0;
	city = "";
	country = "";
}
Address::Address(int h_n, string cit, string coun){
	setHouseNumber(h_n);
	setCity(cit);
	setCountry(coun);
}
void Address::display(){
	cout << "House number: " << houseNumber << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
}
void Address::setHouseNumber(int h_n){
	houseNumber = h_n;
}
void Address::setCity(string c){
	int size = 0;
	for (int i = 0; c[i] != '\0'; i++)
		size++;
	city = new char[size + 1];
	for (int i = 0; i < size; i++)
		city[i] = c[i];
	city[size] = '\0';
}
void Address::setCountry(string c){
	int size = 0;
	for (int i = 0; c[i] != '\0'; i++)
		size++;
	country = new char[size + 1];
	for (int i = 0; i < size; i++)
		country[i] = c[i];
	country[size] = '\0';
}
int Address::getHouseNumber(){
	return houseNumber;
}
string Address::getCity(){
	return city;
}
string Address::getCountry(){
	return country;
}

Address::~Address()
{
	
}
