#include <iostream>
using namespace std;

class Employee{
    public:
        string name, id;
        float salary;
        void input(){
            cout<<"Enter name, id and salary"<<endl;
            getline(cin,name);
            cin>>id>>salary;
        };
        void display(){
            cout<<"Employee: "<<name<<" "<<id<<" "<<salary<<endl;
        };
};

int main(){
    Employee s;
    s.input();
    s.display();
   return 0; 
}