#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void move() = 0;
};

class Car : public Vehicle {
private:
    string brand;

public:
    Car(string b) : brand(b) {}

    void move() override {
        cout << "Driving a " << brand << " car." << endl;
    }
};

int main() {
    string brand;
    cout << "Enter the brand of the car: ";
    cin >> brand;

    Vehicle* vehicle = new Car(brand);
    vehicle->move();

    return 0;
}


