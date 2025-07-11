#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    Student(int idr, string namer) : id(idr), name(namer) {}
};
int main() {
    Student student(1, "John");
    char* studentPtr = reinterpret_cast<char*>(&student);
    cout << "Memory address of student: " << reinterpret_cast<void*>(studentPtr) << endl;

    int address = 100;
    char* charPtr = reinterpret_cast<char*>(reinterpret_cast<void*>(&address));
    cout << "Pointer from integer: " << reinterpret_cast<void*>(charPtr) << endl;

    return 0;
}

