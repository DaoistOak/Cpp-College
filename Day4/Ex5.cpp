#include <iostream>
using namespace std;
class MARKS{
    public:
        void Marks(int marks){
            if (marks >= 90) {
                cout << "Grade: A+" << endl;
            } else if (marks >= 80) {
                cout << "Grade: A" << endl;
            } else if (marks >= 70) {
                cout << "Grade: B+" << endl;
            } else if (marks >= 60) {
                cout << "Grade: B" << endl;
            } else if (marks >= 50) {
                cout << "Grade: C" << endl;
            } else {
                cout << "Grade: F" << endl;
            }
        }
};
int main(){
    int marks1;
    cout << "Enter marks: ";
    cin >> marks1;
    MARKS m;
    m.Marks(marks1);
    return 0;
}