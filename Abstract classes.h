#pragma once
#include<iostream>
using namespace std;

class Bill {
public:
	Bill(char*, int );
	void setHouseAddress(char*);
	void setRegistrationNumber(int);
	char* getHouseAddress();
	int getRegistrationNumber();
	virtual void DisplayUserInfo() = 0;
	virtual void CalculateBill() = 0;
	virtual ~Bill();
private:
	char* house_Address;
	int registration_number;
};

class ElectricityBill:public Bill{
public:
	ElectricityBill(int,char*,int);
	void setUnits(int);
	int getUnits();
	void CalculateBill();
	void DisplayUserInfo();
	~ElectricityBill();
private:
	int units;
};

class WaterBill :public Bill{
public:
	WaterBill(float, char*,int);
	void setLiters(float);
	int getLiters();
	void CalculateBill();
	void DisplayUserInfo();
	~WaterBill();
private:
	int liters;
};

class TelephoneBill :public Bill{
public:
	TelephoneBill(int , char* ,int );
	void setMin(int);
	int getMin();
	void CalculateBill();
	void DisplayUserInfo();
	~TelephoneBill();
private:
	int minutes;
};

