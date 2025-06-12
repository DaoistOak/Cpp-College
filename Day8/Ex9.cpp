  
#include <iostream>
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

    void showTime() {
        if (days > 0) {
            cout << days << " day";
            if (days > 1) cout << "s";
            cout << ", ";
        }
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds;
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
};

int main() {
    Time t1, t2, sum;
    
    cout << "Enter first time:" << endl;
    t1.getTime();
    
    cout << "\nEnter second time:" << endl;
    t2.getTime();
    
    sum = t1 + t2;
    
    cout << "\nTime 1: ";
    t1.showTime();
    cout << "\nTime 2: ";
    t2.showTime();
    cout << "\nSum: ";
    sum.showTime();
    cout<<endl; 
    return 0;
}



