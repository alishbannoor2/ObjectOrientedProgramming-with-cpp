#include "BankAccount.h"
#include<iostream>
using namespace std;

BankAccount::BankAccount()
{
	account_number = account_balance = 0;
	account_holder_name = "---";
}
BankAccount::BankAccount(int acc_no, char* holder_name, int acc_bal)
{
	setAccBalance(acc_bal);
	setAccHolderName(holder_name);
	setAccountNumber(acc_no);
}
void BankAccount::setAccBalance(int acc_balance)
{
	account_balance = acc_balance;
}
void BankAccount::setAccHolderName(char* acc_hol_name)
{
	account_holder_name = acc_hol_name;
}
void BankAccount::setAccountNumber(int acc_num)
{
	account_number = acc_num;
}
int BankAccount::getAccBalance()
{
	return account_balance;
}
char* BankAccount::getAccHolderName()
{
	return account_holder_name;
}
int BankAccount::getAccNumber()
{
	return account_number;
}
void BankAccount::addNewAcc(BankAccount *&obj,int &size)
{
	BankAccount *obj = new BankAccount[size + 1];
	for (int i = 0; i < size; i++)
	{
		*obj[i].setAccBalance = obj[i].getAccBalance();
		*obj[i].setAccHolderName = obj[i].getAccHolderName();
		*obj[i].setAccountNumber = obj[i].getAccNumber();
	}
	char* n_name; int n_balance; int n_acc_number;
	cout << "Enter new account holder name:";
	cin >> n_name;
	obj[size].setAccHolderName(n_name);
	cout << "Enter new account balance:";
	cin >> n_balance;
	obj[size].setAccBalance(n_balance);
	cout << "Enter new account number:";
	cin >> n_acc_number;
	obj[size].setAccountNumber(n_acc_number);




}
void BankAccount::displayDetails()
{
	cout << "Account holder name: " << getAccHolderName() << endl;
	cout << "Account Balance: " << getAccBalance() << endl << endl;
}
int BankAccount::HighestBalanceAcc(BankAccount arr[], int size)
{
	int highest = 0;
	int index;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].getAccBalance()>highest)
		{
			highest = arr[i].getAccBalance();
			index = i;
		}
	}
	return index;
}