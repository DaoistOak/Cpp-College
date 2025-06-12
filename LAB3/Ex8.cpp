#include <iostream>
using namespace std;
class Time {
public:
    int h;
    int m;
    int s;
    Time AddTime(Time t1, Time t2) {
        Time r;
        r.h = t1.h + t2.h;
        r.m = t1.m + t2.m;
        r.s = t1.s + t2.s;
        if (r.s >= 60) {
            r.m += r.s / 60;
            r.s %= 60;
        }
        if (r.m >= 60) {
            r.h += r.m / 60;
            r.m %= 60;
        }
        return r;
    }
};
int main() {
    Time t1, t2;
    cout << "Enter hours, minutes, and seconds for t1: ";
    cin >> t1.h >> t1.m >> t1.s;
    cout << "Enter hours, minutes, and seconds for t2: ";
    cin >> t2.h >> t2.m >> t2.s;
    Time r = t1.AddTime(t1, t2);
    cout << "Result: " << r.h << " hours, " << r.m << " minutes, " << r.s << " seconds" << endl;
    return 0;
}
