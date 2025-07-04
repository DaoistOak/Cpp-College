#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle {
public:
    virtual void operate() {
        cout << "Vehicle operates" << endl;
    }
    virtual ~Vehicle() {
        cout << "Vehicle destroyed" << endl;
    }
};

class Car : public Vehicle {
public:
    void operate() override {
        cout << "Car accelerates" << endl;
    }
    ~Car() {
        cout << "Car destroyed" << endl;
    }
};

class Truck : public Vehicle {
public:
    void operate() override {
        cout << "Truck transports" << endl;
    }
    ~Truck() {
        cout << "Truck destroyed" << endl;
    }
};
int main() {
    Vehicle* car = new Car();
    Vehicle* truck = new Truck();
    car->operate();
    truck->operate();
    
    char* carMA = reinterpret_cast<char*>(car);
    cout << "Memory address of Car: " << carMA << endl;
    int* intP = reinterpret_cast<int*>(1000);
    cout << "Casted integer to pointer: " << intP << endl;
    if (dynamic_cast<Car*>(car)) {
        cout << "Car identified" << endl;
    }
    if (dynamic_cast<Car*>(truck)) {
        cout << "Car identified" << endl;
    } 
    cout << "Type of car: " << typeid(car).name() << endl;
    cout << "Type of truck: " << typeid(truck).name() << endl;
    
    delete car;
    delete truck;
    return 0;
}
