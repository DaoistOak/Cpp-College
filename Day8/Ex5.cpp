#include <iostream>
using namespace std;

class Distance {
private:
    float feet;
    float inches;

public:
    Distance() {
        feet = 0.0f;
        inches = 0.0f;    
    }
    Distance(float ft, float in) {
        feet = ft;
        inches = in;
        while (inches >= 12.0f) {
            inches -= 12.0f;
            feet += 1.0f;
        }
    }

    void getDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showDistance() {
        cout << feet << "\'-" << inches << "\"";
    }
    friend bool operator>(Distance& d1, Distance& d2);
    friend bool operator==(Distance& d1, Distance& d2);
};

bool operator>(Distance& d1, Distance& d2) {
    float inches1 = d1.feet * 12.0f + d1.inches;
    float inches2 = d2.feet * 12.0f + d2.inches;
    return inches1 > inches2;
}

bool operator==(Distance& d1, Distance& d2) {
    float inches1 = d1.feet * 12.0f + d1.inches;
    float inches2 = d2.feet * 12.0f + d2.inches;
    return inches1 == inches2;
}

int main() {
    Distance dist1(5.0f, 6.5f);
    Distance dist2(6.0f, 5.5f);
    cout << "Distance 1: "<<endl;
    dist1.showDistance();
    cout << "Distance 2: ";
    dist2.showDistance();

    cout << endl << endl << "Comparisons:";
    cout << endl << "dist1 > dist2: " << (dist1 > dist2);
    cout << endl << "dist1 == dist2: " << (dist1 == dist2);

    return 0;
}
