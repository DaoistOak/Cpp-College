#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) : balance(b) {}

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(double b, double r) : Account(b), interestRate(r) {}

    void addInterest() {
        balance += balance * interestRate / 100;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    double balance, interestRate;

    cout << "Enter initial balance: ";
    cin >> balance;

    cout << "Enter interest rate: ";
    cin >> interestRate;

    SavingsAccount account(balance, interestRate);

    cout << "Initial balance: ";
    account.displayBalance();

    account.addInterest();

    cout << "Balance after adding interest: ";
    account.displayBalance();

    // This line is for error
    // cout << "Balance: " << account.balance << endl;

    return 0;
}

