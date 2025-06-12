#include<iostream>
using namespace std;
class Info{
public:
    string name;
    string address;
};
void swapInfo(Info &info1, Info &info2) {
    Info temp = info1;
    info1 = info2;
    info2 = temp;
    cout << "Swapped information successfully." << endl;
}
int main() {
    Info student1, student2;
    cout << "Enter name for student 1 and address: ";
    cin >> student1.name >> student1.address;
    cout << "Enter name for student 2 and address: ";
    cin >> student2.name >> student2.address;
    swapInfo(student1, student2);
    cout << "Student 1 \t Name: " << student1.name << ", Address: " << student1.address << endl;
    cout << "Student 2 \t Name: " << student2.name << ", Address: " << student2.address << endl;
    return 0;
}
