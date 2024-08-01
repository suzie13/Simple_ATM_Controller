#include "ATMController.h"
#include <iostream>

ATMController::ATMController(Bank& bank) : bank(bank), authenticated(false), selectedAccount(nullptr) {}

bool ATMController::insertCard(const std::string& card_num, const std::string& pin) {
    if (bank.verifyPIN(card_num, pin)) {  // Check is PIN is correct
        authenticated = true;
        card_curr = card_num;
        std::cout << "Card authentication successful!" << std::endl;
        return true;
    } else {
        std::cout << "Invalid card or PIN! Please try again." << std::endl;
        return false;
    }
}

void ATMController::selectAccount(const std::string& account_name) {
    if (!authenticated) {  // Check for authentication
        std::cout << "Please authenticate first!" << std::endl;
        return;
    }

    auto& accounts = bank.getAccounts(card_curr);
    for (auto& account : accounts) {  // Select the account
        if (account.getName() == account_name) {
            selectedAccount = &account;
            std::cout << "Account selected: " << account_name << std::endl;
            return;
        }
    }

    std::cout << "Account not found." << std::endl;
}

void ATMController::showBalance() const {
    if (!authenticated || !selectedAccount) {  // Check for authentication and account selection
        std::cout << "Please authenticate and select an account first!" << std::endl;
        return;
    }

    std::cout << "Balance: $" << selectedAccount->getBalance() << std::endl;  // Output balance
}

void ATMController::deposit(int amount) {
    if (!authenticated || !selectedAccount) {  // Check for authentication and account selection
        std::cout << "Please authenticate and select an account first!" << std::endl;
        return;
    }

    selectedAccount->deposit(amount);
}

void ATMController::withdraw(int amount) {
    if (!authenticated || !selectedAccount) {  // Check for authentication and account selection
        std::cout << "Please authenticate and select an account first." << std::endl;
        return;
    }

    selectedAccount->withdraw(amount);  // Withdraw money from account
}

void ATMController::ejectCard() {  // Perform card ejection on software
    authenticated = false;
    card_curr.clear();
    selectedAccount = nullptr;
    std::cout << "Card ejected." << std::endl;
}
