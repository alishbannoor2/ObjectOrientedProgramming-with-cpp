#include "classes.h"


Bill::Bill(char* h, int r)
{
	setHouseAddress(h); setRegistrationNumber(r);
}
void Bill::setHouseAddress(char* h)
{
	house_Address = h;
}
void Bill::setRegistrationNumber(int r)
{
	registration_number = r;
}
char* Bill::getHouseAddress()
{
	return house_Address;
}
int Bill::getRegistrationNumber()
{
	return registration_number;
}
Bill::~Bill()
{
	house_Address = nullptr;
	delete[] house_Address;
}


ElectricityBill::ElectricityBill(int u, char* h, int r) :Bill(h, r)
{
	setUnits(u);
}
void ElectricityBill::setUnits(int u)
{
	units = u;
}
int ElectricityBill::getUnits()
{
	return units;
}
void ElectricityBill::CalculateBill()
{
	cout << "Electricity Bill: " << units * 30 << endl;
}
void ElectricityBill::DisplayUserInfo()
{
	cout << "House Address: " << getHouseAddress() << endl;
	cout << "Registration Number: " << getRegistrationNumber() << endl;
}
ElectricityBill::~ElectricityBill()
{}






WaterBill::WaterBill(float l, char* h, int r) :Bill(h, r)
{
	setLiters(l);
}
void WaterBill::setLiters(float l)
{
	liters = l;
}
int WaterBill::getLiters()
{
	return liters;
}
void WaterBill::CalculateBill()
{
	cout << "Water Bill: " << liters * 10 << endl;
}
void WaterBill::DisplayUserInfo()
{
	cout << "House Address: " << getHouseAddress() << endl;
	cout << "Registration Number: " << getRegistrationNumber() << endl;
}
WaterBill::~WaterBill()
{}





TelephoneBill::TelephoneBill(int m, char* h, int r) :Bill(h, r)
{
	setMin(m);
}
void TelephoneBill::setMin(int m)
{
	minutes = m;
}
int TelephoneBill::getMin()
{
	return minutes;
}
void TelephoneBill::CalculateBill()
{
	cout << "Telephone Bill: " << minutes * 15 << endl;
}
void TelephoneBill::DisplayUserInfo()
{
	cout << "House Address: " << getHouseAddress() << endl;
	cout << "Registration Number: " << getRegistrationNumber() << endl;
}
TelephoneBill::~TelephoneBill()
{}


