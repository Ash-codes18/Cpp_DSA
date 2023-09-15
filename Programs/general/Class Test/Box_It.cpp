#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;
public:
    Box() {
        length = breadth = height = 0;
    }
    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }
    Box(const Box& B) {
        length = B.length;
        breadth = B.breadth;
        height = B.height;
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    int getHeight() {
        return height;
    }
    long long CalculateVolume() {
        return (long long)length * breadth * height;
    }
    bool operator<(Box& B) {
        if (length < B.length) {
            return true;
        } else if (length == B.length && breadth < B.breadth) {
            return true;
        } else if (length == B.length && breadth == B.breadth && height < B.height) {
            return true;
        } else {
            return false;
        }
    }
    friend ostream& operator<<(ostream& out, Box& B) {
        out << B.length << " " << B.breadth << " " << B.height;
        return out;
    }
};

int main() {
    Box b1; 
    Box b2(2, 3, 4); 
    cout << b2.getLength() << endl; 
    cout << b2.getBreadth() << endl; 
    cout << b2.getHeight() << endl; 
    cout << b2.CalculateVolume() << endl; 
    bool x = (b1 < b2); 
    cout << b2 << endl; 
    return 0;
}
