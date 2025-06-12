#include <iostream>
using namespace std;

class Employee{}
    private:
        string name;
        double salary;
    public:
        Employee(string n, int a, double s){
            this->name = n;
            this->salary = s;
        }
        void display() const{   
            cout << "Name: " << name << ", Salary: " << salary << endl; 
        }
        float getsalary(){
            return salary;
        }
};

int main(){
    Employee e[5];
    for(int i=0;i<5;i++){
        e[i].display();
        cout << "Salary: " << e[i].getsalary() << endl;
    }
    cout<<"Highest Salary: "<<endl;
    for(int i=0;i<5;i++){
        if(e[i].getsalary() > e[i+1].getsalary()){
            cout << "Name: " << e[i].name << ", Salary: " << e[i].getsalary() << endl;
        }
    }
    return 0;
}