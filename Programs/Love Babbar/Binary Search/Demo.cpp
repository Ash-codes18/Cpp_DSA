#include <iostream>
using namespace std;

void binarysearch(int arr[],int n,int x){

    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int flag=0;

    while(start<=end){
        if(arr[mid]==x){
            cout<<"The given element is present at the index "<<mid;\
            flag=1;
        }
        if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }

    if(!flag){
    cout<<"The given element is not present in the array";
    }
    
}

void input(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    
}

int main(){

    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);

    int x;
    cout<<endl<<"Enter the element to search the index of : ";
    cin>>x;

    binarysearch(arr,n,x);


    return 0;
}