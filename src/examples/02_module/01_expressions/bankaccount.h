//bankaccount.h
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Account {
public:
  std::string name; // String representing the name of the account's owner
  int id; // The account number
  double balance; // The current account balance
};

void add_account(std::vector<Account>& accts);
void print_accounts(const std::vector<Account>& accts);
void swap(Account& er1, Account& er2);
bool less_than_by_name(const Account& e1, const Account& e2);
bool less_than_by_id(const Account& e1, const Account& e2);
bool less_than_by_balance(const Account& e1, const Account& e2);
void sort(std::vector<Account>& db, bool (*comp)(const Account&, const Account&));