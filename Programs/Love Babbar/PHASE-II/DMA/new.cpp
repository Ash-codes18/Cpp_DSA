// Allocating memory dynamically i.e allocating the memory in heap

// Heap does not allow naming, but it returns the address of the memory block created, we can use pointers to access them rather than doing it normally

#include <iostream>
using namespace std;

int main(){


    char ch='a';
    cout<<sizeof(ch)<<endl;

    char *c=&ch;
    cout<<sizeof(c)<<endl;
    
    // so when we create a dynamic character it will have size of 9 bytes since both the size of pointer and character are runnning behind the scenes in the system

    //similarly for an integer it wil take 12 bytes

    char *i = new char;

    

    return 0;
}