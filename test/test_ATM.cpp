#include "../src/ATMController.h"
#include <cassert>
#include <iostream>

void testATMController() {
    Bank bank;
    bank.addAccount("123456", "1234", { Account("Checking", 1000), Account("Savings", 5000) });

    ATMController atm(bank);

    // Test the card insertion and authentication
    assert(atm.insertCard("123456", "1234") == true);
    assert(atm.insertCard("123456", "0000") == false);

    // Test account selection and operations
    atm.selectAccount("Checking");
    atm.showBalance();
    atm.deposit(200);
    atm.showBalance();
    atm.withdraw(150);
    atm.showBalance();

    // Test invalid account
    atm.selectAccount("NonExisting");
    atm.ejectCard();

}

int main() {
    testATMController();
    std::cout << "All tests passed." << std::endl;
    return 0;
}
