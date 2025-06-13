#include<iostream>
using namespace std;
class Vector{
    private:
    int* arr;
    int size;
    public:
    Vector(int* arr1, int size1){
        this->arr = new int[size1];
        this->size = size1;
        for(int i = 0; i < size; i++){
            this->arr[i] = arr1[i];
        }
    }
    void display(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int& operator[](int index){
        return arr[index];
    }
};
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    Vector v1(arr, size);
    v1.display();
    cout << "Enter the index of the element you want to access: ";
    int index;
    cin >> index;
    cout << v1[index] << endl;
    return 0;
}