#include<iostream>
#include "Student.h"
using namespace std;

int main()
{
	const int maxStudent = 5;
	Student object[maxStudent]=
	{
		Student("alishba", 123, 50.0),
		Student("ali", 713, 10.8),
		Student("ahmed", 2022, 45.5),
		Student("ahsan", 100, 23.75)
	};
	Student *ptr = object;
	int choice;
	do{
		cout << "\n1.Add new student\n2.Display details of students\n3.Find student with highest marks\n4.Exit\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
				  char* name;
				  float marks;
				  int rollNumber;

				  Student ptr[maxStudent + 1];
				  for (int i = 0; i < maxStudent; i++)
				  {
					  ptr[i] = object[i];
				  }
				  cout << "Enter name :";
				  cin>>name;
				  cin.ignore();
				  cout << "Enter roll number:";
				  cin >> rollNumber;
				  cout << "Enter marks:";
				  cin >> marks;
				  object[maxStudent].setName(name);
				  object[maxStudent].setMarks(marks);
				  object[maxStudent].setRollNumber(rollNumber);

				  cout << "Student added!\n" << endl;
				  break;		
		}
		case 2:
			for (int i = 0; i < maxStudent; i++)
			{
				cout << "\nRecord of " << i + 1 << " student:\n";
				ptr[i].displayRecord();
			}
			break;
		case 3:
		{
				  int index;
				  index = object[0].studentWithHighestMarks(object, maxStudent);
				  cout << object[index].getName() << " got highest marks " << object[index].getMarks() << endl;
				  break;
		}
		case 4:
			break;
		}
	} while (choice!=4);
	system("pause");
	return 0;
}