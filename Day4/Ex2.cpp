#include <iostream>
using namespace std;

class student{
    public:
        string name, rollno;
        int marks;
        void input(){
            cout<<"Enter name, rollno and marks"<<endl;
            getline(cin,name);
            cin>>rollno>>marks;
        };
        void display(){
            cout<<"Student: "<<name<<" "<<rollno<<" "<<marks<<endl;
        };
};

int main(){
    student s;
    s.input();
    s.display();
   return 0; 
}