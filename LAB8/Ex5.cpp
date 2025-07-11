#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {23, 10, 45, 15, 5};
    cout << "Original Vector Elements:\n";
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    sort(numbers.begin(), numbers.end());

    cout << "\n\nSorted Vector Elements (Ascending):\n";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout<<endl;
    return 0;
}