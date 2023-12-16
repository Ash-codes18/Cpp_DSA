#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}

void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"The sum of all the elements of the array is : "<<sum;
}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    sum(arr,n);

    return 0;
}