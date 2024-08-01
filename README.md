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