#include <iostream>
#include <fstream>
using namespace std;

struct Item {
    int item_ID;
    string name;
    double price;
    string mfd_date;
    string company;
};

bool compareItems(const Item &a, const Item &b) {
    return a.item_ID < b.item_ID;
}

void storeToFile(const Item inventory[], int size, const string &filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Unable to open file for writing." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        file << inventory[i].item_ID << "," << inventory[i].name << "," << inventory[i].price << "," << inventory[i].mfd_date << "," << inventory[i].company << endl;
    }
    file.close();
}

void retrieveFromFile(Item inventory[], int size, const string &filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Unable to open file for reading." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        string temp;
        getline(file, temp, ',');
        inventory[i].item_ID = stoi(temp);
        getline(file, inventory[i].name, ',');
        getline(file, temp, ',');
        inventory[i].price = stod(temp);
        getline(file, inventory[i].mfd_date, ',');
        getline(file, inventory[i].company);
    }
    file.close();
}

int main() {
    int n;
    cout << "Enter the number of records: ";
    cin >> n;

    Item inventory[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter item ID: ";
        cin >> inventory[i].item_ID;
        cout << "Enter item name: ";
        cin >> inventory[i].name;
        cout << "Enter item price: ";
        cin >> inventory[i].price;
        cout << "Enter item manufacturing date: ";
        cin >> inventory[i].mfd_date;
        cout << "Enter item company: ";
        cin >> inventory[i].company;
    }

    // Simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (inventory[j].item_ID > inventory[j + 1].item_ID) {
                Item temp = inventory[j];
                inventory[j] = inventory[j + 1];
                inventory[j + 1] = temp;
            }
        }
    }

    storeToFile(inventory, n, "inventory.txt");

    cout << "Sorted Inventory: " << endl;
    retrieveFromFile(inventory, n, "inventory.txt");
    for (int i = 0; i < n; i++) {
        cout << "Item ID: " << inventory[i].item_ID << ", Name: " << inventory[i].name << ", Price: " << inventory[i].price << ", Manufacturing Date: " << inventory[i].mfd_date << ", Company: " << inventory[i].company << endl;
    }

    return 0;
}
