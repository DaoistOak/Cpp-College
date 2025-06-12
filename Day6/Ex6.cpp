#include <iostream>
using namespace std;

class Account {
private:
    float balance;

public:

    Account updateBalance(float amount) {
        balance += amount;
        return balance;
    }

    float getBalance() {
        return balance;
    }
};

int main() {
    Account acc1(1000);
    cout << "Initial Balance: " << acc1.getBalance() << endl;

    acc1 = acc1.updateBalance(500);
    cout << "Updated Balance: " << acc1.getBalance() << endl;

    return 0;
}
