#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
vector<int> data = {5, 2, 8, 2, 1, 9, 2};
cout << "Original Vector Elements:\n";
for (int val : data)
cout << val << " ";
sort(data.begin(), data.end());
cout << "\n\nSorted Vector (Ascending):\n";
for (int val : data)
cout << val << " ";
reverse(data.begin(), data.end());
cout << "\n\nVector after Reversing:\n";
for (int val : data)
cout << val << " ";
auto it = find(data.begin(), data.end(), 8);
if (it != data.end())
cout << "\n\nElement 8 found at position: " << (it - data.begin());
else
cout << "\n\nElement 8 not found.";
int countTwos = count(data.begin(), data.end(), 2);
cout << "\n\nNumber of times 2 appears: " << countTwos << endl;
return 0;
}