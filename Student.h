#pragma once
#include<iostream>

class Student
{
public:
	Student();
	Student(char*, int, float);
	void setName(char* );
	char* getName();
	void setRollNumber(int);
	int getRollNumber();
	void setMarks(float);
	float getMarks();
	void displayRecord();
	void addNewStudent();
	int studentWithHighestMarks(Student[], int);

private:
	char*  name;
	int rollNumber;
	float marks;
};

