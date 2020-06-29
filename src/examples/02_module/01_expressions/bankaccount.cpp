#include "bankaccount.h"

using std::swap;

// Allows the user to enter via the keyboard information
// about an account and adds that account to the database.
void add_account(std::vector<Account>& accts) {
  std::string name;
  int number;
  double amount;
  std::cout << "Enter name, account number, and account balance: ";
  std::cin >> name >> number >> amount;
  Account acct;
  acct.name = name;
  acct.id = number;
  acct.balance = amount;
  accts.push_back(acct);
}
// Print all the accounts in the database
void print_accounts(const std::vector<Account>& accts) {
  int n = accts.size();
  for (int i = 0; i < n; i++)
  std::cout << accts[i].name << "," << accts[i].id
  << "," << accts[i].balance << '\n';
}
void swap(Account& er1, Account& er2) {
  Account temp = er1;
  er1 = er2;
  er2 = temp;
}
bool less_than_by_name(const Account& e1, const Account& e2) {
  return e1.name < e2.name;
}
bool less_than_by_id(const Account& e1, const Account& e2) {
  return e1.id < e2.id;
}
bool less_than_by_balance(const Account& e1, const Account& e2) {
  return e1.balance < e2.balance;
}
// Sorts a bank account database into ascending order
void sort(std::vector<Account>& db, bool (*comp)(const Account&, const Account&)) {
  int size = db.size();
  for (int i = 0; i < size - 1; i++) {
    int smallest = i;
    for (int j = i + 1; j < size; j++)
      if (comp(db[j], db[smallest])) // The comp parameter determines the ordering
        smallest = j;
    if (smallest != i)
      swap(db[i], db[smallest]);
  }
}
