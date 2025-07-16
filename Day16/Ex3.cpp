#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;
int main() {
    int userInput = 0;
    cout<<"Enter userInput";
    cin>>userInput;

    try {
        if (userInput == 1) {
            throw 1;
        } else if (userInput == 2) {
            throw runtime_error("Runtime error");
        } else {
            throw string("String error");
        }
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (runtime_error& e) {
        cout << "Caught runtime error: " << e.what() << endl;
    } catch (string e) {
        cout << "Caught string error: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}