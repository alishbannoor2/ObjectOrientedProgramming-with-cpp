#pragma once
#include<string>
#include<iostream>
using namespace std;
class Address
{
public:
	int houseNumber;
	string city;
	string country;
	Address();
	Address(int, string, string);
	void display();
	void setHouseNumber(int);
	void setCity(string);
	void setCountry(string);
	int getHouseNumber();
	string getCity();
	string getCountry();
	~Address();
};

