#include <iostream>
using namespace std;

#define PI 3.14
#define AREA(r) (2*PI*r)


int main(){

    int r;
    cout<<"Enter the radius of the circle : ";
    cin>>r;

    cout<<AREA(r);

    return 0;
}