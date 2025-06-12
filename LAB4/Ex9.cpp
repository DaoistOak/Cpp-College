#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
    int length;

public:

    String(const char* s1,const char* s2) {
        length = (int)strlen(s1) + (int)strlen(s2);
        str = new char[length + 1];
        strcpy(str, s1);
        strcat(str, s2);
    }
    void display() const{
        cout << str << endl;
    }
    ~String() {
        delete[] str;
    }
};

int main() {
    char str1[100], str2[100];
    
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    String s1(str1, str2);

    s1.display();
    
    return 0;
}

