#include "Bank.h"

// Check if the PIN is correct
bool Bank::verifyPIN(const std::string& card_num, const std::string& pin) {
    return accounts.count(card_num) && accounts[card_num].first == pin;
}

// Get all the bank accounts linked to that card
std::vector<Account>& Bank::getAccounts(const std::string& card_num) {
    return accounts[card_num].second;
}

// Add a new account
void Bank::addAccount(const std::string& card_num, const std::string& pin, const std::vector<Account>& userAccounts) {
    accounts[card_num] = std::pair<std::string, std::vector<Account>>(pin, userAccounts);
}
