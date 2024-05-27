#include<iostream>
using namespace std;

class ComplexNumber
{
private:
	double realPart;
	double imaginaryPart;
public:
	void display()
	{
		cout <<"\t"<< realPart << " + " << imaginaryPart << "i " << endl;
	}
	void SetComplexNumber(double set_real_part, double set_imaginary_part)
	{
		realPart = set_real_part;
		imaginaryPart = set_imaginary_part;
	}
	double GetRealPart()
	{
		//returns real part of complex number
		return realPart;
	}
	double GetImaginaryPart()
	{
		//returns imaginary part of complex number
		return imaginaryPart;
	}
};

int main()
{
	ComplexNumber number1;
	number1.SetComplexNumber(3, 2);
	number1.display();

	system("pause");
	return 0;
}