#include <iostream>
using namespace std;


void update(int **p2){
    
    // p2+=1;
    // Any Change ? = NO;

    // This causes the rest of the values to become some random values since the double pointer p2 is now pointing to the next block of memory  where anything might be existing


    *p2+=1;
    // Any Change ? = YES;

    **p2+=1;
    //Any change ? = YES;

}

int main(){

    int a=12;
    int *p=&a;    
    int **p2=&p;


    cout<<"Before :"<<endl;
    cout<<a<<endl;    
    cout<<p<<endl;    
    cout<<p2<<endl<<endl;

    update(p2);

    cout<<"After :"<<endl;
    cout<<a<<endl;    
    cout<<p<<endl;    
    cout<<p2<<endl<<endl;

    return 0;
}