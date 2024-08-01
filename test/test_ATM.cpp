#include "../src/ATMController.h"
#include <cassert>
#include <iostream>

void testATMController() {
    Bank bank;
    bank.addAccount("123456", "1234", { Account("Checking", 1000), Account("Savings", 5000) });

    ATMController atm(bank);

    // Test account selection and operations
    atm.selectAccount("Checking");
    atm.showBalance();
    atm.deposit(200);
    atm.showBalance();
    atm.withdraw(150);
    atm.showBalance();

}

int main() {
    testATMController();
    std::cout << "All tests passed." << std::endl;
    return 0;
}
