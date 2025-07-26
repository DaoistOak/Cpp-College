#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Item {
    int items_id;
    double price;
    string mfd_date;
    string company;
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item items[n];

    // Storing data in file
    ofstream file("files/data.txt");
    if (!file) {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << "Item " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> items[i].items_id;
        cout << "Price: ";
        cin >> items[i].price;
        cout << "MFD Date (YYYY-MM-DD): ";
        cin >> items[i].mfd_date;
        cout << "Company: ";
        cin >> items[i].company;

        file << items[i].items_id << " " << items[i].price << " " << items[i].mfd_date << " " << items[i].company << endl;
    }
    file.close();

    // Retrieving data from file
    ifstream readFile("files/data.txt");
    if (!readFile) {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        readFile >> items[i].items_id >> items[i].price >> items[i].mfd_date >> items[i].company;
        cout << "Item " << i + 1 << ":\n";
        cout << "ID: " << items[i].items_id << "\n";
        cout << "Price: " << items[i].price << "\n";
        cout << "MFD Date: " << items[i].mfd_date << "\n";
        cout << "Company: " << items[i].company << "\n";
    }
    readFile.close();

    return 0;
}