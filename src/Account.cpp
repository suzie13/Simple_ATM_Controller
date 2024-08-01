#include "Account.h"
#include <iostream>

Account::Account(std::string account_name, int initial_balance)
    : name(account_name), balance(initial_balance) {}

std::string Account::getName() const {
    return name;
}

int Account::getBalance() const {
    return balance;
}

void Account::deposit(int amount) {
    if (amount > 0) {
        balance += amount;  // Balance after deposit
        std::cout << "Deposited: $" << amount << std::endl;
    } else {
        std::cout << "Deposit amount must be positive." << std::endl;
    }
}

bool Account::withdraw(int amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;  // Balance after withdrawal
        std::cout << "Withdrew: $" << amount << std::endl;
        return true;
    } else {
        std::cout << "Insufficient funds or invalid amount." << std::endl;
        return false;
    }
}
