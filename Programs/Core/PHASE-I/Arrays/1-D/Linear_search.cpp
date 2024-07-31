#include <iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}


void search(int arr[],int n){
    int z;
    cout<<"Enter the element you want to search : ";
    cin>>z;
    int flag=0;

    for(int i=0;i<n;i++){
        if(arr[i]==z){
            cout<<"The element "<<z<<" is present at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
            cout<<"The element "<<z<<" is not present in the array.";
        }
}


int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    input(arr,n);
    search(arr,n);

    return 0;
}