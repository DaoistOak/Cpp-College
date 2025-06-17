#include <iostream>
using namespace std;

class TimeSecond {
private:
    int seconds;

public:
    TimeSecond(int s): seconds(s) {}

    int getSeconds() {
        return seconds;
    }
};

class TimeMinute {
private:
    int minutes;

public:
    TimeMinute(TimeSecond ts): minutes(ts.getSeconds() / 60) {}

    void showTime() {
        cout << "Time in minutes: " << minutes << " minutes" << endl;
    }
};

int main() {
    int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    TimeSecond ts(seconds);
    TimeMinute tm(ts);
    tm.showTime();
    return 0;
}

