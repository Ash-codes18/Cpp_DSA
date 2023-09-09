#include <iostream>
using namespace std;

class Sum{

    public:
        
        void add(int a, int b){
            cout << "Sum of two integers is: " << a+b << endl;
        }

        void add(int a, int b, int c){
            cout << "Sum of three integers is: " << a+b+c << endl;
        }

        void add(double a, double b){
            cout << "Sum of two doubles is: " << a+b << endl;
        }

};

int main(){

    Sum s;
    s.add(10, 20);
    s.add(10, 20, 30);
    s.add(10.15, 20.25);  

    return 0;
}