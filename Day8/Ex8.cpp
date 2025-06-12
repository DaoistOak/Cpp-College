#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0.0) {
        feet = f;
        inches = i;
    }

    void displayDistance() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    Distance operator++() {
        inches++;
        if(inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
        return Distance(feet, inches);
    }

    Distance operator++(int) {
        Distance temp(feet, inches);
        inches++;
        if(inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
        return temp;
    }

    Distance operator--() {
        inches--;
        if(inches < 0.0) {
            inches += 12.0;
            feet--;
        }
        return Distance(feet, inches);
    }

    Distance operator--(int) {
        Distance temp(feet, inches);
        inches--;
        if(inches < 0.0) {
            inches += 12.0;
            feet--;
        }
        return temp;
    }
};

int main() {
    Distance d1(11, 10.0);

    cout << "Original Distance: ";
    d1.displayDistance();

    ++d1;
    cout << "After prefix increment: ";
    d1.displayDistance();

    d1++;
    cout << "After postfix increment: ";
    d1.displayDistance();

    --d1;
    cout << "After prefix decrement: ";
    d1.displayDistance();

    d1--;
    cout << "After postfix decrement: ";
    d1.displayDistance();

    return 0;
}

