#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    String() {
        str = "";
    }

    String(string s) {
        str = s;
    }

    String operator+(String& s) {
        String result;
        result.str = str + s.str;
        return result;
    }

    friend bool operator>(String& s1, String& s2) {
        return s1.str.length() > s2.str.length();
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("String 1.");
    String s2("Stringg 2!");
    
    cout << "First string: ";
    s1.display();
    cout << "Second string: ";
    s2.display();

    String s3 = s1 + s2;
    cout << "Concatenated string: ";
    s3.display();

    if(s1 > s2)
        cout << "First string = longer" << endl;
    else
        cout << "Second string = longer" << endl;

    return 0;
}
