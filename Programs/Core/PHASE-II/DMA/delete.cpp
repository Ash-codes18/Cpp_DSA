// Warning! Danger!!.. be warned, this is a dangerous program!

#include <iostream>
using namespace std;

int main(){

    int *a = new int;

    *a=5;

    cout<<"before deleting =  "<<&a<<endl;
    cout<<"before deleting =  "<<a<<endl;
    cout<<"before deleting =  "<<*a<<endl;

    delete a;

    cout<<"After deleting = "<<&a<<endl;
    cout<<"After deleting = "<<a<<endl;
    cout<<"After deleting = "<<*a<<endl<<endl;

    int *arr = new int[5];

    for(int i=0;i<5;i++){
        if(i%2==0){
            arr[i]=i+3;
        }
        else{
            arr[i]=i*3;
        }
    }

    cout<<"In array : "<<endl<<endl;

    cout<<"Before deletion"<<endl;
    cout<<"1st =  "<<arr[0]<<endl;
    cout<<"4th =  "<<arr[3]<<endl;

    delete []arr;

    cout<<"After deletion"<<endl;
    cout<<"1st =  "<<arr[0]<<endl;
    cout<<"4th =  "<<arr[3]<<endl;



    return 0;
}