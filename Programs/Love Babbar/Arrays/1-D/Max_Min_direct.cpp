#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}

void getmax(int arr[],int n){
    int a=arr[0];
    for(int i=0;i<n;i++){
        a=max(a,arr[i]);
    }
    cout<<"The maximum element is : "<<a<<endl;
}

void getmin(int arr[],int n){
    int a=arr[0];
    for(int i=0;i<n;i++){
        a=min(a,arr[i]);
    }
    cout<<"The minimum element is : "<<a<<endl;
}

int main(){

    int arr[10];
    input(arr,10);
    
    getmax(arr,10);
    getmin(arr,10);
    
    return 0;
}