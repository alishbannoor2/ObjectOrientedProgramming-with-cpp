#pragma once
#include<iostream>
using namespace std;
template <typename A>
class Calculator
{
public:
	Calculator(A,A);
	void setNum1(A);
	A getNum1();
	void setNum2(A);
	A getNum2();
	A add();
	A sub();
	A mul();
	A div();
	void displayResult();
	~Calculator();
private:
	A num1;
	A num2;
};

