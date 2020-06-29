#include "bankaccount.h"

// Allows a user interact with a bank account database.
int main() {  
  std::vector<Account> customers; // The simple database of bank accounts  
  char cmd; // User command  
  bool done = false; // Are we done yet?
  do {
    std::cout << "[A]dd [N]ame [I]D [B]alance [Q]uit==> ";
    std::cin >> cmd;
    switch (cmd) {
      case 'A':
      case 'a':      
      add_account(customers); // Add an account
      break;
      case 'P':
      case 'p':      
      print_accounts(customers); // Print customer database
      break;
      case 'N':
      case 'n':      
      sort(customers, less_than_by_name); // Sort database by name
      print_accounts(customers);
      break;
      case 'I':
      case 'i':      
      sort(customers, less_than_by_id); // Sort database by ID (account number)
      print_accounts(customers);
      break;
      case 'B':
      case 'b':      
      sort(customers, less_than_by_balance); // Sort database by account balance
      print_accounts(customers);
      break;
      case 'Q':
      case 'q':
      done = true;
      break;
    }
  }
  while (!done);
}
