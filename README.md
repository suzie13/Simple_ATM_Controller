# Simple_ATM_Controller

### Clone the repository

```
git clone https://github.com/suzie13/Simple_ATM_Controller.git
```
<br>
<br>

## How to run:
<br>

### Compile the source files
```
g++ -std=c++11 -Wall -c src/Account.cpp src/Bank.cpp src/ATMController.cpp
```
<br>

### Compile test file and link object files to create executable
```
g++ -std=c++11 -Wall -o test_atm test/test_ATM.cpp Account.o Bank.o ATMController.o
```
<br>

### Run the tests
```
./test_atm
```
<br>

### To clean (remove compiled files and executables)
```
rm *.o test_atm
```
<br>
<br>

## Overview
This is a simple ATM controller implemented in C++. <br>
The flow of the simple ATM controller: <br>
Insert Card => PIN number => Select Account => See Balance/ Deposit/ Withdraw <br>

## Code Documentation

### 'Account' Class:
<br>
Purpose: Represents a bank account with operations to manage balance.
<br>

### 'Bank' Class:
<br>
Purpose: Simulates a bank. Manage multiple accounts and performs PIN verification.
<br>

### ATM Controller:
<br>
Purpose: Manages ATM operations, like card authentication and transactions.
<br>

### Test File: 'test_ATM.cpp'
<br>
Purpose: Contains test cases to check if the program works as expected.
<br>
