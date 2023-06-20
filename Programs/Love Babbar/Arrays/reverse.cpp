#include <iostream>
using namespace std;

void input(int arr[],int n){
  
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}

void reverse(int arr[],int n){

    int a=n-1;
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[a];
        arr[a]=temp;
        a--;
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
    reverse(arr,n);
    output(arr,n);

    return 0;
}