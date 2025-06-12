#include <iostream>
using namespace std;

namespace StdMgmt {
    class Std {
    private:
        string name;
        int age;
        
    public:
        Std(string n, int a) : name(n), age(a) {}
        
        void updateInfo(string& newName, int& newAge) {
            name = newName;
            age = newAge;
        }
        
        void displayInfo() const {
           cout << "Name: " << name << std::endl;
           cout << "Age: " << age << std::endl; 
        }
    };
}

int main() {
    using namespace StdMgmt;
    
    Std std("Someone", 20);
    
    cout << "Initial student information:" << endl;
    std.displayInfo();
    
    string newName;
    int newAge;
    cout << "Enter new name: ";
    cin >> newName;
    cout << "Enter new age: ";
    cin >> newAge;
    std.updateInfo(newName, newAge);

    cout << "Updated student information:" << endl;
    std.displayInfo();
    
    return 0;
}

