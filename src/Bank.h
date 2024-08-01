#ifndef BANK_H
#define BANK_H

#include <string>
#include <unordered_map>
#include <vector>
#include "Account.h"

class Bank {
public:
    bool verifyPIN(const std::string& card_num, const std::string& pin);
    std::vector<Account>& getAccounts(const std::string& card_num);
    void addAccount(const std::string& card_num, const std::string& pin, const std::vector<Account>& userAccounts);

private:
    std::unordered_map<std::string, std::pair<std::string, std::vector<Account>>> accounts;
};

#endif // BANK_H
