#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
public:
    Vehicle(string b, string m) {
        brand = b;
        model = m;
    }
    virtual void displayInfo() = 0;
};

class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(string b, string m, int doors) : Vehicle(b, m) {
        numDoors = doors;
    }
    void displayInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;
public:
    Bike(string b, string m, int capacity) : Vehicle(b, m) {
        engineCapacity = capacity;
    }
    void displayInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << "cc" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 4);
    Bike bike("Honda", "CBR", 250);

    car.displayInfo();
    cout << endl;
    bike.displayInfo();
    return 0;
}

