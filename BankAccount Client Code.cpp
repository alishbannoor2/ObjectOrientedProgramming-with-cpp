#include<iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
	int size = 5;
	BankAccount object[5] =
	{
		BankAccount(1, "Ahmed", 1000),
		BankAccount(2, "Ali Abdad", 1500),
		BankAccount(3, "Jamshed", 100),
	

	};
	int choice;
	do
	{
		cout << "Select choice:\n";
		cout << "1.Add a new Account\n2.Display details of all accounts\n3.Find account with highest balance\n4.Exit program\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{//adding a new account
				  object[0].addNewAcc( object,size);
				  break;
		}
		case 2:
		{//displaying details
				  for (int i = 0; i < 5; i++)
				  {
					  cout << "Record of " << i + 1 << " account is:\n";
					  object[i].displayDetails();
				  }
				  break;
		}
		case 3:
		{//finding account
				  int index;
				  index = object[0].HighestBalanceAcc(object, 5);
				  cout << object[index].getAccHolderName() << " has highest account balance of Rs" << object[index].getAccBalance() << endl;
				  break;
		}
		case 4:
		{//exit program
				  break;
		}
		}

	} while (choice != 4);


	system("pause");
	return 0;
}