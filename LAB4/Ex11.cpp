#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0) {
            this->x = x;
            this->y = y;
        }
        friend double distance(const Point& p1, const Point& p2) {
            return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
        }
        void display() const {
            cout << "Point(" << x << "," << y << ")" << endl;
        }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);
    cout << "Distance between points: " << distance(p1, p2) << endl;
    return 0;
}