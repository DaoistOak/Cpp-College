#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    Matrix() {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                mat[i][j] = 0;
    }

    void input() {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }

    void display() {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator++() {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                ++mat[i][j];
        return *this;
    }

    Matrix operator++(int) {
        Matrix temp = *this;
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                mat[i][j]++;
        return temp;
    }

    Matrix operator--() {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                --mat[i][j];
        return *this;
    }

    Matrix operator--(int) {
        Matrix temp = *this;
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                mat[i][j]--;
        return temp;
    }
};

int main() {
    Matrix m;
    cout << "Enter 2x2 matrix elements:" << endl;
    m.input();
    
    cout << "Original Matrix:" << endl;
    m.display();
    
    ++m;
    cout << "After prefix increment:" << endl;
    m.display();
    
    m++;
    cout << "After postfix increment:" << endl;
    m.display();
    
    --m;
    cout << "After prefix decrement:" << endl;
    m.display();
    
    m--;
    cout << "After postfix decrement:" << endl;
    m.display();
    
    return 0;
}
