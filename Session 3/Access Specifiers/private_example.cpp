#include <iostream>
using namespace std;
class BankAccount {
private:
    // Private data member
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;  // Modify balance correctly
        } else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }
// Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;  // Modify balance correctly
        } else {
            std::cout << "Invalid withdrawal amount.\n";
        }
    }

    // Public method to get the current balance (getter)
    double getBalance() const {
        return balance;  // Correctly access the private balance via a public method
    }
};

int main() {
    // Create a BankAccount object with an initial balance
    BankAccount account(1000);

    // Perform transactions using public methods
    account.deposit(500);  // Deposit money
    account.withdraw(200); // Withdraw money

    // Access and display the final balance using the public getter method
    std::cout << "Final Balance: " << account.getBalance() << "\n";  // Correct access through getter

    return 0;
}