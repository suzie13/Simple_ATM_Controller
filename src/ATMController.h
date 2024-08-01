#ifndef ATMCONTROLLER_H
#define ATMCONTROLLER_H

#include "Bank.h"
#include "Account.h"
#include <string>

class ATMController {
public:
    ATMController(Bank& bank);

    bool insertCard(const std::string& card_num, const std::string& pin);
    void selectAccount(const std::string& account_name);
    void showBalance() const;
    void deposit(int amount);
    void withdraw(int amount);
    void ejectCard();

private:
    Bank& bank;
    bool authenticated;
    std::string card_curr;
    Account* selectedAccount;
};

#endif // ATMCONTROLLER_H
