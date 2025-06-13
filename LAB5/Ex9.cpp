#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int days;
    int hours;
    int minutes; 
    int seconds;

public:
    Time() {
        days = 0;
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        normalize();
    }

    void normalize() {
        minutes += seconds / 60;
        seconds = seconds % 60;
        hours += minutes / 60;
        minutes = minutes % 60;
        days += hours / 24;
        hours = hours % 24;
    }
    friend ostream& operator<<(ostream& os, const Time& t) {
        if (t.days > 0) {
            os << t.days << " day";
            if (t.days > 1) os << "s";
            os << ", ";
        }
        os << t.hours << ":"
           << setw(2) << setfill('0') << t.minutes << ":"
           << setw(2) << setfill('0') << t.seconds;
        return os;
    }

    Time operator+(Time& t2) {
        Time result;
        result.seconds = seconds + t2.seconds;
        result.minutes = minutes + t2.minutes;
        result.hours = hours + t2.hours;
        result.days = days + t2.days;
        result.normalize();
        return result;
    }
    bool operator>=(Time& t2) {
        int totalSeconds1 = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;
        int totalSeconds2 = t2.days * 24 * 60 * 60 + t2.hours * 60 * 60 + t2.minutes * 60 + t2.seconds;
        return totalSeconds1 >= totalSeconds2;
    }
    bool operator<=(Time& t2) {
        int totalSeconds1 = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds;
        int totalSeconds2 = t2.days * 24 * 60 * 60 + t2.hours * 60 * 60 + t2.minutes * 60 + t2.seconds;
        return totalSeconds1 <= totalSeconds2;
    }
    
};

int main() {
    Time t1, t2, sum;
    
    cout << "Enter first time:" << endl;
    t1.getTime();
    
    cout << "\nEnter second time:" << endl;
    t2.getTime();
    
    sum = t1 + t2;
    
    cout << "\nTime 1: ";
    cout << t1;
    cout << "\nTime 2: ";
    cout << t2;
    cout << "\nSum: ";
    cout << sum;
    cout<<endl; 
    return 0;
}


