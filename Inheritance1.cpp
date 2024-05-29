#include<iostream>
#include<string>
using namespace std;

class Account {
	public:
    int accountNumber;
    string accountHolderName;
    int balance;


    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;
public:
    void calculateInterest() {
        cout << "Enter annual interest rate: ";
        cin >> interestRate;
        cout << "Enter time: ";
        int time;
        cin >> time;
        double interest = balance * interestRate * time / 100;
        balance += static_cast<int>(interest);
        cout << "Interest calculated. New balance: " << balance << endl;
    }
};

class CurrentAccount : public Account {
public:
    int overdraftLimit;
public:
    void withdraw(int amount) {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal not allowed." << endl;
        }
    }
};

int main() {
    SavingsAccount savings;
    savings.accountNumber = 123;
    savings.accountHolderName = "John Doe";
    savings.balance = 5000;
    
    CurrentAccount current;
    current.accountNumber = 456;
    current.accountHolderName = "Jane Smith";
    current.balance = 2000;
    current.overdraftLimit = 1000;

    savings.display();
    savings.calculateInterest();

    current.display();
    current.withdraw(2500);

    return 0;
}

