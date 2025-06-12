#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    double price;
};

int main() {
    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;

    Book mostExpensive;
    double maxPrice = 0;

    for (int i = 0; i < numBooks; i++) {
        Book currentBook;
        cout << "Enter the title of book " << i + 1 << ": ";
        cin.ignore();
        getline(cin, currentBook.title);
        cout << "Enter the author of book " << i + 1 << ": ";
        getline(cin, currentBook.author);
        cout << "Enter the price of book " << i + 1 << ": ";
        cin >> currentBook.price;

        if (currentBook.price > maxPrice) {
            maxPrice = currentBook.price;
            mostExpensive = currentBook;
        }
    }

    cout << "The most expensive book details:" << endl;
    cout << "Title: " << mostExpensive.title << endl;
    cout << "Author: " << mostExpensive.author << endl;
    cout << "Price: " << mostExpensive.price << endl;

    return 0;
}
