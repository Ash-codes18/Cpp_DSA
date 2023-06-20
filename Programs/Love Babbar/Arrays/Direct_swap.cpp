#include <iostream>
using namespace std;

void input(int arr[],int n){
  
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}

void swapper(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void output(int arr[],int n){
  
    cout<<"Array elements : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    output(arr,n);
    swapper(arr,n);
    output(arr,n);

    return 0;
}