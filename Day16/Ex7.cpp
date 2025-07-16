#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int userInput;
    cout << "Enter a value: ";
    cin >> userInput;

    try {
        if (userInput == 0) {
            throw 0;
        } else if (userInput == -1) {
            throw runtime_error("Runtime error");
        } else if (userInput > 100) {
            throw "Const char* error";
        }
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    } catch (runtime_error& e) {
        cout << "Caught runtime error: " << e.what() << endl;
    } catch (const char* e) {
        cout << "Caught const char* error: " << e << endl;
    } catch (...) {
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}

