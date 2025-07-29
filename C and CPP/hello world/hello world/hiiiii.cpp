#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to provide initial values
    BankAccount(std::string name = "Pradhyumn Gurjar", int accNumber = 0, std::string accType = "Savings", double initialBalance = 0.0) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to assign initial values
    void setInitialValues(std::string name, int accNumber, std::string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << "\n";
        } else if (amount > balance) {
            std::cout << "Insufficient balance.\n";
        } else {
            std::cout << "Invalid withdrawal amount.\n";
        }
    }

    // Method to display the name and balance
    void display() const {
        std::cout << "Depositor Name: " << depositorName << "\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Type: " << accountType << "\n";
        std::cout << "Balance: " << balance << "\n";
    }
};

int main() {
    // Create a bank account object with initial values
    BankAccount account("Pradhyumn Gurjar", 123456, "Savings", 5000.0);

    // Display initial details
    account.display();

    // Deposit an amount
    account.deposit(1500.0);

    // Display updated details
    account.display();

    // Withdraw an amount
    account.withdraw(2000.0);

    // Display updated details
    account.display();

    // Attempt to withdraw more than the balance
    account.withdraw(5000.0);

    // Display final details
    account.display();

    return 0;
}





