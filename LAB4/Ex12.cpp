#include <iostream>
using namespace std;

class Box{
    private:
        int length,width,height;
    public:
        Box(int l, int w, int h){
            this->length = l;
            this->width = w;
            this->height = h;
        }
        friend void greater_volume(Box* b1, Box* b2);
};        
void greater_volume(Box* b1, Box* b2){
    if(b1->length > b2->length && b1->width > b2->width && b1->height > b2->height){
        cout << "Box 1 is greater than Box 2" << endl;
        cout << "Dimensions: " << b1->length << "x" << b1->width << "x" << b1->height << endl;
        cout << "Volume: " << b1->length * b1->width * b1->height << endl;
    }
    else{
        cout << "Box 2 is greater than Box 1" << endl;
        cout << "Dimensions: " << b2->length << "x" << b2->width << "x" << b2->height << endl;
        cout << "Volume: " << b2->length * b2->width * b2->height << endl;
    }
}

int main(){
    Box b1(1, 2, 3);
    Box b2(4, 5, 6);
    greater_volume(&b1, &b2);
    return 0;
}