//bank_account.cpp
#include<iostream>
#include "bank_account.h"

void BankAccount::deposit (int amount){
    if (amount > 0){
        balance += amount;
    }
}

void BankAccount::withdraw (int amount){
    if (amount > 0 && amount <+ balance) {
        balance -= amount;
    }
}

void BankAccount::open(int amount){
    if (amount < 0){
        throw Invalid("Amount must be greater than 0");
    }
    else if(amount < min_amt_to_open){
        throw Invalid("Amount must be at least 25");
    }
    balance += amount;
}

double BankAccount::rate = init_rate(); //for the static variable

void display_balance(const BankAccount& b){ //for the friend function
    std::cout << "Balance (w friend fct) is: " << b.balance << '\n'; //balance from private
}

std::ostream & operator<<(std::ostream& out, const BankAccount& b){
    out << "Balance (w ostream) is: "<< b.balance<<'\n';
    //not part of the class and used for private data
    return out;
}

std::istream & operator>>(std::istream& in, BankAccount& b){
    int amount;
    std::cout << "Enter (w istream) amount: ";
    in >> amount;
    b.deposit(amount);

    return in;
}