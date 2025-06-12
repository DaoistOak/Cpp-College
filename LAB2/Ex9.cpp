#include <iostream>
using namespace std;
enum Day{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main(){
    int day;
    cout << "Enter a number corresponding to a day (1-7): ";
    cin >> day;
    day-=1;

    switch(day) {
        case Sunday:
            cout << "Sunday";
            break;
        case Monday:
            cout << "Monday";
            break;
        case Tuesday:
            cout << "Tuesday";
            break;
        case Wednesday:
            cout << "Wednesday";
            break;
        case Thursday:
            cout << "Thursday";
            break;
        case Friday:
            cout << "Friday";
            break;
        case Saturday:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid day";
    }
    cout<<endl;
    return 0;
}