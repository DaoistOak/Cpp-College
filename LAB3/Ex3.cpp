#include <iostream>
using namespace std;
class Customer {
public:
    string firstName;
    string lastName;
    string address;
    string phoneNo;

    void acceptInput() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter phone number: ";
        cin >> phoneNo;
    }

    void displayInfo() {
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNo << endl;
    }
};
int main() {
    Customer c;
    c.acceptInput();
    c.displayInfo();
    return 0;
}


