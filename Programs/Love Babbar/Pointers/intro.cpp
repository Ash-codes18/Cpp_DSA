#include <iostream>
using namespace std;

int main(){

    int num=12;
    cout<<"Value of num is : "<<num<<endl;

    // & is address of operation 
    // Address is stored in hexadecimal format

    cout<<"Address of num is : "<<&num<<endl;

    //Pointer is used to Store this address

    int *ptr=&num;
    cout<<"Value of ptr is : "<<ptr<<endl;

    double d=4.32;
    char a='a'; 

    double *dptr = &d;
    char *cptr = &a;


//Size of pointer is always 8 for every data type since it stores addresss 

    cout<<"Size of integer = "<<sizeof(num)<<endl;
    cout<<"Size of integer pointer = "<<sizeof(ptr)<<endl;
    cout<<"Size of Double = "<<sizeof(d)<<endl;
    cout<<"Size of Double pointer = "<<sizeof(dptr)<<endl;
    cout<<"Size of Character = "<<sizeof(a)<<endl;
    cout<<"Size of Character pointer = "<<sizeof(cptr)<<endl;
    

    //Updating a Pointer

    cout<<"Before Updating num = : "<<num<<endl;

    (*ptr)++;
    cout<<"After updating num = : "<<num<<endl;


    (*ptr)*=5;    
    cout<<"After multiplying with 5, num becomes: "<<num<<endl;


    //directly manipulating the pointer without dereferencing

    cout<<"old value of ptr = "<<ptr<<endl;
    ptr-=1;
    cout<<"After subtracting 1 from ptr, new value of ptr = "<<ptr<<endl;

    return 0;
}   