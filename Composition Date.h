#pragma once
class Date
{
private:
	int month, day, year;
public:
	Date(int = 1, int = 1, int = 1900);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth();
	int getDay();
	int getYear();
	void Display();
	~Date();
};

