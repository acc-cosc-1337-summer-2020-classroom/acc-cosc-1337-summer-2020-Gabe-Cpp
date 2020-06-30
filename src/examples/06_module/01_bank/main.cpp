#include "bank_account.h"
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin;

int main()
{
	BankAccount act (100); //for the default constructor
	cout << act.get_balance()<<'\n';
	
	BankAccount account (500);
	cout << account.get_rate()<<'\n'; //for the static variable
	display_balance(account); //for the friend function
	cout << account; //tight to operator overload
	cin >> account;
	cout << account;

	auto balance= account.get_balance();
	cout << "Balance is: \n"<< balance;

	auto amount {0};
	cout << "\nEnter deposit amount: \n";
	cin >> amount;

	account.deposit(100);
	cout << account.get_balance()<<'\n';

	account.withdraw(50);
	cout << account.get_balance()<<'\n';
	return 0;
}