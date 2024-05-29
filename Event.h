#pragma once
class Event
{
public:
	Event();
	Event(char*, int, int, int);
	Event(const Event &);
	void setName(char*);
	char* getName() const;
	void setDate(int);
	int getDate() const;
	void setMonth(int);
	int getMonth() const;
	void setYear(int);
	int getYear() const;
	void display() const;
	void searchEvent(char* );
	~Event();
private:
	char* Event_name;
	int Event_date;
	int Event_month;
	int Event_year;
	static int count;
};

