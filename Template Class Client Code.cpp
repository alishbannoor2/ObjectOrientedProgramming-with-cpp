#include"Calculator.cpp"


int main()
{
	Calculator<int> intOb1(1, 2);
	Calculator<float> floatOb2(3.3, 4.4);
	cout << "Int results:\n";
	intOb1.displayResult();
	cout << "float results:\n";
	floatOb2.displayResult();

	system("pause");
	return 0;
}