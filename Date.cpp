#include<iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	void print()
	{
		cout << "Date : " << day << "/" << month << "/" << year << endl;

	}
	//default constructor
	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	//parameterized constructor
	Date( int Day, int Month, int Year)
	{
		day = Day;
		month = Month;
		year = Year;
	}
	//setter methods
	void SetDay(int Day)
	{
		day = Day;
	}
	void SetMonth(int Month)
	{
		month = Month;
	}
	void SetYear(int Year)
	{
		year = Year;
	}
	//getter methods
	int GetDay()
	{
		return day;
	}
	int GetMonth()
	{
		return month;
	}
	int GetYear()
	{
		return year;
	}

};
int main()
{
	//creating object(instantiation) for class
	Date date1;
	//setting values
	date1.SetDay(31);
	date1.SetMonth(10);
	date1.SetYear(2023);
	date1.print();
	//setting values through parameterized constructor
	Date xmasDay(25, 12, 2018);
	xmasDay.print();
	cout << "Date : " << xmasDay.GetDay() << "/" << xmasDay.GetMonth() << "/" << xmasDay.GetYear() << endl;

	system("pause");
	return 0;
}