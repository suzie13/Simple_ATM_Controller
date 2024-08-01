#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(std::string account_name, int initial_balance);

    std::string getName() const;
    int getBalance() const;
    void deposit(int amount);
    bool withdraw(int amount);

private:
    std::string name;
    int balance;
};

#endif // ACCOUNT_H
