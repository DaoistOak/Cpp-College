#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        friend void distance(Point p1, Point p2){
            cout << "Distance: " << sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)) << endl;
        }
};

int main(){
    Point p1(1, 2);
    Point p2(3, 4);
    distance(p1, p2);
    return 0;
}