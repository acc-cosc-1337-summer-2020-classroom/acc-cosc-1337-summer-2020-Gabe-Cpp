//bank_account.h
#include <string>

class BankAccount
{
    public:
        BankAccount() = default;
        explicit BankAccount(int b) : balance{b} {}
        int get_balance()const {return balance; }
        void deposit(int amount);
        void withdraw(int amount);
        void open(int amount);
        double get_rate() {return rate; } //for the static variable
        friend void display_balance(const BankAccount& b); // not part of the class
        friend std::ostream& operator <<(std::ostream& out, const BankAccount& b); //operator overload
        friend std::istream& operator >>(std::istream& in, BankAccount& b); //operator overload

    private:
        int balance {0};
        const int min_amt_to_open{25};
        static double rate; //static variable
        static double init_rate() {return .025; }
};

class Invalid{
public:
    Invalid(std::string msg) : message{msg}{}
    std::string get_error()const {return message; }
private:
    std::string message;  
};