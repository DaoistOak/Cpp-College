#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];
public:
    Matrix() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                mat[i][j] = 0;
            }
        }
    }

    void input() {
        cout << "Enter matrix elements (3x3):" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix const &obj) {
        Matrix result;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                result.mat[i][j] = 0;
                for(int k = 0; k < 3; k++) {
                    result.mat[i][j] += mat[i][k] * obj.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix m1, m2, sum;
    
    cout << "For first matrix:" << endl;
    m1.input();
    cout << "For second matrix:" << endl;
    m2.input();
    cout << "First "<<endl;
    m1.display();
    cout << "Second "<<endl;
    m2.display();
    sum = m1 + m2;
    cout << "Multiplication "<<endl;
    sum.display();

    return 0;
}

