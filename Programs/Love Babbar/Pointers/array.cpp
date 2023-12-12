#include <iostream>
using namespace std;

int main(){

    int arr[10]={8,1,5,8,3,2,7,5,63,5};

//accessing the address of array
    cout<<"Address of first memory block of array is = "<<arr<<endl;
                            // or
    cout<<"Address of first memory block of array is = "<<&arr[0]<<endl;


//accessing the values in the array
    cout<<"Value at first memory block of array = "<<*arr<<endl;
    cout<<"Value at sixth memory block of array = "<<*(arr+5)<<endl;

//accessing and incrementing the values in array
    cout<<"Value at second index + 3 = "<<*(arr+1)+3<<endl;
    cout<<"Value at second index * 3 = "<<*(arr+1)*3<<endl;

//printing an element of an array

    cout<<"Element 1 = "<<arr[0]<<endl;
    cout<<"Element 2 = "<<1[arr]<<endl;


    cout<<"Size of array ="<<sizeof(arr)<<endl;


//Checking difference between calling an array and a pointer

    cout<<"->"<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    
    int *ap=&arr[0];
    
    cout<<"->"<<ap<<endl;
    cout<<&ap<<endl;
    

    return 0;
}