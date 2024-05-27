#include "Student.h"
#include<iostream>
using namespace std;

Student::Student()
{//default constructor assigning default values to data members
	name = "---";
	rollNumber = 0;
	marks = 0.0;
}
Student::Student(char* s_name, int s_rollNumber, float s_marks)
{//parameterized constructor assigning custom values to data members
	setName(s_name);
	setMarks(s_marks);
	setRollNumber(s_rollNumber);
}
void Student:: setName(char* s_name){name = s_name;}

char* Student::getName(){return name;}

void Student::setMarks(float s_marks){marks = s_marks;}

float Student::getMarks(){return marks;}

void Student::setRollNumber(int s_rollNumber){rollNumber = s_rollNumber;}

int Student::getRollNumber(){return rollNumber;}

void Student::displayRecord()
{//display method for all student rocords
	
	cout << "Student Roll Number: " << Student::getRollNumber() << endl;
	cout << "Student Marks: " << Student::getMarks() << endl;
	cout << "Student name: " << Student::getName() << endl;
}
void Student::addNewStudent()
{

}
int Student::studentWithHighestMarks(Student arr[],int size)
{
	float highest = 0;
	int index;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i].getMarks()>highest)
		{
			highest = arr[i].getMarks();
			index = i;
		}
	}
	return index;
}
