#include "Calculator.h"

template <typename A>
Calculator<A>::Calculator(A n1, A n2)
{
	setNum1(n1); setNum2(n2);
}

template <typename A>
void Calculator<A>::setNum1(A n1)
{
	num1 = n1;
}

template <typename A>
A Calculator<A>::getNum1()
{
	return num1;
}

template <typename A>
void Calculator<A>::setNum2(A n2)
{
	num2 = n2;
}

template <typename A>
A Calculator<A>::getNum2()
{
	return num2;
}

template <typename A>
A Calculator<A>::add()
{
	return (getNum1() + getNum2());
}

template <typename A>
A Calculator<A>::sub()
{
	return (getNum1() - getNum2());
}

template <typename A>
A Calculator<A>::mul()
{
	return (getNum1() * getNum2());
}

template <typename A>
A Calculator<A>::div()
{
	return (getNum1() / getNum2());
}

template <typename A>
void Calculator<A>::displayResult()
{
	cout << "Calculations of " << getNum1() << " and " << getNum2() << " are\n";
	cout << "Addition: " << add() << endl;
	cout << "Subtraction: " << sub() << endl;
	cout << "Multiplication: " << mul() << endl;
	cout << "Division: " << div() << endl;

}
template <typename A>
Calculator<A>::~Calculator()
{
}
