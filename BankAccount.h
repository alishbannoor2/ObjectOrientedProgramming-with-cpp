#pragma once
class BankAccount
{
public:
	BankAccount();
	BankAccount(int, char*, int);
	void setAccountNumber(int);
	void setAccHolderName(char*);
	void setAccBalance(int);
	int getAccNumber();
	char* getAccHolderName();
	int getAccBalance();
	void addNewAcc(BankAccount*&, int&);
	void displayDetails();
	int HighestBalanceAcc(BankAccount[], int);

private:
	int account_number;
	char* account_holder_name;
	int account_balance;
};
