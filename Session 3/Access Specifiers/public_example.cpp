#include <iostream>

using namespace std;

class BankAccount {

public:

    // Public data member

    double balance;



    // Constructor to initialize the balance

    BankAccount(double initialBalance) : balance(initialBalance) {}



    // Public function to deposit money

    void deposit(double amount) {

        if (amount > 0) {

            balance += amount;

        } else {

            std::cout << "Deposit amount must be positive.\n";

        }

    }



    // Public function to withdraw money

    void withdraw(double amount) {

        if (amount > 0 && amount <= balance) {

            balance -= amount;

        } else {

            std::cout << "Invalid withdrawal amount.\n";

        }

    }

};



int main() {

    // Create a BankAccount object with an initial balance

    BankAccount account(1000);



    // Perform transactions using public methods

    account.deposit(500);  // Deposit money

    account.withdraw(200); // Withdraw money



    // Print the final balance

    std::cout << "Final Balance: " << account.balance << "\n";



    return 0;

}