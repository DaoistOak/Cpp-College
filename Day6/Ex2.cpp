#include <iostream>
using namespace std;

class Book {
private:

public:
    int bookId;
    string title;
    Book(int id, string t) : bookId(id), title(t) {}

    Book(const Book &other) {
        bookId = other.bookId;
        title = other.title;
    }
};

int main() {
    Book b1(1231321, "Book1");
    Book b2 = b1;
    cout << "b1's bookId = " << b1.bookId << "book Name: "<<b1.title<< endl;
    cout << "b2's bookId = " << b2.bookId << "book Name: "<<b2.title<< endl;
    return 0;
}

