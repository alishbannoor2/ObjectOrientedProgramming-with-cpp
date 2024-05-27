#include<iostream>
using namespace std;

class Triangle
{
private:
	double base;
	double height;
public:
	Triangle()
	{
		//defauult constructor setting default values
		base = 0;
		height = 0;
	}
	void SetTriangle(double set_base, double set_height)
	{
		//sets base & height of triangle
		base = set_base;
		height = set_height;
	}
	double GetBase()
	{
		//returns value of base
		return base;
	}

	double GetHeight()
	{
		//returns value of height
		return height;
	}
	void display()
	{
		cout << "Height of Triangle is: " << height << endl;
		cout << "Base of Triangle is: " << base << endl;
	}
	double calculateArea()
	{
		//calculates and returns area
		double area = (base*height) / 2;
		return area;
	}

};

int main()
{
	Triangle triangle1;
	triangle1.SetTriangle(2, 4);
	triangle1.display();
	cout << "Area: " << triangle1.calculateArea() << endl << endl;
	Triangle triangle2;
	triangle2.SetTriangle(20, 498);
	triangle2.display();
	cout << "Area: " << triangle2.calculateArea() << endl;
	system("pause");
	return 0;
}