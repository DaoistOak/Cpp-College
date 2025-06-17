#include <iostream>
using namespace std;


class TimeMinute {
private:
    int minutes;

public:
    TimeMinute(int m): minutes(m) {}

    int getMinutes() {
        return minutes;
    }

    void showTime() {
        cout << "Time in minutes: " << minutes << " minutes" << endl;
    }
};

class TimeHour {
private:
    int hours;

public:
    TimeHour(TimeMinute tm): hours(tm.getMinutes() / 60) {}

    void showTime() {
        cout << "Time in hours: " << hours << " hours" << endl;
    }
};

int main() {
    int minutes;
    cout << "Enter time in minutes: ";
    cin >> minutes;
    TimeMinute tm(minutes);
    TimeHour th(tm);
    th.showTime();
    return 0;
}
