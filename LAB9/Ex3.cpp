#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1 for int, 2 for char, 3 for string): ";
    cin >> choice;
    try {
        if(choice == 1) {
            throw 42;
        }
        else if(choice == 2) {
            throw 'X';
        }
        else if(choice == 3) {
            throw string("String exception");
        }
        else{
        cout << "No exception thrown. Invalid choice." << endl;
            throw nullptr;
        }
    }catch (int e) {
        cout << "An exception occurred. Exception Nr. " << e << endl;
    }catch (char e) {
        cout << "An exception occurred. Exception Char. " << e << endl;
    }catch (const string& e) {
        cout << "An exception occurred. Exception String. " << e << endl;
    }catch(...){
        cout<<"Unknown Error Type Detected";
    }

    return 0;
}
