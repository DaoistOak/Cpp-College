#include <iostream>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString() {
        str = "";
    }
    
    MyString(string s) {
        str = s;
    }

    void getString() {
        cout << "Enter string: ";
        getline(cin, str);
    }

    void showString() {
        cout << str;
    }

    MyString operator+(MyString& s2) {
        MyString result;
        result.str = str + s2.str;
        return result;
    }
};

int main() {
    MyString s1, s2, sum;
    
    cout << "Enter first string:" << endl;
    s1.getString();
    
    cout << "\nEnter second string:" << endl;
    s2.getString();
    
    sum = s1 + s2;

    cout << "\nString 1: ";
    s1.showString();
    cout << "\nString 2: ";
    s2.showString();
    cout << "\nConcatenated string: ";
    sum.showString();
    cout << endl;
    
    return 0;
}
