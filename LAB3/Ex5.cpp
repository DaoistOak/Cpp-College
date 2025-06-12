#include <iostream>
using namespace std;
class BankAccount {
public:
    string depositorName;
    int accountNumber;
    string accountType;
    void initialize(string name, int number, string type) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
    }
    void displayInfo() {
        cout << "Depositor's Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
    }
};
int main() {
    BankAccount account;
    string name, type;
    int number;
    cout << "Enter depositor's name, account number, and account type: ";
    cin >> name >> number >> type;
    account.initialize(name, number, type);
    account.displayInfo();
    return 0;
}